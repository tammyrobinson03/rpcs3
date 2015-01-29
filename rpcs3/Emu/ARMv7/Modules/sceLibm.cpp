#include "stdafx.h"
#include "Emu/System.h"
#include "Emu/ARMv7/PSVFuncList.h"

extern psv_log_base sceLibm;

namespace sce_libm_func
{

}

#define REG_FUNC(nid, name) reg_psv_func(nid, &sceLibm, #name, &sce_libm_func::name)

psv_log_base sceLibm("SceLibm", []()
{
	sceLibm.on_load = nullptr;
	sceLibm.on_unload = nullptr;
	sceLibm.on_stop = nullptr;

	//REG_FUNC(0xC73FE76D, _Exp);
	//REG_FUNC(0xFF4EAE04, _FExp);
	//REG_FUNC(0xB363D7D4, _LExp);
	//REG_FUNC(0xD72B5ACB, acos);
	//REG_FUNC(0x27EAB8C1, acosf);
	//REG_FUNC(0x1C053D0F, acosh);
	//REG_FUNC(0x568ECFB0, acoshf);
	//REG_FUNC(0xD3D6D36E, acoshl);
	//REG_FUNC(0x3210F395, acosl);
	//REG_FUNC(0x4016B2E6, asin);
	//REG_FUNC(0x3A3E5424, asinf);
	//REG_FUNC(0x7C93F1DD, asinh);
	//REG_FUNC(0x285AEDEA, asinhf);
	//REG_FUNC(0x9496E15E, asinhl);
	//REG_FUNC(0x1724A81D, asinl);
	//REG_FUNC(0x516D9970, atan);
	//REG_FUNC(0xC9BE3F05, atan2);
	//REG_FUNC(0x4E09DD53, atan2f);
	//REG_FUNC(0xCE325597, atan2l);
	//REG_FUNC(0xD78FC94E, atanf);
	//REG_FUNC(0x434BCE01, atanh);
	//REG_FUNC(0xC7B0AFBA, atanhf);
	//REG_FUNC(0x6A6881A6, atanhl);
	//REG_FUNC(0xD423A4AB, atanl);
	//REG_FUNC(0xACC0DC5A, cbrt);
	//REG_FUNC(0xD1699F4D, cbrtf);
	//REG_FUNC(0x342F9501, cbrtl);
	//REG_FUNC(0x63F05BD6, ceil);
	//REG_FUNC(0x6BBFEC89, ceilf);
	//REG_FUNC(0x48082D81, ceill);
	//REG_FUNC(0x0B918D13, copysign);
	//REG_FUNC(0x16EB9E63, copysignf);
	//REG_FUNC(0x19DFC0AA, copysignl);
	//REG_FUNC(0x061D0244, cos);
	//REG_FUNC(0x127F8302, cosf);
	//REG_FUNC(0x89B9BE1F, cosl);
	//REG_FUNC(0x110195E7, cosh);
	//REG_FUNC(0x61DE0770, coshf);
	//REG_FUNC(0x7EADDC5E, coshl);
	//REG_FUNC(0x4B84C012, _Cosh);
	//REG_FUNC(0x15993458, erf);
	//REG_FUNC(0x524AEBFE, erfc);
	//REG_FUNC(0x0301F113, erfcf);
	//REG_FUNC(0xD4C92471, erfcl);
	//REG_FUNC(0x41DD1AB8, erff);
	//REG_FUNC(0xFD431619, erfl);
	//REG_FUNC(0xEB027358, exp);
	//REG_FUNC(0x9B18F38F, exp2);
	//REG_FUNC(0x79415BD3, exp2f);
	//REG_FUNC(0x40053307, exp2l);
	//REG_FUNC(0x56473BC7, expf);
	//REG_FUNC(0xA71A81AA, expl);
	//REG_FUNC(0x2A97A75F, expm1);
	//REG_FUNC(0x64131D7B, expm1f);
	//REG_FUNC(0x8BF1866C, expm1l);
	//REG_FUNC(0x3E672BE3, fabs);
	//REG_FUNC(0x75348906, fabsf);
	//REG_FUNC(0x03ECA514, fabsl);
	//REG_FUNC(0xA278B20D, _FCosh);
	//REG_FUNC(0xD6FD5A2E, fdim);
	//REG_FUNC(0x8B6CC137, fdimf);
	//REG_FUNC(0xE6988B7B, fdiml);
	//REG_FUNC(0xD5BD8D5C, _FLog);
	//REG_FUNC(0x22BB8237, floor);
	//REG_FUNC(0xCD7C05BD, floorf);
	//REG_FUNC(0xFDFA4558, floorl);
	//REG_FUNC(0x1EACA585, fma);
	//REG_FUNC(0xB61672A7, fmaf);
	//REG_FUNC(0xBCF6EA7C, fmal);
	//REG_FUNC(0xBE30CC1E, fmax);
	//REG_FUNC(0x7004FA75, fmaxf);
	//REG_FUNC(0xBF5AF69E, fmaxl);
	//REG_FUNC(0x2ABBDFF7, fmin);
	//REG_FUNC(0x7673CC1E, fminf);
	//REG_FUNC(0xE2F5A0F0, fminl);
	//REG_FUNC(0x798587E4, fmod);
	//REG_FUNC(0x1CD8F88E, fmodf);
	//REG_FUNC(0x986011B4, fmodl);
	//REG_FUNC(0x59197427, frexp);
	//REG_FUNC(0x0A6879AC, frexpf);
	//REG_FUNC(0x6DC8D877, frexpl);
	//REG_FUNC(0x4A496BC0, _FSin);
	//REG_FUNC(0x7FBB4C55, _FSinh);
	//REG_FUNC(0x2D2CD795, hypot);
	//REG_FUNC(0xA397B929, hypotf);
	//REG_FUNC(0x05BFBEE8, hypotl);
	//REG_FUNC(0x667EE864, ilogb);
	//REG_FUNC(0x80050A43, ilogbf);
	//REG_FUNC(0x91298DCA, ilogbl);
	//REG_FUNC(0x0197C9D5, _LCosh);
	//REG_FUNC(0x0056061B, ldexp);
	//REG_FUNC(0x0E61E016, ldexpf);
	//REG_FUNC(0x8280A7B1, ldexpl);
	//REG_FUNC(0x2480AA54, lgamma);
	//REG_FUNC(0x2D9556D5, lgammaf);
	//REG_FUNC(0xADEBD201, lgammal);
	//REG_FUNC(0x5B05329D, _LLog);
	//REG_FUNC(0x7B41AC38, llrint);
	//REG_FUNC(0xC1F6135B, llrintf);
	//REG_FUNC(0x80558247, llrintl);
	//REG_FUNC(0xD1251A18, llround);
	//REG_FUNC(0x04595A04, llroundf);
	//REG_FUNC(0x9AB5C7AF, llroundl);
	//REG_FUNC(0x6037C48F, log);
	//REG_FUNC(0x811ED68B, logf);
	//REG_FUNC(0xC6FFBCD6, logl);
	//REG_FUNC(0x67E99979, _Log);
	//REG_FUNC(0x2CBE04D7, log1p);
	//REG_FUNC(0xF1D7C851, log1pf);
	//REG_FUNC(0x3359152C, log1pl);
	//REG_FUNC(0xCF65F098, log10);
	//REG_FUNC(0xFD2A3464, log10f);
	//REG_FUNC(0x3D7E7201, log10l);
	//REG_FUNC(0x73AFEE5F, log2);
	//REG_FUNC(0x4095DBDB, log2f);
	//REG_FUNC(0x720021A9, log2l);
	//REG_FUNC(0x5EAE8AD4, logb);
	//REG_FUNC(0x025F51CE, logbf);
	//REG_FUNC(0x86C4B75F, logbl);
	//REG_FUNC(0x207307D0, lrint);
	//REG_FUNC(0xDA903135, lrintf);
	//REG_FUNC(0xE8C1F6F8, lrintl);
	//REG_FUNC(0xD35AFD56, lround);
	//REG_FUNC(0xA24C6453, lroundf);
	//REG_FUNC(0x8B3ACA4E, lroundl);
	//REG_FUNC(0xB397FE83, _LSin);
	//REG_FUNC(0xF247EE99, _LSinh);
	//REG_FUNC(0x1167B5D2, modf);
	//REG_FUNC(0x5D7A7EB2, modff);
	//REG_FUNC(0xD41D68F2, modfl);
	//REG_FUNC(0xC3FCA1FA, nan);
	//REG_FUNC(0xB4761D24, nanf);
	//REG_FUNC(0xBFA96D93, nanl);
	//REG_FUNC(0x877187C4, nearbyint);
	//REG_FUNC(0xD56E78F6, nearbyintf);
	//REG_FUNC(0x8DD794DC, nearbyintl);
	//REG_FUNC(0xE1A3D449, nextafter);
	//REG_FUNC(0xC8A94A33, nextafterf);
	//REG_FUNC(0xEAAB2055, nextafterl);
	//REG_FUNC(0x39E605E6, nexttoward);
	//REG_FUNC(0xDD652D4E, nexttowardf);
	//REG_FUNC(0x41E6AEA4, nexttowardl);
	//REG_FUNC(0x640DB443, pow);
	//REG_FUNC(0x6DEA815A, powf);
	//REG_FUNC(0x96328F3D, powl);
	//REG_FUNC(0xE4D6117F, remainder);
	//REG_FUNC(0xE6BB3DCF, remainderf);
	//REG_FUNC(0x354E568E, remainderl);
	//REG_FUNC(0x52337926, remquo);
	//REG_FUNC(0xD8F6B5D3, remquof);
	//REG_FUNC(0xBB353F24, remquol);
	//REG_FUNC(0x943F218F, rint);
	//REG_FUNC(0xCACE5A19, rintf);
	//REG_FUNC(0xE3C097E0, rintl);
	//REG_FUNC(0x64D37996, round);
	//REG_FUNC(0xAAF31896, roundf);
	//REG_FUNC(0x9AB1B1B1, roundl);
	//REG_FUNC(0x8F8CF628, scalbln);
	//REG_FUNC(0xDEB0A2D0, scalblnf);
	//REG_FUNC(0x2113921E, scalblnl);
	//REG_FUNC(0x569758D0, scalbn);
	//REG_FUNC(0x78F70588, scalbnf);
	//REG_FUNC(0x777C7463, scalbnl);
	//REG_FUNC(0xB5519FF0, sin);
	//REG_FUNC(0x7F00B590, sinf);
	//REG_FUNC(0x3294447C, sinl);
	//REG_FUNC(0xD92A7F85, _Sin);
	//REG_FUNC(0xF2C0AF49, sinh);
	//REG_FUNC(0xB5838E7D, sinhf);
	//REG_FUNC(0x4B91F2E6, sinhl);
	//REG_FUNC(0x40E42E8E, _Sinh);
	//REG_FUNC(0xDA227FCC, sqrt);
	//REG_FUNC(0xBA3F6937, sqrtf);
	//REG_FUNC(0xC1343477, sqrtl);
	//REG_FUNC(0x5BAE40B0, tan);
	//REG_FUNC(0xA98E941B, tanf);
	//REG_FUNC(0x26CD78CA, tanh);
	//REG_FUNC(0xC4847578, tanhf);
	//REG_FUNC(0x14F2BEA1, tanhl);
	//REG_FUNC(0xDC742A5E, tanl);
	//REG_FUNC(0x3A7FE686, tgamma);
	//REG_FUNC(0xE6067AC0, tgammaf);
	//REG_FUNC(0x2949109F, tgammal);
	//REG_FUNC(0x0212323E, trunc);
	//REG_FUNC(0x090B899F, truncf);
	//REG_FUNC(0xBC0F1B1A, truncl);
	//REG_FUNC(0x98BBDAE0, _Dclass);
	//REG_FUNC(0xBD8EF217, _FDclass);
	//REG_FUNC(0x314CCE54, _LDclass);
	//REG_FUNC(0xC5B9C8D8, _FDtest);
	//REG_FUNC(0x27A55170, _Dtest);
	//REG_FUNC(0x8DAE8767, _LDtest);
	//REG_FUNC(0x622CBFEE, _Fpcomp);
	//REG_FUNC(0x9CD4CEFE, _FFpcomp);
	//REG_FUNC(0x18F43CD0, _LFpcomp);
	//REG_FUNC(0x5BD0F71C, _Dsign);
	//REG_FUNC(0xC4F7E42C, _FDsign);
	//REG_FUNC(0x1DF73D2B, _LDsign);
});
