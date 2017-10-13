/*
 * step_dir_driver.cpp - control over a Step/Direction/Enable stepper motor driver
 * This file is part of G2 project
 *
 * Copyright (c) 2016 Alden S. Hart, Jr.
 * Copyright (c) 2016 Robert Giseburt
 *
 * This file ("the software") is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2 as published by the
 * Free Software Foundation. You should have received a copy of the GNU General Public
 * License, version 2 along with the software.  If not, see <http://www.gnu.org/licenses/>.
 *
 * As a special exception, you may use this file as part of a software library without
 * restriction. Specifically, if other files instantiate templates or use macros or
 * inline functions from this file, or you compile this file and link it with  other
 * files to produce an executable, this file does not by itself cause the resulting
 * executable to be covered by the GNU General Public License. This exception does not
 * however invalidate any other reasons why the executable file might be covered by the
 * GNU General Public License.
 *
 * THE SOFTWARE IS DISTRIBUTED IN THE HOPE THAT IT WILL BE USEFUL, BUT WITHOUT ANY
 * WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT
 * SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
 * OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
#ifndef STEPP_DIR_GERATECH_DRIVER_H_ONCE
#define STEPP_DIR_GERATECH_DRIVER_H_ONCE

#include "MotatePins.h"
#include "MotateTimers.h"
#include "MotateSPI.h"

#include "board_xio.h"
#include "encoder.h"

#include "stepper.h"

using Motate::pin_number;
using Motate::OutputPin;
using Motate::PWMOutputPin;
using Motate::kStartHigh;
using Motate::kNormal;
using Motate::Timeout;

template <uint8_t t>
struct GeratechServo final : Stepper  {

    bool canStep() override {
      return true;
    };

    void setMicrosteps(const uint8_t microsteps) override {

    };

    void _enableImpl() override {

    };

    void _disableImpl() override {

    };

    void stepStart() override {

    };

    void stepEnd() override {

    };

    void setDirection(uint8_t new_direction) override {

    };

    void setPowerLevel(float new_pl) override {

    };
};

#endif  // STEPP_DIR_DRIVER_H_ONCE
