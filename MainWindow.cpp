//
// QTimerTest/MainWindow.cpp 
//
// Copyright (C) 2013  Inori Sakura <inorindesu@gmail.com>
// 
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or (at
// your option) any later version.
// 
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
// 


#include "MainWindow.hpp"
#include <QTime>

MainWindow::MainWindow()
{
  this->_txt = new QTextEdit();
  this->setCentralWidget(this->_txt);
  this->_timerId = this->startTimer(20);
}

void MainWindow::timerEvent(QTimerEvent* e)
{
  // 拖油瓶在此！
  int s = 0;
  for(int i = 0; i < MainWindow::loopCount; i++)
    {
      qsrand(QTime::currentTime().msec());
      s += qrand();
    }
  // 由於上面的拖油瓶，程式不可能每隔20 msec就產生一次訊息
  this->_txt->setText( this->_txt->toPlainText() + QString("\n%1 : %2").arg(QTime::currentTime().toString()).arg(s) );
}

MainWindow::~MainWindow()
{
  this->killTimer(this->_timerId);
}
