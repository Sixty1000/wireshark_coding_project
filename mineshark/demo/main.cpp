// SPDX-License-Identifier: GPL-2.0-or-later
#include "mineshark_dialog.h"
#include <QApplication>

int main(int argc, char **argv) {
    QApplication app(argc, argv);
    app.setApplicationName("Mineshark Packet Challenge");
    mineshark::ChallengeDialog game({}, {}, nullptr);
    game.show();
    return app.exec();
}
