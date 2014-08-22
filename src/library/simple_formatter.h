/*
Copyright (c) 2014 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include "kernel/formatter.h"

namespace lean {
/** \brief Return true iff \c t contains a constant named \c n or a local constant with named (pp or not) \c n */
bool is_used_name(expr const & t, name const & n);
/**
    \brief Return the body of the binding \c b, where variable #0 is replaced by a local constant with a "fresh" name.
    The name is considered fresh if it is not used by a constant or local constant occuring in the body of \c b.
    The fresh constant is also returned (second return value).

    \remark If preserve_type is false, then the local constant will not use binding_domain.
*/
pair<expr, expr> binding_body_fresh(expr const & b, bool preserve_type = false);

/** \brief Return the body of the let-expression \c l, where variable #0 is replaced by a local constant with a "fresh" name. */
pair<expr, expr> let_body_fresh(expr const & l, bool preserve_type = false);

/** \brief Create a simple formatter object based on operator */
formatter_factory mk_simple_formatter_factory();

/** \brief Use simple formatter as the default print function */
void init_default_print_fn();
}
