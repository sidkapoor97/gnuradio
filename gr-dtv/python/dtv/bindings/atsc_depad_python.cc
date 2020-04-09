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

#include <gnuradio/dtv/atsc_depad.h>
// pydoc.h is automatically generated in the build directory
#include <atsc_depad_pydoc.h>

void bind_atsc_depad(py::module& m)
{

    using atsc_depad    = ::gr::dtv::atsc_depad;


    py::class_<atsc_depad, gr::sync_interpolator,
        std::shared_ptr<atsc_depad>>(m, "atsc_depad", D(atsc_depad))

        .def(py::init(&atsc_depad::make),
           D(atsc_depad,make)
        )
        



        ;




}







