/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <mixalot/gscencode.h>
// pydoc.h is automatically generated in the build directory
#include <gscencode_pydoc.h>

void bind_gscencode(py::module& m)
{
    using gscencode = gr::mixalot::gscencode;

    py::class_<gscencode, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<gscencode>>(m, "gscencode", D(gscencode))
        .def(py::init(&gscencode::make),
           D(gscencode,make)
        );
}
