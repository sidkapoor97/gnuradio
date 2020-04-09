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

#include <gnuradio/dtv/atsc_field_sync_mux.h>
// pydoc.h is automatically generated in the build directory
#include <atsc_field_sync_mux_pydoc.h>

void bind_atsc_field_sync_mux(py::module& m)
{

    using atsc_field_sync_mux    = ::gr::dtv::atsc_field_sync_mux;


    py::class_<atsc_field_sync_mux, gr::block, gr::basic_block,
        std::shared_ptr<atsc_field_sync_mux>>(m, "atsc_field_sync_mux", D(atsc_field_sync_mux))

        .def(py::init(&atsc_field_sync_mux::make),
           D(atsc_field_sync_mux,make)
        )
        



        ;




}







