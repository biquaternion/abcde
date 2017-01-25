//
// Created by DKlestov on 25.01.2017.
//

#include <fstream>
#include "dmp.h"

void dmp(const std::string &fileName,
         unsigned char *buffer,
         int size) {
    std::ofstream out(fileName,
                      std::ofstream::binary | std::ofstream::out | std::ofstream::trunc);
    out.write((char *) buffer, size * sizeof(unsigned char));
    out.flush();
}