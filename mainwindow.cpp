#include "mainwindow.h"
#include "bluray.h"
#include "from_memory.h"
#include "ui_mainwindow.h"

using namespace std;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    // setting up the main program window


    picture_paths.push_back("../PROE_Projekt3/pictures/bluray.jpeg");
    picture_paths.push_back("../PROE_Projekt3/pictures/button.png");
    picture_paths.push_back("../PROE_Projekt3/pictures/philips.jpg");
    picture_paths.push_back("../PROE_Projekt3/pictures/tape.png");
    picture_paths.push_back("../PROE_Projekt3/pictures/video.jpg");
    picture_paths.push_back("../PROE_Projekt3/pictures/vinyl.jpg");

    // setting up pictures to choose from
    ui->radioButton_picture1->setIcon(QPixmap(picture_paths[0]).scaled(700,700, Qt::KeepAspectRatio));
    ui->radioButton_picture2->setIcon(QPixmap(picture_paths[1]).scaled(700,700, Qt::KeepAspectRatio));
    ui->radioButton_picture3->setIcon(QPixmap(picture_paths[2]).scaled(700,700, Qt::KeepAspectRatio));
    ui->radioButton_picture4->setIcon(QPixmap(picture_paths[3]).scaled(700,700, Qt::KeepAspectRatio));
    ui->radioButton_picture5->setIcon(QPixmap(picture_paths[4]).scaled(700,700, Qt::KeepAspectRatio));
    ui->radioButton_picture6->setIcon(QPixmap(picture_paths[5]).scaled(700,700, Qt::KeepAspectRatio));

    // setting up the size of icons
    ui->radioButton_picture1->setIconSize(QSize(70,70));
    ui->radioButton_picture2->setIconSize(QSize(70,70));
    ui->radioButton_picture3->setIconSize(QSize(70,70));
    ui->radioButton_picture4->setIconSize(QSize(70,70));
    ui->radioButton_picture5->setIconSize(QSize(70,70));
    ui->radioButton_picture6->setIconSize(QSize(70,70));


    // when program starts - display first tab in tabWigdet
    ui->tabWidget->setCurrentIndex(0);

    // when program starts - bluray radiobutton checked
    ui->radioButton_bluray->setChecked(true);
    MainWindow::on_radioButton_bluray_clicked();

    // when program starts  - first picture checked
    ui->radioButton_picture1->setChecked(true);

    // delete button needs to be enabled by a selection in the table
    ui->pushButton_delete_selected->setEnabled(false);

    // pushbutton create_object is needs to be enabled when all the fields are filled correctly
    ui->pushButton_create_object->setEnabled(false);

    // entry field 5 requires a float
    ui->lineEdit_entry_field5->setValidator(new QDoubleValidator(0, 50, 2, this));

    // entry fields 6 and 7 require an integer
    ui->lineEdit_entry_field6->setValidator(new QIntValidator(0, 3000, this));
    ui->lineEdit_entry_field7->setValidator(new QIntValidator(0, 30, this));



    // setting up the second tab of QTabWidget in the main window

    // column width
    ui->tableWidget->setColumnWidth(0,320);
    ui->tableWidget->setColumnWidth(1,140);

    // headers of the columns
    QTableWidgetItem *header1 = new QTableWidgetItem();
    QTableWidgetItem *header2 = new QTableWidgetItem();
    header1->setText("Media player info");
    header2->setText("Picture");
    ui->tableWidget->setHorizontalHeaderItem(0,header1);
    ui->tableWidget->setHorizontalHeaderItem(1,header2);

    // items in the table can't be editted
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    // whole rows are selected, not single cells
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

    // only one row can be selected at once
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);

    // selection color = blue
    ui->tableWidget->setStyleSheet("QTableView {selection-background-color: QColor(4ea2f8);}");




    // program checks if we selected an object in the table
    connect(ui->tableWidget->selectionModel(), &QItemSelectionModel::selectionChanged, this, &MainWindow::tableSelectionChanged);


    // program checks if all the fields are filled when one of the fields is changed
    connect(ui->lineEdit_entry_field1, SIGNAL (textChanged(QString)),this, SLOT (checkEntryFields()));
    connect(ui->lineEdit_entry_field2, SIGNAL (textChanged(QString)),this, SLOT (checkEntryFields()));
    connect(ui->lineEdit_entry_field3, SIGNAL (textChanged(QString)),this, SLOT (checkEntryFields()));
    connect(ui->lineEdit_entry_field4, SIGNAL (textChanged(QString)),this, SLOT (checkEntryFields()));
    connect(ui->lineEdit_entry_field5, SIGNAL (textChanged(QString)),this, SLOT (checkEntryFields()));
    connect(ui->lineEdit_entry_field6, SIGNAL (textChanged(QString)),this, SLOT (checkEntryFields()));
    connect(ui->lineEdit_entry_field7, SIGNAL (textChanged(QString)),this, SLOT (checkEntryFields()));


    // extra buttons
    connect(ui->radioButton_new_picture, SIGNAL (clicked()), this, SLOT (loadNewPicture()));
    connect(ui->pushButton_exit, SIGNAL (clicked()), qApp, SLOT (quit()));
    connect(ui->pushButton_exit2, SIGNAL (clicked()), qApp, SLOT (quit()));


}


