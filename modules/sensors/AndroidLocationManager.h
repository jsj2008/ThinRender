/*
 *  thin render - Mobile render engine based on OpenGL ES 2.0
 *  Copyright (C) 2013  FundaciÛ i2CAT, Internet i InnovaciÛ digital a Catalunya
 *
 *  This file is part of thin render.
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  Author:         Daniel Cabrera Benitez <dcabrera@quarkfly.com>
 *  Author:         Antonio Quesada Frias <aquesada@quarkfly.com>
 */

#ifndef ANDROID_LOCATION_MANAGER_H
#define ANDROID_LOCATION_MANAGER_H

#include "LocationManager.h"
#include <android/native_window_jni.h>


class AndroidLocationManager: public LocationManager {
    
public:
    AndroidLocationManager();
    ~AndroidLocationManager();
    
    void initGPS();
    void shutDownGPS();
    double getLatitude();
    double getLongitude();
    bool isGPSActive();

    
private:

    jmethodID shutdownGPSMethod;
    jmethodID getLatitudeMethod;
    jmethodID getLongitudeMethod;
    jmethodID initGPSMethod;
    jmethodID isGPSActiveMethod;

    
};



#endif
