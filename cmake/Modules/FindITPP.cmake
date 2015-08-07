# Find ITPP

FIND_PATH(ITPP_INCLUDE_DIR itpp/itcomm.h)

SET(ITPP_NAMES ${ITPP_NAMES} itpp libitpp libitpp.dll)
FIND_LIBRARY(ITPP_LIBRARY NAMES ${ITPP_NAMES} PATH)

IF (ITPP_INCLUDE_DIR AND ITPP_LIBRARY)
    SET(ITPP_FOUND TRUE)
ENDIF (ITPP_INCLUDE_DIR AND ITPP_LIBRARY)

IF (ITPP_FOUND)
    IF (NOT ITPP_FIND_QUIETLY)
        MESSAGE (STATUS "Found ITPP: ${ITPP_LIBRARY}")
    ENDIF (NOT ITPP_FIND_QUIETLY)
ELSE (ITPP_FOUND_FOUND)
    IF (ITPP_FIND_REQUIRED)
        MESSAGE (FATAL_ERROR "Could not find ITPP")
    ENDIF (ITPP_FIND_REQUIRED)
ENDIF (ITPP_FOUND)
