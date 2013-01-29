// 
// QTimerTest/MainWindow.hpp
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


#include <QtGlobal>
#include <QMainWindow>
#include <QTextEdit>
#include <QTimerEvent>

class MainWindow: public QMainWindow
{
  Q_OBJECT
private:
  QTextEdit* _txt;
  int _timerId;
  static int loopCount = 100000;

protected:
  void timerEvent(QTimerEvent* e);
  
public:
  MainWindow();
  ~MainWindow();
};
