#pragma once

typedef enum {
    PARSING_OK = 1,
    STARTING_BYTE_PARSING_ERROR = -1,
    VERSION_PARSING_ERROR = -2,
    NETWORK_PARSING_ERROR = -3,
    TYPEGROUP_PARSING_ERROR = -4,
    TYPE_PARSING_ERROR = -5,
    NONCE_PARSING_ERROR = -6,
    FEE_PARSING_ERROR = -7,
    MEMO_ENCODING_ERROR = -8,
    CORE_ASSET_PARSING_ERROR = -9,
    WRONG_LENGTH_ERROR = -10,
    MESSAGE_ENCODING_ERROR = -11
} parser_status_e;