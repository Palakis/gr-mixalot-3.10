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

#include <mixalot/flexencode.h>
// pydoc.h is automatically generated in the build directory
#include <flexencode_pydoc.h>

void bind_flexencode(py::module& m)
{
    using flexencode = gr::mixalot::flexencode;

    py::class_<flexencode, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<flexencode>>(m, "flexencode", D(flexencode))
        .def(py::init(&flexencode::make),
           D(flexencode,make)
        );
}
