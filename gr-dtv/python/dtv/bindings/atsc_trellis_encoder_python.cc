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

#include <gnuradio/dtv/atsc_trellis_encoder.h>
// pydoc.h is automatically generated in the build directory
#include <atsc_trellis_encoder_pydoc.h>

void bind_atsc_trellis_encoder(py::module& m)
{

    using atsc_trellis_encoder    = ::gr::dtv::atsc_trellis_encoder;


    py::class_<atsc_trellis_encoder, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<atsc_trellis_encoder>>(m, "atsc_trellis_encoder", D(atsc_trellis_encoder))

        .def(py::init(&atsc_trellis_encoder::make),
           D(atsc_trellis_encoder,make)
        )
        



        ;




}







