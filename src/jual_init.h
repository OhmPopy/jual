// Copyright (C) 2015 Sajon Oso, https://github.com/sajonoso

char bsJual_Init[]="\
\x1B\x4C\x75\x61\x53\x00\x19\x93\x0D\x0A\x1A\x0A\x04\x04\x04\x08\x08\x78\x56\x00\
\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x28\x77\x40\x01\x00\x00\x00\x00\x00\x00\
\x00\x00\x00\x00\x01\x02\x4D\x00\x00\x00\x06\x40\x40\x00\x08\x00\x00\x80\x06\x00\
\x40\x00\x6C\x00\x00\x00\x0A\x40\x00\x81\x06\x00\x41\x00\x08\x00\x80\x81\x2C\x40\
\x00\x00\x08\x00\x00\x82\x2C\x80\x00\x00\x08\x00\x80\x82\x06\x80\x41\x00\x41\xC0\
\x01\x00\x24\x80\x00\x01\x6C\xC0\x00\x00\x0A\x40\x00\x84\x2C\x00\x01\x00\x08\x00\
\x80\x84\x2C\x40\x01\x00\x08\x00\x00\x85\x2C\x80\x01\x00\x08\x00\x80\x85\x06\x40\
\x43\x00\x07\x80\x43\x00\x08\x00\x00\x86\x2C\xC0\x01\x00\x08\x00\x80\x87\x2C\x00\
\x02\x00\x08\x00\x00\x88\x2C\x40\x02\x00\x08\x00\x80\x88\x06\xC0\x44\x00\x07\x00\
\x45\x00\x08\x00\x00\x89\x2C\x80\x02\x00\x08\x00\x80\x8A\x2C\xC0\x02\x00\x08\x00\
\x00\x8B\x2C\x00\x03\x00\x08\x00\x80\x8B\x06\x40\x46\x00\x07\x80\x46\x00\x08\x00\
\x00\x8C\x06\x40\x46\x00\x07\x00\x47\x00\x08\x00\x80\x8D\x2C\x40\x03\x00\x08\x00\
\x80\x8E\x2C\x80\x03\x00\x08\x00\x00\x8F\x2C\xC0\x03\x00\x08\x00\x80\x8F\x06\x00\
\x48\x00\x6C\x00\x04\x00\x0A\x40\x80\x90\x06\x00\x48\x00\x6C\x40\x04\x00\x0A\x40\
\x00\x91\x06\xC0\x48\x00\x6C\x80\x04\x00\x0A\x40\x00\x92\x06\xC0\x48\x00\x6C\xC0\
\x04\x00\x0A\x40\x80\x92\x06\xC0\x48\x00\x6C\x00\x05\x00\x0A\x40\x00\x93\x06\xC0\
\x48\x00\x6C\x40\x05\x00\x0A\x40\x80\x93\x06\xC0\x48\x00\x6C\x80\x05\x00\x0A\x40\
\x00\x94\x06\x40\x4A\x00\x6C\xC0\x05\x00\x0A\x40\x00\x95\x26\x00\x80\x00\x2B\x00\
\x00\x00\x04\x05\x4D\x61\x74\x68\x04\x05\x6D\x61\x74\x68\x04\x06\x72\x6F\x75\x6E\
\x64\x04\x0D\x6F\x6C\x64\x5F\x74\x6F\x73\x74\x72\x69\x6E\x67\x04\x09\x74\x6F\x73\
\x74\x72\x69\x6E\x67\x04\x09\x74\x6F\x53\x74\x72\x69\x6E\x67\x04\x0D\x67\x65\x74\
\x6D\x65\x74\x61\x74\x61\x62\x6C\x65\x04\x07\x73\x74\x72\x69\x6E\x67\x04\x06\x5F\
\x5F\x61\x64\x64\x04\x07\x63\x68\x61\x72\x41\x74\x04\x0B\x63\x68\x61\x72\x43\x6F\
\x64\x65\x41\x74\x04\x07\x63\x6F\x6E\x63\x61\x74\x04\x0D\x66\x72\x6F\x6D\x43\x68\
\x61\x72\x43\x6F\x64\x65\x04\x07\x73\x74\x72\x69\x6E\x67\x04\x05\x63\x68\x61\x72\
\x04\x08\x69\x6E\x64\x65\x78\x4F\x66\x04\x05\x6A\x6F\x69\x6E\x04\x07\x6C\x65\x6E\
\x67\x74\x68\x04\x07\x72\x65\x70\x65\x61\x74\x04\x07\x73\x74\x72\x69\x6E\x67\x04\
\x04\x72\x65\x70\x04\x08\x72\x65\x70\x6C\x61\x63\x65\x04\x06\x73\x70\x6C\x69\x74\
\x04\x06\x73\x6C\x69\x63\x65\x04\x0C\x74\x6F\x4C\x6F\x77\x65\x72\x43\x61\x73\x65\
\x04\x07\x73\x74\x72\x69\x6E\x67\x04\x06\x6C\x6F\x77\x65\x72\x04\x0C\x74\x6F\x55\
\x70\x70\x65\x72\x43\x61\x73\x65\x04\x06\x75\x70\x70\x65\x72\x04\x06\x69\x73\x4E\
\x61\x4E\x04\x09\x70\x61\x72\x73\x65\x49\x6E\x74\x04\x0B\x70\x61\x72\x73\x65\x46\
\x6C\x6F\x61\x74\x04\x03\x69\x6F\x04\x0A\x66\x6C\x75\x73\x68\x66\x69\x6C\x65\x04\
\x07\x65\x78\x69\x73\x74\x73\x04\x03\x69\x6F\x04\x09\x72\x65\x61\x64\x62\x79\x74\
\x65\x04\x09\x72\x65\x61\x64\x6C\x69\x6E\x65\x04\x05\x73\x65\x65\x6B\x04\x05\x73\
\x69\x7A\x65\x04\x0A\x77\x72\x69\x74\x65\x62\x79\x74\x65\x04\x03\x6F\x73\x04\x08\
\x67\x65\x74\x74\x69\x6D\x65\x01\x00\x00\x00\x01\x00\x18\x00\x00\x00\x00\x03\x00\
\x00\x00\x03\x00\x00\x00\x01\x00\x03\x06\x00\x00\x00\x46\x00\x40\x00\x47\x40\xC0\
\x00\x8D\x80\x40\x00\x65\x00\x00\x01\x66\x00\x00\x00\x26\x00\x80\x00\x03\x00\x00\
\x00\x04\x05\x6D\x61\x74\x68\x04\x06\x66\x6C\x6F\x6F\x72\x03\x00\x00\x00\x00\x00\
\x00\xE0\x3F\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\
\x00\x00\x00\x00\x00\x00\x08\x00\x00\x00\x0D\x00\x00\x00\x01\x00\x04\x14\x00\x00\
\x00\x46\x00\x40\x00\x47\x40\xC0\x00\x80\x00\x00\x00\x64\x80\x00\x01\x1F\x80\xC0\
\x00\x1E\x00\x02\x80\x50\xC0\x40\x00\x1F\x00\xC1\x00\x1E\x40\x01\x80\x46\x40\x41\
\x00\x47\x80\xC1\x00\x81\xC0\x01\x00\xC0\x00\x00\x00\x65\x00\x80\x01\x66\x00\x00\
\x00\x46\x00\x42\x00\x80\x00\x00\x00\x65\x00\x00\x01\x66\x00\x00\x00\x26\x00\x80\
\x00\x09\x00\x00\x00\x04\x05\x6D\x61\x74\x68\x04\x05\x74\x79\x70\x65\x04\x06\x66\
\x6C\x6F\x61\x74\x13\x01\x00\x00\x00\x00\x00\x00\x00\x13\x00\x00\x00\x00\x00\x00\
\x00\x00\x04\x07\x73\x74\x72\x69\x6E\x67\x04\x07\x66\x6F\x72\x6D\x61\x74\x04\x03\
\x25\x64\x04\x0D\x6F\x6C\x64\x5F\x74\x6F\x73\x74\x72\x69\x6E\x67\x01\x00\x00\x00\
\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x0F\
\x00\x00\x00\x1E\x00\x00\x00\x02\x00\x08\x37\x00\x00\x00\x86\x00\x40\x00\xC0\x00\
\x00\x00\xA4\x80\x00\x01\x1F\x40\x40\x01\x1E\x00\x0B\x80\x5F\x80\xC0\x00\x1E\x40\
\x00\x80\x1F\xC0\xC0\x00\x1E\xC0\x00\x80\x86\x00\x41\x00\xC0\x00\x00\x00\xA5\x00\
\x00\x01\xA6\x00\x00\x00\x1F\x40\xC1\x00\x1E\x80\x04\x80\x80\x00\x00\x00\xC4\x00\
\x00\x00\x0B\x01\x00\x00\x20\x80\x00\x83\x1E\x40\x01\x80\x5C\x01\x00\x02\x4D\xC1\
\xC1\x02\x94\xC1\x41\x01\x0A\x81\x81\x02\x98\xC0\x41\x01\x1E\xC0\xFD\x7F\x46\x01\
\x42\x00\x47\x41\xC2\x02\x86\x81\x42\x00\x87\xC1\x42\x03\xC0\x01\x00\x02\xA4\x01\
\x00\x01\x65\x01\x00\x00\x66\x01\x00\x00\x1F\x00\xC3\x00\x1E\x40\x01\x80\x86\x00\
\x42\x00\x87\x40\x43\x01\xC1\x80\x03\x00\x00\x01\x00\x00\xA5\x00\x80\x01\xA6\x00\
\x00\x00\x1F\xC0\xC3\x00\x1E\x40\x01\x80\x86\x00\x42\x00\x87\x40\x43\x01\xC1\x00\
\x04\x00\x00\x01\x00\x00\xA5\x00\x80\x01\xA6\x00\x00\x00\x86\x40\x44\x00\xC0\x00\
\x00\x00\xA5\x00\x00\x01\xA6\x00\x00\x00\x26\x00\x80\x00\x12\x00\x00\x00\x04\x05\
\x74\x79\x70\x65\x04\x07\x6E\x75\x6D\x62\x65\x72\x00\x13\x0A\x00\x00\x00\x00\x00\
\x00\x00\x04\x09\x74\x6F\x73\x74\x72\x69\x6E\x67\x13\x02\x00\x00\x00\x00\x00\x00\
\x00\x13\x00\x00\x00\x00\x00\x00\x00\x00\x13\x01\x00\x00\x00\x00\x00\x00\x00\x04\
\x07\x73\x74\x72\x69\x6E\x67\x04\x08\x72\x65\x76\x65\x72\x73\x65\x04\x06\x74\x61\
\x62\x6C\x65\x04\x07\x63\x6F\x6E\x63\x61\x74\x13\x08\x00\x00\x00\x00\x00\x00\x00\
\x04\x07\x66\x6F\x72\x6D\x61\x74\x04\x03\x25\x6F\x13\x10\x00\x00\x00\x00\x00\x00\
\x00\x04\x03\x25\x78\x04\x0D\x6F\x6C\x64\x5F\x74\x6F\x73\x74\x72\x69\x6E\x67\x01\
\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\
\x00\x00\x20\x00\x00\x00\x20\x00\x00\x00\x02\x00\x04\x05\x00\x00\x00\x80\x00\x00\
\x00\xC0\x00\x80\x00\x9D\xC0\x00\x01\xA6\x00\x00\x01\x26\x00\x80\x00\x00\x00\x00\
\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\
\x00\x00\x22\x00\x00\x00\x22\x00\x00\x00\x02\x00\x06\x09\x00\x00\x00\x4D\x00\xC0\
\x00\x86\x40\x40\x00\x87\x80\x40\x01\xC0\x00\x00\x00\x00\x01\x80\x00\x40\x01\x80\
\x00\xA5\x00\x00\x02\xA6\x00\x00\x00\x26\x00\x80\x00\x03\x00\x00\x00\x13\x01\x00\
\x00\x00\x00\x00\x00\x00\x04\x07\x73\x74\x72\x69\x6E\x67\x04\x04\x73\x75\x62\x01\
\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\
\x00\x00\x23\x00\x00\x00\x23\x00\x00\x00\x02\x00\x05\x07\x00\x00\x00\x86\x00\x40\
\x00\x87\x40\x40\x01\xC0\x00\x00\x00\x0D\x81\xC0\x00\xA5\x00\x80\x01\xA6\x00\x00\
\x00\x26\x00\x80\x00\x03\x00\x00\x00\x04\x07\x73\x74\x72\x69\x6E\x67\x04\x05\x62\
\x79\x74\x65\x13\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\
\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x24\x00\x00\x00\x24\
\x00\x00\x00\x00\x01\x03\x08\x00\x00\x00\x06\x00\x40\x00\x07\x40\x40\x00\x4B\x00\
\x00\x00\xAD\x00\x00\x00\x6B\x40\x00\x00\x25\x00\x00\x01\x26\x00\x00\x00\x26\x00\
\x80\x00\x02\x00\x00\x00\x04\x06\x74\x61\x62\x6C\x65\x04\x07\x63\x6F\x6E\x63\x61\
\x74\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\
\x00\x00\x00\x00\x26\x00\x00\x00\x26\x00\x00\x00\x03\x00\x07\x0F\x00\x00\x00\xA2\
\x40\x00\x00\x1E\x00\x00\x80\x81\x00\x00\x00\xC6\x40\x40\x00\xC7\x80\xC0\x01\x00\
\x01\x00\x00\x40\x01\x80\x00\x8D\xC1\x40\x01\xE4\x80\x00\x02\xE2\x40\x00\x00\x1E\
\x00\x00\x80\xC1\x00\x00\x00\xCE\xC0\xC0\x01\xE6\x00\x00\x01\x26\x00\x80\x00\x04\
\x00\x00\x00\x13\x00\x00\x00\x00\x00\x00\x00\x00\x04\x07\x73\x74\x72\x69\x6E\x67\
\x04\x05\x66\x69\x6E\x64\x13\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\
\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x27\x00\
\x00\x00\x27\x00\x00\x00\x02\x00\x06\x08\x00\x00\x00\x86\x00\x40\x00\x87\x40\x40\
\x01\xC0\x00\x00\x00\x00\x01\x80\x00\x41\x81\x00\x00\xA5\x00\x00\x02\xA6\x00\x00\
\x00\x26\x00\x80\x00\x03\x00\x00\x00\x04\x06\x74\x61\x62\x6C\x65\x04\x07\x63\x6F\
\x6E\x63\x61\x74\x13\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\
\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x28\x00\x00\x00\
\x2B\x00\x00\x00\x01\x00\x03\x0E\x00\x00\x00\x46\x00\x40\x00\x80\x00\x00\x00\x64\
\x80\x00\x01\x1F\x40\xC0\x00\x1E\x40\x01\x80\x47\x80\x40\x00\x5F\xC0\xC0\x00\x1E\
\x80\x00\x80\x5C\x00\x00\x00\x4D\x00\xC1\x00\x66\x00\x00\x01\x5C\x00\x00\x00\x66\
\x00\x00\x01\x26\x00\x80\x00\x05\x00\x00\x00\x04\x05\x74\x79\x70\x65\x04\x06\x74\
\x61\x62\x6C\x65\x13\x00\x00\x00\x00\x00\x00\x00\x00\x00\x13\x01\x00\x00\x00\x00\
\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\
\x00\x00\x00\x00\x00\x00\x2D\x00\x00\x00\x2D\x00\x00\x00\x03\x00\x09\x0B\x00\x00\
\x00\xC6\x00\x40\x00\x06\x41\x40\x00\x07\x81\x40\x02\x40\x01\x00\x00\x80\x01\x80\
\x00\xC0\x01\x00\x01\x01\xC2\x00\x00\x24\x01\x80\x02\xE5\x00\x00\x00\xE6\x00\x00\
\x00\x26\x00\x80\x00\x04\x00\x00\x00\x04\x09\x74\x6F\x73\x74\x72\x69\x6E\x67\x04\
\x07\x73\x74\x72\x69\x6E\x67\x04\x05\x67\x73\x75\x62\x13\x01\x00\x00\x00\x00\x00\
\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\
\x00\x00\x00\x00\x00\x2E\x00\x00\x00\x3E\x00\x00\x00\x02\x00\x0B\x34\x00\x00\x00\
\x62\x40\x00\x00\x1E\x00\x00\x80\x41\x00\x00\x00\x5F\x40\x40\x00\x1E\x80\x00\x80\
\x9C\x00\x80\x00\x1F\x80\x40\x01\x1E\x40\x00\x80\x84\x00\x00\x00\xA6\x00\x00\x01\
\x8B\x00\x00\x00\xDC\x00\x80\x00\x01\x81\x00\x00\x46\xC1\x40\x00\x47\x01\xC1\x02\
\x80\x01\x00\x00\xC0\x01\x80\x00\x01\x42\x01\x00\x64\x81\x00\x02\x62\x41\x00\x00\
\x1E\x00\x00\x80\x41\x81\x01\x00\x81\x41\x01\x00\x5F\x80\xC1\x02\x1E\x80\x04\x80\
\xC6\xC1\x40\x00\xC7\xC1\xC1\x03\x00\x02\x00\x00\x40\x02\x00\x03\x8E\x42\xC1\x02\
\xE4\x81\x00\x02\x8A\xC0\x01\x02\x0D\x41\x41\x02\x8D\xC1\x80\x02\xC6\xC1\x40\x00\
\xC7\x01\xC1\x03\x00\x02\x00\x00\x40\x02\x80\x00\x80\x02\x00\x03\xE4\x81\x00\x02\
\x63\x41\x80\x03\x1E\x00\x00\x80\x41\x81\x01\x00\x1E\x80\xFA\x7F\xC6\xC1\x40\x00\
\xC7\xC1\xC1\x03\x00\x02\x00\x00\x40\x02\x00\x03\xE4\x81\x80\x01\x8A\xC0\x01\x02\
\xA6\x00\x00\x01\x26\x00\x80\x00\x08\x00\x00\x00\x04\x02\x20\x00\x13\x00\x00\x00\
\x00\x00\x00\x00\x00\x04\x07\x73\x74\x72\x69\x6E\x67\x04\x05\x66\x69\x6E\x64\x13\
\x01\x00\x00\x00\x00\x00\x00\x00\x13\xFF\xFF\xFF\xFF\xFF\xFF\xFF\xFF\x04\x04\x73\
\x75\x62\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\
\x00\x00\x00\x00\x00\x40\x00\x00\x00\x40\x00\x00\x00\x03\x00\x07\x0B\x00\x00\x00\
\xA2\x40\x00\x00\x1E\x00\x00\x80\x81\x00\x00\x00\xC6\x40\x40\x00\xC7\x80\xC0\x01\
\x00\x01\x00\x00\x4D\xC1\xC0\x00\x80\x01\x00\x01\xE5\x00\x00\x02\xE6\x00\x00\x00\
\x26\x00\x80\x00\x04\x00\x00\x00\x13\xFF\xFF\xFF\xFF\xFF\xFF\xFF\xFF\x04\x07\x73\
\x74\x72\x69\x6E\x67\x04\x04\x73\x75\x62\x13\x01\x00\x00\x00\x00\x00\x00\x00\x01\
\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\
\x00\x00\x45\x00\x00\x00\x45\x00\x00\x00\x01\x00\x03\x09\x00\x00\x00\x46\x00\x40\
\x00\x80\x00\x00\x00\x64\x80\x00\x01\x1F\x40\xC0\x00\x1E\x00\x00\x80\x43\x40\x00\
\x00\x43\x00\x80\x00\x66\x00\x00\x01\x26\x00\x80\x00\x02\x00\x00\x00\x04\x05\x74\
\x79\x70\x65\x04\x07\x6E\x75\x6D\x62\x65\x72\x01\x00\x00\x00\x00\x00\x00\x00\x00\
\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x46\x00\x00\x00\x46\x00\
\x00\x00\x02\x00\x05\x06\x00\x00\x00\x86\x00\x40\x00\xC0\x00\x00\x00\x00\x01\x80\
\x00\xA5\x00\x80\x01\xA6\x00\x00\x00\x26\x00\x80\x00\x01\x00\x00\x00\x04\x09\x74\
\x6F\x6E\x75\x6D\x62\x65\x72\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\
\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x47\x00\x00\x00\x47\x00\x00\x00\x01\x00\
\x03\x05\x00\x00\x00\x46\x00\x40\x00\x80\x00\x00\x00\x65\x00\x00\x01\x66\x00\x00\
\x00\x26\x00\x80\x00\x01\x00\x00\x00\x04\x09\x74\x6F\x6E\x75\x6D\x62\x65\x72\x01\
\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\
\x00\x00\x4B\x00\x00\x00\x4B\x00\x00\x00\x01\x00\x03\x04\x00\x00\x00\x47\x00\x40\
\x00\x80\x00\x00\x00\x64\x40\x00\x01\x26\x00\x80\x00\x01\x00\x00\x00\x04\x06\x66\
\x6C\x75\x73\x68\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\
\x00\x00\x00\x00\x00\x4D\x00\x00\x00\x54\x00\x00\x00\x01\x00\x04\x10\x00\x00\x00\
\x46\x00\x40\x00\x47\x40\xC0\x00\x80\x00\x00\x00\xC1\x80\x00\x00\x64\x80\x80\x01\
\x5F\xC0\xC0\x00\x1E\x40\x01\x80\x86\x00\x40\x00\x87\x00\x41\x01\xC0\x00\x80\x00\
\xA4\x40\x00\x01\x83\x00\x80\x00\xA6\x00\x00\x01\x83\x00\x00\x00\xA6\x00\x00\x01\
\x26\x00\x80\x00\x05\x00\x00\x00\x04\x03\x69\x6F\x04\x05\x6F\x70\x65\x6E\x04\x02\
\x72\x00\x04\x06\x63\x6C\x6F\x73\x65\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\
\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x56\x00\x00\x00\x56\x00\x00\x00\
\x02\x00\x05\x06\x00\x00\x00\x87\x00\x40\x00\xC0\x00\x00\x00\x00\x01\x80\x00\xA5\
\x00\x80\x01\xA6\x00\x00\x00\x26\x00\x80\x00\x01\x00\x00\x00\x04\x05\x72\x65\x61\
\x64\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\
\x00\x00\x57\x00\x00\x00\x57\x00\x00\x00\x01\x00\x04\x06\x00\x00\x00\x47\x00\x40\
\x00\x80\x00\x00\x00\xC1\x40\x00\x00\x65\x00\x80\x01\x66\x00\x00\x00\x26\x00\x80\
\x00\x02\x00\x00\x00\x04\x05\x72\x65\x61\x64\x04\x02\x6C\x00\x00\x00\x00\x00\x00\
\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x58\x00\x00\x00\x58\
\x00\x00\x00\x02\x00\x06\x07\x00\x00\x00\x87\x00\x40\x00\xC0\x00\x00\x00\x01\x41\
\x00\x00\x40\x01\x80\x00\xA5\x00\x00\x02\xA6\x00\x00\x00\x26\x00\x80\x00\x02\x00\
\x00\x00\x04\x05\x73\x65\x65\x6B\x04\x04\x73\x65\x74\x00\x00\x00\x00\x00\x00\x00\
\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x59\x00\x00\x00\x5E\x00\
\x00\x00\x01\x00\x07\x11\x00\x00\x00\x47\x00\x40\x00\x80\x00\x00\x00\xC1\x40\x00\
\x00\x01\x81\x00\x00\x64\x80\x00\x02\x87\x00\x40\x00\xC0\x00\x00\x00\x01\xC1\x00\
\x00\x41\x81\x00\x00\xA4\x80\x00\x02\xC7\x00\x40\x00\x00\x01\x00\x00\x41\x01\x01\
\x00\x80\x01\x80\x00\xE4\x40\x00\x02\xA6\x00\x00\x01\x26\x00\x80\x00\x05\x00\x00\
\x00\x04\x05\x73\x65\x65\x6B\x04\x04\x63\x75\x72\x13\x00\x00\x00\x00\x00\x00\x00\
\x00\x04\x04\x65\x6E\x64\x04\x04\x73\x65\x74\x00\x00\x00\x00\x00\x00\x00\x00\x00\
\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x5F\x00\x00\x00\x5F\x00\x00\x00\
\x02\x00\x05\x06\x00\x00\x00\x87\x00\x40\x00\xC0\x00\x00\x00\x00\x01\x80\x00\xA5\
\x00\x80\x01\xA6\x00\x00\x00\x26\x00\x80\x00\x01\x00\x00\x00\x04\x06\x77\x72\x69\
\x74\x65\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\
\x00\x00\x00\x66\x00\x00\x00\x6C\x00\x00\x00\x01\x00\x03\x0E\x00\x00\x00\x22\x00\
\x00\x00\x1E\x40\x01\x80\x46\x00\x40\x00\x47\x40\xC0\x00\x81\x80\x00\x00\x65\x00\
\x00\x01\x66\x00\x00\x00\x1E\x00\x01\x80\x46\x00\x40\x00\x47\x40\xC0\x00\x81\xC0\
\x00\x00\x65\x00\x00\x01\x66\x00\x00\x00\x26\x00\x80\x00\x04\x00\x00\x00\x04\x03\
\x6F\x73\x04\x05\x64\x61\x74\x65\x04\x13\x21\x25\x59\x20\x25\x6D\x20\x25\x64\x20\
\x25\x48\x20\x25\x4D\x20\x25\x53\x04\x12\x25\x59\x20\x25\x6D\x20\x25\x64\x20\x25\
\x48\x20\x25\x4D\x20\x25\x53\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\
\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\
\x00\
";