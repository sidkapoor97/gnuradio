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

#include <gnuradio/dtv/atsc_rs_decoder.h>
// pydoc.h is automatically generated in the build directory
#include <atsc_rs_decoder_pydoc.h>

void bind_atsc_rs_decoder(py::module& m)
{

    using atsc_rs_decoder    = ::gr::dtv::atsc_rs_decoder;


    py::class_<atsc_rs_decoder, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<atsc_rs_decoder>>(m, "atsc_rs_decoder", D(atsc_rs_decoder))

        .def(py::init(&atsc_rs_decoder::make),
           D(atsc_rs_decoder,make)
        )
        


        .def("num_errors_corrected",&atsc_rs_decoder::num_errors_corrected,
            D(atsc_rs_decoder,num_errors_corrected)
        )


        .def("num_bad_packets",&atsc_rs_decoder::num_bad_packets,
            D(atsc_rs_decoder,num_bad_packets)
        )


        .def("num_packets",&atsc_rs_decoder::num_packets,
            D(atsc_rs_decoder,num_packets)
        )



        ;




}







