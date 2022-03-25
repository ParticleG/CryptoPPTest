#include <cryptopp/scrypt.h>
#include <cryptopp/files.h>
#include <cryptopp/hex.h>
#include <iostream>

using namespace CryptoPP;

int main() {
    // Scratch Area
    const unsigned int BLOCKSIZE = 16 * 8;
    SecByteBlock scratch(BLOCKSIZE);

    // Construction
    AutoSeededRandomPool rng;

    // Random Block
    rng.GenerateBlock(scratch, scratch.size());

    HexEncoder encoder;
    encoder.Attach(new StringSink(encrypted));
    encoder.Put(reinterpret_cast<const CryptoPP::byte *> (derived.data()), 32);
    encoder.MessageEnd();

    std::cout << "Derived: " << encrypted << std::endl;

    return 0;
}