void MainWindow::tableSelectionChanged()
{

    if (ui->tableWidget->selectionModel()->selectedIndexes().size() > 0)
        ui->pushButton_delete_selected->setEnabled(true);

    else
        ui->pushButton_delete_selected->setEnabled(false);
}



void MainWindow::checkEntryFields()
{
    foreach(QLineEdit* le, findChildren<QLineEdit*>())
    {
        if (le->text().isEmpty() == true && le->isHidden() == false)
        {
            ui->pushButton_create_object->setEnabled(false);
            break;
        }

        else if (le->text().isEmpty() == false && le->isHidden() == false)
            ui->pushButton_create_object->setEnabled(true);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_add_default_clicked()
{

    if (ui->radioButton_bluray->isChecked())
    {
        media_players.push_back( new Bluray);
    }

    else if (ui->radioButton_from_disc->isChecked())
    {
        media_players.push_back(new PlayerFromDisc);
    }

    else if (ui->radioButton_from_memory->isChecked())
    {
        media_players.push_back(new PlayerFromMemory);
    }

    setPictureToNewPlayer();

}



void MainWindow::setPictureToNewPlayer()
{

    if (ui->radioButton_picture1->isChecked() )
        media_players[media_players.size()-1]->setPicturePath(picture_paths[0].toStdString());

    else if (ui->radioButton_picture2->isChecked() )
        media_players[media_players.size()-1]->setPicturePath(picture_paths[1].toStdString());

    else if (ui->radioButton_picture3->isChecked() )
        media_players[media_players.size()-1]->setPicturePath(picture_paths[2].toStdString());

    else if (ui->radioButton_picture4->isChecked() )
        media_players[media_players.size()-1]->setPicturePath(picture_paths[3].toStdString());

    else if (ui->radioButton_picture5->isChecked() )
        media_players[media_players.size()-1]->setPicturePath(picture_paths[4].toStdString());

    else if (ui->radioButton_picture6->isChecked() )
        media_players[media_players.size()-1]->setPicturePath(picture_paths[5].toStdString());

    else if (ui->radioButton_new_picture->isChecked())
        media_players[media_players.size()-1]->setPicturePath(picture_paths[picture_paths.size()-1].toStdString());


}


void MainWindow::on_pushButton_load_collection_clicked()
{

    fstream file;
    file.open("collection.txt", ios::in );
    file.clear();

    string line;

    //Every time next string line is loaded unless there is a problem with the file or the end was reached
    while ( file >> line && file.good() == true ) {

        // in this case Player from disc is loaded to the program
        if (line == "xxxPlayerFromDiscxxx") {

            cout << endl << "Loading player from disc" << endl << endl;

            media_players.push_back(new PlayerFromDisc);
            media_players[media_players.size()-1]->load(file);

        }

        // in this case Bluray is loaded to the program
        else if (line == "xxxBlurayxxx" )  {

            cout << endl << "Loading bluray" << endl << endl;

            media_players.push_back(new Bluray);
            media_players[media_players.size()-1]->load(file);

        }

        // in this case Player From Memory is loaded to the program
        else if (line == "xxxPlayerFromMemoryxxx" )  {

            cout << endl << "Loading player from memory" << endl << endl;

            media_players.push_back(new PlayerFromMemory);
            media_players[media_players.size()-1]->load(file);

        }

        else {                                                      // if the loaded text is different
            cout << "Loaded text is none of media player types! Loaded text: " << line << endl;
        }

        cin.clear();
    }


    file.close();
    displayTable();

}



void MainWindow::on_pushButton_save_collection_clicked()
{

    fstream file;
    file.open("collection.txt", ios::out );

    if (file.good() == true)
    {
        for (unsigned int i = 0; i < media_players.size() ; i++)
        {
        cout << endl << "Saving " << i+1 << ". Media Player." << endl << endl;
        media_players[i]->save(file, true);
        }
    }

  else
   {
     cout << "Can't open the file!" << endl;
   }

   file.close();

}

void MainWindow::on_pushButton_delete_selected_clicked()
{

        QModelIndex current_index = ui->tableWidget->model()->index(ui->tableWidget->currentRow(), 0) ;

        delete media_players[ui->tableWidget->currentRow()];
        media_players.erase(media_players.begin() + ui->tableWidget->currentRow());

        displayTable();
        ui->tableWidget->setCurrentIndex(current_index);

}


void MainWindow::displayTable()
{
    ui->tableWidget->setRowCount(0);

    for (unsigned int i=0; i< media_players.size(); i++)
    {

        // new row in the table
        ui->tableWidget->insertRow(ui->tableWidget->rowCount());
        ui->tableWidget->setRowHeight(i,210);

        // putting information about the media player into the first column
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(media_players[i]->returnInformation())));

        // putting picture in the second column
        QTableWidgetItem *thumbnail = new QTableWidgetItem;
        QPixmap* picture = new QPixmap(QString::fromStdString(media_players[i]->returnPicturePath()));
        thumbnail->setData(Qt::DecorationRole, picture->scaled(140,140, Qt::KeepAspectRatio));
        ui->tableWidget->setItem(i, 1, thumbnail);


    }
}



