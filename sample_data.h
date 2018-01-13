#ifndef SAMPLE_DATA_H_
#define SAMPLE_DATA_H_
static const uint8_t data_g[128] = { // Data to be signed
     0x54,0x68,0x69,0x73,0x20,0x69,0x73,0x20,0x61,0x20,0x73,0x61,0x6d,0x70,0x6c,0x65,
     0x20,0x64,0x61,0x74,0x61,0x0a,0x54,0x68,0x69,0x73,0x20,0x69,0x73,0x20,0x61,0x20,
     0x73,0x61,0x6d,0x70,0x6c,0x65,0x20,0x64,0x61,0x74,0x61,0x0a,0x54,0x68,0x69,0x73,
     0x20,0x69,0x73,0x20,0x61,0x20,0x73,0x61,0x6d,0x70,0x6c,0x65,0x20,0x64,0x61,0x74,
     0x61,0x0a,0x54,0x68,0x69,0x73,0x20,0x69,0x73,0x20,0x61,0x20,0x73,0x61,0x6d,0x70,
     0x6c,0x65,0x20,0x64,0x61,0x74,0x61,0x0a,0x54,0x68,0x69,0x73,0x20,0x69,0x73,0x20,
     0x61,0x20,0x73,0x61,0x6d,0x70,0x6c,0x65,0x20,0x64,0x61,0x74,0x61,0x0a,0x54,0x68,
     0x69,0x73,0x20,0x69,0x73,0x20,0x61,0x20,0x73,0x61,0x6d,0x70,0x6c,0x65,0x21,0x0a
};
static const uint8_t pub_g[64] = { // Public key
    0x8b,0x27,0x39,0x67,0x01,0x4b,0x1c,0xae,0xfe,0x8a,0x18,0x6e,0xea,0x27,0x86,0x34,
    0x0e,0xea,0x35,0x3d,0x8c,0x65,0xf6,0x59,0xfc,0xcb,0x23,0xd7,0xfa,0xab,0x7b,0x18,
    0x14,0x75,0x33,0xec,0x17,0xb7,0x54,0x50,0xca,0x98,0x35,0xad,0x58,0xbe,0xd5,0xfa,
    0x48,0xbc,0xa0,0x24,0x81,0xba,0xfa,0x3d,0xcd,0x8d,0x5a,0x7f,0x40,0xbc,0x70,0x94
};
static const uint8_t hash_g[32] = { // SHA 256 Digest
    0xc8,0x05,0x66,0x45,0xd0,0x5d,0xb1,0x61,0x73,0x6f,0x84,0x50,0xce,0xab,0xc1,0x0a,
    0x89,0xd8,0xd0,0x83,0xa3,0xab,0xd0,0x46,0xf4,0xa4,0xec,0xa6,0x0a,0xa7,0x6f,0x65
};
static const uint8_t sig_g[64] = { // Signature
    0xa6,0xf1,0xe1,0xa8,0x2f,0x7c,0x1e,0x63,0x67,0x10,0xc7,0x18,0xbf,0x22,0x51,0x08,
    0xb7,0x0a,0x93,0xcf,0x47,0xad,0xac,0xb9,0xa4,0xc4,0xe0,0x1f,0xfe,0x5c,0x43,0x9f,
    0x7f,0xf6,0x77,0x2e,0x24,0x69,0xe8,0x9f,0x96,0x9c,0x65,0x2b,0xed,0x08,0x52,0xeb,
    0xa4,0x56,0x57,0x29,0x85,0x1e,0x21,0xf8,0x9c,0xd9,0x4f,0xc7,0x62,0x99,0x5f,0xcb
};
#endif // SAMPLE_DATA_H_