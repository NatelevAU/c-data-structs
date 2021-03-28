#include "ADT_container.h"

#include <stdlib.h>



/*  Container Metadata

    uint8_t value
    uint16_t value
    uint32_t value
    uint64_t value

    collection
        one child
        two like children
        two children (one set, one relational)
        array of children

        no parent info
        array of parents
        list of parents

    node
        no relations (relations stored separately)
        one relation
        two relations (2d)
        two relations (1d)

        one value
        two values (pos)
        two values (key)
*/

/*  Container Types
    
    list
        single
        double

    hash

    tree
    - binary vs non-binary
    - sorted vs non-sorted

    graph
    - directed vs non-directed
    - weighted vs non-weighted

*/



Container newContainer(Metadata metadata) {
    return initContainerWithMetadata(malloc(containerMetadataSize(metadata)), metadata);
}

Container initContainer(Container container) {

}



void deleteContainer(Container container) {
    free(container);
}
