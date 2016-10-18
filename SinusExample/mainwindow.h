#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QAudioOutput>
#include "audioplayer.h"
#include "oscillatorsource.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_amplitudeSlider_valueChanged(int value);

private:
    void initializeAudio();
    Ui::MainWindow *ui;
    OscillatorSource oscillatorSource;
    AudioPlayer audioPlayer;
};

#endif // MAINWINDOW_H
