#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "bluray.h"
#include "from_memory.h"

#include <QMainWindow>
#include <QMessageBox>
#include <QGraphicsScene>
#include <QObject>
#include <QFileDialog>
#include <QMessageBox>
#include <QPixmap>
#include <QItemSelectionModel>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:

    Ui::MainWindow *ui;

    // collection of all the media players
    vector<MediaPlayer*> media_players;

    // vector of paths of pictures
    vector<QString> picture_paths;

public:

    explicit MainWindow(QWidget *parent = 0);

    // sets the chosen picture to media player being created
    void setPictureToNewPlayer();

    // displays information about the players and pictures in the table
    void displayTable();

    ~MainWindow();


private slots:

    // enabling the user to choose a different picture
    void loadNewPicture();

    // if the user clicks on second tab, the table is displayed
    void on_tabWidget_currentChanged(int index);

    // creating object if possible on button clicked
    void on_pushButton_create_object_clicked();

    // displaying different fields to enter information, depending on the kind of media player
    void on_radioButton_bluray_clicked();
    void on_radioButton_from_disc_clicked();
    void on_radioButton_from_memory_clicked();

    // adding default media player (of the chosen type)
    void on_pushButton_add_default_clicked();

    // saving the collection of object to the txt file
    void on_pushButton_save_collection_clicked();

    // loading the collection of objects from the txt file
    void on_pushButton_load_collection_clicked();

    // deleting object selected in the table
    void on_pushButton_delete_selected_clicked();

    // checks if all the required (shown on screen) entry fields are filled. if yes, enables "create" button
    void checkEntryFields();

    // enables the delete button when an object is selected, disables then no objects are selected in the table
    void tableSelectionChanged();



};

#endif // MAINWINDOW_H
