#include <stdio.h>
#include "CompilerKit/empty-set.h"

/** @todo Describe what task main will accomplish. */
int main (int argc, char ** argv)
{
    CompilerKitEmptySet* empty_set;
    g_type_init();
    
    empty_set = compilerkit_empty_set_get_instance();
    
    g_object_unref (empty_set);
}