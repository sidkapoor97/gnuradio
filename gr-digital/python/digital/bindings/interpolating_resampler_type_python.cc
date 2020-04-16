/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/pybind11.h>
#include <pybind11/complex.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/digital/interpolating_resampler_type.h>
// pydoc.h is automatically generated in the build directory
#include <interpolating_resampler_type_pydoc.h>

void bind_interpolating_resampler_type(py::module& m)
{

    py::enum_<gr::digital::ir_type>(m,"ir_type")
        .value("IR_NONE", gr::digital::IR_NONE) // -1
        .value("IR_MMSE_8TAP", gr::digital::IR_MMSE_8TAP) // 0
        .value("IR_PFB_NO_MF", gr::digital::IR_PFB_NO_MF) // 1
        .value("IR_PFB_MF", gr::digital::IR_PFB_MF) // 2
        .export_values()
    ;

} 