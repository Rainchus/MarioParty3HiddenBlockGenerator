#include "mp1.h"

SpaceData spaces[] = {
{0x01, 0x01, 0x0000, 0x00000000,  { 210.0000f, 0.0000f, 210.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x06, 0x0000, 0x01000203,  { -70.0000f, 0.0000f, 210.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x02, 0x0000, 0x04040403,  { -100.0000f, 0.0000f, 210.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x00000505,  { -160.0000f, 0.0000f, 210.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x0B0A0000,  { -190.0000f, 0.0000f, 190.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x04040404,  { -205.0000f, 0.0000f, 165.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x0D00000D,  { -220.1260f, 0.0000f, 138.4450f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x0F0F0F00,  { -230.0000f, 0.0000f, 110.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x04, 0x0000, 0x11111312,  { -240.0000f, 0.0000f, 40.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x09, 0x0000, 0x11131400,  { -240.0000f, 0.0000f, 10.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x00000000,  { -240.0000f, 0.0000f, -30.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x10000F11,  { 185.0000f, 0.0000f, 210.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x04, 0x0000, 0x12131111,  { -240.0000f, 0.0000f, -60.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x06, 0x0000, 0x00000000,  { -240.0000f, 0.0000f, -95.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x0C, 0x0000, 0x100F0000,  { -240.0000f, 0.0000f, -130.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x13121212,  { -240.0000f, 0.0000f, -160.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x00000000,  { -240.0000f, 0.0000f, -187.4380f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x04, 0x0000, 0x0F0F0F00,  { -210.0000f, 0.0000f, -227.4380f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x0E, 0x0000, 0x11111512,  { -185.0000f, 0.0000f, -227.4380f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x04, 0x0000, 0x11131400,  { -160.0000f, 0.0000f, -227.4380f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x02, 0x0000, 0x00000000,  { -105.0000f, 0.0000f, -227.4380f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x1D00191C,  { -80.0000f, 0.0000f, -227.4380f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x02, 0x0000, 0x1D221C1C,  { 160.0000f, 0.0000f, 210.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x07, 0x0000, 0x1D1D1D1D,  { -45.0000f, 0.0000f, -227.4380f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x04, 0x0000, 0x261C0000,  { -20.0000f, 0.0000f, -227.4380f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x001D1D1D,  { 10.0000f, 0.0000f, -227.4380f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x04, 0x0000, 0x0000001D,  { 60.0000f, 0.0000f, -227.4380f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x2E2E0000,  { 85.0000f, 0.0000f, -227.4380f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x09, 0x0000, 0x00343038,  { 110.0000f, 0.0000f, -227.4380f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x06, 0x0000, 0x35390000,  { 135.0000f, 0.0000f, -227.4380f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x04, 0x0000, 0x00000000,  { 160.0000f, 0.0000f, -227.4380f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x00000000,  { 220.0000f, 0.0000f, -187.4380f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x343D2E00,  { 220.0000f, 0.0000f, -160.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x002E0000,  { 130.0000f, 0.0000f, 210.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x04, 0x0000, 0x3F3E0000,  { 220.0000f, 0.0000f, -126.7380f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x43040404,  { 220.0000f, 0.0000f, -60.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x06, 0x0000, 0x41000041,  { 220.0000f, 0.0000f, -35.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x0F, 0x0000, 0x00000000,  { 220.0000f, 0.0000f, -10.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x04, 0x0000, 0x191C1E1D,  { 220.0000f, 0.0000f, 53.6285f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x201C1C1D,  { 199.3935f, 0.0000f, 73.9950f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x0C, 0x0000, 0x00000000,  { 195.0000f, 0.0000f, 98.8115f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x00000000,  { 205.0000f, 0.0000f, 125.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x00000000,  { 210.0000f, 0.0000f, 153.1100f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x09, 0x0000, 0x00000000,  { 210.0000f, 0.0000f, 182.5915f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x00000000,  { 105.0000f, 0.0000f, 210.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x00000000,  { -210.0000f, 0.0000f, 70.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x00000000,  { -180.0000f, 0.0000f, 70.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x00000000,  { -155.0000f, 0.0000f, 70.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x06, 0x0000, 0x00000000,  { -130.0000f, 0.0000f, 74.1465f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x02, 0x0000, 0x00000000,  { -105.0000f, 0.0000f, 80.1835f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x00000000,  { -79.8740f, 0.0000f, 88.7800f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x0000F000,  { -70.0000f, 0.0000f, 141.1885f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x00000000,  { -70.0000f, 0.0000f, 177.4085f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x00F00000,  { 20.8583f, 0.0000f, 177.7750f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x00F00000,  { 10.9844f, 0.0000f, 150.7015f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x07, 0x0000, 0xF0000000,  { 78.5355f, 0.0000f, 210.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x000000FF,  { -5.4802f, 0.0000f, 125.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x06, 0x0000, 0x00000000,  { -32.9291f, 0.0000f, 92.2250f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0xFFFFFF00,  { -25.0000f, 0.0000f, 66.3715f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x00000000,  { -10.0000f, 0.0000f, 40.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x02, 0x0000, 0x80000000,  { -0.0000f, 0.0000f, 15.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x09, 0x0000, 0x0000F000,  { 40.0000f, 0.0000f, 0.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x00000000,  { 70.0000f, 0.0000f, 0.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x008F0000,  { 170.0000f, 0.0000f, 20.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x05, 0x0000, 0x00F00000,  { 195.0000f, 0.0000f, 23.7801f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x09, 0x0000, 0x80000000,  { 100.0000f, 0.0000f, 100.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x00008FFF,  { 50.0000f, 0.0000f, 210.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x00008FFF,  { 115.0000f, 0.0000f, 130.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x0F0F8008,  { 135.0000f, 0.0000f, 150.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x06, 0x0000, 0x0F0F0000,  { 150.0000f, 0.0000f, 175.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x06, 0x0000, 0x08FF0000,  { -10.0000f, 0.0000f, -40.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x0000FFFF,  { -30.0000f, 0.0000f, -60.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x00000000,  { -47.5000f, 0.0000f, -120.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x0C, 0x0000, 0x00000000,  { -35.0000f, 0.0000f, -145.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x00000000,  { -45.0000f, 0.0000f, -200.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x06, 0x0000, 0x00000000,  { -135.0000f, 0.0000f, -190.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x0000FFFF,  { -166.5905f, 0.0000f, -115.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x00000000,  { -10.0000f, 0.0000f, 210.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x05, 0x0000, 0x00000000,  { -175.8585f, 0.0000f, -84.2985f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0xFF800000,  { 165.0000f, 0.0000f, -195.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x06, 0x0000, 0xF0000000,  { 145.0000f, 0.0000f, -175.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x0000FFF8,  { 130.0000f, 0.0000f, -150.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x0C, 0x0000, 0x00000000,  { 110.0000f, 0.0000f, -130.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0xF000F000,  { 90.0000f, 0.0000f, -100.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x06, 0x0000, 0xF8000000,  { 75.0000f, 0.0000f, -75.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x02, 0x0000, 0x00000000,  { 55.0000f, 0.0000f, -55.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x0000FFFF,  { 30.0000f, 0.0000f, -30.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x00000000,  { -25.0000f, 0.0000f, -10.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0xF0000000,  { -40.0000f, 0.0000f, 210.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x0C, 0x0000, 0xFF800000,  { -50.0000f, 0.0000f, -10.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0xF0000000,  { -80.0000f, 0.0000f, -10.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x0000FFFF,  { -131.9450f, 0.0000f, -40.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x0F, 0x0000, 0x00000000,  { -157.0710f, 0.0000f, -50.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x09, 0x0000, 0x0F000000,  { -185.0000f, 0.0000f, -50.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0xFFF00000,  { -210.0000f, 0.0000f, -60.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x0C, 0x0000, 0x80000000,  { 190.0000f, 0.0000f, -90.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x0000F0F8,  { 160.0000f, 0.0000f, -90.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x05, 0x0000, 0x00000000,  { 130.0000f, 0.0000f, -90.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0xF0000000,  { 30.0000f, 0.0000f, 130.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x000F8000,  { -155.0000f, 0.0000f, 45.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x00F00000,  { -210.0000f, 0.0000f, -85.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x0000F0F8,  { -185.0000f, 0.0000f, -255.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x00000000,  { 115.0000f, 0.0000f, -170.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0xF000F000,  { 160.0000f, 0.0000f, -115.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0xFF800000,  { -10.0000f, 0.0000f, 190.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x00000000,  { 185.0000f, 0.0000f, 123.1100f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x0000F000,  { 245.0000f, 0.0000f, 21.2199f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x00, 0x0000, 0x00000000,  { 240.0000f, 0.0000f, 230.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0xF0F80000,  { 30.0000f, 0.0000f, 210.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0xFF800000,  { -150.0000f, 0.0000f, -140.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x80000000,  { -10.0000f, 0.0000f, -175.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x000000F0,  { -45.0000f, 0.0000f, -260.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x00000000,  { -16.8941f, 0.0000f, -258.1700f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0xF000F000,  { 80.0000f, 0.0000f, 180.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x00F00000,  { 109.1265f, 0.0000f, 180.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x00000000,  { -130.0000f, 0.0000f, 180.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0xF000F00F,  { -110.0000f, 0.0000f, -30.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x00000000,  { -50.0000f, 0.0000f, -90.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x08F8F000,  { 100.0000f, 0.0000f, -5.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x0D, 0x0000, 0x00F00000,  { -130.0000f, 0.0000f, 210.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x01, 0x0000, 0x00000000,  { 70.0000f, 0.0000f, 55.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x000000F8,  { 130.0000f, 0.0000f, -10.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x00FF0FF0,  { -65.9845f, 0.0000f, 95.6700f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x00000000,  { -140.0000f, 0.0000f, -165.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x0D, 0x0000, 0x00000000,  { -38.9704f, 0.0000f, -175.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x00000000,  { 10.0000f, 0.0000f, -10.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x0000F000,  { -240.0000f, 0.0000f, -227.4380f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x00000000,  { 220.0000f, 0.0000f, -227.4380f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x08F00000,  { 35.0000f, 0.0000f, -260.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x08F00000,  { 38.5000f, 0.0000f, -290.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x000000F0,  { -240.0000f, 0.0000f, 90.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x00000000,  { 10.0000f, 25.0000f, -260.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x00000000,  { -240.0000f, 0.0000f, -239.9380f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0xF00F0000,  { -257.5000f, 0.0000f, -237.4380f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x00000000,  { -257.5000f, 0.0000f, -227.4380f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x00000000,  { 237.5000f, 0.0000f, -237.4380f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x00000FFF,  { 237.5000f, 0.0000f, -227.4380f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x00000000,  { 220.0000f, 0.0000f, -242.4380f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0xF00F0000,  { -67.5000f, 0.0000f, -10.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x00000000,  { -22.5000f, 0.0000f, -52.5000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0xF0000000,  { 55.0000f, 0.0000f, 0.0000f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x0000FFF0,  { -145.0000f, 0.0000f, -227.4380f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x00000000,  { -79.1165f, 0.0000f, -67.1165f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x0D, 0x0000, 0x0F00F000,  { 35.0000f, 0.0000f, -227.4380f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x00000000,  { 175.0000f, 0.0000f, -227.4380f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0xF0000000,  { 220.0000f, 0.0000f, -105.1830f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x0000F000,  { 220.0000f, 0.0000f, 22.7749f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 },
{0x01, 0x03, 0x0000, 0x00000000,  { 150.0000f, 0.0000f, 9.3642f}, { 0.1000f, 0.1000f, 0.1000f }, 0x00000000 }
};