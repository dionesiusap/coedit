/****************************************************************************
**
** Copyright (C) 2017 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the documentation of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** BSD License Usage
** Alternatively, you may use this file under the terms of the BSD license
** as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of The Qt Company Ltd nor the names of its
**     contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/
#include <QApplication>
#include <QString>
#include <iostream>

#include "notepad.h"
#include "controller.h"
#include "crdt.h"

//testing
#include "crdtTest.h"
#include "messengerTest.h"

int main(int argc, char *argv[])
{
//    try {
//        serializationTest();
//        testAddClient();
//        testThreadingQueue();
//    } catch (const char* exc) {
//        std::cout << exc << std::endl;
//    } catch (...) {
//        std::cout << "one of the test failed" << std::endl;
//    }

    try {
        QApplication EditorApp(argc, argv);
        Notepad Editor;
        std::string separator = ":";
        std::string arg1 = std::string(argv[1]);
        std::string arg2 = std::string(argv[2]);
        std::string arg3 = std::string(argv[3]);

        int selfPort = std::stoi(arg1.substr(arg1.find(separator)+1));
        int peerPort1 = std::stoi(arg2.substr(arg2.find(separator)+1));
        int peerPort2 = std::stoi(arg3.substr(arg3.find(separator)+1));

        Controller cc(selfPort);

        cc.addPeer(arg2.substr(0, arg2.find(separator)), peerPort1);
        cc.addPeer(arg3.substr(0, arg3.find(separator)), peerPort2);

        std::cout << arg2.substr(0, arg2.find(separator)) << std::endl;

        Editor.show();

        QObject::connect(&cc, &Controller::updateContent, &Editor, &Notepad::setText);
        QObject::connect(&cc, &Controller::updateCursor, &Editor, &Notepad::setCursorPosition);
        QObject::connect(&Editor, &Notepad::keyPressed, &cc, &Controller::appendKeyPressedQ);

        return EditorApp.exec();
    } catch (const char* exc) {
        std::cout << exc << std::endl;
    }
}
