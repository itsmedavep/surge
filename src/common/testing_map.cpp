//
//  testing_map.cpp
//  
//
//  Created by David Palmer on 4/6/19.
//

#include "testing_map.hpp"
int main() {
    std::map<unsigned, std::string> names;
    
    names[1] = "Modulation";
    names[2] = "Breath Controller";
    names[3] = "Undefined";
    names[4] = "Foot Controller";
    names[5] = "Portamento Time";
    names[6] = "Data Entry MSB";
    names[7] = "Channel Volume";
    names[8] = "Balance";
    names[9] = "Undefined";
    names[10] = "Pan";
    names[11] = "Expression Controller";
    names[12] = "Effect Control 1";
    names[13] = "Effect Control 2";
    names[14] = "Undefined";
    names[15] = "Undefined";
    names[16] = "General Purpose Controller 1";
    names[17] = "General Purpose Controller 2";
    names[18] = "General Purpose Controller 3";
    names[19] = "General Purpose Controller 4";
    names[20] = "Undefined";
    names[21] = "Undefined";
    names[22] = "Undefined";
    names[23] = "Undefined";
    names[24] = "Undefined";
    names[25] = "Undefined";
    names[26] = "Undefined";
    names[27] = "Undefined";
    names[28] = "Undefined";
    names[29] = "Undefined";
    names[30] = "Undefined";
    names[31] = "Undefined";
    names[33] = "LSB for Control 1 (Modulation Wheel)";
    names[34] = "LSB for Control 2 (Breath Controller)";
    names[35] = "LSB for Control 3 (Undefined)";
    names[36] = "LSB for Control 4 (Foot Controller)";
    names[37] = "LSB for Control 5 (Portamento Time)";
    names[38] = "LSB for Control 6 (Data Entry)";
    names[39] = "LSB for Control 7 (Channel Volume)";
    names[40] = "LSB for Control 8 (Balance)";
    names[41] = "LSB for Control 9 (Undefined)";
    names[42] = "LSB for Control 10 (Pan)";
    names[43] = "LSB for Control 11 (Expression Controller)";
    names[44] = "LSB for Control 12 (Effect control 1)";
    names[45] = "LSB for Control 13 (Effect control 2)";
    names[46] = "LSB for Control 14 (Undefined)";
    names[47] = "LSB for Control 15 (Undefined)";
    names[48] = "LSB for Control 16 (General Purpose Controller 1)";
    names[49] = "LSB for Control 17 (General Purpose Controller 2)";
    names[50] = "LSB for Control 18 (General Purpose Controller 3)";
    names[51] = "LSB for Control 19 (General Purpose Controller 4)";
    names[52] = "LSB for Control 20 (Undefined)";
    names[53] = "LSB for Control 21 (Undefined)";
    names[54] = "LSB for Control 22 (Undefined)";
    names[55] = "LSB for Control 23 (Undefined)";
    names[56] = "LSB for Control 24 (Undefined)";
    names[57] = "LSB for Control 25 (Undefined)";
    names[58] = "LSB for Control 26 (Undefined)";
    names[59] = "LSB for Control 27 (Undefined)";
    names[60] = "LSB for Control 28 (Undefined)";
    names[61] = "LSB for Control 29 (Undefined)";
    names[62] = "LSB for Control 30 (Undefined)";
    names[63] = "LSB for Control 31 (Undefined)";
    names[65] = "Portamento On/Off";
    names[66] = "Sostenuto On/Off";
    names[67] = "Soft Pedal On/Off";
    names[68] = "Legato Footswitch";
    names[69] = "Hold 2";
    names[70] = "Sound Controller 1 (default: Sound Variation)";
    names[71] = "Sound Controller 2 (default: Timbre/Harmonic Intens)";
    names[72] = "Sound Controller 3 (default: Release Time)";
    names[73] = "Sound Controller 4 (default: Attack Time)";
    names[74] = "Sound Controller 5 (default: Brightness)";
    names[75] = "Sound Controller 6 (default: Decay Time)";
    names[76] = "Sound Controller 7 (default: Vibrato Rate)";
    names[77] = "Sound Controller 8 (default: Vibrato Depth)";
    names[78] = "Sound Controller 9 (default: Vibrato Delay)";
    names[79] = "Sound Controller 10 (default undefined)";
    names[80] = "General Purpose Controller 5";
    names[81] = "General Purpose Controller 6";
    names[82] = "General Purpose Controller 7";
    names[83] = "General Purpose Controller 7";
    names[84] = "Portamento Control";
    names[85] = "Undefined";
    names[86] = "Undefined";
    names[87] = "Undefined";
    names[88] = "High Resolution Velocity Prefix";
    names[89] = "Undefined";
    names[90] = "Undefined";
    names[91] = "Effects 1 Depth";
    names[92] = "Effects 2 Depth";
    names[93] = "Effects 3 Depth";
    names[94] = "Effects 4 Depth";
    names[95] = "Effects 5 Depth";
    names[96] = "Data Increment (Data Entry +1)";
    names[97] = "Data Decrement (Data Entry -1)";
    names[98] = "Non-Registered Parameter Number (NRPN) - LSB";
    names[99] = "Non-Registered Parameter Number (NRPN) - MSB";
    names[100] = "Registered Parameter Number (RPN) - LSB";
    names[101] = "Registered Parameter Number (RPN) - MSB";
    names[102] = "Undefined";
    names[103] = "Undefined";
    names[104] = "Undefined";
    names[105] = "Undefined";
    names[106] = "Undefined";
    names[107] = "Undefined";
    names[108] = "Undefined";
    names[109] = "Undefined";
    names[110] = "Undefined";
    names[111] = "Undefined";
    names[112] = "Undefined";
    names[113] = "Undefined";
    names[114] = "Undefined";
    names[115] = "Undefined";
    names[116] = "Undefined";
    names[117] = "Undefined";
    names[118] = "Undefined";
    names[119] = "Undefined";
    names[121] = "[Channel Mode Message] Reset All Controllers";
    names[122] = "[Channel Mode Message] Local Control On/Off";
    names[124] = "[Channel Mode Message] Omni Mode Off (+ all notes off)";
    names[125] = "[Channel Mode Message] Omni Mode On (+ all notes off)";
    names[126] = "[Channel Mode Message] Mono Mode On (+ poly off, + all notes off)";
    names[127] = "[Channel Mode Message] Poly Mode On (+ mono off, +all notes off)";
    
    std::set<unsigned> unmappableControls();
    
    names[0] = "Bank Select";
    names[32] = "LSB for Control 0 (Bank Select)";
    names[64] = "Damper Pedal on/off (Sustain)";
    names[120] = "[Channel Mode Message] All Sound Off";
    names[123] = "[Channel Mode Message] All Notes Off";
    
    std::cout << names[36] <<std::endl;
    
    return();
}
