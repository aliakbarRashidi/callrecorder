/*
 * Call Recorder - Recording phone calls for Harmattan PR 1.1
 * Copyright (C) 2011 Cuong Le <metacuong@gmail.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 3
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#include <QtCore/QCoreApplication>

#include "phoneservice.h"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    app.setOrganizationName("cuonglb");
    app.setApplicationName("CallRecorder");
    
    Settings settings;

    if ((argc>1 && QString(argv[1]) == "inside") || settings.get_autostart() == 1)
        new PhoneService(&app);
    else
        return 0;

    return app.exec();
}
