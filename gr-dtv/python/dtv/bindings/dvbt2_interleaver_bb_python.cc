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

#include <gnuradio/dtv/dvbt2_interleaver_bb.h>
// pydoc.h is automatically generated in the build directory
#include <dvbt2_interleaver_bb_pydoc.h>

void bind_dvbt2_interleaver_bb(py::module& m)
{

    using dvbt2_interleaver_bb    = ::gr::dtv::dvbt2_interleaver_bb;


    py::class_<dvbt2_interleaver_bb, gr::block, gr::basic_block,
        std::shared_ptr<dvbt2_interleaver_bb>>(m, "dvbt2_interleaver_bb", D(dvbt2_interleaver_bb))

        .def(py::init(&dvbt2_interleaver_bb::make),
           py::arg("framesize"),
           py::arg("rate"),
           py::arg("constellation"),
           D(dvbt2_interleaver_bb,make)
        )
        



        ;




}







