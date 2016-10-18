#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QAudioInput>
#include <QAudioDecoder>
#include <QAudioFormat>
#include <math.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , audioPlayer(this)

{
    ui->setupUi(this);
    initializeAudio();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::initializeAudio(){
    on_gainSlider_valueChanged(ui->gainSlider->value());

    audioPlayer.setAudioSource(&oscillatorSource);
    audioPlayer.start();
}





void MainWindow::on_waveformCombobox_activated(int index)
{
    oscillatorSource.setSelectedOscillator(index);
}

void MainWindow::on_gainSlider_valueChanged(int value)
{
    oscillatorSource.setGain(value);
}


void MainWindow::on_note_1_clicked(bool checked)
{
    qDebug() << "note 1";

    if (checked){
        oscillatorSource.setNote(60);
        oscillatorSource.noteOn();
    }
    else{
        oscillatorSource.noteOff();
    }
}
void MainWindow::on_note_2_clicked(bool checked)
{
    if (checked){
        oscillatorSource.setNote(61);
        oscillatorSource.noteOn();
    }
    else{
        oscillatorSource.noteOff();
    }
}
void MainWindow::on_note_3_clicked(bool checked)
{
    if (checked){
        oscillatorSource.setNote(62);
        oscillatorSource.noteOn();
    }
    else{
        oscillatorSource.noteOff();
    }
}
void MainWindow::on_note_4_clicked(bool checked)
{
    if (checked){
        oscillatorSource.setNote(63);
        oscillatorSource.noteOn();
    }
    else{
        oscillatorSource.noteOff();
    }
}
void MainWindow::on_note_5_clicked(bool checked)
{
    if (checked){
        oscillatorSource.setNote(64);
        oscillatorSource.noteOn();
    }
    else{
        oscillatorSource.noteOff();
    }
}
void MainWindow::on_note_6_clicked(bool checked)
{
    if (checked){
        oscillatorSource.setNote(65);
        oscillatorSource.noteOn();
    }
    else{
        oscillatorSource.noteOff();
    }
}
void MainWindow::on_note_7_clicked(bool checked)
{
    if (checked){
        oscillatorSource.setNote(66);
        oscillatorSource.noteOn();
    }
    else{
        oscillatorSource.noteOff();
    }
}
void MainWindow::on_note_8_clicked(bool checked)
{
    if (checked){
        oscillatorSource.setNote(67);
        oscillatorSource.noteOn();
    }
    else{
        oscillatorSource.noteOff();
    }
}
void MainWindow::on_note_9_clicked(bool checked)
{
    if (checked){
        oscillatorSource.setNote(68);
        oscillatorSource.noteOn();
    }
    else{
        oscillatorSource.noteOff();
    }
}
void MainWindow::on_note_10_clicked(bool checked)
{
    if (checked){
        oscillatorSource.setNote(69);
        oscillatorSource.noteOn();
    }
    else{
        oscillatorSource.noteOff();
    }
}
void MainWindow::on_note_11_clicked(bool checked)
{
    if (checked){
        oscillatorSource.setNote(70);
        oscillatorSource.noteOn();
    }
    else{
        oscillatorSource.noteOff();
    }
}
void MainWindow::on_note_12_clicked(bool checked)
{
    if (checked){
        oscillatorSource.setNote(71);
        oscillatorSource.noteOn();
    }
    else{
        oscillatorSource.noteOff();
    }
}
