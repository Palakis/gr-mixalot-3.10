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

#include <mixalot/pocencode.h>
// pydoc.h is automatically generated in the build directory
#include <pocencode_pydoc.h>

void bind_pocencode(py::module& m)
{
    using pocencode = gr::mixalot::pocencode;

    py::class_<pocencode, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<pocencode>>(m, "pocencode", D(pocencode))
        .def(py::init(&pocencode::make),
           D(pocencode,make)
        );
}
