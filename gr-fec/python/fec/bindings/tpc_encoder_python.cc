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

#include <gnuradio/fec/tpc_encoder.h>
// pydoc.h is automatically generated in the build directory
#include <tpc_encoder_pydoc.h>

void bind_tpc_encoder(py::module& m)
{

    using tpc_encoder    = ::gr::fec::tpc_encoder;


    py::class_<tpc_encoder, gr::fec::generic_encoder,
        std::shared_ptr<tpc_encoder>>(m, "tpc_encoder", D(tpc_encoder))

        .def_static("make",&tpc_encoder::make,
           py::arg("row_poly"),
           py::arg("col_poly"),
           py::arg("krow"),
           py::arg("kcol"),
           py::arg("bval"),
           py::arg("qval"),
           D(tpc_encoder,make)
        )
        




        .def("rate",&tpc_encoder::rate,
            D(tpc_encoder,rate)
        )


        .def("set_frame_size",&tpc_encoder::set_frame_size,
            py::arg("arg0"),
            D(tpc_encoder,set_frame_size)
        )

        ;




}






