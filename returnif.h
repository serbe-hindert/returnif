#ifndef RETURNIF_LIBRARY_H
#define RETURNIF_LIBRARY_H

#define returnif(condition, value) {    \
    if (condition) {                    \
        return value;                   \
    }                                   \
}

#endif //RETURNIF_LIBRARY_H