void MainWindow::on_radioButton_bluray_clicked()
{

    // the labels and lineEdits that could be hidden are shown
    ui->label_parameter4->show();
    ui->lineEdit_entry_field4->show();
    ui->label_parameter5->show();
    ui->lineEdit_entry_field5->show();
    ui->label_parameter6->show();
    ui->lineEdit_entry_field6->show();
    ui->label_parameter7->show();
    ui->lineEdit_entry_field7->show();

    ui->label_parameter1->setText("Name\t\t");
    ui->label_parameter2->setText("Type\t\t");
    ui->label_parameter3->setText("Disc kind\t");
    ui->label_parameter4->setText("Model\t\t");
    ui->label_parameter5->setText("Price\t\t");
    ui->label_parameter6->setText("Production year\t");
    ui->label_parameter7->setText("Number of discs\t");

}


void MainWindow::on_radioButton_from_disc_clicked()
{

    ui->label_parameter1->setText("Name\t\t");
    ui->label_parameter2->setText("Type\t\t");
    ui->label_parameter3->setText("Disc kind\t");

    // hiding labels and lineEdits that are not needed
    ui->label_parameter4->hide();
    ui->lineEdit_entry_field4->hide();
    ui->label_parameter5->hide();
    ui->lineEdit_entry_field5->hide();
    ui->label_parameter6->hide();
    ui->lineEdit_entry_field6->hide();
    ui->label_parameter7->hide();
    ui->lineEdit_entry_field7->hide();

}



void MainWindow::on_radioButton_from_memory_clicked()
{

    ui->label_parameter1->setText("Name\t\t");
    ui->label_parameter2->setText("Type\t\t");
    ui->label_parameter3->setText("File formats\t");

    // hiding labels and lineEdits that are not needed
    ui->label_parameter4->hide();
    ui->lineEdit_entry_field4->hide();
    ui->label_parameter5->hide();
    ui->lineEdit_entry_field5->hide();
    ui->label_parameter6->hide();
    ui->lineEdit_entry_field6->hide();
    ui->label_parameter7->hide();
    ui->lineEdit_entry_field7->hide();


}



void MainWindow::on_pushButton_create_object_clicked()
{

        if (ui->radioButton_bluray->isChecked())
        {

            //string f_name = (ui->lineEdit_entry_field1->text()).toStdString();

            media_players.push_back(new Bluray((ui->lineEdit_entry_field1->text()).toStdString(), (ui->lineEdit_entry_field2->text()).toStdString(),
                                                                        (ui->lineEdit_entry_field3->text()).toStdString(), (ui->lineEdit_entry_field4->text()).toStdString(),
                                                                        stof((ui->lineEdit_entry_field5->text()).toStdString()),
                                                                        stoi((ui->lineEdit_entry_field6->text()).toStdString()),
                                                                        stoi((ui->lineEdit_entry_field7->text()).toStdString())));

            foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
                le->clear();
            }


        }
        else if (ui->radioButton_from_disc->isChecked())
        {


            media_players.push_back(new PlayerFromDisc((ui->lineEdit_entry_field1->text()).toStdString(),
                                                                     (ui->lineEdit_entry_field2->text()).toStdString(),
                                                                     (ui->lineEdit_entry_field3->text()).toStdString()));

            foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
                le->clear();
            }
        }
        else if (ui->radioButton_from_memory->isChecked())
        {

            media_players.push_back(new PlayerFromMemory((ui->lineEdit_entry_field1->text()).toStdString(),
                                                                        (ui->lineEdit_entry_field2->text()).toStdString(),
                                                                        (ui->lineEdit_entry_field3->text()).toStdString()));

            foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
                le->clear();
            }

        }


        setPictureToNewPlayer();




}

void MainWindow::on_tabWidget_currentChanged(int index)
{
    if (index == 1)
        displayTable();
}



void MainWindow::loadNewPicture()
{
    QString filename = QFileDialog::getOpenFileName(this, tr("Choose"), "", tr("Images (*.png *.jpg *.jpeg *.bmp *.gif"));


    if (QString::compare(filename, QString()) !=0)
    {
        QImage image;
        picture_paths.push_back(filename);

        bool valid = image.load(filename);

        if(valid)
        {
            ui->radioButton_new_picture->setIcon((QPixmap::fromImage(image)).scaled(700,700, Qt::KeepAspectRatio));
            ui->radioButton_new_picture->setIconSize(QSize(70,70));
        }
        else
        {
            QMessageBox::information(this, "Loading error", "Failed to load a picture!");
        }
    }

}
