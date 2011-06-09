/*=============================================================================
    Copyright (c) 2004 Joel de Guzman
    http://spirit.sourceforge.net/

    Use, modification and distribution is subject to the Boost Software
    License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
=============================================================================*/
#include <iostream>
#include <cassert>
#include <boost/spirit/core.hpp>

using namespace boost::spirit;
using namespace std;

int g_count = 0;

struct g : public grammar<g>
{
    template <typename ScannerT>
    struct definition
    {
        definition(g const& self)
        {
            g_count++;
        }

        rule<ScannerT> r;
        rule<ScannerT> const& start() const { return r; }
    };
};

void
grammar_tests()
{
    g my_g;
    parse("", my_g);
}

int
main()
{
    grammar_tests();
    grammar_tests();
    grammar_tests();
    assert(g_count == 3);

    cout << "Tests concluded successfully\n";
    return 0;
}

