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

#include <gnuradio/dtv/dvb_bch_bb.h>
// pydoc.h is automatically generated in the build directory
#include <dvb_bch_bb_pydoc.h>

void bind_dvb_bch_bb(py::module& m)
{

    using dvb_bch_bb    = ::gr::dtv::dvb_bch_bb;


    py::class_<dvb_bch_bb, gr::block, gr::basic_block,
        std::shared_ptr<dvb_bch_bb>>(m, "dvb_bch_bb", D(dvb_bch_bb))

        .def(py::init(&dvb_bch_bb::make),
           py::arg("standard"),
           py::arg("framesize"),
           py::arg("rate"),
           D(dvb_bch_bb,make)
        )
        



        ;




}







