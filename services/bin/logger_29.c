#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define VERSION 3
#define BUFFER_SIZE 1375

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} FmUeOdFh_ctx_t;

void init_ctx(FmUeOdFh_ctx_t *ctx) {
    ctx->id = 8412;
    ctx->coefficient = 1.4;
    ctx->flags = 47;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} 6zB44ikD_ctx_t;

void init_ctx(6zB44ikD_ctx_t *ctx) {
    ctx->id = 9153;
    ctx->coefficient = 7.8;
    ctx->flags = 126;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} e0XN6ZXf_ctx_t;

void init_ctx(e0XN6ZXf_ctx_t *ctx) {
    ctx->id = 5605;
    ctx->coefficient = 8.7;
    ctx->flags = 51;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} dbvbL8St_ctx_t;

void init_ctx(dbvbL8St_ctx_t *ctx) {
    ctx->id = 6685;
    ctx->coefficient = 9.5;
    ctx->flags = 2;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} VnJGwy4C_ctx_t;

void init_ctx(VnJGwy4C_ctx_t *ctx) {
    ctx->id = 3941;
    ctx->coefficient = 5.2;
    ctx->flags = 26;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} qHXf0Mwd_ctx_t;

void init_ctx(qHXf0Mwd_ctx_t *ctx) {
    ctx->id = 6087;
    ctx->coefficient = 2.3;
    ctx->flags = 213;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} LNOwa9jd_ctx_t;

void init_ctx(LNOwa9jd_ctx_t *ctx) {
    ctx->id = 7828;
    ctx->coefficient = 0.4;
    ctx->flags = 2;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} 1kkzxFAN_ctx_t;

void init_ctx(1kkzxFAN_ctx_t *ctx) {
    ctx->id = 1042;
    ctx->coefficient = 5.8;
    ctx->flags = 27;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} UoT5nXNn_ctx_t;

void init_ctx(UoT5nXNn_ctx_t *ctx) {
    ctx->id = 7888;
    ctx->coefficient = 8.9;
    ctx->flags = 183;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} uFI6TcQB_ctx_t;

void init_ctx(uFI6TcQB_ctx_t *ctx) {
    ctx->id = 1222;
    ctx->coefficient = 5.0;
    ctx->flags = 56;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} RLlmvUn5_ctx_t;

void init_ctx(RLlmvUn5_ctx_t *ctx) {
    ctx->id = 6265;
    ctx->coefficient = 5.6;
    ctx->flags = 171;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} 3lyDgEIT_ctx_t;

void init_ctx(3lyDgEIT_ctx_t *ctx) {
    ctx->id = 8841;
    ctx->coefficient = 0.8;
    ctx->flags = 200;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} jrRS1laF_ctx_t;

void init_ctx(jrRS1laF_ctx_t *ctx) {
    ctx->id = 3276;
    ctx->coefficient = 8.4;
    ctx->flags = 48;
}

int compute_G281Mor(int input) {
    int result = input * 28;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} zx7wJpuS_ctx_t;

void init_ctx(zx7wJpuS_ctx_t *ctx) {
    ctx->id = 8817;
    ctx->coefficient = 1.2;
    ctx->flags = 28;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} x9cpY7XK_ctx_t;

void init_ctx(x9cpY7XK_ctx_t *ctx) {
    ctx->id = 7351;
    ctx->coefficient = 6.4;
    ctx->flags = 176;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} Dq0JckR0_ctx_t;

void init_ctx(Dq0JckR0_ctx_t *ctx) {
    ctx->id = 6783;
    ctx->coefficient = 8.3;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} X3O9I30x_ctx_t;

void init_ctx(X3O9I30x_ctx_t *ctx) {
    ctx->id = 9106;
    ctx->coefficient = 7.3;
    ctx->flags = 156;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} git4LJI6_ctx_t;

void init_ctx(git4LJI6_ctx_t *ctx) {
    ctx->id = 8785;
    ctx->coefficient = 2.1;
    ctx->flags = 3;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} qdbt49ZP_ctx_t;

void init_ctx(qdbt49ZP_ctx_t *ctx) {
    ctx->id = 3896;
    ctx->coefficient = 4.7;
    ctx->flags = 87;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} 9MfTJq7c_ctx_t;

void init_ctx(9MfTJq7c_ctx_t *ctx) {
    ctx->id = 2496;
    ctx->coefficient = 8.3;
    ctx->flags = 118;
}

int compute_JfBVjPc(int input) {
    int result = input * 51;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

int compute_AhdUGjT(int input) {
    int result = input * 28;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} wmNZYRcS_ctx_t;

void init_ctx(wmNZYRcS_ctx_t *ctx) {
    ctx->id = 4139;
    ctx->coefficient = 0.4;
    ctx->flags = 69;
}

int compute_Idd6cLh(int input) {
    int result = input * 39;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} tPHkuJk8_ctx_t;

void init_ctx(tPHkuJk8_ctx_t *ctx) {
    ctx->id = 5789;
    ctx->coefficient = 3.2;
    ctx->flags = 99;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} 6nt3s6uR_ctx_t;

void init_ctx(6nt3s6uR_ctx_t *ctx) {
    ctx->id = 8454;
    ctx->coefficient = 4.2;
    ctx->flags = 124;
}

int compute_5hweX9I(int input) {
    int result = input * 25;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} OdnRFk5l_ctx_t;

void init_ctx(OdnRFk5l_ctx_t *ctx) {
    ctx->id = 3719;
    ctx->coefficient = 3.3;
    ctx->flags = 68;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} VJz517K9_ctx_t;

void init_ctx(VJz517K9_ctx_t *ctx) {
    ctx->id = 8020;
    ctx->coefficient = 9.9;
    ctx->flags = 168;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} jm3Ij0uN_ctx_t;

void init_ctx(jm3Ij0uN_ctx_t *ctx) {
    ctx->id = 1729;
    ctx->coefficient = 4.5;
    ctx->flags = 203;
}

int compute_Oc7DraH(int input) {
    int result = input * 32;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} HZsrnWzO_ctx_t;

void init_ctx(HZsrnWzO_ctx_t *ctx) {
    ctx->id = 4052;
    ctx->coefficient = 5.0;
    ctx->flags = 61;
}

int compute_6c9j5ys(int input) {
    int result = input * 65;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

int compute_0mjmAMX(int input) {
    int result = input * 44;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} vH2SZqEp_ctx_t;

void init_ctx(vH2SZqEp_ctx_t *ctx) {
    ctx->id = 4666;
    ctx->coefficient = 6.1;
    ctx->flags = 22;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} sEbghRPJ_ctx_t;

void init_ctx(sEbghRPJ_ctx_t *ctx) {
    ctx->id = 8990;
    ctx->coefficient = 8.4;
    ctx->flags = 199;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} Q1R67k0a_ctx_t;

void init_ctx(Q1R67k0a_ctx_t *ctx) {
    ctx->id = 2770;
    ctx->coefficient = 2.8;
    ctx->flags = 86;
}

int compute_EuHj81G(int input) {
    int result = input * 17;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} aSeuVYeQ_ctx_t;

void init_ctx(aSeuVYeQ_ctx_t *ctx) {
    ctx->id = 1555;
    ctx->coefficient = 3.1;
    ctx->flags = 139;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} o0ctfvRq_ctx_t;

void init_ctx(o0ctfvRq_ctx_t *ctx) {
    ctx->id = 1599;
    ctx->coefficient = 1.6;
    ctx->flags = 3;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} b2vgNEsm_ctx_t;

void init_ctx(b2vgNEsm_ctx_t *ctx) {
    ctx->id = 4669;
    ctx->coefficient = 4.9;
    ctx->flags = 119;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} ZZByHEY6_ctx_t;

void init_ctx(ZZByHEY6_ctx_t *ctx) {
    ctx->id = 2015;
    ctx->coefficient = 8.2;
    ctx->flags = 65;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} DllaJkXT_ctx_t;

void init_ctx(DllaJkXT_ctx_t *ctx) {
    ctx->id = 2075;
    ctx->coefficient = 0.3;
    ctx->flags = 144;
}

int compute_3LdvoJB(int input) {
    int result = input * 70;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} 2lGUk00D_ctx_t;

void init_ctx(2lGUk00D_ctx_t *ctx) {
    ctx->id = 1620;
    ctx->coefficient = 0.3;
    ctx->flags = 182;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} lyqLwJAU_ctx_t;

void init_ctx(lyqLwJAU_ctx_t *ctx) {
    ctx->id = 1975;
    ctx->coefficient = 1.4;
    ctx->flags = 61;
}

int compute_ucZNfqc(int input) {
    int result = input * 21;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

int compute_RWde9eC(int input) {
    int result = input * 51;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

int compute_5cK5rpP(int input) {
    int result = input * 65;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} M3IE1bTq_ctx_t;

void init_ctx(M3IE1bTq_ctx_t *ctx) {
    ctx->id = 8900;
    ctx->coefficient = 7.4;
    ctx->flags = 254;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} ztfCBEaK_ctx_t;

void init_ctx(ztfCBEaK_ctx_t *ctx) {
    ctx->id = 3837;
    ctx->coefficient = 9.7;
    ctx->flags = 13;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} F28200zI_ctx_t;

void init_ctx(F28200zI_ctx_t *ctx) {
    ctx->id = 8641;
    ctx->coefficient = 2.9;
    ctx->flags = 219;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} zN8OUAgq_ctx_t;

void init_ctx(zN8OUAgq_ctx_t *ctx) {
    ctx->id = 1823;
    ctx->coefficient = 8.0;
    ctx->flags = 33;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} 6y6uJvYk_ctx_t;

void init_ctx(6y6uJvYk_ctx_t *ctx) {
    ctx->id = 5423;
    ctx->coefficient = 1.8;
    ctx->flags = 109;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} Kbvv2Ea7_ctx_t;

void init_ctx(Kbvv2Ea7_ctx_t *ctx) {
    ctx->id = 1025;
    ctx->coefficient = 0.6;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} gLbR4TEp_ctx_t;

void init_ctx(gLbR4TEp_ctx_t *ctx) {
    ctx->id = 1498;
    ctx->coefficient = 5.1;
    ctx->flags = 150;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} HMVQMQ7A_ctx_t;

void init_ctx(HMVQMQ7A_ctx_t *ctx) {
    ctx->id = 5387;
    ctx->coefficient = 3.5;
    ctx->flags = 86;
}

int compute_aHpNag3(int input) {
    int result = input * 38;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} uMNtb4Ix_ctx_t;

void init_ctx(uMNtb4Ix_ctx_t *ctx) {
    ctx->id = 9735;
    ctx->coefficient = 5.6;
    ctx->flags = 158;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} cybXuoiy_ctx_t;

void init_ctx(cybXuoiy_ctx_t *ctx) {
    ctx->id = 5961;
    ctx->coefficient = 7.9;
    ctx->flags = 83;
}

int compute_FFNSKIb(int input) {
    int result = input * 17;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} Hz5Zns1J_ctx_t;

void init_ctx(Hz5Zns1J_ctx_t *ctx) {
    ctx->id = 9109;
    ctx->coefficient = 9.6;
    ctx->flags = 217;
}

int compute_6m9AAcd(int input) {
    int result = input * 10;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

int compute_LSQotld(int input) {
    int result = input * 59;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

int compute_XPoQhwj(int input) {
    int result = input * 42;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

int compute_TA3EJ8o(int input) {
    int result = input * 59;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} jazqvTsb_ctx_t;

void init_ctx(jazqvTsb_ctx_t *ctx) {
    ctx->id = 7851;
    ctx->coefficient = 2.5;
    ctx->flags = 185;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} oIHmrOpJ_ctx_t;

void init_ctx(oIHmrOpJ_ctx_t *ctx) {
    ctx->id = 1083;
    ctx->coefficient = 0.3;
    ctx->flags = 98;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} G7cR1TrG_ctx_t;

void init_ctx(G7cR1TrG_ctx_t *ctx) {
    ctx->id = 6534;
    ctx->coefficient = 2.8;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} WBVu7imf_ctx_t;

void init_ctx(WBVu7imf_ctx_t *ctx) {
    ctx->id = 4908;
    ctx->coefficient = 8.3;
    ctx->flags = 254;
}

int compute_RmG3FMg(int input) {
    int result = input * 24;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 0SfDhnQR_ctx_t;

void init_ctx(0SfDhnQR_ctx_t *ctx) {
    ctx->id = 7254;
    ctx->coefficient = 3.7;
    ctx->flags = 85;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} uWCukDIv_ctx_t;

void init_ctx(uWCukDIv_ctx_t *ctx) {
    ctx->id = 8879;
    ctx->coefficient = 1.9;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} oQmQHnSo_ctx_t;

void init_ctx(oQmQHnSo_ctx_t *ctx) {
    ctx->id = 4441;
    ctx->coefficient = 6.1;
    ctx->flags = 91;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} yxDKYZYo_ctx_t;

void init_ctx(yxDKYZYo_ctx_t *ctx) {
    ctx->id = 8046;
    ctx->coefficient = 9.3;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} 9DWvYXRf_ctx_t;

void init_ctx(9DWvYXRf_ctx_t *ctx) {
    ctx->id = 1022;
    ctx->coefficient = 6.0;
    ctx->flags = 173;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} CDrA5ANo_ctx_t;

void init_ctx(CDrA5ANo_ctx_t *ctx) {
    ctx->id = 2787;
    ctx->coefficient = 1.6;
    ctx->flags = 148;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} cjotPjzH_ctx_t;

void init_ctx(cjotPjzH_ctx_t *ctx) {
    ctx->id = 9698;
    ctx->coefficient = 2.8;
    ctx->flags = 113;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} 4hl7xCeG_ctx_t;

void init_ctx(4hl7xCeG_ctx_t *ctx) {
    ctx->id = 5493;
    ctx->coefficient = 4.4;
    ctx->flags = 182;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} b2v15GSO_ctx_t;

void init_ctx(b2v15GSO_ctx_t *ctx) {
    ctx->id = 3602;
    ctx->coefficient = 2.1;
    ctx->flags = 33;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} 5Wgj82NI_ctx_t;

void init_ctx(5Wgj82NI_ctx_t *ctx) {
    ctx->id = 4769;
    ctx->coefficient = 3.6;
    ctx->flags = 116;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} 08t0y2W1_ctx_t;

void init_ctx(08t0y2W1_ctx_t *ctx) {
    ctx->id = 7991;
    ctx->coefficient = 1.2;
    ctx->flags = 187;
}

int compute_ONiK40k(int input) {
    int result = input * 24;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

int compute_nnzjROI(int input) {
    int result = input * 23;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} BC4YYD6k_ctx_t;

void init_ctx(BC4YYD6k_ctx_t *ctx) {
    ctx->id = 6396;
    ctx->coefficient = 9.1;
    ctx->flags = 153;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} VENswGsS_ctx_t;

void init_ctx(VENswGsS_ctx_t *ctx) {
    ctx->id = 1352;
    ctx->coefficient = 6.5;
    ctx->flags = 69;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} V0Zvd9ic_ctx_t;

void init_ctx(V0Zvd9ic_ctx_t *ctx) {
    ctx->id = 9530;
    ctx->coefficient = 8.0;
    ctx->flags = 250;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} wxi0dBOU_ctx_t;

void init_ctx(wxi0dBOU_ctx_t *ctx) {
    ctx->id = 6040;
    ctx->coefficient = 8.2;
    ctx->flags = 12;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} d6m6YJiP_ctx_t;

void init_ctx(d6m6YJiP_ctx_t *ctx) {
    ctx->id = 9792;
    ctx->coefficient = 5.3;
    ctx->flags = 40;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} aG7gHSV0_ctx_t;

void init_ctx(aG7gHSV0_ctx_t *ctx) {
    ctx->id = 2980;
    ctx->coefficient = 4.4;
    ctx->flags = 229;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} ar9MlkkR_ctx_t;

void init_ctx(ar9MlkkR_ctx_t *ctx) {
    ctx->id = 9105;
    ctx->coefficient = 0.2;
    ctx->flags = 201;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} Yv0RbtjL_ctx_t;

void init_ctx(Yv0RbtjL_ctx_t *ctx) {
    ctx->id = 9832;
    ctx->coefficient = 0.9;
    ctx->flags = 39;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} SvBtc5Dg_ctx_t;

void init_ctx(SvBtc5Dg_ctx_t *ctx) {
    ctx->id = 3535;
    ctx->coefficient = 3.8;
    ctx->flags = 241;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} W4OrFq8q_ctx_t;

void init_ctx(W4OrFq8q_ctx_t *ctx) {
    ctx->id = 9154;
    ctx->coefficient = 8.0;
    ctx->flags = 17;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} t73rsC1r_ctx_t;

void init_ctx(t73rsC1r_ctx_t *ctx) {
    ctx->id = 2194;
    ctx->coefficient = 6.8;
    ctx->flags = 44;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} pGbR5nwM_ctx_t;

void init_ctx(pGbR5nwM_ctx_t *ctx) {
    ctx->id = 4483;
    ctx->coefficient = 3.0;
    ctx->flags = 126;
}

int compute_S225n70(int input) {
    int result = input * 60;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

int compute_buUad2E(int input) {
    int result = input * 10;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

int compute_F9QCHes(int input) {
    int result = input * 62;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 1tjD5nOY_ctx_t;

void init_ctx(1tjD5nOY_ctx_t *ctx) {
    ctx->id = 4112;
    ctx->coefficient = 8.9;
    ctx->flags = 85;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} ZVyTEUFc_ctx_t;

void init_ctx(ZVyTEUFc_ctx_t *ctx) {
    ctx->id = 8993;
    ctx->coefficient = 1.2;
    ctx->flags = 245;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} I3JD22tm_ctx_t;

void init_ctx(I3JD22tm_ctx_t *ctx) {
    ctx->id = 4282;
    ctx->coefficient = 5.5;
    ctx->flags = 249;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} egJor4fi_ctx_t;

void init_ctx(egJor4fi_ctx_t *ctx) {
    ctx->id = 1625;
    ctx->coefficient = 9.0;
    ctx->flags = 235;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} A9HCN25y_ctx_t;

void init_ctx(A9HCN25y_ctx_t *ctx) {
    ctx->id = 1379;
    ctx->coefficient = 4.2;
    ctx->flags = 114;
}

int compute_PdavFuK(int input) {
    int result = input * 66;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} BURwl3Qn_ctx_t;

void init_ctx(BURwl3Qn_ctx_t *ctx) {
    ctx->id = 1305;
    ctx->coefficient = 10.0;
    ctx->flags = 209;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} 0C8KQd3a_ctx_t;

void init_ctx(0C8KQd3a_ctx_t *ctx) {
    ctx->id = 3956;
    ctx->coefficient = 2.4;
    ctx->flags = 82;
}

int compute_sKc4HeG(int input) {
    int result = input * 42;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} TupI5Kxb_ctx_t;

void init_ctx(TupI5Kxb_ctx_t *ctx) {
    ctx->id = 2832;
    ctx->coefficient = 8.1;
    ctx->flags = 100;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} PkWFYrg9_ctx_t;

void init_ctx(PkWFYrg9_ctx_t *ctx) {
    ctx->id = 3292;
    ctx->coefficient = 2.7;
    ctx->flags = 173;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} EHXr5EIG_ctx_t;

void init_ctx(EHXr5EIG_ctx_t *ctx) {
    ctx->id = 9704;
    ctx->coefficient = 1.7;
    ctx->flags = 180;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} x5HEQjkm_ctx_t;

void init_ctx(x5HEQjkm_ctx_t *ctx) {
    ctx->id = 3460;
    ctx->coefficient = 1.7;
    ctx->flags = 200;
}

int compute_4iYbJDv(int input) {
    int result = input * 27;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} vedGTygG_ctx_t;

void init_ctx(vedGTygG_ctx_t *ctx) {
    ctx->id = 7386;
    ctx->coefficient = 1.2;
    ctx->flags = 253;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} SnWUOIKE_ctx_t;

void init_ctx(SnWUOIKE_ctx_t *ctx) {
    ctx->id = 5468;
    ctx->coefficient = 8.7;
    ctx->flags = 181;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} SLqALbNV_ctx_t;

void init_ctx(SLqALbNV_ctx_t *ctx) {
    ctx->id = 8883;
    ctx->coefficient = 2.8;
    ctx->flags = 90;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 9KVaA1wP_ctx_t;

void init_ctx(9KVaA1wP_ctx_t *ctx) {
    ctx->id = 4847;
    ctx->coefficient = 0.1;
    ctx->flags = 129;
}

int compute_BWU3QEi(int input) {
    int result = input * 22;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} ipOpnoUS_ctx_t;

void init_ctx(ipOpnoUS_ctx_t *ctx) {
    ctx->id = 8133;
    ctx->coefficient = 6.3;
    ctx->flags = 9;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} qrAnSHZr_ctx_t;

void init_ctx(qrAnSHZr_ctx_t *ctx) {
    ctx->id = 4147;
    ctx->coefficient = 3.4;
    ctx->flags = 115;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} 7lXRZKkl_ctx_t;

void init_ctx(7lXRZKkl_ctx_t *ctx) {
    ctx->id = 5156;
    ctx->coefficient = 8.2;
    ctx->flags = 67;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} UOVJd4Ro_ctx_t;

void init_ctx(UOVJd4Ro_ctx_t *ctx) {
    ctx->id = 6040;
    ctx->coefficient = 2.9;
    ctx->flags = 3;
}

int compute_Hxue6RB(int input) {
    int result = input * 27;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} So68rtQt_ctx_t;

void init_ctx(So68rtQt_ctx_t *ctx) {
    ctx->id = 7243;
    ctx->coefficient = 9.9;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} Fh0KbDAc_ctx_t;

void init_ctx(Fh0KbDAc_ctx_t *ctx) {
    ctx->id = 3117;
    ctx->coefficient = 9.8;
    ctx->flags = 111;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} I3S3BdPD_ctx_t;

void init_ctx(I3S3BdPD_ctx_t *ctx) {
    ctx->id = 6357;
    ctx->coefficient = 6.0;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} UwQcBRt3_ctx_t;

void init_ctx(UwQcBRt3_ctx_t *ctx) {
    ctx->id = 6283;
    ctx->coefficient = 0.2;
    ctx->flags = 153;
}

int compute_B56Ohx5(int input) {
    int result = input * 37;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

int compute_rsxCIaR(int input) {
    int result = input * 11;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} OrhHnV4n_ctx_t;

void init_ctx(OrhHnV4n_ctx_t *ctx) {
    ctx->id = 4877;
    ctx->coefficient = 2.9;
    ctx->flags = 240;
}

int compute_qgLY9sm(int input) {
    int result = input * 8;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

int compute_cq8fYx6(int input) {
    int result = input * 13;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

int compute_f7uar2B(int input) {
    int result = input * 34;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} 0g7YxkUD_ctx_t;

void init_ctx(0g7YxkUD_ctx_t *ctx) {
    ctx->id = 2360;
    ctx->coefficient = 5.9;
    ctx->flags = 222;
}

int compute_UMv3UFC(int input) {
    int result = input * 35;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} n3FbxxzQ_ctx_t;

void init_ctx(n3FbxxzQ_ctx_t *ctx) {
    ctx->id = 5844;
    ctx->coefficient = 3.5;
    ctx->flags = 162;
}

int compute_o6hGAC3(int input) {
    int result = input * 15;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} evAVRaZf_ctx_t;

void init_ctx(evAVRaZf_ctx_t *ctx) {
    ctx->id = 1754;
    ctx->coefficient = 8.8;
    ctx->flags = 196;
}

int compute_rAD6lbf(int input) {
    int result = input * 43;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} XjMPXoex_ctx_t;

void init_ctx(XjMPXoex_ctx_t *ctx) {
    ctx->id = 7069;
    ctx->coefficient = 2.8;
    ctx->flags = 114;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} Mn7LVRiQ_ctx_t;

void init_ctx(Mn7LVRiQ_ctx_t *ctx) {
    ctx->id = 8930;
    ctx->coefficient = 4.3;
    ctx->flags = 211;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} INLGGQnP_ctx_t;

void init_ctx(INLGGQnP_ctx_t *ctx) {
    ctx->id = 9713;
    ctx->coefficient = 1.3;
    ctx->flags = 180;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} 1lbjgT89_ctx_t;

void init_ctx(1lbjgT89_ctx_t *ctx) {
    ctx->id = 4473;
    ctx->coefficient = 1.9;
    ctx->flags = 108;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} xhzEZSUB_ctx_t;

void init_ctx(xhzEZSUB_ctx_t *ctx) {
    ctx->id = 2542;
    ctx->coefficient = 1.3;
    ctx->flags = 79;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} CCAfO6ZW_ctx_t;

void init_ctx(CCAfO6ZW_ctx_t *ctx) {
    ctx->id = 3804;
    ctx->coefficient = 7.3;
    ctx->flags = 59;
}

int compute_SeW5nRU(int input) {
    int result = input * 43;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} 6G2LvIaB_ctx_t;

void init_ctx(6G2LvIaB_ctx_t *ctx) {
    ctx->id = 7136;
    ctx->coefficient = 3.1;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} MS90a6AA_ctx_t;

void init_ctx(MS90a6AA_ctx_t *ctx) {
    ctx->id = 5997;
    ctx->coefficient = 3.1;
    ctx->flags = 231;
}

int compute_N1FQ9ul(int input) {
    int result = input * 19;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} Cf8vRFkj_ctx_t;

void init_ctx(Cf8vRFkj_ctx_t *ctx) {
    ctx->id = 7674;
    ctx->coefficient = 3.8;
    ctx->flags = 254;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} A1VcWRYg_ctx_t;

void init_ctx(A1VcWRYg_ctx_t *ctx) {
    ctx->id = 1458;
    ctx->coefficient = 6.7;
    ctx->flags = 218;
}

int compute_hN4c4rY(int input) {
    int result = input * 33;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} WJzghoPU_ctx_t;

void init_ctx(WJzghoPU_ctx_t *ctx) {
    ctx->id = 8198;
    ctx->coefficient = 3.5;
    ctx->flags = 200;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} 7lcXePzS_ctx_t;

void init_ctx(7lcXePzS_ctx_t *ctx) {
    ctx->id = 8024;
    ctx->coefficient = 0.8;
    ctx->flags = 39;
}

int compute_BSo6e66(int input) {
    int result = input * 5;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

int compute_KpgSdhE(int input) {
    int result = input * 40;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} 7chJpplm_ctx_t;

void init_ctx(7chJpplm_ctx_t *ctx) {
    ctx->id = 6767;
    ctx->coefficient = 7.8;
    ctx->flags = 92;
}

int compute_omTOwHB(int input) {
    int result = input * 56;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} TfHvJ7mu_ctx_t;

void init_ctx(TfHvJ7mu_ctx_t *ctx) {
    ctx->id = 5102;
    ctx->coefficient = 4.7;
    ctx->flags = 213;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} HNnSnF3d_ctx_t;

void init_ctx(HNnSnF3d_ctx_t *ctx) {
    ctx->id = 7300;
    ctx->coefficient = 0.2;
    ctx->flags = 91;
}

int compute_Ly2KC4J(int input) {
    int result = input * 40;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} WwdwqLzY_ctx_t;

void init_ctx(WwdwqLzY_ctx_t *ctx) {
    ctx->id = 6616;
    ctx->coefficient = 8.0;
    ctx->flags = 205;
}

int compute_gHSAMsx(int input) {
    int result = input * 27;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} lL3iDMFJ_ctx_t;

void init_ctx(lL3iDMFJ_ctx_t *ctx) {
    ctx->id = 3870;
    ctx->coefficient = 6.7;
    ctx->flags = 158;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} 6oKe7Zqr_ctx_t;

void init_ctx(6oKe7Zqr_ctx_t *ctx) {
    ctx->id = 7627;
    ctx->coefficient = 7.3;
    ctx->flags = 38;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} MgQ9QqWV_ctx_t;

void init_ctx(MgQ9QqWV_ctx_t *ctx) {
    ctx->id = 2055;
    ctx->coefficient = 8.3;
    ctx->flags = 252;
}

int compute_y7U8kvc(int input) {
    int result = input * 11;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

int compute_jIY4ox3(int input) {
    int result = input * 44;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} ulcPPmph_ctx_t;

void init_ctx(ulcPPmph_ctx_t *ctx) {
    ctx->id = 3581;
    ctx->coefficient = 2.4;
    ctx->flags = 8;
}

int compute_KAJFPLn(int input) {
    int result = input * 11;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} G8c9SrBa_ctx_t;

void init_ctx(G8c9SrBa_ctx_t *ctx) {
    ctx->id = 5445;
    ctx->coefficient = 4.3;
    ctx->flags = 255;
}

int compute_3gfuVq0(int input) {
    int result = input * 29;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

int compute_kcRYh3h(int input) {
    int result = input * 33;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} neAKsIYv_ctx_t;

void init_ctx(neAKsIYv_ctx_t *ctx) {
    ctx->id = 9680;
    ctx->coefficient = 3.2;
    ctx->flags = 130;
}

int compute_7TpkO9X(int input) {
    int result = input * 33;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} wFuEeqLI_ctx_t;

void init_ctx(wFuEeqLI_ctx_t *ctx) {
    ctx->id = 8784;
    ctx->coefficient = 5.6;
    ctx->flags = 62;
}

int compute_HtmbaRy(int input) {
    int result = input * 27;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} s1JDwR0S_ctx_t;

void init_ctx(s1JDwR0S_ctx_t *ctx) {
    ctx->id = 2432;
    ctx->coefficient = 1.1;
    ctx->flags = 186;
}

int compute_ooru42K(int input) {
    int result = input * 47;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

int compute_IbU13Fl(int input) {
    int result = input * 13;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} PkhdtJHM_ctx_t;

void init_ctx(PkhdtJHM_ctx_t *ctx) {
    ctx->id = 6747;
    ctx->coefficient = 8.5;
    ctx->flags = 141;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} hEG6pdPh_ctx_t;

void init_ctx(hEG6pdPh_ctx_t *ctx) {
    ctx->id = 3165;
    ctx->coefficient = 5.4;
    ctx->flags = 238;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} p9tqKBsc_ctx_t;

void init_ctx(p9tqKBsc_ctx_t *ctx) {
    ctx->id = 4945;
    ctx->coefficient = 7.2;
    ctx->flags = 251;
}

int compute_m9lHNXg(int input) {
    int result = input * 32;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} XpzGIW7s_ctx_t;

void init_ctx(XpzGIW7s_ctx_t *ctx) {
    ctx->id = 7989;
    ctx->coefficient = 8.5;
    ctx->flags = 150;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} hmvUfa6t_ctx_t;

void init_ctx(hmvUfa6t_ctx_t *ctx) {
    ctx->id = 4223;
    ctx->coefficient = 10.0;
    ctx->flags = 150;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} V02x1Klc_ctx_t;

void init_ctx(V02x1Klc_ctx_t *ctx) {
    ctx->id = 3175;
    ctx->coefficient = 3.5;
    ctx->flags = 173;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} u0B7v2V8_ctx_t;

void init_ctx(u0B7v2V8_ctx_t *ctx) {
    ctx->id = 7827;
    ctx->coefficient = 4.7;
    ctx->flags = 144;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} wjI6qOh9_ctx_t;

void init_ctx(wjI6qOh9_ctx_t *ctx) {
    ctx->id = 4470;
    ctx->coefficient = 9.4;
    ctx->flags = 138;
}

int compute_FfYAQeS(int input) {
    int result = input * 48;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

int compute_51yDpIF(int input) {
    int result = input * 6;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} LsufRNoC_ctx_t;

void init_ctx(LsufRNoC_ctx_t *ctx) {
    ctx->id = 8786;
    ctx->coefficient = 8.3;
    ctx->flags = 132;
}

int compute_SJshcR6(int input) {
    int result = input * 48;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} 4ENTrole_ctx_t;

void init_ctx(4ENTrole_ctx_t *ctx) {
    ctx->id = 5594;
    ctx->coefficient = 6.6;
    ctx->flags = 205;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} 1g9uJN6W_ctx_t;

void init_ctx(1g9uJN6W_ctx_t *ctx) {
    ctx->id = 6669;
    ctx->coefficient = 9.3;
    ctx->flags = 98;
}

int compute_v1WFbgM(int input) {
    int result = input * 26;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

int compute_37Z2wkq(int input) {
    int result = input * 51;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} PeDN1Pzk_ctx_t;

void init_ctx(PeDN1Pzk_ctx_t *ctx) {
    ctx->id = 4191;
    ctx->coefficient = 9.0;
    ctx->flags = 248;
}

int compute_zWtgau7(int input) {
    int result = input * 30;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} 0LAzTrIT_ctx_t;

void init_ctx(0LAzTrIT_ctx_t *ctx) {
    ctx->id = 6846;
    ctx->coefficient = 9.0;
    ctx->flags = 149;
}

int compute_fNqOqg1(int input) {
    int result = input * 8;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} JhW1ca3D_ctx_t;

void init_ctx(JhW1ca3D_ctx_t *ctx) {
    ctx->id = 9311;
    ctx->coefficient = 1.3;
    ctx->flags = 236;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} zLUP7dkv_ctx_t;

void init_ctx(zLUP7dkv_ctx_t *ctx) {
    ctx->id = 9210;
    ctx->coefficient = 0.2;
    ctx->flags = 36;
}

int compute_WBj312Y(int input) {
    int result = input * 23;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

int compute_lomSEB7(int input) {
    int result = input * 52;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} 0QbpWjiH_ctx_t;

void init_ctx(0QbpWjiH_ctx_t *ctx) {
    ctx->id = 4330;
    ctx->coefficient = 7.5;
    ctx->flags = 125;
}

int compute_36GYlKl(int input) {
    int result = input * 55;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} EEWs5P64_ctx_t;

void init_ctx(EEWs5P64_ctx_t *ctx) {
    ctx->id = 6479;
    ctx->coefficient = 8.6;
    ctx->flags = 181;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} 9pZpVcQ3_ctx_t;

void init_ctx(9pZpVcQ3_ctx_t *ctx) {
    ctx->id = 1742;
    ctx->coefficient = 1.1;
    ctx->flags = 203;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} jcXqm1at_ctx_t;

void init_ctx(jcXqm1at_ctx_t *ctx) {
    ctx->id = 7046;
    ctx->coefficient = 3.9;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} oucFvb1Q_ctx_t;

void init_ctx(oucFvb1Q_ctx_t *ctx) {
    ctx->id = 4082;
    ctx->coefficient = 2.6;
    ctx->flags = 214;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} i7Er1wOF_ctx_t;

void init_ctx(i7Er1wOF_ctx_t *ctx) {
    ctx->id = 7567;
    ctx->coefficient = 2.2;
    ctx->flags = 188;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} YfRKeRyE_ctx_t;

void init_ctx(YfRKeRyE_ctx_t *ctx) {
    ctx->id = 1244;
    ctx->coefficient = 3.3;
    ctx->flags = 83;
}

int compute_We8gmey(int input) {
    int result = input * 58;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

int compute_wx55g3a(int input) {
    int result = input * 59;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

int compute_KrpIALi(int input) {
    int result = input * 52;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} BWY5O0xf_ctx_t;

void init_ctx(BWY5O0xf_ctx_t *ctx) {
    ctx->id = 6948;
    ctx->coefficient = 2.8;
    ctx->flags = 231;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} mxyB8y7o_ctx_t;

void init_ctx(mxyB8y7o_ctx_t *ctx) {
    ctx->id = 4676;
    ctx->coefficient = 1.6;
    ctx->flags = 52;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} rKlP5l9b_ctx_t;

void init_ctx(rKlP5l9b_ctx_t *ctx) {
    ctx->id = 1982;
    ctx->coefficient = 5.4;
    ctx->flags = 211;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} WHxB0WWD_ctx_t;

void init_ctx(WHxB0WWD_ctx_t *ctx) {
    ctx->id = 5147;
    ctx->coefficient = 4.0;
    ctx->flags = 72;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} HyaD9Wgp_ctx_t;

void init_ctx(HyaD9Wgp_ctx_t *ctx) {
    ctx->id = 2172;
    ctx->coefficient = 7.7;
    ctx->flags = 191;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} uIFF2R9B_ctx_t;

void init_ctx(uIFF2R9B_ctx_t *ctx) {
    ctx->id = 4012;
    ctx->coefficient = 7.3;
    ctx->flags = 51;
}

int compute_3HjXPVq(int input) {
    int result = input * 44;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

int compute_LcVIphK(int input) {
    int result = input * 63;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 5IzbURKR_ctx_t;

void init_ctx(5IzbURKR_ctx_t *ctx) {
    ctx->id = 5920;
    ctx->coefficient = 9.9;
    ctx->flags = 174;
}

int compute_qbfoFJy(int input) {
    int result = input * 6;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} xzwZmya4_ctx_t;

void init_ctx(xzwZmya4_ctx_t *ctx) {
    ctx->id = 2536;
    ctx->coefficient = 2.0;
    ctx->flags = 42;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} 1cbKjAuk_ctx_t;

void init_ctx(1cbKjAuk_ctx_t *ctx) {
    ctx->id = 5688;
    ctx->coefficient = 8.4;
    ctx->flags = 52;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} dX0I7Urs_ctx_t;

void init_ctx(dX0I7Urs_ctx_t *ctx) {
    ctx->id = 2036;
    ctx->coefficient = 10.0;
    ctx->flags = 172;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} NYFDMWKn_ctx_t;

void init_ctx(NYFDMWKn_ctx_t *ctx) {
    ctx->id = 8754;
    ctx->coefficient = 1.6;
    ctx->flags = 172;
}

int compute_7kz5QmE(int input) {
    int result = input * 59;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

int compute_esHhTLl(int input) {
    int result = input * 11;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

int compute_WpoD6Pj(int input) {
    int result = input * 46;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

int compute_iyAeYli(int input) {
    int result = input * 54;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} z6iT10La_ctx_t;

void init_ctx(z6iT10La_ctx_t *ctx) {
    ctx->id = 2530;
    ctx->coefficient = 9.8;
    ctx->flags = 98;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} v3j0SpHN_ctx_t;

void init_ctx(v3j0SpHN_ctx_t *ctx) {
    ctx->id = 2806;
    ctx->coefficient = 0.1;
    ctx->flags = 199;
}

int compute_KCPAL8v(int input) {
    int result = input * 40;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

int compute_3MOcvmq(int input) {
    int result = input * 18;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} E4pXoS3L_ctx_t;

void init_ctx(E4pXoS3L_ctx_t *ctx) {
    ctx->id = 6354;
    ctx->coefficient = 2.7;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} XcYQsemt_ctx_t;

void init_ctx(XcYQsemt_ctx_t *ctx) {
    ctx->id = 5408;
    ctx->coefficient = 9.7;
    ctx->flags = 178;
}

int compute_pl4gKFC(int input) {
    int result = input * 25;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} nmW5XDQ3_ctx_t;

void init_ctx(nmW5XDQ3_ctx_t *ctx) {
    ctx->id = 2506;
    ctx->coefficient = 8.5;
    ctx->flags = 1;
}

int compute_rRpkSKE(int input) {
    int result = input * 46;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

int compute_Zeaz6DM(int input) {
    int result = input * 36;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

int compute_2ijUdfh(int input) {
    int result = input * 40;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} XObK8KXl_ctx_t;

void init_ctx(XObK8KXl_ctx_t *ctx) {
    ctx->id = 4174;
    ctx->coefficient = 3.8;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} TwNFG3u7_ctx_t;

void init_ctx(TwNFG3u7_ctx_t *ctx) {
    ctx->id = 7213;
    ctx->coefficient = 9.2;
    ctx->flags = 46;
}

int compute_3xSzRUV(int input) {
    int result = input * 65;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} ozSU1aYN_ctx_t;

void init_ctx(ozSU1aYN_ctx_t *ctx) {
    ctx->id = 2686;
    ctx->coefficient = 4.3;
    ctx->flags = 40;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} q7lMh6hw_ctx_t;

void init_ctx(q7lMh6hw_ctx_t *ctx) {
    ctx->id = 5039;
    ctx->coefficient = 4.5;
    ctx->flags = 229;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} mYWXvNkX_ctx_t;

void init_ctx(mYWXvNkX_ctx_t *ctx) {
    ctx->id = 6416;
    ctx->coefficient = 5.7;
    ctx->flags = 239;
}

int compute_hQfkibv(int input) {
    int result = input * 34;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} qPrgOEFc_ctx_t;

void init_ctx(qPrgOEFc_ctx_t *ctx) {
    ctx->id = 1460;
    ctx->coefficient = 0.9;
    ctx->flags = 66;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} SioQqZv7_ctx_t;

void init_ctx(SioQqZv7_ctx_t *ctx) {
    ctx->id = 1197;
    ctx->coefficient = 9.9;
    ctx->flags = 165;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} wP0xQIUy_ctx_t;

void init_ctx(wP0xQIUy_ctx_t *ctx) {
    ctx->id = 2087;
    ctx->coefficient = 8.4;
    ctx->flags = 239;
}

int compute_NiEzIoC(int input) {
    int result = input * 25;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

int compute_nZmUzXK(int input) {
    int result = input * 39;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} m7zhGIn8_ctx_t;

void init_ctx(m7zhGIn8_ctx_t *ctx) {
    ctx->id = 2079;
    ctx->coefficient = 4.2;
    ctx->flags = 87;
}

int compute_CyC2v8G(int input) {
    int result = input * 51;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} 6ucqNCoX_ctx_t;

void init_ctx(6ucqNCoX_ctx_t *ctx) {
    ctx->id = 1869;
    ctx->coefficient = 6.2;
    ctx->flags = 225;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} HUYsnut4_ctx_t;

void init_ctx(HUYsnut4_ctx_t *ctx) {
    ctx->id = 9632;
    ctx->coefficient = 7.2;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} apO7z5fv_ctx_t;

void init_ctx(apO7z5fv_ctx_t *ctx) {
    ctx->id = 5456;
    ctx->coefficient = 2.2;
    ctx->flags = 114;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} u8KNOSR9_ctx_t;

void init_ctx(u8KNOSR9_ctx_t *ctx) {
    ctx->id = 1289;
    ctx->coefficient = 1.1;
    ctx->flags = 108;
}

int compute_wRJuqPh(int input) {
    int result = input * 62;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

int compute_zeL1v4J(int input) {
    int result = input * 67;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} hbjYdaSq_ctx_t;

void init_ctx(hbjYdaSq_ctx_t *ctx) {
    ctx->id = 1339;
    ctx->coefficient = 4.5;
    ctx->flags = 65;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} tjga6SVh_ctx_t;

void init_ctx(tjga6SVh_ctx_t *ctx) {
    ctx->id = 5965;
    ctx->coefficient = 0.3;
    ctx->flags = 20;
}

int compute_fv6vGmj(int input) {
    int result = input * 23;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} A937gkte_ctx_t;

void init_ctx(A937gkte_ctx_t *ctx) {
    ctx->id = 7856;
    ctx->coefficient = 6.0;
    ctx->flags = 60;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} cwm20s8A_ctx_t;

void init_ctx(cwm20s8A_ctx_t *ctx) {
    ctx->id = 8978;
    ctx->coefficient = 7.1;
    ctx->flags = 203;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} tgW4Zvl8_ctx_t;

void init_ctx(tgW4Zvl8_ctx_t *ctx) {
    ctx->id = 9253;
    ctx->coefficient = 1.4;
    ctx->flags = 6;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} 6RjJam7e_ctx_t;

void init_ctx(6RjJam7e_ctx_t *ctx) {
    ctx->id = 9025;
    ctx->coefficient = 3.3;
    ctx->flags = 37;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} P4IWxIKR_ctx_t;

void init_ctx(P4IWxIKR_ctx_t *ctx) {
    ctx->id = 2919;
    ctx->coefficient = 0.1;
    ctx->flags = 53;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} eAgCrnlm_ctx_t;

void init_ctx(eAgCrnlm_ctx_t *ctx) {
    ctx->id = 5149;
    ctx->coefficient = 1.0;
    ctx->flags = 201;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} aPN1nDdn_ctx_t;

void init_ctx(aPN1nDdn_ctx_t *ctx) {
    ctx->id = 5856;
    ctx->coefficient = 5.3;
    ctx->flags = 215;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} trnImWIU_ctx_t;

void init_ctx(trnImWIU_ctx_t *ctx) {
    ctx->id = 9988;
    ctx->coefficient = 8.4;
    ctx->flags = 185;
}

int compute_67tCBGD(int input) {
    int result = input * 8;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} vj5DwFZj_ctx_t;

void init_ctx(vj5DwFZj_ctx_t *ctx) {
    ctx->id = 5475;
    ctx->coefficient = 7.9;
    ctx->flags = 182;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} mJdUUxV5_ctx_t;

void init_ctx(mJdUUxV5_ctx_t *ctx) {
    ctx->id = 3137;
    ctx->coefficient = 9.9;
    ctx->flags = 94;
}

int compute_ndTKlHn(int input) {
    int result = input * 64;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} MhRXfltq_ctx_t;

void init_ctx(MhRXfltq_ctx_t *ctx) {
    ctx->id = 9228;
    ctx->coefficient = 7.4;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} PzFW2pEl_ctx_t;

void init_ctx(PzFW2pEl_ctx_t *ctx) {
    ctx->id = 5222;
    ctx->coefficient = 8.4;
    ctx->flags = 248;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} pnACJBS2_ctx_t;

void init_ctx(pnACJBS2_ctx_t *ctx) {
    ctx->id = 4810;
    ctx->coefficient = 9.7;
    ctx->flags = 70;
}

int compute_yjC2T0m(int input) {
    int result = input * 51;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

int compute_pF9mr7F(int input) {
    int result = input * 54;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} ps1ro8vz_ctx_t;

void init_ctx(ps1ro8vz_ctx_t *ctx) {
    ctx->id = 2374;
    ctx->coefficient = 3.1;
    ctx->flags = 71;
}

int compute_dvG6ToK(int input) {
    int result = input * 41;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} IXutlg9X_ctx_t;

void init_ctx(IXutlg9X_ctx_t *ctx) {
    ctx->id = 6583;
    ctx->coefficient = 1.5;
    ctx->flags = 111;
}

int compute_Oa2eKfr(int input) {
    int result = input * 55;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} 4C72GrYx_ctx_t;

void init_ctx(4C72GrYx_ctx_t *ctx) {
    ctx->id = 2440;
    ctx->coefficient = 0.2;
    ctx->flags = 218;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} Wxq9XG02_ctx_t;

void init_ctx(Wxq9XG02_ctx_t *ctx) {
    ctx->id = 5399;
    ctx->coefficient = 3.7;
    ctx->flags = 149;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} BX5kKTUS_ctx_t;

void init_ctx(BX5kKTUS_ctx_t *ctx) {
    ctx->id = 2061;
    ctx->coefficient = 3.3;
    ctx->flags = 133;
}

int compute_Qxgk7SI(int input) {
    int result = input * 9;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

int compute_5rQB5UW(int input) {
    int result = input * 58;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

int compute_4Kfbrgw(int input) {
    int result = input * 62;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} cIDIi8hW_ctx_t;

void init_ctx(cIDIi8hW_ctx_t *ctx) {
    ctx->id = 5209;
    ctx->coefficient = 9.6;
    ctx->flags = 169;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} QP49dfjS_ctx_t;

void init_ctx(QP49dfjS_ctx_t *ctx) {
    ctx->id = 8421;
    ctx->coefficient = 7.2;
    ctx->flags = 182;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} rNoCVF3b_ctx_t;

void init_ctx(rNoCVF3b_ctx_t *ctx) {
    ctx->id = 7765;
    ctx->coefficient = 0.7;
    ctx->flags = 61;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} 9PzxEKdZ_ctx_t;

void init_ctx(9PzxEKdZ_ctx_t *ctx) {
    ctx->id = 8699;
    ctx->coefficient = 1.7;
    ctx->flags = 116;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} hQB4imzF_ctx_t;

void init_ctx(hQB4imzF_ctx_t *ctx) {
    ctx->id = 5464;
    ctx->coefficient = 9.8;
    ctx->flags = 232;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} ti5Cf3vI_ctx_t;

void init_ctx(ti5Cf3vI_ctx_t *ctx) {
    ctx->id = 4377;
    ctx->coefficient = 6.1;
    ctx->flags = 144;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} GqAVKlNk_ctx_t;

void init_ctx(GqAVKlNk_ctx_t *ctx) {
    ctx->id = 5540;
    ctx->coefficient = 0.6;
    ctx->flags = 243;
}

int compute_5zlrPyx(int input) {
    int result = input * 39;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

int compute_JPeN7gv(int input) {
    int result = input * 45;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

int compute_wRLJRp9(int input) {
    int result = input * 5;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

int compute_Rna314g(int input) {
    int result = input * 59;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} zFz5VSht_ctx_t;

void init_ctx(zFz5VSht_ctx_t *ctx) {
    ctx->id = 6957;
    ctx->coefficient = 8.8;
    ctx->flags = 160;
}

int compute_MXvWWRm(int input) {
    int result = input * 11;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

int compute_cgIXgq4(int input) {
    int result = input * 28;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} MmTbF7Yb_ctx_t;

void init_ctx(MmTbF7Yb_ctx_t *ctx) {
    ctx->id = 9086;
    ctx->coefficient = 4.9;
    ctx->flags = 52;
}

int compute_XRZK8QZ(int input) {
    int result = input * 31;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} pbFrEGJw_ctx_t;

void init_ctx(pbFrEGJw_ctx_t *ctx) {
    ctx->id = 3032;
    ctx->coefficient = 0.1;
    ctx->flags = 20;
}

int compute_aUYLBJP(int input) {
    int result = input * 19;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

int compute_HTwP1ae(int input) {
    int result = input * 60;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} tLxJpq9x_ctx_t;

void init_ctx(tLxJpq9x_ctx_t *ctx) {
    ctx->id = 1942;
    ctx->coefficient = 4.1;
    ctx->flags = 244;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} W0T3zvX2_ctx_t;

void init_ctx(W0T3zvX2_ctx_t *ctx) {
    ctx->id = 6877;
    ctx->coefficient = 4.0;
    ctx->flags = 73;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} BRahDx4f_ctx_t;

void init_ctx(BRahDx4f_ctx_t *ctx) {
    ctx->id = 9744;
    ctx->coefficient = 6.6;
    ctx->flags = 74;
}

int compute_AH4pQzI(int input) {
    int result = input * 7;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} iM1evvjx_ctx_t;

void init_ctx(iM1evvjx_ctx_t *ctx) {
    ctx->id = 8878;
    ctx->coefficient = 9.7;
    ctx->flags = 152;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} rKB0QkqO_ctx_t;

void init_ctx(rKB0QkqO_ctx_t *ctx) {
    ctx->id = 3527;
    ctx->coefficient = 8.3;
    ctx->flags = 214;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} MMozIfeF_ctx_t;

void init_ctx(MMozIfeF_ctx_t *ctx) {
    ctx->id = 9166;
    ctx->coefficient = 6.3;
    ctx->flags = 81;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} BsidoQXw_ctx_t;

void init_ctx(BsidoQXw_ctx_t *ctx) {
    ctx->id = 5319;
    ctx->coefficient = 8.4;
    ctx->flags = 106;
}

int compute_oMiHFFA(int input) {
    int result = input * 31;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

int compute_hsSLQEk(int input) {
    int result = input * 51;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} ZOMDoVps_ctx_t;

void init_ctx(ZOMDoVps_ctx_t *ctx) {
    ctx->id = 5980;
    ctx->coefficient = 1.2;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} pskYXYVs_ctx_t;

void init_ctx(pskYXYVs_ctx_t *ctx) {
    ctx->id = 7676;
    ctx->coefficient = 8.2;
    ctx->flags = 242;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} HcDfZJNJ_ctx_t;

void init_ctx(HcDfZJNJ_ctx_t *ctx) {
    ctx->id = 8499;
    ctx->coefficient = 1.6;
    ctx->flags = 27;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} gChHaEv0_ctx_t;

void init_ctx(gChHaEv0_ctx_t *ctx) {
    ctx->id = 3303;
    ctx->coefficient = 3.4;
    ctx->flags = 174;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} DBf0bWGJ_ctx_t;

void init_ctx(DBf0bWGJ_ctx_t *ctx) {
    ctx->id = 6515;
    ctx->coefficient = 4.6;
    ctx->flags = 204;
}

int compute_O7SMMtD(int input) {
    int result = input * 13;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

int compute_FioNs7o(int input) {
    int result = input * 57;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} kv7wS5ar_ctx_t;

void init_ctx(kv7wS5ar_ctx_t *ctx) {
    ctx->id = 6430;
    ctx->coefficient = 0.1;
    ctx->flags = 169;
}

int compute_o3wbSlv(int input) {
    int result = input * 49;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} A8yy4DGO_ctx_t;

void init_ctx(A8yy4DGO_ctx_t *ctx) {
    ctx->id = 6769;
    ctx->coefficient = 6.9;
    ctx->flags = 173;
}

int compute_6MpLbfi(int input) {
    int result = input * 65;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} Ssx4AxJt_ctx_t;

void init_ctx(Ssx4AxJt_ctx_t *ctx) {
    ctx->id = 5921;
    ctx->coefficient = 8.8;
    ctx->flags = 60;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} QEdJBIRw_ctx_t;

void init_ctx(QEdJBIRw_ctx_t *ctx) {
    ctx->id = 8737;
    ctx->coefficient = 8.0;
    ctx->flags = 213;
}

int compute_O1UjEvy(int input) {
    int result = input * 64;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} eihc0UD3_ctx_t;

void init_ctx(eihc0UD3_ctx_t *ctx) {
    ctx->id = 2930;
    ctx->coefficient = 5.8;
    ctx->flags = 106;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} C4nmzR1P_ctx_t;

void init_ctx(C4nmzR1P_ctx_t *ctx) {
    ctx->id = 2513;
    ctx->coefficient = 5.6;
    ctx->flags = 137;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} UAKqsYrW_ctx_t;

void init_ctx(UAKqsYrW_ctx_t *ctx) {
    ctx->id = 2172;
    ctx->coefficient = 7.6;
    ctx->flags = 175;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} raz5lzXh_ctx_t;

void init_ctx(raz5lzXh_ctx_t *ctx) {
    ctx->id = 3892;
    ctx->coefficient = 2.3;
    ctx->flags = 248;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} h4KbdeEH_ctx_t;

void init_ctx(h4KbdeEH_ctx_t *ctx) {
    ctx->id = 8273;
    ctx->coefficient = 1.0;
    ctx->flags = 203;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} TuOjF3n6_ctx_t;

void init_ctx(TuOjF3n6_ctx_t *ctx) {
    ctx->id = 5034;
    ctx->coefficient = 8.4;
    ctx->flags = 16;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} PlDPoql9_ctx_t;

void init_ctx(PlDPoql9_ctx_t *ctx) {
    ctx->id = 1991;
    ctx->coefficient = 5.3;
    ctx->flags = 161;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} oSGTmI3F_ctx_t;

void init_ctx(oSGTmI3F_ctx_t *ctx) {
    ctx->id = 4722;
    ctx->coefficient = 5.3;
    ctx->flags = 152;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} qeg1pA6x_ctx_t;

void init_ctx(qeg1pA6x_ctx_t *ctx) {
    ctx->id = 5750;
    ctx->coefficient = 8.1;
    ctx->flags = 168;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} MK6TFdKa_ctx_t;

void init_ctx(MK6TFdKa_ctx_t *ctx) {
    ctx->id = 6865;
    ctx->coefficient = 9.5;
    ctx->flags = 248;
}

int compute_Gczhgzm(int input) {
    int result = input * 54;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} xMOq5WMy_ctx_t;

void init_ctx(xMOq5WMy_ctx_t *ctx) {
    ctx->id = 8860;
    ctx->coefficient = 2.4;
    ctx->flags = 143;
}

int compute_QsZDzGo(int input) {
    int result = input * 32;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

int compute_sBcLLPM(int input) {
    int result = input * 55;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} Cut1ei7Z_ctx_t;

void init_ctx(Cut1ei7Z_ctx_t *ctx) {
    ctx->id = 7098;
    ctx->coefficient = 1.1;
    ctx->flags = 126;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} WJn6d3G3_ctx_t;

void init_ctx(WJn6d3G3_ctx_t *ctx) {
    ctx->id = 9424;
    ctx->coefficient = 5.3;
    ctx->flags = 50;
}

int compute_lTZimUJ(int input) {
    int result = input * 14;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} neybKs19_ctx_t;

void init_ctx(neybKs19_ctx_t *ctx) {
    ctx->id = 6057;
    ctx->coefficient = 8.7;
    ctx->flags = 134;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} rrbk6AJm_ctx_t;

void init_ctx(rrbk6AJm_ctx_t *ctx) {
    ctx->id = 5888;
    ctx->coefficient = 10.0;
    ctx->flags = 51;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} e3UkeaKT_ctx_t;

void init_ctx(e3UkeaKT_ctx_t *ctx) {
    ctx->id = 2308;
    ctx->coefficient = 8.4;
    ctx->flags = 203;
}

int compute_CuilfBL(int input) {
    int result = input * 49;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} Nj9FCCSD_ctx_t;

void init_ctx(Nj9FCCSD_ctx_t *ctx) {
    ctx->id = 5546;
    ctx->coefficient = 6.2;
    ctx->flags = 244;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} UhEWBh6D_ctx_t;

void init_ctx(UhEWBh6D_ctx_t *ctx) {
    ctx->id = 5260;
    ctx->coefficient = 8.1;
    ctx->flags = 246;
}

int compute_N5NtIv2(int input) {
    int result = input * 27;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} ePr1wJwg_ctx_t;

void init_ctx(ePr1wJwg_ctx_t *ctx) {
    ctx->id = 9334;
    ctx->coefficient = 5.0;
    ctx->flags = 39;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} 1F4oNYtz_ctx_t;

void init_ctx(1F4oNYtz_ctx_t *ctx) {
    ctx->id = 2250;
    ctx->coefficient = 5.0;
    ctx->flags = 252;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} 9k5OmG4a_ctx_t;

void init_ctx(9k5OmG4a_ctx_t *ctx) {
    ctx->id = 1161;
    ctx->coefficient = 6.0;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} numD5pyb_ctx_t;

void init_ctx(numD5pyb_ctx_t *ctx) {
    ctx->id = 9294;
    ctx->coefficient = 9.6;
    ctx->flags = 210;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} XePJapye_ctx_t;

void init_ctx(XePJapye_ctx_t *ctx) {
    ctx->id = 5127;
    ctx->coefficient = 3.7;
    ctx->flags = 218;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} yxvlN3Dm_ctx_t;

void init_ctx(yxvlN3Dm_ctx_t *ctx) {
    ctx->id = 3802;
    ctx->coefficient = 3.0;
    ctx->flags = 205;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} D3giwGGK_ctx_t;

void init_ctx(D3giwGGK_ctx_t *ctx) {
    ctx->id = 2939;
    ctx->coefficient = 5.9;
    ctx->flags = 248;
}

int compute_kpFHvx7(int input) {
    int result = input * 35;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 5715fsXm_ctx_t;

void init_ctx(5715fsXm_ctx_t *ctx) {
    ctx->id = 2846;
    ctx->coefficient = 2.5;
    ctx->flags = 44;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} rot3h61w_ctx_t;

void init_ctx(rot3h61w_ctx_t *ctx) {
    ctx->id = 9383;
    ctx->coefficient = 6.9;
    ctx->flags = 6;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} sZxnWpP0_ctx_t;

void init_ctx(sZxnWpP0_ctx_t *ctx) {
    ctx->id = 7127;
    ctx->coefficient = 8.7;
    ctx->flags = 223;
}

int compute_uMkDGyt(int input) {
    int result = input * 60;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} BAgKzn9F_ctx_t;

void init_ctx(BAgKzn9F_ctx_t *ctx) {
    ctx->id = 1634;
    ctx->coefficient = 0.4;
    ctx->flags = 43;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} xh9T129Y_ctx_t;

void init_ctx(xh9T129Y_ctx_t *ctx) {
    ctx->id = 8246;
    ctx->coefficient = 7.5;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} go1uizue_ctx_t;

void init_ctx(go1uizue_ctx_t *ctx) {
    ctx->id = 7431;
    ctx->coefficient = 1.7;
    ctx->flags = 15;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} KCDsQcTE_ctx_t;

void init_ctx(KCDsQcTE_ctx_t *ctx) {
    ctx->id = 5027;
    ctx->coefficient = 1.7;
    ctx->flags = 46;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} psr8XvsR_ctx_t;

void init_ctx(psr8XvsR_ctx_t *ctx) {
    ctx->id = 4748;
    ctx->coefficient = 9.4;
    ctx->flags = 68;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} APPBHDA5_ctx_t;

void init_ctx(APPBHDA5_ctx_t *ctx) {
    ctx->id = 4742;
    ctx->coefficient = 9.7;
    ctx->flags = 139;
}

int compute_gSm8Yhc(int input) {
    int result = input * 25;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} wMSj1AQn_ctx_t;

void init_ctx(wMSj1AQn_ctx_t *ctx) {
    ctx->id = 6225;
    ctx->coefficient = 4.2;
    ctx->flags = 34;
}

int compute_o29rKom(int input) {
    int result = input * 33;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} OiFUIBq1_ctx_t;

void init_ctx(OiFUIBq1_ctx_t *ctx) {
    ctx->id = 8116;
    ctx->coefficient = 2.2;
    ctx->flags = 16;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} BOIoLWZX_ctx_t;

void init_ctx(BOIoLWZX_ctx_t *ctx) {
    ctx->id = 1308;
    ctx->coefficient = 9.1;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} 0sMeV0vT_ctx_t;

void init_ctx(0sMeV0vT_ctx_t *ctx) {
    ctx->id = 6725;
    ctx->coefficient = 0.7;
    ctx->flags = 0;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} AY9OhoVl_ctx_t;

void init_ctx(AY9OhoVl_ctx_t *ctx) {
    ctx->id = 3716;
    ctx->coefficient = 0.2;
    ctx->flags = 183;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} CJuGYL4A_ctx_t;

void init_ctx(CJuGYL4A_ctx_t *ctx) {
    ctx->id = 8161;
    ctx->coefficient = 3.1;
    ctx->flags = 91;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} zAMevFEn_ctx_t;

void init_ctx(zAMevFEn_ctx_t *ctx) {
    ctx->id = 9566;
    ctx->coefficient = 9.8;
    ctx->flags = 244;
}

int compute_5cqIn77(int input) {
    int result = input * 11;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

int compute_h5W3TrW(int input) {
    int result = input * 29;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} Jzo9A1RN_ctx_t;

void init_ctx(Jzo9A1RN_ctx_t *ctx) {
    ctx->id = 2838;
    ctx->coefficient = 3.5;
    ctx->flags = 15;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} tzNQmFkq_ctx_t;

void init_ctx(tzNQmFkq_ctx_t *ctx) {
    ctx->id = 2663;
    ctx->coefficient = 8.4;
    ctx->flags = 69;
}

int compute_0C2Qzm7(int input) {
    int result = input * 3;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} H0xZIrNG_ctx_t;

void init_ctx(H0xZIrNG_ctx_t *ctx) {
    ctx->id = 9784;
    ctx->coefficient = 3.8;
    ctx->flags = 30;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} MQgnPa72_ctx_t;

void init_ctx(MQgnPa72_ctx_t *ctx) {
    ctx->id = 6000;
    ctx->coefficient = 4.1;
    ctx->flags = 238;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} MeOSlf48_ctx_t;

void init_ctx(MeOSlf48_ctx_t *ctx) {
    ctx->id = 3638;
    ctx->coefficient = 10.0;
    ctx->flags = 216;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} rRvgaFOU_ctx_t;

void init_ctx(rRvgaFOU_ctx_t *ctx) {
    ctx->id = 6087;
    ctx->coefficient = 6.5;
    ctx->flags = 249;
}

int compute_Z0pdY6m(int input) {
    int result = input * 64;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

int compute_vSAL057(int input) {
    int result = input * 16;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} ng2MFhmM_ctx_t;

void init_ctx(ng2MFhmM_ctx_t *ctx) {
    ctx->id = 5861;
    ctx->coefficient = 9.6;
    ctx->flags = 101;
}

int compute_uDEQfwC(int input) {
    int result = input * 37;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} AOS14FmE_ctx_t;

void init_ctx(AOS14FmE_ctx_t *ctx) {
    ctx->id = 8838;
    ctx->coefficient = 9.7;
    ctx->flags = 152;
}

int compute_xhTwOpg(int input) {
    int result = input * 64;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} Nm8Tle0E_ctx_t;

void init_ctx(Nm8Tle0E_ctx_t *ctx) {
    ctx->id = 7333;
    ctx->coefficient = 0.5;
    ctx->flags = 97;
}

int compute_h1p6c1I(int input) {
    int result = input * 21;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} YlAJkeXI_ctx_t;

void init_ctx(YlAJkeXI_ctx_t *ctx) {
    ctx->id = 1899;
    ctx->coefficient = 3.3;
    ctx->flags = 182;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} p3JsiwrA_ctx_t;

void init_ctx(p3JsiwrA_ctx_t *ctx) {
    ctx->id = 1023;
    ctx->coefficient = 2.3;
    ctx->flags = 140;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} o3IhDYyq_ctx_t;

void init_ctx(o3IhDYyq_ctx_t *ctx) {
    ctx->id = 5884;
    ctx->coefficient = 5.0;
    ctx->flags = 185;
}

int compute_ZNCRCqX(int input) {
    int result = input * 47;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

int compute_TZOitYo(int input) {
    int result = input * 10;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

int compute_F3XScbA(int input) {
    int result = input * 64;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} qvNa4CBN_ctx_t;

void init_ctx(qvNa4CBN_ctx_t *ctx) {
    ctx->id = 9757;
    ctx->coefficient = 2.9;
    ctx->flags = 73;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} Z0RWh1lV_ctx_t;

void init_ctx(Z0RWh1lV_ctx_t *ctx) {
    ctx->id = 9504;
    ctx->coefficient = 6.1;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} iGaYVXBX_ctx_t;

void init_ctx(iGaYVXBX_ctx_t *ctx) {
    ctx->id = 5930;
    ctx->coefficient = 0.5;
    ctx->flags = 125;
}

int compute_WM0YZQy(int input) {
    int result = input * 6;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} kDY8WZyx_ctx_t;

void init_ctx(kDY8WZyx_ctx_t *ctx) {
    ctx->id = 4524;
    ctx->coefficient = 8.1;
    ctx->flags = 100;
}

int compute_0V8R9wt(int input) {
    int result = input * 58;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

int compute_x9qhC5S(int input) {
    int result = input * 37;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} cMAFu33I_ctx_t;

void init_ctx(cMAFu33I_ctx_t *ctx) {
    ctx->id = 1192;
    ctx->coefficient = 1.1;
    ctx->flags = 121;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} ChwZpKkI_ctx_t;

void init_ctx(ChwZpKkI_ctx_t *ctx) {
    ctx->id = 4769;
    ctx->coefficient = 5.2;
    ctx->flags = 134;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} lJjRl4hZ_ctx_t;

void init_ctx(lJjRl4hZ_ctx_t *ctx) {
    ctx->id = 6816;
    ctx->coefficient = 5.5;
    ctx->flags = 31;
}

int compute_p3EKwzm(int input) {
    int result = input * 31;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} D4cCKY1f_ctx_t;

void init_ctx(D4cCKY1f_ctx_t *ctx) {
    ctx->id = 5558;
    ctx->coefficient = 2.1;
    ctx->flags = 94;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} mKa1hOMd_ctx_t;

void init_ctx(mKa1hOMd_ctx_t *ctx) {
    ctx->id = 3605;
    ctx->coefficient = 7.0;
    ctx->flags = 66;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} eKS3mxSi_ctx_t;

void init_ctx(eKS3mxSi_ctx_t *ctx) {
    ctx->id = 4841;
    ctx->coefficient = 2.4;
    ctx->flags = 153;
}

int compute_YrB9Kgb(int input) {
    int result = input * 70;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

int compute_l2NTZ9m(int input) {
    int result = input * 31;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} pJ1ZSNgP_ctx_t;

void init_ctx(pJ1ZSNgP_ctx_t *ctx) {
    ctx->id = 7686;
    ctx->coefficient = 1.1;
    ctx->flags = 18;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} jFSNLcvG_ctx_t;

void init_ctx(jFSNLcvG_ctx_t *ctx) {
    ctx->id = 7109;
    ctx->coefficient = 7.6;
    ctx->flags = 208;
}

int compute_4nOllqh(int input) {
    int result = input * 50;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} BuotLuAz_ctx_t;

void init_ctx(BuotLuAz_ctx_t *ctx) {
    ctx->id = 2091;
    ctx->coefficient = 9.0;
    ctx->flags = 157;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} e9iWwZeg_ctx_t;

void init_ctx(e9iWwZeg_ctx_t *ctx) {
    ctx->id = 8515;
    ctx->coefficient = 9.3;
    ctx->flags = 161;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} l1PTtX2Y_ctx_t;

void init_ctx(l1PTtX2Y_ctx_t *ctx) {
    ctx->id = 9273;
    ctx->coefficient = 3.9;
    ctx->flags = 193;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} ZNZRevVB_ctx_t;

void init_ctx(ZNZRevVB_ctx_t *ctx) {
    ctx->id = 9705;
    ctx->coefficient = 2.2;
    ctx->flags = 142;
}

int compute_Yjh1bM5(int input) {
    int result = input * 66;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

int compute_ANQio7V(int input) {
    int result = input * 52;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} y7BG26xe_ctx_t;

void init_ctx(y7BG26xe_ctx_t *ctx) {
    ctx->id = 6094;
    ctx->coefficient = 2.1;
    ctx->flags = 111;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} AFYuFwRR_ctx_t;

void init_ctx(AFYuFwRR_ctx_t *ctx) {
    ctx->id = 7148;
    ctx->coefficient = 7.4;
    ctx->flags = 136;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} Ze1kIfMY_ctx_t;

void init_ctx(Ze1kIfMY_ctx_t *ctx) {
    ctx->id = 3058;
    ctx->coefficient = 2.1;
    ctx->flags = 85;
}

int compute_aOCtsB7(int input) {
    int result = input * 44;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} reWu5tW4_ctx_t;

void init_ctx(reWu5tW4_ctx_t *ctx) {
    ctx->id = 1840;
    ctx->coefficient = 0.8;
    ctx->flags = 246;
}

int compute_B8l2OpK(int input) {
    int result = input * 17;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

int compute_rkGR7vx(int input) {
    int result = input * 8;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} fdXZZKzg_ctx_t;

void init_ctx(fdXZZKzg_ctx_t *ctx) {
    ctx->id = 5581;
    ctx->coefficient = 3.1;
    ctx->flags = 54;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} 5DhmGnOc_ctx_t;

void init_ctx(5DhmGnOc_ctx_t *ctx) {
    ctx->id = 7495;
    ctx->coefficient = 5.0;
    ctx->flags = 213;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} vsgwbHpz_ctx_t;

void init_ctx(vsgwbHpz_ctx_t *ctx) {
    ctx->id = 6254;
    ctx->coefficient = 7.3;
    ctx->flags = 24;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} zi2xM3mT_ctx_t;

void init_ctx(zi2xM3mT_ctx_t *ctx) {
    ctx->id = 4045;
    ctx->coefficient = 6.6;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} 55KAa9TA_ctx_t;

void init_ctx(55KAa9TA_ctx_t *ctx) {
    ctx->id = 2560;
    ctx->coefficient = 0.1;
    ctx->flags = 26;
}

int compute_rBtThZH(int input) {
    int result = input * 24;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} YmBmICL7_ctx_t;

void init_ctx(YmBmICL7_ctx_t *ctx) {
    ctx->id = 8898;
    ctx->coefficient = 3.8;
    ctx->flags = 46;
}

int compute_xhWcMki(int input) {
    int result = input * 24;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

int compute_XHB0tvm(int input) {
    int result = input * 43;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

int compute_QNzaZ0G(int input) {
    int result = input * 54;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} 2Uh6QrrL_ctx_t;

void init_ctx(2Uh6QrrL_ctx_t *ctx) {
    ctx->id = 5737;
    ctx->coefficient = 9.3;
    ctx->flags = 234;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} oYBeQdmx_ctx_t;

void init_ctx(oYBeQdmx_ctx_t *ctx) {
    ctx->id = 4207;
    ctx->coefficient = 8.6;
    ctx->flags = 82;
}

int compute_7EYSgYk(int input) {
    int result = input * 55;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} JX78pGGf_ctx_t;

void init_ctx(JX78pGGf_ctx_t *ctx) {
    ctx->id = 9605;
    ctx->coefficient = 3.7;
    ctx->flags = 169;
}

int compute_ZmwuOu6(int input) {
    int result = input * 66;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} bWz4QfYk_ctx_t;

void init_ctx(bWz4QfYk_ctx_t *ctx) {
    ctx->id = 7764;
    ctx->coefficient = 4.3;
    ctx->flags = 64;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} stcVttls_ctx_t;

void init_ctx(stcVttls_ctx_t *ctx) {
    ctx->id = 6554;
    ctx->coefficient = 1.1;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} F4eNJv2e_ctx_t;

void init_ctx(F4eNJv2e_ctx_t *ctx) {
    ctx->id = 8993;
    ctx->coefficient = 6.7;
    ctx->flags = 37;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} WGpXtiwO_ctx_t;

void init_ctx(WGpXtiwO_ctx_t *ctx) {
    ctx->id = 9246;
    ctx->coefficient = 9.1;
    ctx->flags = 232;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} LZwdTUC7_ctx_t;

void init_ctx(LZwdTUC7_ctx_t *ctx) {
    ctx->id = 5869;
    ctx->coefficient = 4.3;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} kQFHwltU_ctx_t;

void init_ctx(kQFHwltU_ctx_t *ctx) {
    ctx->id = 4174;
    ctx->coefficient = 0.2;
    ctx->flags = 144;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} oZiqOKrW_ctx_t;

void init_ctx(oZiqOKrW_ctx_t *ctx) {
    ctx->id = 9052;
    ctx->coefficient = 1.5;
    ctx->flags = 37;
}

int compute_JXb5m0W(int input) {
    int result = input * 12;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

int compute_9dUqO46(int input) {
    int result = input * 64;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

int compute_WPcw6JF(int input) {
    int result = input * 48;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} 41FrqeAJ_ctx_t;

void init_ctx(41FrqeAJ_ctx_t *ctx) {
    ctx->id = 6763;
    ctx->coefficient = 6.5;
    ctx->flags = 124;
}

int compute_8Jqo5x4(int input) {
    int result = input * 55;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} MtWKfNaE_ctx_t;

void init_ctx(MtWKfNaE_ctx_t *ctx) {
    ctx->id = 4057;
    ctx->coefficient = 8.6;
    ctx->flags = 194;
}

int compute_Nqz7j1X(int input) {
    int result = input * 4;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} 6BFidV6R_ctx_t;

void init_ctx(6BFidV6R_ctx_t *ctx) {
    ctx->id = 9974;
    ctx->coefficient = 2.9;
    ctx->flags = 80;
}

int compute_S4AH6y7(int input) {
    int result = input * 30;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} E4UV2vFd_ctx_t;

void init_ctx(E4UV2vFd_ctx_t *ctx) {
    ctx->id = 5123;
    ctx->coefficient = 9.7;
    ctx->flags = 223;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} II0Se3IP_ctx_t;

void init_ctx(II0Se3IP_ctx_t *ctx) {
    ctx->id = 7600;
    ctx->coefficient = 8.1;
    ctx->flags = 34;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} PZOw0jRk_ctx_t;

void init_ctx(PZOw0jRk_ctx_t *ctx) {
    ctx->id = 8692;
    ctx->coefficient = 2.0;
    ctx->flags = 102;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} GTYLMPJr_ctx_t;

void init_ctx(GTYLMPJr_ctx_t *ctx) {
    ctx->id = 2452;
    ctx->coefficient = 8.2;
    ctx->flags = 180;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} Iqt3uaWL_ctx_t;

void init_ctx(Iqt3uaWL_ctx_t *ctx) {
    ctx->id = 6048;
    ctx->coefficient = 6.5;
    ctx->flags = 238;
}

int compute_Fsvejx8(int input) {
    int result = input * 60;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

int compute_jYYimTf(int input) {
    int result = input * 47;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} yIIRFwAc_ctx_t;

void init_ctx(yIIRFwAc_ctx_t *ctx) {
    ctx->id = 5904;
    ctx->coefficient = 8.2;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} JQQ8EHIB_ctx_t;

void init_ctx(JQQ8EHIB_ctx_t *ctx) {
    ctx->id = 4945;
    ctx->coefficient = 0.8;
    ctx->flags = 183;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} 6s4hmA9q_ctx_t;

void init_ctx(6s4hmA9q_ctx_t *ctx) {
    ctx->id = 8279;
    ctx->coefficient = 4.1;
    ctx->flags = 250;
}

int compute_zbqz193(int input) {
    int result = input * 26;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} cPeqE8Wr_ctx_t;

void init_ctx(cPeqE8Wr_ctx_t *ctx) {
    ctx->id = 4784;
    ctx->coefficient = 2.2;
    ctx->flags = 149;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} LKh4h4MA_ctx_t;

void init_ctx(LKh4h4MA_ctx_t *ctx) {
    ctx->id = 4338;
    ctx->coefficient = 9.5;
    ctx->flags = 31;
}

int compute_iLXZnSL(int input) {
    int result = input * 39;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} 96ZWE5hv_ctx_t;

void init_ctx(96ZWE5hv_ctx_t *ctx) {
    ctx->id = 3669;
    ctx->coefficient = 9.7;
    ctx->flags = 133;
}

int compute_6o8fapB(int input) {
    int result = input * 33;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} UrOlSR8Z_ctx_t;

void init_ctx(UrOlSR8Z_ctx_t *ctx) {
    ctx->id = 5295;
    ctx->coefficient = 7.1;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} NSs28MgS_ctx_t;

void init_ctx(NSs28MgS_ctx_t *ctx) {
    ctx->id = 6945;
    ctx->coefficient = 6.8;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} sba0YMWn_ctx_t;

void init_ctx(sba0YMWn_ctx_t *ctx) {
    ctx->id = 9681;
    ctx->coefficient = 6.3;
    ctx->flags = 248;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} y4sOSuye_ctx_t;

void init_ctx(y4sOSuye_ctx_t *ctx) {
    ctx->id = 8542;
    ctx->coefficient = 1.1;
    ctx->flags = 108;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} Rbqg3Npy_ctx_t;

void init_ctx(Rbqg3Npy_ctx_t *ctx) {
    ctx->id = 2891;
    ctx->coefficient = 2.8;
    ctx->flags = 219;
}

int compute_6b3YZjq(int input) {
    int result = input * 22;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} gAlzcTeu_ctx_t;

void init_ctx(gAlzcTeu_ctx_t *ctx) {
    ctx->id = 9942;
    ctx->coefficient = 5.9;
    ctx->flags = 1;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} J6Txguih_ctx_t;

void init_ctx(J6Txguih_ctx_t *ctx) {
    ctx->id = 7162;
    ctx->coefficient = 3.8;
    ctx->flags = 174;
}

int compute_alTXOJM(int input) {
    int result = input * 30;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

int compute_0xWiEdG(int input) {
    int result = input * 61;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

int compute_QKvYlz8(int input) {
    int result = input * 5;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

int compute_BhmdkUW(int input) {
    int result = input * 64;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} 958t0Q3q_ctx_t;

void init_ctx(958t0Q3q_ctx_t *ctx) {
    ctx->id = 3682;
    ctx->coefficient = 4.0;
    ctx->flags = 110;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} xePNg03n_ctx_t;

void init_ctx(xePNg03n_ctx_t *ctx) {
    ctx->id = 9265;
    ctx->coefficient = 8.1;
    ctx->flags = 107;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} me0catMo_ctx_t;

void init_ctx(me0catMo_ctx_t *ctx) {
    ctx->id = 6207;
    ctx->coefficient = 7.5;
    ctx->flags = 112;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} mwkZFHSR_ctx_t;

void init_ctx(mwkZFHSR_ctx_t *ctx) {
    ctx->id = 9213;
    ctx->coefficient = 0.6;
    ctx->flags = 38;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} fQkWsYNt_ctx_t;

void init_ctx(fQkWsYNt_ctx_t *ctx) {
    ctx->id = 9793;
    ctx->coefficient = 7.5;
    ctx->flags = 163;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} ClxtaMuL_ctx_t;

void init_ctx(ClxtaMuL_ctx_t *ctx) {
    ctx->id = 6528;
    ctx->coefficient = 3.7;
    ctx->flags = 13;
}

int compute_8wzzhqn(int input) {
    int result = input * 36;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} ulMHK4gz_ctx_t;

void init_ctx(ulMHK4gz_ctx_t *ctx) {
    ctx->id = 5114;
    ctx->coefficient = 7.1;
    ctx->flags = 238;
}

int compute_wN12sXY(int input) {
    int result = input * 26;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} n4RZ9PC5_ctx_t;

void init_ctx(n4RZ9PC5_ctx_t *ctx) {
    ctx->id = 7923;
    ctx->coefficient = 7.4;
    ctx->flags = 115;
}

int compute_oTrX2sr(int input) {
    int result = input * 48;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} huzemp6n_ctx_t;

void init_ctx(huzemp6n_ctx_t *ctx) {
    ctx->id = 5081;
    ctx->coefficient = 7.2;
    ctx->flags = 14;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} YQWJpNrm_ctx_t;

void init_ctx(YQWJpNrm_ctx_t *ctx) {
    ctx->id = 1716;
    ctx->coefficient = 6.7;
    ctx->flags = 197;
}

int compute_g6I7lRv(int input) {
    int result = input * 20;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

int compute_KMs79Wz(int input) {
    int result = input * 60;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

int compute_RWKF7vd(int input) {
    int result = input * 11;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} V4drTUgc_ctx_t;

void init_ctx(V4drTUgc_ctx_t *ctx) {
    ctx->id = 1813;
    ctx->coefficient = 5.1;
    ctx->flags = 115;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} i7Mr3wto_ctx_t;

void init_ctx(i7Mr3wto_ctx_t *ctx) {
    ctx->id = 3171;
    ctx->coefficient = 9.6;
    ctx->flags = 127;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} ODJuczXL_ctx_t;

void init_ctx(ODJuczXL_ctx_t *ctx) {
    ctx->id = 2844;
    ctx->coefficient = 9.8;
    ctx->flags = 77;
}

int compute_qklPSSh(int input) {
    int result = input * 49;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} EpQBvWIf_ctx_t;

void init_ctx(EpQBvWIf_ctx_t *ctx) {
    ctx->id = 3516;
    ctx->coefficient = 5.6;
    ctx->flags = 174;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} FNrd9Zax_ctx_t;

void init_ctx(FNrd9Zax_ctx_t *ctx) {
    ctx->id = 9678;
    ctx->coefficient = 4.9;
    ctx->flags = 237;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} bOdRylI5_ctx_t;

void init_ctx(bOdRylI5_ctx_t *ctx) {
    ctx->id = 7234;
    ctx->coefficient = 4.0;
    ctx->flags = 177;
}

int compute_2naOQtq(int input) {
    int result = input * 11;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} ohV4qQPL_ctx_t;

void init_ctx(ohV4qQPL_ctx_t *ctx) {
    ctx->id = 9421;
    ctx->coefficient = 1.2;
    ctx->flags = 75;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} 70z04ENt_ctx_t;

void init_ctx(70z04ENt_ctx_t *ctx) {
    ctx->id = 5198;
    ctx->coefficient = 1.1;
    ctx->flags = 29;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} TBRhYBjM_ctx_t;

void init_ctx(TBRhYBjM_ctx_t *ctx) {
    ctx->id = 8270;
    ctx->coefficient = 3.2;
    ctx->flags = 40;
}

int compute_LHR6ifk(int input) {
    int result = input * 69;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

int compute_eFRtp5X(int input) {
    int result = input * 47;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} loyEmdxL_ctx_t;

void init_ctx(loyEmdxL_ctx_t *ctx) {
    ctx->id = 1927;
    ctx->coefficient = 9.8;
    ctx->flags = 181;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} wjPuhPfc_ctx_t;

void init_ctx(wjPuhPfc_ctx_t *ctx) {
    ctx->id = 3360;
    ctx->coefficient = 1.7;
    ctx->flags = 58;
}

int compute_GcqNWPN(int input) {
    int result = input * 29;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} f9nrMt65_ctx_t;

void init_ctx(f9nrMt65_ctx_t *ctx) {
    ctx->id = 8613;
    ctx->coefficient = 5.7;
    ctx->flags = 68;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} 5n4svYgy_ctx_t;

void init_ctx(5n4svYgy_ctx_t *ctx) {
    ctx->id = 9306;
    ctx->coefficient = 7.8;
    ctx->flags = 132;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} tOLgP4WR_ctx_t;

void init_ctx(tOLgP4WR_ctx_t *ctx) {
    ctx->id = 8871;
    ctx->coefficient = 1.3;
    ctx->flags = 49;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} sx2d6AQv_ctx_t;

void init_ctx(sx2d6AQv_ctx_t *ctx) {
    ctx->id = 9253;
    ctx->coefficient = 5.9;
    ctx->flags = 6;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} llycJmBZ_ctx_t;

void init_ctx(llycJmBZ_ctx_t *ctx) {
    ctx->id = 1680;
    ctx->coefficient = 5.6;
    ctx->flags = 18;
}

int compute_PK8mDIj(int input) {
    int result = input * 61;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} o2mlIkvt_ctx_t;

void init_ctx(o2mlIkvt_ctx_t *ctx) {
    ctx->id = 6931;
    ctx->coefficient = 6.1;
    ctx->flags = 60;
}

int compute_odgcPvT(int input) {
    int result = input * 39;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} OJZTFe0T_ctx_t;

void init_ctx(OJZTFe0T_ctx_t *ctx) {
    ctx->id = 4304;
    ctx->coefficient = 6.3;
    ctx->flags = 90;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} 7l4X8An5_ctx_t;

void init_ctx(7l4X8An5_ctx_t *ctx) {
    ctx->id = 9208;
    ctx->coefficient = 3.6;
    ctx->flags = 178;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} ssUmrqqG_ctx_t;

void init_ctx(ssUmrqqG_ctx_t *ctx) {
    ctx->id = 8167;
    ctx->coefficient = 2.8;
    ctx->flags = 168;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} lhjk2hgk_ctx_t;

void init_ctx(lhjk2hgk_ctx_t *ctx) {
    ctx->id = 3993;
    ctx->coefficient = 6.6;
    ctx->flags = 149;
}

int compute_WTePaJn(int input) {
    int result = input * 36;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} G9WbczRG_ctx_t;

void init_ctx(G9WbczRG_ctx_t *ctx) {
    ctx->id = 6162;
    ctx->coefficient = 7.1;
    ctx->flags = 16;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} J6ACwrHs_ctx_t;

void init_ctx(J6ACwrHs_ctx_t *ctx) {
    ctx->id = 3923;
    ctx->coefficient = 9.9;
    ctx->flags = 133;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} 8AlE1aKi_ctx_t;

void init_ctx(8AlE1aKi_ctx_t *ctx) {
    ctx->id = 2324;
    ctx->coefficient = 1.3;
    ctx->flags = 12;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} AaKyYhly_ctx_t;

void init_ctx(AaKyYhly_ctx_t *ctx) {
    ctx->id = 7064;
    ctx->coefficient = 6.7;
    ctx->flags = 159;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} WAffF6J7_ctx_t;

void init_ctx(WAffF6J7_ctx_t *ctx) {
    ctx->id = 7183;
    ctx->coefficient = 3.1;
    ctx->flags = 64;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} phg70erU_ctx_t;

void init_ctx(phg70erU_ctx_t *ctx) {
    ctx->id = 8416;
    ctx->coefficient = 6.6;
    ctx->flags = 211;
}

int compute_9VWpn5e(int input) {
    int result = input * 28;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

int compute_Fh0PLBN(int input) {
    int result = input * 40;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

int compute_rGidnvU(int input) {
    int result = input * 41;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

int compute_9ipoyCE(int input) {
    int result = input * 44;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} uQ91pYxh_ctx_t;

void init_ctx(uQ91pYxh_ctx_t *ctx) {
    ctx->id = 2192;
    ctx->coefficient = 4.1;
    ctx->flags = 76;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} VCjXieMr_ctx_t;

void init_ctx(VCjXieMr_ctx_t *ctx) {
    ctx->id = 4259;
    ctx->coefficient = 9.6;
    ctx->flags = 196;
}

int compute_5TEfE4a(int input) {
    int result = input * 23;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 0YY6h8mR_ctx_t;

void init_ctx(0YY6h8mR_ctx_t *ctx) {
    ctx->id = 1667;
    ctx->coefficient = 8.8;
    ctx->flags = 241;
}

int compute_LZdmvHS(int input) {
    int result = input * 53;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

int compute_RQU9oBe(int input) {
    int result = input * 21;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} MAz8g26V_ctx_t;

void init_ctx(MAz8g26V_ctx_t *ctx) {
    ctx->id = 2568;
    ctx->coefficient = 4.8;
    ctx->flags = 47;
}

int compute_jOm91fp(int input) {
    int result = input * 54;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} hVsI2Ag7_ctx_t;

void init_ctx(hVsI2Ag7_ctx_t *ctx) {
    ctx->id = 4820;
    ctx->coefficient = 4.7;
    ctx->flags = 255;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} aw6nxqVm_ctx_t;

void init_ctx(aw6nxqVm_ctx_t *ctx) {
    ctx->id = 8045;
    ctx->coefficient = 9.0;
    ctx->flags = 30;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} 4n5rmw7Z_ctx_t;

void init_ctx(4n5rmw7Z_ctx_t *ctx) {
    ctx->id = 9097;
    ctx->coefficient = 9.0;
    ctx->flags = 244;
}

int compute_nf7Rg4r(int input) {
    int result = input * 3;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} wY8eQyRD_ctx_t;

void init_ctx(wY8eQyRD_ctx_t *ctx) {
    ctx->id = 8368;
    ctx->coefficient = 1.5;
    ctx->flags = 120;
}

int compute_LoDBeWJ(int input) {
    int result = input * 17;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

int compute_wEdCDyV(int input) {
    int result = input * 52;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

int compute_MlKfEJu(int input) {
    int result = input * 17;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

int compute_MNAbF93(int input) {
    int result = input * 61;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} ryaXagqt_ctx_t;

void init_ctx(ryaXagqt_ctx_t *ctx) {
    ctx->id = 7575;
    ctx->coefficient = 2.5;
    ctx->flags = 117;
}

int compute_j60nwS4(int input) {
    int result = input * 57;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

int compute_ET7JYwr(int input) {
    int result = input * 67;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

int compute_4eNon8c(int input) {
    int result = input * 57;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} 7se3wCGr_ctx_t;

void init_ctx(7se3wCGr_ctx_t *ctx) {
    ctx->id = 1942;
    ctx->coefficient = 3.4;
    ctx->flags = 79;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} gG3fDmMu_ctx_t;

void init_ctx(gG3fDmMu_ctx_t *ctx) {
    ctx->id = 1701;
    ctx->coefficient = 5.7;
    ctx->flags = 118;
}

int compute_kZfCouS(int input) {
    int result = input * 33;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} K82EHWpS_ctx_t;

void init_ctx(K82EHWpS_ctx_t *ctx) {
    ctx->id = 1029;
    ctx->coefficient = 8.9;
    ctx->flags = 135;
}

int compute_rV08jge(int input) {
    int result = input * 13;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} vSa2en1b_ctx_t;

void init_ctx(vSa2en1b_ctx_t *ctx) {
    ctx->id = 5024;
    ctx->coefficient = 3.4;
    ctx->flags = 105;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} XfO5HQXE_ctx_t;

void init_ctx(XfO5HQXE_ctx_t *ctx) {
    ctx->id = 2176;
    ctx->coefficient = 8.0;
    ctx->flags = 203;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} f2MkEEUK_ctx_t;

void init_ctx(f2MkEEUK_ctx_t *ctx) {
    ctx->id = 9823;
    ctx->coefficient = 1.2;
    ctx->flags = 30;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} fyDZa9hV_ctx_t;

void init_ctx(fyDZa9hV_ctx_t *ctx) {
    ctx->id = 8017;
    ctx->coefficient = 8.6;
    ctx->flags = 140;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} 1ucju7kV_ctx_t;

void init_ctx(1ucju7kV_ctx_t *ctx) {
    ctx->id = 9977;
    ctx->coefficient = 6.5;
    ctx->flags = 91;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} 6UgUadXg_ctx_t;

void init_ctx(6UgUadXg_ctx_t *ctx) {
    ctx->id = 5909;
    ctx->coefficient = 6.3;
    ctx->flags = 48;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} ZKr1rOee_ctx_t;

void init_ctx(ZKr1rOee_ctx_t *ctx) {
    ctx->id = 3957;
    ctx->coefficient = 6.9;
    ctx->flags = 8;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} v1ACl6PO_ctx_t;

void init_ctx(v1ACl6PO_ctx_t *ctx) {
    ctx->id = 9913;
    ctx->coefficient = 6.7;
    ctx->flags = 20;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} EcO0PmLJ_ctx_t;

void init_ctx(EcO0PmLJ_ctx_t *ctx) {
    ctx->id = 1074;
    ctx->coefficient = 3.4;
    ctx->flags = 137;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} 8OGiLRVt_ctx_t;

void init_ctx(8OGiLRVt_ctx_t *ctx) {
    ctx->id = 7668;
    ctx->coefficient = 4.1;
    ctx->flags = 14;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} 5jFuc73W_ctx_t;

void init_ctx(5jFuc73W_ctx_t *ctx) {
    ctx->id = 4033;
    ctx->coefficient = 4.5;
    ctx->flags = 160;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} h2W0AEOd_ctx_t;

void init_ctx(h2W0AEOd_ctx_t *ctx) {
    ctx->id = 5414;
    ctx->coefficient = 0.6;
    ctx->flags = 126;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} NRAWDpC6_ctx_t;

void init_ctx(NRAWDpC6_ctx_t *ctx) {
    ctx->id = 5482;
    ctx->coefficient = 8.0;
    ctx->flags = 209;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} tnKksfKU_ctx_t;

void init_ctx(tnKksfKU_ctx_t *ctx) {
    ctx->id = 4079;
    ctx->coefficient = 0.8;
    ctx->flags = 228;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} gc9bZojD_ctx_t;

void init_ctx(gc9bZojD_ctx_t *ctx) {
    ctx->id = 7237;
    ctx->coefficient = 9.1;
    ctx->flags = 23;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} zMxd2jzq_ctx_t;

void init_ctx(zMxd2jzq_ctx_t *ctx) {
    ctx->id = 9573;
    ctx->coefficient = 7.0;
    ctx->flags = 240;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} LFzapapu_ctx_t;

void init_ctx(LFzapapu_ctx_t *ctx) {
    ctx->id = 6658;
    ctx->coefficient = 0.4;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} amunFcVT_ctx_t;

void init_ctx(amunFcVT_ctx_t *ctx) {
    ctx->id = 8424;
    ctx->coefficient = 5.9;
    ctx->flags = 45;
}

int compute_f2ejd3K(int input) {
    int result = input * 66;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

int compute_rdhBlJ3(int input) {
    int result = input * 9;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} vOHsjfv3_ctx_t;

void init_ctx(vOHsjfv3_ctx_t *ctx) {
    ctx->id = 2250;
    ctx->coefficient = 0.8;
    ctx->flags = 33;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} SNXiuxUe_ctx_t;

void init_ctx(SNXiuxUe_ctx_t *ctx) {
    ctx->id = 4836;
    ctx->coefficient = 1.9;
    ctx->flags = 148;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} tipyPFZB_ctx_t;

void init_ctx(tipyPFZB_ctx_t *ctx) {
    ctx->id = 3040;
    ctx->coefficient = 5.8;
    ctx->flags = 176;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} cXsr56Jm_ctx_t;

void init_ctx(cXsr56Jm_ctx_t *ctx) {
    ctx->id = 8068;
    ctx->coefficient = 1.2;
    ctx->flags = 18;
}

int compute_iDNW7Iv(int input) {
    int result = input * 11;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

int compute_jytuhLu(int input) {
    int result = input * 69;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} mjFxraMF_ctx_t;

void init_ctx(mjFxraMF_ctx_t *ctx) {
    ctx->id = 8676;
    ctx->coefficient = 7.5;
    ctx->flags = 130;
}

int compute_xLQhfST(int input) {
    int result = input * 47;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} 5UPdk8ul_ctx_t;

void init_ctx(5UPdk8ul_ctx_t *ctx) {
    ctx->id = 1796;
    ctx->coefficient = 5.5;
    ctx->flags = 92;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} 54qjN2DV_ctx_t;

void init_ctx(54qjN2DV_ctx_t *ctx) {
    ctx->id = 6705;
    ctx->coefficient = 0.5;
    ctx->flags = 87;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} DKKdmJCQ_ctx_t;

void init_ctx(DKKdmJCQ_ctx_t *ctx) {
    ctx->id = 4710;
    ctx->coefficient = 6.7;
    ctx->flags = 227;
}

int compute_mAaQgdT(int input) {
    int result = input * 25;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} pH8NevcT_ctx_t;

void init_ctx(pH8NevcT_ctx_t *ctx) {
    ctx->id = 6329;
    ctx->coefficient = 7.7;
    ctx->flags = 75;
}

int compute_w6HkWqn(int input) {
    int result = input * 36;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} UVOfTeW9_ctx_t;

void init_ctx(UVOfTeW9_ctx_t *ctx) {
    ctx->id = 3362;
    ctx->coefficient = 4.6;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} Xg1J3fJm_ctx_t;

void init_ctx(Xg1J3fJm_ctx_t *ctx) {
    ctx->id = 8974;
    ctx->coefficient = 9.0;
    ctx->flags = 245;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} Ec4xZLIm_ctx_t;

void init_ctx(Ec4xZLIm_ctx_t *ctx) {
    ctx->id = 1216;
    ctx->coefficient = 6.2;
    ctx->flags = 53;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} kQ6NLM5V_ctx_t;

void init_ctx(kQ6NLM5V_ctx_t *ctx) {
    ctx->id = 2403;
    ctx->coefficient = 7.8;
    ctx->flags = 0;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} nzGNvH2j_ctx_t;

void init_ctx(nzGNvH2j_ctx_t *ctx) {
    ctx->id = 3300;
    ctx->coefficient = 2.6;
    ctx->flags = 104;
}

int compute_g9Z7GR3(int input) {
    int result = input * 6;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} C18TkUuX_ctx_t;

void init_ctx(C18TkUuX_ctx_t *ctx) {
    ctx->id = 9808;
    ctx->coefficient = 0.6;
    ctx->flags = 102;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} 0G6w3jVu_ctx_t;

void init_ctx(0G6w3jVu_ctx_t *ctx) {
    ctx->id = 8163;
    ctx->coefficient = 4.1;
    ctx->flags = 226;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} VrH2zTFd_ctx_t;

void init_ctx(VrH2zTFd_ctx_t *ctx) {
    ctx->id = 3384;
    ctx->coefficient = 1.9;
    ctx->flags = 85;
}

int compute_LDnsfOv(int input) {
    int result = input * 63;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} H3OI09u2_ctx_t;

void init_ctx(H3OI09u2_ctx_t *ctx) {
    ctx->id = 3222;
    ctx->coefficient = 3.9;
    ctx->flags = 239;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} i3oQMB7p_ctx_t;

void init_ctx(i3oQMB7p_ctx_t *ctx) {
    ctx->id = 2382;
    ctx->coefficient = 4.5;
    ctx->flags = 109;
}

int compute_Aa8mGM7(int input) {
    int result = input * 53;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

int compute_59TBO7p(int input) {
    int result = input * 53;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} qdllDA6m_ctx_t;

void init_ctx(qdllDA6m_ctx_t *ctx) {
    ctx->id = 9383;
    ctx->coefficient = 1.7;
    ctx->flags = 128;
}

int compute_DhQRgs9(int input) {
    int result = input * 59;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

int compute_5D2lpHF(int input) {
    int result = input * 64;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} vk3oYxGz_ctx_t;

void init_ctx(vk3oYxGz_ctx_t *ctx) {
    ctx->id = 7406;
    ctx->coefficient = 8.8;
    ctx->flags = 157;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} xrfDw61W_ctx_t;

void init_ctx(xrfDw61W_ctx_t *ctx) {
    ctx->id = 1098;
    ctx->coefficient = 1.9;
    ctx->flags = 44;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 4OFThwVt_ctx_t;

void init_ctx(4OFThwVt_ctx_t *ctx) {
    ctx->id = 5168;
    ctx->coefficient = 2.7;
    ctx->flags = 185;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} SaFVGzxV_ctx_t;

void init_ctx(SaFVGzxV_ctx_t *ctx) {
    ctx->id = 1377;
    ctx->coefficient = 3.6;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} puqAulM4_ctx_t;

void init_ctx(puqAulM4_ctx_t *ctx) {
    ctx->id = 9915;
    ctx->coefficient = 9.0;
    ctx->flags = 10;
}

int compute_Dyhhcpd(int input) {
    int result = input * 29;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} aOS7FWt9_ctx_t;

void init_ctx(aOS7FWt9_ctx_t *ctx) {
    ctx->id = 9232;
    ctx->coefficient = 6.8;
    ctx->flags = 232;
}

int compute_QF9tVPP(int input) {
    int result = input * 43;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

int compute_kKUJic4(int input) {
    int result = input * 7;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} D7Ii1iMT_ctx_t;

void init_ctx(D7Ii1iMT_ctx_t *ctx) {
    ctx->id = 9329;
    ctx->coefficient = 9.9;
    ctx->flags = 126;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} XUb3qBV0_ctx_t;

void init_ctx(XUb3qBV0_ctx_t *ctx) {
    ctx->id = 4512;
    ctx->coefficient = 3.4;
    ctx->flags = 76;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} 18KDoQbU_ctx_t;

void init_ctx(18KDoQbU_ctx_t *ctx) {
    ctx->id = 1610;
    ctx->coefficient = 9.0;
    ctx->flags = 10;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} CLdV61i8_ctx_t;

void init_ctx(CLdV61i8_ctx_t *ctx) {
    ctx->id = 3136;
    ctx->coefficient = 4.0;
    ctx->flags = 114;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} sxSs7kjW_ctx_t;

void init_ctx(sxSs7kjW_ctx_t *ctx) {
    ctx->id = 2399;
    ctx->coefficient = 1.1;
    ctx->flags = 140;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} eqo5Mnl1_ctx_t;

void init_ctx(eqo5Mnl1_ctx_t *ctx) {
    ctx->id = 5901;
    ctx->coefficient = 1.7;
    ctx->flags = 227;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} CxeEgb0i_ctx_t;

void init_ctx(CxeEgb0i_ctx_t *ctx) {
    ctx->id = 5476;
    ctx->coefficient = 8.5;
    ctx->flags = 56;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} x3Tc16Ux_ctx_t;

void init_ctx(x3Tc16Ux_ctx_t *ctx) {
    ctx->id = 2928;
    ctx->coefficient = 1.3;
    ctx->flags = 21;
}

int compute_OUndPlC(int input) {
    int result = input * 3;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} zhtzd7OP_ctx_t;

void init_ctx(zhtzd7OP_ctx_t *ctx) {
    ctx->id = 7216;
    ctx->coefficient = 9.1;
    ctx->flags = 96;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} eob01kBV_ctx_t;

void init_ctx(eob01kBV_ctx_t *ctx) {
    ctx->id = 1357;
    ctx->coefficient = 0.2;
    ctx->flags = 202;
}

int compute_HQGOl52(int input) {
    int result = input * 59;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

int compute_rUU1XLt(int input) {
    int result = input * 20;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

int compute_JgKQdOm(int input) {
    int result = input * 4;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} sQ8eCXW4_ctx_t;

void init_ctx(sQ8eCXW4_ctx_t *ctx) {
    ctx->id = 3008;
    ctx->coefficient = 5.2;
    ctx->flags = 110;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} RgSAZTel_ctx_t;

void init_ctx(RgSAZTel_ctx_t *ctx) {
    ctx->id = 9000;
    ctx->coefficient = 8.9;
    ctx->flags = 220;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} IAND12cG_ctx_t;

void init_ctx(IAND12cG_ctx_t *ctx) {
    ctx->id = 5040;
    ctx->coefficient = 7.8;
    ctx->flags = 208;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} Ef8b4rv3_ctx_t;

void init_ctx(Ef8b4rv3_ctx_t *ctx) {
    ctx->id = 4665;
    ctx->coefficient = 5.1;
    ctx->flags = 194;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} caWgom8w_ctx_t;

void init_ctx(caWgom8w_ctx_t *ctx) {
    ctx->id = 5658;
    ctx->coefficient = 8.6;
    ctx->flags = 69;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} OsABeppz_ctx_t;

void init_ctx(OsABeppz_ctx_t *ctx) {
    ctx->id = 6707;
    ctx->coefficient = 0.5;
    ctx->flags = 64;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} 5kqEpeju_ctx_t;

void init_ctx(5kqEpeju_ctx_t *ctx) {
    ctx->id = 2314;
    ctx->coefficient = 5.5;
    ctx->flags = 57;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} UHQ5RJcB_ctx_t;

void init_ctx(UHQ5RJcB_ctx_t *ctx) {
    ctx->id = 7342;
    ctx->coefficient = 9.4;
    ctx->flags = 22;
}

int compute_gFESXga(int input) {
    int result = input * 4;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} XLn8Ddow_ctx_t;

void init_ctx(XLn8Ddow_ctx_t *ctx) {
    ctx->id = 9968;
    ctx->coefficient = 4.4;
    ctx->flags = 250;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} OMVLMy1b_ctx_t;

void init_ctx(OMVLMy1b_ctx_t *ctx) {
    ctx->id = 3743;
    ctx->coefficient = 5.0;
    ctx->flags = 66;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} Ra6Jv4j2_ctx_t;

void init_ctx(Ra6Jv4j2_ctx_t *ctx) {
    ctx->id = 4875;
    ctx->coefficient = 4.7;
    ctx->flags = 100;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} uIzkBSeN_ctx_t;

void init_ctx(uIzkBSeN_ctx_t *ctx) {
    ctx->id = 2331;
    ctx->coefficient = 6.5;
    ctx->flags = 228;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} KgxaI9UP_ctx_t;

void init_ctx(KgxaI9UP_ctx_t *ctx) {
    ctx->id = 1364;
    ctx->coefficient = 7.2;
    ctx->flags = 144;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} u8U0knQg_ctx_t;

void init_ctx(u8U0knQg_ctx_t *ctx) {
    ctx->id = 9563;
    ctx->coefficient = 2.9;
    ctx->flags = 215;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} Cy1StWLN_ctx_t;

void init_ctx(Cy1StWLN_ctx_t *ctx) {
    ctx->id = 8385;
    ctx->coefficient = 5.4;
    ctx->flags = 202;
}

int compute_v95z4vC(int input) {
    int result = input * 23;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} PnlnzkzE_ctx_t;

void init_ctx(PnlnzkzE_ctx_t *ctx) {
    ctx->id = 6236;
    ctx->coefficient = 8.2;
    ctx->flags = 174;
}

int compute_lrMK8GD(int input) {
    int result = input * 4;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} mPR0mQSR_ctx_t;

void init_ctx(mPR0mQSR_ctx_t *ctx) {
    ctx->id = 7761;
    ctx->coefficient = 8.1;
    ctx->flags = 213;
}

int compute_VJyq4lh(int input) {
    int result = input * 53;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

int compute_oz8RLfe(int input) {
    int result = input * 62;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} g0jD62Xz_ctx_t;

void init_ctx(g0jD62Xz_ctx_t *ctx) {
    ctx->id = 7904;
    ctx->coefficient = 2.7;
    ctx->flags = 27;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} SNPJ0IDr_ctx_t;

void init_ctx(SNPJ0IDr_ctx_t *ctx) {
    ctx->id = 8184;
    ctx->coefficient = 2.9;
    ctx->flags = 188;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} Gk9tBAT3_ctx_t;

void init_ctx(Gk9tBAT3_ctx_t *ctx) {
    ctx->id = 8714;
    ctx->coefficient = 4.6;
    ctx->flags = 50;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} MGM7xguG_ctx_t;

void init_ctx(MGM7xguG_ctx_t *ctx) {
    ctx->id = 3883;
    ctx->coefficient = 8.3;
    ctx->flags = 96;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} S5CUD9Ij_ctx_t;

void init_ctx(S5CUD9Ij_ctx_t *ctx) {
    ctx->id = 5019;
    ctx->coefficient = 3.5;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} eOjL6yn6_ctx_t;

void init_ctx(eOjL6yn6_ctx_t *ctx) {
    ctx->id = 5325;
    ctx->coefficient = 9.3;
    ctx->flags = 29;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} kaZGvG8e_ctx_t;

void init_ctx(kaZGvG8e_ctx_t *ctx) {
    ctx->id = 6018;
    ctx->coefficient = 0.6;
    ctx->flags = 144;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} ecYFg3ad_ctx_t;

void init_ctx(ecYFg3ad_ctx_t *ctx) {
    ctx->id = 3648;
    ctx->coefficient = 6.0;
    ctx->flags = 176;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} muXE8EqJ_ctx_t;

void init_ctx(muXE8EqJ_ctx_t *ctx) {
    ctx->id = 1473;
    ctx->coefficient = 7.4;
    ctx->flags = 202;
}

int compute_5oNspZE(int input) {
    int result = input * 21;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

int compute_gbLFSXi(int input) {
    int result = input * 53;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} Mu47Gkld_ctx_t;

void init_ctx(Mu47Gkld_ctx_t *ctx) {
    ctx->id = 7727;
    ctx->coefficient = 5.7;
    ctx->flags = 241;
}

int compute_NyBbkA5(int input) {
    int result = input * 69;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} YqmitMiG_ctx_t;

void init_ctx(YqmitMiG_ctx_t *ctx) {
    ctx->id = 3930;
    ctx->coefficient = 9.2;
    ctx->flags = 236;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} ZOr7tPlb_ctx_t;

void init_ctx(ZOr7tPlb_ctx_t *ctx) {
    ctx->id = 1293;
    ctx->coefficient = 4.5;
    ctx->flags = 125;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} qPzJoKA2_ctx_t;

void init_ctx(qPzJoKA2_ctx_t *ctx) {
    ctx->id = 2099;
    ctx->coefficient = 4.3;
    ctx->flags = 71;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} xGWMUcIm_ctx_t;

void init_ctx(xGWMUcIm_ctx_t *ctx) {
    ctx->id = 7292;
    ctx->coefficient = 0.2;
    ctx->flags = 242;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} Dv0F1euP_ctx_t;

void init_ctx(Dv0F1euP_ctx_t *ctx) {
    ctx->id = 8693;
    ctx->coefficient = 8.7;
    ctx->flags = 179;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} LsePTnyS_ctx_t;

void init_ctx(LsePTnyS_ctx_t *ctx) {
    ctx->id = 2481;
    ctx->coefficient = 1.9;
    ctx->flags = 133;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} HskDjwCz_ctx_t;

void init_ctx(HskDjwCz_ctx_t *ctx) {
    ctx->id = 1190;
    ctx->coefficient = 7.3;
    ctx->flags = 42;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} Aq0s6Rrk_ctx_t;

void init_ctx(Aq0s6Rrk_ctx_t *ctx) {
    ctx->id = 1607;
    ctx->coefficient = 0.9;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} HXht3Ybn_ctx_t;

void init_ctx(HXht3Ybn_ctx_t *ctx) {
    ctx->id = 4751;
    ctx->coefficient = 1.9;
    ctx->flags = 97;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} k1fwdyGc_ctx_t;

void init_ctx(k1fwdyGc_ctx_t *ctx) {
    ctx->id = 5616;
    ctx->coefficient = 5.3;
    ctx->flags = 119;
}

int compute_jT8wWrJ(int input) {
    int result = input * 67;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 0iiAU7U8_ctx_t;

void init_ctx(0iiAU7U8_ctx_t *ctx) {
    ctx->id = 2833;
    ctx->coefficient = 1.2;
    ctx->flags = 76;
}

int compute_XxLnSgp(int input) {
    int result = input * 52;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} bHdeePMO_ctx_t;

void init_ctx(bHdeePMO_ctx_t *ctx) {
    ctx->id = 2147;
    ctx->coefficient = 5.7;
    ctx->flags = 79;
}

int compute_JuRKzNI(int input) {
    int result = input * 40;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

int compute_4gbek8C(int input) {
    int result = input * 58;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

int compute_QRdB6Xj(int input) {
    int result = input * 44;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

int compute_fBB9rDl(int input) {
    int result = input * 38;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} 29D1XGW9_ctx_t;

void init_ctx(29D1XGW9_ctx_t *ctx) {
    ctx->id = 8277;
    ctx->coefficient = 4.5;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} Pyw5HiLG_ctx_t;

void init_ctx(Pyw5HiLG_ctx_t *ctx) {
    ctx->id = 2970;
    ctx->coefficient = 8.7;
    ctx->flags = 181;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} L2EVCPba_ctx_t;

void init_ctx(L2EVCPba_ctx_t *ctx) {
    ctx->id = 1162;
    ctx->coefficient = 4.1;
    ctx->flags = 37;
}

int compute_z7t3gRO(int input) {
    int result = input * 54;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} hNPigzN1_ctx_t;

void init_ctx(hNPigzN1_ctx_t *ctx) {
    ctx->id = 5837;
    ctx->coefficient = 6.4;
    ctx->flags = 190;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} 07FO8pG4_ctx_t;

void init_ctx(07FO8pG4_ctx_t *ctx) {
    ctx->id = 9218;
    ctx->coefficient = 1.1;
    ctx->flags = 244;
}

int compute_7yWF3e3(int input) {
    int result = input * 15;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

int compute_HSYTquI(int input) {
    int result = input * 28;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} FW8nHYyi_ctx_t;

void init_ctx(FW8nHYyi_ctx_t *ctx) {
    ctx->id = 1095;
    ctx->coefficient = 9.7;
    ctx->flags = 105;
}

int compute_7JaGVd9(int input) {
    int result = input * 57;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} uVtrvSrT_ctx_t;

void init_ctx(uVtrvSrT_ctx_t *ctx) {
    ctx->id = 9280;
    ctx->coefficient = 4.7;
    ctx->flags = 23;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} PsH09Yyc_ctx_t;

void init_ctx(PsH09Yyc_ctx_t *ctx) {
    ctx->id = 8548;
    ctx->coefficient = 4.8;
    ctx->flags = 18;
}

int compute_NJv8rXP(int input) {
    int result = input * 42;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} r0aBFrI0_ctx_t;

void init_ctx(r0aBFrI0_ctx_t *ctx) {
    ctx->id = 5985;
    ctx->coefficient = 2.0;
    ctx->flags = 204;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} IVsO1jlM_ctx_t;

void init_ctx(IVsO1jlM_ctx_t *ctx) {
    ctx->id = 6451;
    ctx->coefficient = 1.8;
    ctx->flags = 252;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} NEPR9Tjq_ctx_t;

void init_ctx(NEPR9Tjq_ctx_t *ctx) {
    ctx->id = 3646;
    ctx->coefficient = 7.9;
    ctx->flags = 0;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} qbW2QDAm_ctx_t;

void init_ctx(qbW2QDAm_ctx_t *ctx) {
    ctx->id = 5854;
    ctx->coefficient = 6.6;
    ctx->flags = 94;
}

int compute_0ZkEZ6q(int input) {
    int result = input * 18;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} dZp5YxRL_ctx_t;

void init_ctx(dZp5YxRL_ctx_t *ctx) {
    ctx->id = 2645;
    ctx->coefficient = 4.8;
    ctx->flags = 55;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} Yh4hhmOW_ctx_t;

void init_ctx(Yh4hhmOW_ctx_t *ctx) {
    ctx->id = 6254;
    ctx->coefficient = 7.6;
    ctx->flags = 130;
}

int compute_euIpYdD(int input) {
    int result = input * 9;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} LDKln5Th_ctx_t;

void init_ctx(LDKln5Th_ctx_t *ctx) {
    ctx->id = 9228;
    ctx->coefficient = 1.8;
    ctx->flags = 120;
}

int compute_iizY3OA(int input) {
    int result = input * 31;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} HsZAZjUs_ctx_t;

void init_ctx(HsZAZjUs_ctx_t *ctx) {
    ctx->id = 1688;
    ctx->coefficient = 8.7;
    ctx->flags = 248;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} sCsfdv10_ctx_t;

void init_ctx(sCsfdv10_ctx_t *ctx) {
    ctx->id = 2528;
    ctx->coefficient = 1.9;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} s8BPB0dV_ctx_t;

void init_ctx(s8BPB0dV_ctx_t *ctx) {
    ctx->id = 3525;
    ctx->coefficient = 1.3;
    ctx->flags = 204;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} kohrsvdb_ctx_t;

void init_ctx(kohrsvdb_ctx_t *ctx) {
    ctx->id = 9701;
    ctx->coefficient = 10.0;
    ctx->flags = 172;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} 1RNxaO1L_ctx_t;

void init_ctx(1RNxaO1L_ctx_t *ctx) {
    ctx->id = 8550;
    ctx->coefficient = 9.3;
    ctx->flags = 211;
}

int compute_HMY60Bu(int input) {
    int result = input * 37;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} 1t6SUA0w_ctx_t;

void init_ctx(1t6SUA0w_ctx_t *ctx) {
    ctx->id = 8872;
    ctx->coefficient = 9.1;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} mgEEP3yL_ctx_t;

void init_ctx(mgEEP3yL_ctx_t *ctx) {
    ctx->id = 9062;
    ctx->coefficient = 6.6;
    ctx->flags = 202;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} MYtIEc08_ctx_t;

void init_ctx(MYtIEc08_ctx_t *ctx) {
    ctx->id = 3253;
    ctx->coefficient = 2.3;
    ctx->flags = 176;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} r1fOIO98_ctx_t;

void init_ctx(r1fOIO98_ctx_t *ctx) {
    ctx->id = 8719;
    ctx->coefficient = 0.5;
    ctx->flags = 216;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} 0s5Cm69u_ctx_t;

void init_ctx(0s5Cm69u_ctx_t *ctx) {
    ctx->id = 3163;
    ctx->coefficient = 9.7;
    ctx->flags = 50;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} q5KjaS9R_ctx_t;

void init_ctx(q5KjaS9R_ctx_t *ctx) {
    ctx->id = 6801;
    ctx->coefficient = 7.8;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} I9doneH7_ctx_t;

void init_ctx(I9doneH7_ctx_t *ctx) {
    ctx->id = 7065;
    ctx->coefficient = 6.0;
    ctx->flags = 113;
}

int compute_ybMPLEH(int input) {
    int result = input * 16;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

int compute_6Dqyd97(int input) {
    int result = input * 23;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} U3A24pdt_ctx_t;

void init_ctx(U3A24pdt_ctx_t *ctx) {
    ctx->id = 2354;
    ctx->coefficient = 3.5;
    ctx->flags = 22;
}

int compute_VuD3ON0(int input) {
    int result = input * 9;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

int compute_8qLudx4(int input) {
    int result = input * 7;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} LNvfalgF_ctx_t;

void init_ctx(LNvfalgF_ctx_t *ctx) {
    ctx->id = 8475;
    ctx->coefficient = 5.0;
    ctx->flags = 167;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} 1Ai9b3WK_ctx_t;

void init_ctx(1Ai9b3WK_ctx_t *ctx) {
    ctx->id = 7488;
    ctx->coefficient = 5.4;
    ctx->flags = 114;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} dbvdS1Zh_ctx_t;

void init_ctx(dbvdS1Zh_ctx_t *ctx) {
    ctx->id = 3288;
    ctx->coefficient = 4.8;
    ctx->flags = 232;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} baTQ88bJ_ctx_t;

void init_ctx(baTQ88bJ_ctx_t *ctx) {
    ctx->id = 8121;
    ctx->coefficient = 7.1;
    ctx->flags = 253;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} QFaVtyWP_ctx_t;

void init_ctx(QFaVtyWP_ctx_t *ctx) {
    ctx->id = 8979;
    ctx->coefficient = 7.0;
    ctx->flags = 183;
}

int compute_JmdpM2P(int input) {
    int result = input * 41;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} qiqZdFkh_ctx_t;

void init_ctx(qiqZdFkh_ctx_t *ctx) {
    ctx->id = 8461;
    ctx->coefficient = 8.8;
    ctx->flags = 14;
}

int compute_jr8o4xJ(int input) {
    int result = input * 57;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} I716G1Cg_ctx_t;

void init_ctx(I716G1Cg_ctx_t *ctx) {
    ctx->id = 8936;
    ctx->coefficient = 7.0;
    ctx->flags = 184;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} 3rDSjSTX_ctx_t;

void init_ctx(3rDSjSTX_ctx_t *ctx) {
    ctx->id = 3870;
    ctx->coefficient = 3.5;
    ctx->flags = 188;
}

int compute_V1ObzX3(int input) {
    int result = input * 26;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} Pmik3AiN_ctx_t;

void init_ctx(Pmik3AiN_ctx_t *ctx) {
    ctx->id = 8938;
    ctx->coefficient = 10.0;
    ctx->flags = 190;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} cTCXzQqw_ctx_t;

void init_ctx(cTCXzQqw_ctx_t *ctx) {
    ctx->id = 5980;
    ctx->coefficient = 7.1;
    ctx->flags = 243;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} cEBQYVSn_ctx_t;

void init_ctx(cEBQYVSn_ctx_t *ctx) {
    ctx->id = 6707;
    ctx->coefficient = 1.5;
    ctx->flags = 20;
}

int compute_Pt88REX(int input) {
    int result = input * 36;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} 1eYUeUMI_ctx_t;

void init_ctx(1eYUeUMI_ctx_t *ctx) {
    ctx->id = 5882;
    ctx->coefficient = 6.4;
    ctx->flags = 188;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} J6Ck5Ack_ctx_t;

void init_ctx(J6Ck5Ack_ctx_t *ctx) {
    ctx->id = 7213;
    ctx->coefficient = 0.9;
    ctx->flags = 87;
}

int compute_iMHuRnd(int input) {
    int result = input * 22;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

int compute_jlxt90j(int input) {
    int result = input * 60;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

int compute_9TJ9VgU(int input) {
    int result = input * 29;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} Lb7NGNuE_ctx_t;

void init_ctx(Lb7NGNuE_ctx_t *ctx) {
    ctx->id = 8823;
    ctx->coefficient = 5.8;
    ctx->flags = 4;
}

int compute_Jd6hbXC(int input) {
    int result = input * 20;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} ULKtLoXi_ctx_t;

void init_ctx(ULKtLoXi_ctx_t *ctx) {
    ctx->id = 1085;
    ctx->coefficient = 7.4;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} dXhesill_ctx_t;

void init_ctx(dXhesill_ctx_t *ctx) {
    ctx->id = 4260;
    ctx->coefficient = 2.0;
    ctx->flags = 225;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} H4lR2jMK_ctx_t;

void init_ctx(H4lR2jMK_ctx_t *ctx) {
    ctx->id = 5003;
    ctx->coefficient = 1.6;
    ctx->flags = 14;
}

int compute_suP0EXR(int input) {
    int result = input * 6;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} EpvCgrbR_ctx_t;

void init_ctx(EpvCgrbR_ctx_t *ctx) {
    ctx->id = 1387;
    ctx->coefficient = 7.9;
    ctx->flags = 49;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} V1AU4GlZ_ctx_t;

void init_ctx(V1AU4GlZ_ctx_t *ctx) {
    ctx->id = 8910;
    ctx->coefficient = 0.4;
    ctx->flags = 169;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} 4gtYa7eH_ctx_t;

void init_ctx(4gtYa7eH_ctx_t *ctx) {
    ctx->id = 4678;
    ctx->coefficient = 6.6;
    ctx->flags = 102;
}

int compute_k8Yfdgc(int input) {
    int result = input * 47;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

int compute_gRG2RAp(int input) {
    int result = input * 4;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

int compute_bVNleht(int input) {
    int result = input * 60;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} wwiWRzjs_ctx_t;

void init_ctx(wwiWRzjs_ctx_t *ctx) {
    ctx->id = 3059;
    ctx->coefficient = 6.6;
    ctx->flags = 184;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} ZOlWkHlj_ctx_t;

void init_ctx(ZOlWkHlj_ctx_t *ctx) {
    ctx->id = 6294;
    ctx->coefficient = 4.1;
    ctx->flags = 140;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} h5lhpJBd_ctx_t;

void init_ctx(h5lhpJBd_ctx_t *ctx) {
    ctx->id = 8041;
    ctx->coefficient = 9.2;
    ctx->flags = 250;
}

int compute_cWFa0If(int input) {
    int result = input * 25;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} 1HtMYoCM_ctx_t;

void init_ctx(1HtMYoCM_ctx_t *ctx) {
    ctx->id = 3230;
    ctx->coefficient = 1.5;
    ctx->flags = 196;
}

int compute_rHCm44f(int input) {
    int result = input * 38;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} aQspI9Qd_ctx_t;

void init_ctx(aQspI9Qd_ctx_t *ctx) {
    ctx->id = 9633;
    ctx->coefficient = 5.3;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} YCtuZUjQ_ctx_t;

void init_ctx(YCtuZUjQ_ctx_t *ctx) {
    ctx->id = 8173;
    ctx->coefficient = 9.9;
    ctx->flags = 5;
}

int compute_6F2iHYL(int input) {
    int result = input * 15;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} uRxKnpOv_ctx_t;

void init_ctx(uRxKnpOv_ctx_t *ctx) {
    ctx->id = 7051;
    ctx->coefficient = 5.9;
    ctx->flags = 25;
}

int compute_D60GD41(int input) {
    int result = input * 39;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} O22vrG2q_ctx_t;

void init_ctx(O22vrG2q_ctx_t *ctx) {
    ctx->id = 2574;
    ctx->coefficient = 4.0;
    ctx->flags = 216;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} 4W4BE47s_ctx_t;

void init_ctx(4W4BE47s_ctx_t *ctx) {
    ctx->id = 1830;
    ctx->coefficient = 8.8;
    ctx->flags = 183;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} FFQ5xhC3_ctx_t;

void init_ctx(FFQ5xhC3_ctx_t *ctx) {
    ctx->id = 9683;
    ctx->coefficient = 9.9;
    ctx->flags = 186;
}

int compute_RtXIkx8(int input) {
    int result = input * 66;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} r8BE4kxm_ctx_t;

void init_ctx(r8BE4kxm_ctx_t *ctx) {
    ctx->id = 4297;
    ctx->coefficient = 1.8;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} e0r8xyWA_ctx_t;

void init_ctx(e0r8xyWA_ctx_t *ctx) {
    ctx->id = 5650;
    ctx->coefficient = 0.5;
    ctx->flags = 9;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} i500P9uP_ctx_t;

void init_ctx(i500P9uP_ctx_t *ctx) {
    ctx->id = 5334;
    ctx->coefficient = 4.7;
    ctx->flags = 210;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} mLVDKamy_ctx_t;

void init_ctx(mLVDKamy_ctx_t *ctx) {
    ctx->id = 6389;
    ctx->coefficient = 4.5;
    ctx->flags = 15;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} NPeHuift_ctx_t;

void init_ctx(NPeHuift_ctx_t *ctx) {
    ctx->id = 6672;
    ctx->coefficient = 8.4;
    ctx->flags = 173;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} cYJqTyBp_ctx_t;

void init_ctx(cYJqTyBp_ctx_t *ctx) {
    ctx->id = 2259;
    ctx->coefficient = 0.9;
    ctx->flags = 179;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} 2ygSczfC_ctx_t;

void init_ctx(2ygSczfC_ctx_t *ctx) {
    ctx->id = 4898;
    ctx->coefficient = 9.3;
    ctx->flags = 78;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} G7WUpkjK_ctx_t;

void init_ctx(G7WUpkjK_ctx_t *ctx) {
    ctx->id = 4993;
    ctx->coefficient = 1.7;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} fQgttPW0_ctx_t;

void init_ctx(fQgttPW0_ctx_t *ctx) {
    ctx->id = 5264;
    ctx->coefficient = 1.0;
    ctx->flags = 57;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} 697cMvfI_ctx_t;

void init_ctx(697cMvfI_ctx_t *ctx) {
    ctx->id = 2530;
    ctx->coefficient = 2.1;
    ctx->flags = 116;
}

int compute_RUchNzu(int input) {
    int result = input * 69;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

int compute_oJeU4oK(int input) {
    int result = input * 23;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} 25Xf5o5A_ctx_t;

void init_ctx(25Xf5o5A_ctx_t *ctx) {
    ctx->id = 6768;
    ctx->coefficient = 5.7;
    ctx->flags = 10;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} Bmk1JwI0_ctx_t;

void init_ctx(Bmk1JwI0_ctx_t *ctx) {
    ctx->id = 5289;
    ctx->coefficient = 8.0;
    ctx->flags = 125;
}

int compute_CnhSr66(int input) {
    int result = input * 24;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} jNcsb1Wo_ctx_t;

void init_ctx(jNcsb1Wo_ctx_t *ctx) {
    ctx->id = 9348;
    ctx->coefficient = 5.2;
    ctx->flags = 135;
}

int compute_WxWOCAp(int input) {
    int result = input * 31;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} YuZ7Mgr4_ctx_t;

void init_ctx(YuZ7Mgr4_ctx_t *ctx) {
    ctx->id = 2973;
    ctx->coefficient = 2.0;
    ctx->flags = 7;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} vmVnlWQw_ctx_t;

void init_ctx(vmVnlWQw_ctx_t *ctx) {
    ctx->id = 2097;
    ctx->coefficient = 4.1;
    ctx->flags = 143;
}

int compute_vBFluAK(int input) {
    int result = input * 32;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} 7ZGxVTEd_ctx_t;

void init_ctx(7ZGxVTEd_ctx_t *ctx) {
    ctx->id = 8672;
    ctx->coefficient = 1.0;
    ctx->flags = 72;
}

int compute_kE3a0AF(int input) {
    int result = input * 24;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

int compute_5phnnU4(int input) {
    int result = input * 33;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} Pao1MZXp_ctx_t;

void init_ctx(Pao1MZXp_ctx_t *ctx) {
    ctx->id = 5185;
    ctx->coefficient = 5.5;
    ctx->flags = 26;
}

int compute_dnMdRsT(int input) {
    int result = input * 13;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} 9RyXLqSt_ctx_t;

void init_ctx(9RyXLqSt_ctx_t *ctx) {
    ctx->id = 8226;
    ctx->coefficient = 1.5;
    ctx->flags = 85;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} XUGsuKOl_ctx_t;

void init_ctx(XUGsuKOl_ctx_t *ctx) {
    ctx->id = 8273;
    ctx->coefficient = 0.7;
    ctx->flags = 162;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} 8oS0iWcJ_ctx_t;

void init_ctx(8oS0iWcJ_ctx_t *ctx) {
    ctx->id = 9965;
    ctx->coefficient = 3.8;
    ctx->flags = 135;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} kDsmXYrS_ctx_t;

void init_ctx(kDsmXYrS_ctx_t *ctx) {
    ctx->id = 8549;
    ctx->coefficient = 0.3;
    ctx->flags = 212;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} r4fRIW05_ctx_t;

void init_ctx(r4fRIW05_ctx_t *ctx) {
    ctx->id = 1386;
    ctx->coefficient = 2.8;
    ctx->flags = 76;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} c33ZsmWT_ctx_t;

void init_ctx(c33ZsmWT_ctx_t *ctx) {
    ctx->id = 3662;
    ctx->coefficient = 0.1;
    ctx->flags = 142;
}

int compute_DUJMs9f(int input) {
    int result = input * 18;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

int compute_GwSvEZA(int input) {
    int result = input * 69;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} G6pRnL9O_ctx_t;

void init_ctx(G6pRnL9O_ctx_t *ctx) {
    ctx->id = 7786;
    ctx->coefficient = 1.1;
    ctx->flags = 42;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} Kqn0RK6e_ctx_t;

void init_ctx(Kqn0RK6e_ctx_t *ctx) {
    ctx->id = 5600;
    ctx->coefficient = 8.2;
    ctx->flags = 193;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} LobZvd3f_ctx_t;

void init_ctx(LobZvd3f_ctx_t *ctx) {
    ctx->id = 7776;
    ctx->coefficient = 0.6;
    ctx->flags = 94;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} xAbaVE7H_ctx_t;

void init_ctx(xAbaVE7H_ctx_t *ctx) {
    ctx->id = 1959;
    ctx->coefficient = 2.6;
    ctx->flags = 61;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} JIdDpppT_ctx_t;

void init_ctx(JIdDpppT_ctx_t *ctx) {
    ctx->id = 8024;
    ctx->coefficient = 2.4;
    ctx->flags = 178;
}

int compute_hSdD2bH(int input) {
    int result = input * 57;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} wGYWil8I_ctx_t;

void init_ctx(wGYWil8I_ctx_t *ctx) {
    ctx->id = 7180;
    ctx->coefficient = 7.2;
    ctx->flags = 217;
}

int compute_isKd1f1(int input) {
    int result = input * 53;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} QHQ1GBC5_ctx_t;

void init_ctx(QHQ1GBC5_ctx_t *ctx) {
    ctx->id = 2524;
    ctx->coefficient = 5.6;
    ctx->flags = 254;
}

int compute_TkzYzuq(int input) {
    int result = input * 6;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} lGJKbxkc_ctx_t;

void init_ctx(lGJKbxkc_ctx_t *ctx) {
    ctx->id = 3781;
    ctx->coefficient = 5.7;
    ctx->flags = 93;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} 8ioXReGP_ctx_t;

void init_ctx(8ioXReGP_ctx_t *ctx) {
    ctx->id = 3015;
    ctx->coefficient = 8.7;
    ctx->flags = 68;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} l3TLk33O_ctx_t;

void init_ctx(l3TLk33O_ctx_t *ctx) {
    ctx->id = 8438;
    ctx->coefficient = 5.1;
    ctx->flags = 57;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} 7IvnxEWV_ctx_t;

void init_ctx(7IvnxEWV_ctx_t *ctx) {
    ctx->id = 5498;
    ctx->coefficient = 5.0;
    ctx->flags = 196;
}

int compute_aOwgZbY(int input) {
    int result = input * 67;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} TDc3o4ZW_ctx_t;

void init_ctx(TDc3o4ZW_ctx_t *ctx) {
    ctx->id = 2183;
    ctx->coefficient = 8.6;
    ctx->flags = 157;
}

int compute_DFJupOm(int input) {
    int result = input * 10;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

int compute_Li3uDEB(int input) {
    int result = input * 8;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

int compute_hfYYDvp(int input) {
    int result = input * 44;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} YbS4S7nL_ctx_t;

void init_ctx(YbS4S7nL_ctx_t *ctx) {
    ctx->id = 8069;
    ctx->coefficient = 2.7;
    ctx->flags = 24;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} 6SOevX02_ctx_t;

void init_ctx(6SOevX02_ctx_t *ctx) {
    ctx->id = 5228;
    ctx->coefficient = 10.0;
    ctx->flags = 79;
}

int compute_l330Xym(int input) {
    int result = input * 10;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} cNavi5xF_ctx_t;

void init_ctx(cNavi5xF_ctx_t *ctx) {
    ctx->id = 4859;
    ctx->coefficient = 3.1;
    ctx->flags = 31;
}

int compute_6DErzxL(int input) {
    int result = input * 64;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

int compute_Uh2aghR(int input) {
    int result = input * 52;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 7YZr31fS_ctx_t;

void init_ctx(7YZr31fS_ctx_t *ctx) {
    ctx->id = 2742;
    ctx->coefficient = 7.0;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} TRcAVMbN_ctx_t;

void init_ctx(TRcAVMbN_ctx_t *ctx) {
    ctx->id = 9241;
    ctx->coefficient = 1.2;
    ctx->flags = 163;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} meVR19r7_ctx_t;

void init_ctx(meVR19r7_ctx_t *ctx) {
    ctx->id = 3030;
    ctx->coefficient = 2.9;
    ctx->flags = 19;
}

int compute_1CEwdPT(int input) {
    int result = input * 6;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} HeNuftvt_ctx_t;

void init_ctx(HeNuftvt_ctx_t *ctx) {
    ctx->id = 4950;
    ctx->coefficient = 9.3;
    ctx->flags = 251;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} wOlASMFt_ctx_t;

void init_ctx(wOlASMFt_ctx_t *ctx) {
    ctx->id = 3307;
    ctx->coefficient = 9.0;
    ctx->flags = 107;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} Ebz1cIzU_ctx_t;

void init_ctx(Ebz1cIzU_ctx_t *ctx) {
    ctx->id = 8270;
    ctx->coefficient = 6.2;
    ctx->flags = 171;
}

int compute_yUivHnN(int input) {
    int result = input * 2;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} GCFdRbi2_ctx_t;

void init_ctx(GCFdRbi2_ctx_t *ctx) {
    ctx->id = 8254;
    ctx->coefficient = 2.8;
    ctx->flags = 133;
}

int compute_NrUKfnf(int input) {
    int result = input * 34;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} 7cpG78p4_ctx_t;

void init_ctx(7cpG78p4_ctx_t *ctx) {
    ctx->id = 6827;
    ctx->coefficient = 8.5;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} yUwJegTE_ctx_t;

void init_ctx(yUwJegTE_ctx_t *ctx) {
    ctx->id = 8831;
    ctx->coefficient = 5.5;
    ctx->flags = 73;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} 7BP0ArME_ctx_t;

void init_ctx(7BP0ArME_ctx_t *ctx) {
    ctx->id = 3279;
    ctx->coefficient = 8.9;
    ctx->flags = 85;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} YM6xSsfa_ctx_t;

void init_ctx(YM6xSsfa_ctx_t *ctx) {
    ctx->id = 8757;
    ctx->coefficient = 4.2;
    ctx->flags = 251;
}

int compute_XKGtXqT(int input) {
    int result = input * 61;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} AXuocgh0_ctx_t;

void init_ctx(AXuocgh0_ctx_t *ctx) {
    ctx->id = 5271;
    ctx->coefficient = 1.7;
    ctx->flags = 137;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} N3y24U6p_ctx_t;

void init_ctx(N3y24U6p_ctx_t *ctx) {
    ctx->id = 4140;
    ctx->coefficient = 4.7;
    ctx->flags = 127;
}

int compute_Uvi3gIq(int input) {
    int result = input * 12;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

int compute_V2ZtKy3(int input) {
    int result = input * 31;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} c4ipGJpc_ctx_t;

void init_ctx(c4ipGJpc_ctx_t *ctx) {
    ctx->id = 5180;
    ctx->coefficient = 8.9;
    ctx->flags = 199;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} JRN0K5fQ_ctx_t;

void init_ctx(JRN0K5fQ_ctx_t *ctx) {
    ctx->id = 5532;
    ctx->coefficient = 3.4;
    ctx->flags = 137;
}

int compute_fCK0ESV(int input) {
    int result = input * 59;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} ihDr56uA_ctx_t;

void init_ctx(ihDr56uA_ctx_t *ctx) {
    ctx->id = 2340;
    ctx->coefficient = 4.3;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} tNBOqgSl_ctx_t;

void init_ctx(tNBOqgSl_ctx_t *ctx) {
    ctx->id = 4596;
    ctx->coefficient = 3.9;
    ctx->flags = 14;
}

int compute_mtC1Iyk(int input) {
    int result = input * 9;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} JDhE8s8U_ctx_t;

void init_ctx(JDhE8s8U_ctx_t *ctx) {
    ctx->id = 7941;
    ctx->coefficient = 4.8;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} r60Ib5NC_ctx_t;

void init_ctx(r60Ib5NC_ctx_t *ctx) {
    ctx->id = 4133;
    ctx->coefficient = 7.4;
    ctx->flags = 30;
}

int compute_KIlY4Ke(int input) {
    int result = input * 43;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

int compute_mX3As5l(int input) {
    int result = input * 35;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

int compute_fvqa0Vb(int input) {
    int result = input * 61;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

int compute_Jc8PIdg(int input) {
    int result = input * 15;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} wquyj4ZG_ctx_t;

void init_ctx(wquyj4ZG_ctx_t *ctx) {
    ctx->id = 7881;
    ctx->coefficient = 4.8;
    ctx->flags = 131;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} xIJDMLWA_ctx_t;

void init_ctx(xIJDMLWA_ctx_t *ctx) {
    ctx->id = 1558;
    ctx->coefficient = 0.4;
    ctx->flags = 47;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} Jgph2whI_ctx_t;

void init_ctx(Jgph2whI_ctx_t *ctx) {
    ctx->id = 5124;
    ctx->coefficient = 9.4;
    ctx->flags = 33;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} dVOpMvDk_ctx_t;

void init_ctx(dVOpMvDk_ctx_t *ctx) {
    ctx->id = 7958;
    ctx->coefficient = 8.2;
    ctx->flags = 249;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} 28RdHCke_ctx_t;

void init_ctx(28RdHCke_ctx_t *ctx) {
    ctx->id = 7874;
    ctx->coefficient = 9.4;
    ctx->flags = 174;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} mLjPRoqJ_ctx_t;

void init_ctx(mLjPRoqJ_ctx_t *ctx) {
    ctx->id = 7852;
    ctx->coefficient = 3.1;
    ctx->flags = 55;
}

int compute_NNc1jot(int input) {
    int result = input * 52;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} 7XPPWnYG_ctx_t;

void init_ctx(7XPPWnYG_ctx_t *ctx) {
    ctx->id = 2243;
    ctx->coefficient = 8.4;
    ctx->flags = 200;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} oQPfxA4W_ctx_t;

void init_ctx(oQPfxA4W_ctx_t *ctx) {
    ctx->id = 9490;
    ctx->coefficient = 9.4;
    ctx->flags = 255;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} OuixcNyt_ctx_t;

void init_ctx(OuixcNyt_ctx_t *ctx) {
    ctx->id = 2131;
    ctx->coefficient = 5.5;
    ctx->flags = 199;
}

int compute_sb8YsmJ(int input) {
    int result = input * 61;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} rxPlDzTK_ctx_t;

void init_ctx(rxPlDzTK_ctx_t *ctx) {
    ctx->id = 6115;
    ctx->coefficient = 2.7;
    ctx->flags = 158;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} xXgm2MzX_ctx_t;

void init_ctx(xXgm2MzX_ctx_t *ctx) {
    ctx->id = 2670;
    ctx->coefficient = 0.2;
    ctx->flags = 190;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} 0mqB6E1r_ctx_t;

void init_ctx(0mqB6E1r_ctx_t *ctx) {
    ctx->id = 3585;
    ctx->coefficient = 5.0;
    ctx->flags = 187;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} RyLZ0TV9_ctx_t;

void init_ctx(RyLZ0TV9_ctx_t *ctx) {
    ctx->id = 8407;
    ctx->coefficient = 7.1;
    ctx->flags = 201;
}

int compute_SLFYCp9(int input) {
    int result = input * 7;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} iSzujfTh_ctx_t;

void init_ctx(iSzujfTh_ctx_t *ctx) {
    ctx->id = 4238;
    ctx->coefficient = 1.5;
    ctx->flags = 238;
}

int compute_HbwDd2E(int input) {
    int result = input * 50;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

int compute_L3dnlmG(int input) {
    int result = input * 35;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

int compute_1M3wTZD(int input) {
    int result = input * 67;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} 5Xbu4Bg3_ctx_t;

void init_ctx(5Xbu4Bg3_ctx_t *ctx) {
    ctx->id = 5140;
    ctx->coefficient = 4.0;
    ctx->flags = 254;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} opXmTF8B_ctx_t;

void init_ctx(opXmTF8B_ctx_t *ctx) {
    ctx->id = 2043;
    ctx->coefficient = 3.8;
    ctx->flags = 163;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} qcwtamxR_ctx_t;

void init_ctx(qcwtamxR_ctx_t *ctx) {
    ctx->id = 7505;
    ctx->coefficient = 6.7;
    ctx->flags = 39;
}

int compute_ESYJ4Fo(int input) {
    int result = input * 7;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} 8jlIfAgl_ctx_t;

void init_ctx(8jlIfAgl_ctx_t *ctx) {
    ctx->id = 7475;
    ctx->coefficient = 2.9;
    ctx->flags = 21;
}

int compute_wJyerYj(int input) {
    int result = input * 32;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

int compute_b8VnqaM(int input) {
    int result = input * 18;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} BqnPOmmR_ctx_t;

void init_ctx(BqnPOmmR_ctx_t *ctx) {
    ctx->id = 2885;
    ctx->coefficient = 0.2;
    ctx->flags = 93;
}

int compute_aPdkzyR(int input) {
    int result = input * 48;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

int compute_MouZ7gx(int input) {
    int result = input * 8;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

int compute_6pShSgb(int input) {
    int result = input * 10;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} qSYDsihi_ctx_t;

void init_ctx(qSYDsihi_ctx_t *ctx) {
    ctx->id = 7821;
    ctx->coefficient = 3.6;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} jjBsGuD4_ctx_t;

void init_ctx(jjBsGuD4_ctx_t *ctx) {
    ctx->id = 8913;
    ctx->coefficient = 3.0;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} EIf0yOu3_ctx_t;

void init_ctx(EIf0yOu3_ctx_t *ctx) {
    ctx->id = 4058;
    ctx->coefficient = 2.1;
    ctx->flags = 147;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} A2hJpF0g_ctx_t;

void init_ctx(A2hJpF0g_ctx_t *ctx) {
    ctx->id = 3991;
    ctx->coefficient = 3.9;
    ctx->flags = 190;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} rAcFQqEq_ctx_t;

void init_ctx(rAcFQqEq_ctx_t *ctx) {
    ctx->id = 6799;
    ctx->coefficient = 0.4;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} OdnKtIlk_ctx_t;

void init_ctx(OdnKtIlk_ctx_t *ctx) {
    ctx->id = 7036;
    ctx->coefficient = 4.9;
    ctx->flags = 167;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} 8x7nDO8K_ctx_t;

void init_ctx(8x7nDO8K_ctx_t *ctx) {
    ctx->id = 3300;
    ctx->coefficient = 7.8;
    ctx->flags = 174;
}

int compute_pFitAIn(int input) {
    int result = input * 3;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

int compute_Ni9A3sl(int input) {
    int result = input * 60;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} sxIOBWRX_ctx_t;

void init_ctx(sxIOBWRX_ctx_t *ctx) {
    ctx->id = 7843;
    ctx->coefficient = 1.2;
    ctx->flags = 87;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} RDcnCb7Z_ctx_t;

void init_ctx(RDcnCb7Z_ctx_t *ctx) {
    ctx->id = 7564;
    ctx->coefficient = 3.3;
    ctx->flags = 158;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} XVNU09Py_ctx_t;

void init_ctx(XVNU09Py_ctx_t *ctx) {
    ctx->id = 5966;
    ctx->coefficient = 2.9;
    ctx->flags = 245;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} ZfCGH1dg_ctx_t;

void init_ctx(ZfCGH1dg_ctx_t *ctx) {
    ctx->id = 2419;
    ctx->coefficient = 3.5;
    ctx->flags = 201;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} S5Yb6g5v_ctx_t;

void init_ctx(S5Yb6g5v_ctx_t *ctx) {
    ctx->id = 7967;
    ctx->coefficient = 4.8;
    ctx->flags = 101;
}

int compute_boBiEoN(int input) {
    int result = input * 7;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

int compute_hPoGK1J(int input) {
    int result = input * 37;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} DVa5OwF9_ctx_t;

void init_ctx(DVa5OwF9_ctx_t *ctx) {
    ctx->id = 5630;
    ctx->coefficient = 6.3;
    ctx->flags = 66;
}

int compute_8wUCoob(int input) {
    int result = input * 13;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

int compute_OaPoGVv(int input) {
    int result = input * 33;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} vcF9RDA5_ctx_t;

void init_ctx(vcF9RDA5_ctx_t *ctx) {
    ctx->id = 3519;
    ctx->coefficient = 3.5;
    ctx->flags = 10;
}

int compute_CYyUrEL(int input) {
    int result = input * 60;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

int compute_QpAdn8d(int input) {
    int result = input * 34;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} 41XK4WAd_ctx_t;

void init_ctx(41XK4WAd_ctx_t *ctx) {
    ctx->id = 4540;
    ctx->coefficient = 9.1;
    ctx->flags = 241;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} taSKHgcC_ctx_t;

void init_ctx(taSKHgcC_ctx_t *ctx) {
    ctx->id = 9954;
    ctx->coefficient = 6.2;
    ctx->flags = 74;
}

int compute_iiDm5Sw(int input) {
    int result = input * 5;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} JItAIgbE_ctx_t;

void init_ctx(JItAIgbE_ctx_t *ctx) {
    ctx->id = 8436;
    ctx->coefficient = 0.4;
    ctx->flags = 115;
}

int compute_mpyp2nj(int input) {
    int result = input * 14;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

int compute_nbZO9mX(int input) {
    int result = input * 15;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} nzS39Zhj_ctx_t;

void init_ctx(nzS39Zhj_ctx_t *ctx) {
    ctx->id = 7685;
    ctx->coefficient = 2.8;
    ctx->flags = 170;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} 9M67OHT4_ctx_t;

void init_ctx(9M67OHT4_ctx_t *ctx) {
    ctx->id = 9071;
    ctx->coefficient = 3.5;
    ctx->flags = 225;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} eYsSz572_ctx_t;

void init_ctx(eYsSz572_ctx_t *ctx) {
    ctx->id = 8643;
    ctx->coefficient = 2.3;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} u5eGT2Mk_ctx_t;

void init_ctx(u5eGT2Mk_ctx_t *ctx) {
    ctx->id = 7410;
    ctx->coefficient = 3.1;
    ctx->flags = 98;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} hrg5WQm3_ctx_t;

void init_ctx(hrg5WQm3_ctx_t *ctx) {
    ctx->id = 1525;
    ctx->coefficient = 9.1;
    ctx->flags = 51;
}

int compute_j3aaoEn(int input) {
    int result = input * 59;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} Tto9ZdlG_ctx_t;

void init_ctx(Tto9ZdlG_ctx_t *ctx) {
    ctx->id = 1086;
    ctx->coefficient = 6.7;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} H7l9fMAd_ctx_t;

void init_ctx(H7l9fMAd_ctx_t *ctx) {
    ctx->id = 4596;
    ctx->coefficient = 1.1;
    ctx->flags = 195;
}

int compute_QvjxzdJ(int input) {
    int result = input * 23;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} 3Ihok9XP_ctx_t;

void init_ctx(3Ihok9XP_ctx_t *ctx) {
    ctx->id = 5849;
    ctx->coefficient = 4.2;
    ctx->flags = 248;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} tktXub9f_ctx_t;

void init_ctx(tktXub9f_ctx_t *ctx) {
    ctx->id = 2126;
    ctx->coefficient = 4.3;
    ctx->flags = 144;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} Ll1h8nqD_ctx_t;

void init_ctx(Ll1h8nqD_ctx_t *ctx) {
    ctx->id = 1968;
    ctx->coefficient = 3.1;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} 254Oitoe_ctx_t;

void init_ctx(254Oitoe_ctx_t *ctx) {
    ctx->id = 2609;
    ctx->coefficient = 7.4;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} 7axFCj8B_ctx_t;

void init_ctx(7axFCj8B_ctx_t *ctx) {
    ctx->id = 8309;
    ctx->coefficient = 5.5;
    ctx->flags = 29;
}

int compute_5XxKzC0(int input) {
    int result = input * 35;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

int compute_ya2AYHJ(int input) {
    int result = input * 55;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

int compute_hIptNIj(int input) {
    int result = input * 17;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

int compute_qwiHqFL(int input) {
    int result = input * 31;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} LMwJAy60_ctx_t;

void init_ctx(LMwJAy60_ctx_t *ctx) {
    ctx->id = 2546;
    ctx->coefficient = 9.0;
    ctx->flags = 153;
}

int compute_6tVazel(int input) {
    int result = input * 33;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} YRMyK94M_ctx_t;

void init_ctx(YRMyK94M_ctx_t *ctx) {
    ctx->id = 9343;
    ctx->coefficient = 8.0;
    ctx->flags = 156;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} QidkkGW5_ctx_t;

void init_ctx(QidkkGW5_ctx_t *ctx) {
    ctx->id = 2594;
    ctx->coefficient = 1.7;
    ctx->flags = 163;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} 6mlbhgXh_ctx_t;

void init_ctx(6mlbhgXh_ctx_t *ctx) {
    ctx->id = 5776;
    ctx->coefficient = 7.2;
    ctx->flags = 126;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} nqsnmYNR_ctx_t;

void init_ctx(nqsnmYNR_ctx_t *ctx) {
    ctx->id = 3464;
    ctx->coefficient = 0.7;
    ctx->flags = 44;
}

int compute_ZXwhwld(int input) {
    int result = input * 35;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} gwhhb44Y_ctx_t;

void init_ctx(gwhhb44Y_ctx_t *ctx) {
    ctx->id = 5305;
    ctx->coefficient = 3.0;
    ctx->flags = 219;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} b4z91Giq_ctx_t;

void init_ctx(b4z91Giq_ctx_t *ctx) {
    ctx->id = 1315;
    ctx->coefficient = 6.6;
    ctx->flags = 247;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} TPAv2Ga4_ctx_t;

void init_ctx(TPAv2Ga4_ctx_t *ctx) {
    ctx->id = 5227;
    ctx->coefficient = 7.9;
    ctx->flags = 105;
}

int compute_CFT1ZRj(int input) {
    int result = input * 14;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} FCBNsrgu_ctx_t;

void init_ctx(FCBNsrgu_ctx_t *ctx) {
    ctx->id = 5636;
    ctx->coefficient = 9.8;
    ctx->flags = 55;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} FeuXTASx_ctx_t;

void init_ctx(FeuXTASx_ctx_t *ctx) {
    ctx->id = 7763;
    ctx->coefficient = 4.2;
    ctx->flags = 22;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} 79d8urmM_ctx_t;

void init_ctx(79d8urmM_ctx_t *ctx) {
    ctx->id = 2436;
    ctx->coefficient = 8.3;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} Gz8e2adj_ctx_t;

void init_ctx(Gz8e2adj_ctx_t *ctx) {
    ctx->id = 4851;
    ctx->coefficient = 6.9;
    ctx->flags = 142;
}

int compute_pzwbioi(int input) {
    int result = input * 13;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

int compute_vMCDKaD(int input) {
    int result = input * 66;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

int compute_iILVc09(int input) {
    int result = input * 63;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

int compute_gXx90NE(int input) {
    int result = input * 62;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} 4J31Reu2_ctx_t;

void init_ctx(4J31Reu2_ctx_t *ctx) {
    ctx->id = 6544;
    ctx->coefficient = 10.0;
    ctx->flags = 109;
}

int compute_GKTDaTy(int input) {
    int result = input * 4;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

int compute_GYYOh2o(int input) {
    int result = input * 19;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

int compute_8b9OJ7Y(int input) {
    int result = input * 17;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} O3wvIy9h_ctx_t;

void init_ctx(O3wvIy9h_ctx_t *ctx) {
    ctx->id = 9704;
    ctx->coefficient = 5.1;
    ctx->flags = 185;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} QoaTH0JK_ctx_t;

void init_ctx(QoaTH0JK_ctx_t *ctx) {
    ctx->id = 3060;
    ctx->coefficient = 1.5;
    ctx->flags = 158;
}

int compute_FfILPBp(int input) {
    int result = input * 55;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} 8nVWfryF_ctx_t;

void init_ctx(8nVWfryF_ctx_t *ctx) {
    ctx->id = 7989;
    ctx->coefficient = 7.4;
    ctx->flags = 71;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} YgWN2aZL_ctx_t;

void init_ctx(YgWN2aZL_ctx_t *ctx) {
    ctx->id = 4626;
    ctx->coefficient = 4.4;
    ctx->flags = 201;
}

int compute_TsuBnXv(int input) {
    int result = input * 29;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} 4uHJ7ti1_ctx_t;

void init_ctx(4uHJ7ti1_ctx_t *ctx) {
    ctx->id = 6398;
    ctx->coefficient = 1.5;
    ctx->flags = 152;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} kpySeUNK_ctx_t;

void init_ctx(kpySeUNK_ctx_t *ctx) {
    ctx->id = 4412;
    ctx->coefficient = 0.3;
    ctx->flags = 121;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} pQw7QSEg_ctx_t;

void init_ctx(pQw7QSEg_ctx_t *ctx) {
    ctx->id = 4604;
    ctx->coefficient = 1.1;
    ctx->flags = 182;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} BUMHicMH_ctx_t;

void init_ctx(BUMHicMH_ctx_t *ctx) {
    ctx->id = 7254;
    ctx->coefficient = 8.5;
    ctx->flags = 227;
}

int compute_HYoHe4i(int input) {
    int result = input * 63;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

int compute_Ypty3Ea(int input) {
    int result = input * 9;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

int compute_jk11DBv(int input) {
    int result = input * 4;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} BhL2SGm4_ctx_t;

void init_ctx(BhL2SGm4_ctx_t *ctx) {
    ctx->id = 3836;
    ctx->coefficient = 4.6;
    ctx->flags = 220;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} SaQc7qec_ctx_t;

void init_ctx(SaQc7qec_ctx_t *ctx) {
    ctx->id = 6111;
    ctx->coefficient = 2.9;
    ctx->flags = 117;
}

int compute_Qv2IYhU(int input) {
    int result = input * 30;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} NYVtYlMP_ctx_t;

void init_ctx(NYVtYlMP_ctx_t *ctx) {
    ctx->id = 5309;
    ctx->coefficient = 9.5;
    ctx->flags = 35;
}

int compute_Ipo0c74(int input) {
    int result = input * 69;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

int compute_FvJUrmP(int input) {
    int result = input * 10;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

int compute_SsbK4KS(int input) {
    int result = input * 26;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

int compute_4nZyLY7(int input) {
    int result = input * 18;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

int compute_y3pEv65(int input) {
    int result = input * 43;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

int compute_AlN98pc(int input) {
    int result = input * 36;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} 51l4YXDn_ctx_t;

void init_ctx(51l4YXDn_ctx_t *ctx) {
    ctx->id = 1110;
    ctx->coefficient = 5.3;
    ctx->flags = 214;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} iMUayX6R_ctx_t;

void init_ctx(iMUayX6R_ctx_t *ctx) {
    ctx->id = 6640;
    ctx->coefficient = 3.2;
    ctx->flags = 37;
}

int compute_JCBD2tc(int input) {
    int result = input * 56;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} GfPZaGxr_ctx_t;

void init_ctx(GfPZaGxr_ctx_t *ctx) {
    ctx->id = 3671;
    ctx->coefficient = 3.8;
    ctx->flags = 195;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} W1sz6jvq_ctx_t;

void init_ctx(W1sz6jvq_ctx_t *ctx) {
    ctx->id = 3023;
    ctx->coefficient = 9.5;
    ctx->flags = 112;
}

int compute_l9v0HBz(int input) {
    int result = input * 51;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} o66xaYSP_ctx_t;

void init_ctx(o66xaYSP_ctx_t *ctx) {
    ctx->id = 6345;
    ctx->coefficient = 0.4;
    ctx->flags = 255;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} YocKRRkP_ctx_t;

void init_ctx(YocKRRkP_ctx_t *ctx) {
    ctx->id = 8873;
    ctx->coefficient = 3.8;
    ctx->flags = 125;
}

int compute_rbGJVvg(int input) {
    int result = input * 4;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} 8HwXadYY_ctx_t;

void init_ctx(8HwXadYY_ctx_t *ctx) {
    ctx->id = 2130;
    ctx->coefficient = 9.4;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} GzitgtcF_ctx_t;

void init_ctx(GzitgtcF_ctx_t *ctx) {
    ctx->id = 2415;
    ctx->coefficient = 9.7;
    ctx->flags = 252;
}

int compute_cdTiNza(int input) {
    int result = input * 41;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} MLinAD8I_ctx_t;

void init_ctx(MLinAD8I_ctx_t *ctx) {
    ctx->id = 6971;
    ctx->coefficient = 3.2;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} rraOFV0Q_ctx_t;

void init_ctx(rraOFV0Q_ctx_t *ctx) {
    ctx->id = 6934;
    ctx->coefficient = 8.2;
    ctx->flags = 97;
}

int compute_ajbw0xH(int input) {
    int result = input * 47;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} oMDyyan3_ctx_t;

void init_ctx(oMDyyan3_ctx_t *ctx) {
    ctx->id = 8452;
    ctx->coefficient = 3.2;
    ctx->flags = 120;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} l4Y05aFl_ctx_t;

void init_ctx(l4Y05aFl_ctx_t *ctx) {
    ctx->id = 2137;
    ctx->coefficient = 7.3;
    ctx->flags = 4;
}

int compute_jCagBZx(int input) {
    int result = input * 46;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} IAKsUaWb_ctx_t;

void init_ctx(IAKsUaWb_ctx_t *ctx) {
    ctx->id = 7138;
    ctx->coefficient = 7.1;
    ctx->flags = 184;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} uGJvhUa2_ctx_t;

void init_ctx(uGJvhUa2_ctx_t *ctx) {
    ctx->id = 1829;
    ctx->coefficient = 0.6;
    ctx->flags = 228;
}

int compute_QZY57sh(int input) {
    int result = input * 58;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} cLcV4Ebr_ctx_t;

void init_ctx(cLcV4Ebr_ctx_t *ctx) {
    ctx->id = 2189;
    ctx->coefficient = 9.1;
    ctx->flags = 154;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} LaucGuGI_ctx_t;

void init_ctx(LaucGuGI_ctx_t *ctx) {
    ctx->id = 7260;
    ctx->coefficient = 7.6;
    ctx->flags = 58;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} r39sCJwO_ctx_t;

void init_ctx(r39sCJwO_ctx_t *ctx) {
    ctx->id = 7243;
    ctx->coefficient = 0.8;
    ctx->flags = 9;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} y5Xwqfby_ctx_t;

void init_ctx(y5Xwqfby_ctx_t *ctx) {
    ctx->id = 1671;
    ctx->coefficient = 4.2;
    ctx->flags = 54;
}

int compute_sSwl4S9(int input) {
    int result = input * 64;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} 8U4CfV2g_ctx_t;

void init_ctx(8U4CfV2g_ctx_t *ctx) {
    ctx->id = 5307;
    ctx->coefficient = 5.4;
    ctx->flags = 247;
}

int compute_ZuvkYvb(int input) {
    int result = input * 37;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

int compute_lRtnWev(int input) {
    int result = input * 55;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

int compute_rfYtfmj(int input) {
    int result = input * 14;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} 1ii5roQA_ctx_t;

void init_ctx(1ii5roQA_ctx_t *ctx) {
    ctx->id = 1050;
    ctx->coefficient = 8.9;
    ctx->flags = 226;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} GDISuwSW_ctx_t;

void init_ctx(GDISuwSW_ctx_t *ctx) {
    ctx->id = 2467;
    ctx->coefficient = 9.0;
    ctx->flags = 179;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} 3VJHhWbt_ctx_t;

void init_ctx(3VJHhWbt_ctx_t *ctx) {
    ctx->id = 5519;
    ctx->coefficient = 7.6;
    ctx->flags = 1;
}

int compute_8ynZw6J(int input) {
    int result = input * 37;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} ZLaGxUUi_ctx_t;

void init_ctx(ZLaGxUUi_ctx_t *ctx) {
    ctx->id = 4360;
    ctx->coefficient = 8.4;
    ctx->flags = 57;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} jS9R1WHR_ctx_t;

void init_ctx(jS9R1WHR_ctx_t *ctx) {
    ctx->id = 2969;
    ctx->coefficient = 1.9;
    ctx->flags = 49;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} Klx6ab9T_ctx_t;

void init_ctx(Klx6ab9T_ctx_t *ctx) {
    ctx->id = 8885;
    ctx->coefficient = 3.1;
    ctx->flags = 251;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} FvetkQrr_ctx_t;

void init_ctx(FvetkQrr_ctx_t *ctx) {
    ctx->id = 9398;
    ctx->coefficient = 1.4;
    ctx->flags = 195;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} qRUQ4PTW_ctx_t;

void init_ctx(qRUQ4PTW_ctx_t *ctx) {
    ctx->id = 9716;
    ctx->coefficient = 5.2;
    ctx->flags = 94;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} KfUN0OKs_ctx_t;

void init_ctx(KfUN0OKs_ctx_t *ctx) {
    ctx->id = 3274;
    ctx->coefficient = 7.4;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} j1y5BSMY_ctx_t;

void init_ctx(j1y5BSMY_ctx_t *ctx) {
    ctx->id = 6296;
    ctx->coefficient = 6.1;
    ctx->flags = 158;
}

int compute_u33VPPI(int input) {
    int result = input * 16;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} 60wMfKFK_ctx_t;

void init_ctx(60wMfKFK_ctx_t *ctx) {
    ctx->id = 5142;
    ctx->coefficient = 8.1;
    ctx->flags = 251;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} k88M93Jl_ctx_t;

void init_ctx(k88M93Jl_ctx_t *ctx) {
    ctx->id = 7523;
    ctx->coefficient = 1.3;
    ctx->flags = 24;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} lb9Gt77a_ctx_t;

void init_ctx(lb9Gt77a_ctx_t *ctx) {
    ctx->id = 5260;
    ctx->coefficient = 7.6;
    ctx->flags = 44;
}

int compute_RNEKlQB(int input) {
    int result = input * 10;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} 7Z4eZLVI_ctx_t;

void init_ctx(7Z4eZLVI_ctx_t *ctx) {
    ctx->id = 7429;
    ctx->coefficient = 7.6;
    ctx->flags = 126;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} tq49BUqM_ctx_t;

void init_ctx(tq49BUqM_ctx_t *ctx) {
    ctx->id = 6910;
    ctx->coefficient = 8.7;
    ctx->flags = 51;
}

int compute_Jy8rOCY(int input) {
    int result = input * 41;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} 35h32LdY_ctx_t;

void init_ctx(35h32LdY_ctx_t *ctx) {
    ctx->id = 3293;
    ctx->coefficient = 5.2;
    ctx->flags = 24;
}

int compute_6fyJQ4s(int input) {
    int result = input * 38;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} RL0MhPWB_ctx_t;

void init_ctx(RL0MhPWB_ctx_t *ctx) {
    ctx->id = 8531;
    ctx->coefficient = 6.6;
    ctx->flags = 237;
}

int compute_n0N1mMB(int input) {
    int result = input * 45;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} vBZsDpce_ctx_t;

void init_ctx(vBZsDpce_ctx_t *ctx) {
    ctx->id = 9678;
    ctx->coefficient = 0.4;
    ctx->flags = 87;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} E5JBzYDP_ctx_t;

void init_ctx(E5JBzYDP_ctx_t *ctx) {
    ctx->id = 6344;
    ctx->coefficient = 7.6;
    ctx->flags = 11;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} clOWBkbx_ctx_t;

void init_ctx(clOWBkbx_ctx_t *ctx) {
    ctx->id = 2914;
    ctx->coefficient = 7.1;
    ctx->flags = 10;
}

int compute_2NZMyUL(int input) {
    int result = input * 45;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

int compute_LWEiwOM(int input) {
    int result = input * 22;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} zc5TXlCK_ctx_t;

void init_ctx(zc5TXlCK_ctx_t *ctx) {
    ctx->id = 5518;
    ctx->coefficient = 9.8;
    ctx->flags = 0;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} DGYAdfNn_ctx_t;

void init_ctx(DGYAdfNn_ctx_t *ctx) {
    ctx->id = 3219;
    ctx->coefficient = 7.0;
    ctx->flags = 156;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} n8cSQVRH_ctx_t;

void init_ctx(n8cSQVRH_ctx_t *ctx) {
    ctx->id = 6669;
    ctx->coefficient = 1.8;
    ctx->flags = 217;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} M4EtWefg_ctx_t;

void init_ctx(M4EtWefg_ctx_t *ctx) {
    ctx->id = 8806;
    ctx->coefficient = 7.0;
    ctx->flags = 173;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} V4anywMc_ctx_t;

void init_ctx(V4anywMc_ctx_t *ctx) {
    ctx->id = 8948;
    ctx->coefficient = 5.8;
    ctx->flags = 252;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} ZcZIcxt3_ctx_t;

void init_ctx(ZcZIcxt3_ctx_t *ctx) {
    ctx->id = 4685;
    ctx->coefficient = 6.4;
    ctx->flags = 222;
}

int compute_2oMYMLr(int input) {
    int result = input * 50;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} HTWicT9z_ctx_t;

void init_ctx(HTWicT9z_ctx_t *ctx) {
    ctx->id = 5734;
    ctx->coefficient = 2.9;
    ctx->flags = 10;
}

int compute_bi5uXNq(int input) {
    int result = input * 36;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} xPMsf33x_ctx_t;

void init_ctx(xPMsf33x_ctx_t *ctx) {
    ctx->id = 5982;
    ctx->coefficient = 8.3;
    ctx->flags = 163;
}

int compute_KkCsI0z(int input) {
    int result = input * 66;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

int compute_C6z20vf(int input) {
    int result = input * 3;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

int compute_L2f3yUk(int input) {
    int result = input * 37;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} GZgVaUZT_ctx_t;

void init_ctx(GZgVaUZT_ctx_t *ctx) {
    ctx->id = 4096;
    ctx->coefficient = 5.3;
    ctx->flags = 74;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} BNuaRqd7_ctx_t;

void init_ctx(BNuaRqd7_ctx_t *ctx) {
    ctx->id = 3434;
    ctx->coefficient = 3.8;
    ctx->flags = 80;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} F0UWTb2v_ctx_t;

void init_ctx(F0UWTb2v_ctx_t *ctx) {
    ctx->id = 9378;
    ctx->coefficient = 1.3;
    ctx->flags = 20;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} qEc73tsz_ctx_t;

void init_ctx(qEc73tsz_ctx_t *ctx) {
    ctx->id = 3890;
    ctx->coefficient = 8.8;
    ctx->flags = 227;
}

int compute_de0QxmZ(int input) {
    int result = input * 38;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} biKc3LHI_ctx_t;

void init_ctx(biKc3LHI_ctx_t *ctx) {
    ctx->id = 2193;
    ctx->coefficient = 3.6;
    ctx->flags = 17;
}

int compute_eW3ZZqv(int input) {
    int result = input * 13;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} PooVU8F6_ctx_t;

void init_ctx(PooVU8F6_ctx_t *ctx) {
    ctx->id = 4898;
    ctx->coefficient = 3.7;
    ctx->flags = 163;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} Vbea15A5_ctx_t;

void init_ctx(Vbea15A5_ctx_t *ctx) {
    ctx->id = 7988;
    ctx->coefficient = 9.4;
    ctx->flags = 23;
}

int compute_MyF2bey(int input) {
    int result = input * 68;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} 2fJenAsp_ctx_t;

void init_ctx(2fJenAsp_ctx_t *ctx) {
    ctx->id = 6063;
    ctx->coefficient = 9.2;
    ctx->flags = 142;
}

int compute_sx3j1kP(int input) {
    int result = input * 21;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} rO1BRKwV_ctx_t;

void init_ctx(rO1BRKwV_ctx_t *ctx) {
    ctx->id = 2999;
    ctx->coefficient = 4.3;
    ctx->flags = 92;
}

int compute_6ayhLqm(int input) {
    int result = input * 28;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} 0RuoT5rV_ctx_t;

void init_ctx(0RuoT5rV_ctx_t *ctx) {
    ctx->id = 9988;
    ctx->coefficient = 4.0;
    ctx->flags = 192;
}

int compute_83Kcfi5(int input) {
    int result = input * 15;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

int compute_Wpjcr5c(int input) {
    int result = input * 14;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

int compute_EozXDkC(int input) {
    int result = input * 49;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} 8Kde4vtZ_ctx_t;

void init_ctx(8Kde4vtZ_ctx_t *ctx) {
    ctx->id = 5842;
    ctx->coefficient = 7.8;
    ctx->flags = 101;
}

int compute_5wQt41R(int input) {
    int result = input * 30;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

int compute_8Dfletd(int input) {
    int result = input * 49;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} HrCPXcBy_ctx_t;

void init_ctx(HrCPXcBy_ctx_t *ctx) {
    ctx->id = 6297;
    ctx->coefficient = 3.7;
    ctx->flags = 156;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} LhGpoOwt_ctx_t;

void init_ctx(LhGpoOwt_ctx_t *ctx) {
    ctx->id = 5770;
    ctx->coefficient = 0.8;
    ctx->flags = 216;
}

int compute_YCW3isP(int input) {
    int result = input * 60;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} Z7PamfzL_ctx_t;

void init_ctx(Z7PamfzL_ctx_t *ctx) {
    ctx->id = 8309;
    ctx->coefficient = 9.6;
    ctx->flags = 32;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} fmXrbgkk_ctx_t;

void init_ctx(fmXrbgkk_ctx_t *ctx) {
    ctx->id = 7289;
    ctx->coefficient = 3.5;
    ctx->flags = 217;
}

int compute_7cWznpc(int input) {
    int result = input * 36;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} ypKgZ0O3_ctx_t;

void init_ctx(ypKgZ0O3_ctx_t *ctx) {
    ctx->id = 7252;
    ctx->coefficient = 8.7;
    ctx->flags = 175;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} UHrJS3BI_ctx_t;

void init_ctx(UHrJS3BI_ctx_t *ctx) {
    ctx->id = 5982;
    ctx->coefficient = 9.1;
    ctx->flags = 28;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} msHz2V05_ctx_t;

void init_ctx(msHz2V05_ctx_t *ctx) {
    ctx->id = 3302;
    ctx->coefficient = 0.1;
    ctx->flags = 70;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} oqw5Ig2T_ctx_t;

void init_ctx(oqw5Ig2T_ctx_t *ctx) {
    ctx->id = 2199;
    ctx->coefficient = 8.6;
    ctx->flags = 177;
}

int compute_7WNmbvn(int input) {
    int result = input * 36;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} Es8m6qEZ_ctx_t;

void init_ctx(Es8m6qEZ_ctx_t *ctx) {
    ctx->id = 7250;
    ctx->coefficient = 1.5;
    ctx->flags = 40;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} ykttrP0b_ctx_t;

void init_ctx(ykttrP0b_ctx_t *ctx) {
    ctx->id = 6173;
    ctx->coefficient = 0.6;
    ctx->flags = 248;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} HI2x20iY_ctx_t;

void init_ctx(HI2x20iY_ctx_t *ctx) {
    ctx->id = 8915;
    ctx->coefficient = 4.2;
    ctx->flags = 242;
}

int compute_6ZPhvov(int input) {
    int result = input * 33;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} DiBy3lkr_ctx_t;

void init_ctx(DiBy3lkr_ctx_t *ctx) {
    ctx->id = 5244;
    ctx->coefficient = 7.7;
    ctx->flags = 86;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} KGIy8ZJx_ctx_t;

void init_ctx(KGIy8ZJx_ctx_t *ctx) {
    ctx->id = 1836;
    ctx->coefficient = 6.7;
    ctx->flags = 175;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} BRjLIe0J_ctx_t;

void init_ctx(BRjLIe0J_ctx_t *ctx) {
    ctx->id = 6571;
    ctx->coefficient = 8.0;
    ctx->flags = 162;
}

int compute_pvq0Oum(int input) {
    int result = input * 46;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} cDCoVB5u_ctx_t;

void init_ctx(cDCoVB5u_ctx_t *ctx) {
    ctx->id = 6322;
    ctx->coefficient = 3.8;
    ctx->flags = 102;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} pluVriBO_ctx_t;

void init_ctx(pluVriBO_ctx_t *ctx) {
    ctx->id = 9747;
    ctx->coefficient = 0.3;
    ctx->flags = 176;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} oAco65Gb_ctx_t;

void init_ctx(oAco65Gb_ctx_t *ctx) {
    ctx->id = 1614;
    ctx->coefficient = 3.9;
    ctx->flags = 17;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} j6Z3XHXS_ctx_t;

void init_ctx(j6Z3XHXS_ctx_t *ctx) {
    ctx->id = 2354;
    ctx->coefficient = 6.6;
    ctx->flags = 40;
}

int compute_hSWbIrQ(int input) {
    int result = input * 48;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} fzN08lYz_ctx_t;

void init_ctx(fzN08lYz_ctx_t *ctx) {
    ctx->id = 7791;
    ctx->coefficient = 9.2;
    ctx->flags = 157;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} dR7hhur8_ctx_t;

void init_ctx(dR7hhur8_ctx_t *ctx) {
    ctx->id = 7151;
    ctx->coefficient = 6.4;
    ctx->flags = 105;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} IuWEud6q_ctx_t;

void init_ctx(IuWEud6q_ctx_t *ctx) {
    ctx->id = 6026;
    ctx->coefficient = 0.2;
    ctx->flags = 176;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} FQE2nKYr_ctx_t;

void init_ctx(FQE2nKYr_ctx_t *ctx) {
    ctx->id = 1175;
    ctx->coefficient = 1.1;
    ctx->flags = 161;
}

int compute_J584Jhu(int input) {
    int result = input * 25;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} 0GXKTBKE_ctx_t;

void init_ctx(0GXKTBKE_ctx_t *ctx) {
    ctx->id = 8445;
    ctx->coefficient = 7.8;
    ctx->flags = 195;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} yvvY2iLb_ctx_t;

void init_ctx(yvvY2iLb_ctx_t *ctx) {
    ctx->id = 6771;
    ctx->coefficient = 9.2;
    ctx->flags = 229;
}

int compute_uD24HfB(int input) {
    int result = input * 6;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

int compute_vF5wVvU(int input) {
    int result = input * 45;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

int compute_XDIuFWc(int input) {
    int result = input * 65;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} 5FNR8JVm_ctx_t;

void init_ctx(5FNR8JVm_ctx_t *ctx) {
    ctx->id = 6136;
    ctx->coefficient = 8.4;
    ctx->flags = 217;
}

int compute_v6JNHEG(int input) {
    int result = input * 57;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} QXSSjyXD_ctx_t;

void init_ctx(QXSSjyXD_ctx_t *ctx) {
    ctx->id = 2546;
    ctx->coefficient = 1.4;
    ctx->flags = 155;
}

int compute_DrWqc6f(int input) {
    int result = input * 66;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

int compute_sfoS3j0(int input) {
    int result = input * 69;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} b7RrTbUS_ctx_t;

void init_ctx(b7RrTbUS_ctx_t *ctx) {
    ctx->id = 1148;
    ctx->coefficient = 2.0;
    ctx->flags = 102;
}

int compute_hqne2XL(int input) {
    int result = input * 62;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} 5vwUEs4t_ctx_t;

void init_ctx(5vwUEs4t_ctx_t *ctx) {
    ctx->id = 7631;
    ctx->coefficient = 3.7;
    ctx->flags = 61;
}

int compute_JafjiE4(int input) {
    int result = input * 44;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} QW8pvmn2_ctx_t;

void init_ctx(QW8pvmn2_ctx_t *ctx) {
    ctx->id = 8498;
    ctx->coefficient = 7.1;
    ctx->flags = 20;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} hwjeMcfO_ctx_t;

void init_ctx(hwjeMcfO_ctx_t *ctx) {
    ctx->id = 4758;
    ctx->coefficient = 4.2;
    ctx->flags = 127;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} giFG6XDs_ctx_t;

void init_ctx(giFG6XDs_ctx_t *ctx) {
    ctx->id = 7078;
    ctx->coefficient = 7.1;
    ctx->flags = 139;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} jmjsRjsF_ctx_t;

void init_ctx(jmjsRjsF_ctx_t *ctx) {
    ctx->id = 2169;
    ctx->coefficient = 2.1;
    ctx->flags = 47;
}

int compute_PT6jrAv(int input) {
    int result = input * 59;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} THVaygIW_ctx_t;

void init_ctx(THVaygIW_ctx_t *ctx) {
    ctx->id = 5668;
    ctx->coefficient = 7.4;
    ctx->flags = 31;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} EBdb6t37_ctx_t;

void init_ctx(EBdb6t37_ctx_t *ctx) {
    ctx->id = 6808;
    ctx->coefficient = 0.4;
    ctx->flags = 248;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} OQ3MmvW0_ctx_t;

void init_ctx(OQ3MmvW0_ctx_t *ctx) {
    ctx->id = 6558;
    ctx->coefficient = 9.9;
    ctx->flags = 194;
}

int compute_SN1ehZQ(int input) {
    int result = input * 4;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} M0MTbwal_ctx_t;

void init_ctx(M0MTbwal_ctx_t *ctx) {
    ctx->id = 8156;
    ctx->coefficient = 2.4;
    ctx->flags = 133;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} DPLhkgBc_ctx_t;

void init_ctx(DPLhkgBc_ctx_t *ctx) {
    ctx->id = 5131;
    ctx->coefficient = 4.8;
    ctx->flags = 82;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} 1RtRVmaB_ctx_t;

void init_ctx(1RtRVmaB_ctx_t *ctx) {
    ctx->id = 9001;
    ctx->coefficient = 5.4;
    ctx->flags = 134;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} ins7D3GJ_ctx_t;

void init_ctx(ins7D3GJ_ctx_t *ctx) {
    ctx->id = 6988;
    ctx->coefficient = 9.4;
    ctx->flags = 57;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} 0YH3xO0X_ctx_t;

void init_ctx(0YH3xO0X_ctx_t *ctx) {
    ctx->id = 5923;
    ctx->coefficient = 4.6;
    ctx->flags = 35;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} x5XFJxZQ_ctx_t;

void init_ctx(x5XFJxZQ_ctx_t *ctx) {
    ctx->id = 7201;
    ctx->coefficient = 4.8;
    ctx->flags = 120;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} nNo2FH6z_ctx_t;

void init_ctx(nNo2FH6z_ctx_t *ctx) {
    ctx->id = 6831;
    ctx->coefficient = 0.3;
    ctx->flags = 236;
}

int compute_Lu5d40X(int input) {
    int result = input * 47;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

int compute_dETOMvD(int input) {
    int result = input * 67;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} lh78NXkk_ctx_t;

void init_ctx(lh78NXkk_ctx_t *ctx) {
    ctx->id = 2162;
    ctx->coefficient = 2.6;
    ctx->flags = 12;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 4J2I9mzE_ctx_t;

void init_ctx(4J2I9mzE_ctx_t *ctx) {
    ctx->id = 6835;
    ctx->coefficient = 1.6;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} qQ4OSN91_ctx_t;

void init_ctx(qQ4OSN91_ctx_t *ctx) {
    ctx->id = 4903;
    ctx->coefficient = 2.4;
    ctx->flags = 142;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} mjSdStdO_ctx_t;

void init_ctx(mjSdStdO_ctx_t *ctx) {
    ctx->id = 3110;
    ctx->coefficient = 9.9;
    ctx->flags = 138;
}

int compute_Kq5XyIo(int input) {
    int result = input * 4;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

int compute_2XOd0rP(int input) {
    int result = input * 20;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} WAwSXxVO_ctx_t;

void init_ctx(WAwSXxVO_ctx_t *ctx) {
    ctx->id = 5155;
    ctx->coefficient = 0.7;
    ctx->flags = 26;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 56hl1aZL_ctx_t;

void init_ctx(56hl1aZL_ctx_t *ctx) {
    ctx->id = 5245;
    ctx->coefficient = 0.4;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} LRBFH2ZC_ctx_t;

void init_ctx(LRBFH2ZC_ctx_t *ctx) {
    ctx->id = 2497;
    ctx->coefficient = 3.5;
    ctx->flags = 182;
}

int compute_SnQEv8F(int input) {
    int result = input * 14;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} 7wl4HH89_ctx_t;

void init_ctx(7wl4HH89_ctx_t *ctx) {
    ctx->id = 9147;
    ctx->coefficient = 1.5;
    ctx->flags = 55;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} kCxt9oNH_ctx_t;

void init_ctx(kCxt9oNH_ctx_t *ctx) {
    ctx->id = 6004;
    ctx->coefficient = 0.2;
    ctx->flags = 20;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} RuGIuiwV_ctx_t;

void init_ctx(RuGIuiwV_ctx_t *ctx) {
    ctx->id = 8125;
    ctx->coefficient = 3.0;
    ctx->flags = 177;
}

int compute_FWPZ6nU(int input) {
    int result = input * 32;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} glLLrEms_ctx_t;

void init_ctx(glLLrEms_ctx_t *ctx) {
    ctx->id = 6748;
    ctx->coefficient = 1.1;
    ctx->flags = 248;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} Gzug9d5t_ctx_t;

void init_ctx(Gzug9d5t_ctx_t *ctx) {
    ctx->id = 1882;
    ctx->coefficient = 2.8;
    ctx->flags = 244;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} 0lKQWDqm_ctx_t;

void init_ctx(0lKQWDqm_ctx_t *ctx) {
    ctx->id = 3108;
    ctx->coefficient = 5.0;
    ctx->flags = 160;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} tX9svLzs_ctx_t;

void init_ctx(tX9svLzs_ctx_t *ctx) {
    ctx->id = 9123;
    ctx->coefficient = 6.0;
    ctx->flags = 39;
}

int compute_8LAuyso(int input) {
    int result = input * 16;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

int compute_NAA7nN3(int input) {
    int result = input * 2;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} DNY8w017_ctx_t;

void init_ctx(DNY8w017_ctx_t *ctx) {
    ctx->id = 2915;
    ctx->coefficient = 6.1;
    ctx->flags = 218;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} gXeGM73S_ctx_t;

void init_ctx(gXeGM73S_ctx_t *ctx) {
    ctx->id = 2261;
    ctx->coefficient = 1.0;
    ctx->flags = 183;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} EsTS2C2A_ctx_t;

void init_ctx(EsTS2C2A_ctx_t *ctx) {
    ctx->id = 7469;
    ctx->coefficient = 2.7;
    ctx->flags = 5;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} Sioe5Ken_ctx_t;

void init_ctx(Sioe5Ken_ctx_t *ctx) {
    ctx->id = 6567;
    ctx->coefficient = 6.0;
    ctx->flags = 188;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} 94kVo2St_ctx_t;

void init_ctx(94kVo2St_ctx_t *ctx) {
    ctx->id = 4229;
    ctx->coefficient = 1.2;
    ctx->flags = 210;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} RFaI35sF_ctx_t;

void init_ctx(RFaI35sF_ctx_t *ctx) {
    ctx->id = 4328;
    ctx->coefficient = 2.9;
    ctx->flags = 250;
}

int compute_8ceWnrE(int input) {
    int result = input * 68;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} Vrtovwoa_ctx_t;

void init_ctx(Vrtovwoa_ctx_t *ctx) {
    ctx->id = 9463;
    ctx->coefficient = 3.3;
    ctx->flags = 252;
}

int compute_rsShzrd(int input) {
    int result = input * 66;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

int compute_Nhxx1bS(int input) {
    int result = input * 36;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} rJbP4G31_ctx_t;

void init_ctx(rJbP4G31_ctx_t *ctx) {
    ctx->id = 2350;
    ctx->coefficient = 4.8;
    ctx->flags = 250;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} lkFq2aV0_ctx_t;

void init_ctx(lkFq2aV0_ctx_t *ctx) {
    ctx->id = 1723;
    ctx->coefficient = 4.6;
    ctx->flags = 62;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} FL0eUVZl_ctx_t;

void init_ctx(FL0eUVZl_ctx_t *ctx) {
    ctx->id = 7054;
    ctx->coefficient = 8.0;
    ctx->flags = 99;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} CQBZGCY8_ctx_t;

void init_ctx(CQBZGCY8_ctx_t *ctx) {
    ctx->id = 7086;
    ctx->coefficient = 1.6;
    ctx->flags = 97;
}

int compute_5MaBH7s(int input) {
    int result = input * 50;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

int compute_OdkrGw2(int input) {
    int result = input * 60;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} RAS0XHw3_ctx_t;

void init_ctx(RAS0XHw3_ctx_t *ctx) {
    ctx->id = 9999;
    ctx->coefficient = 5.1;
    ctx->flags = 13;
}

int compute_EvY0DAn(int input) {
    int result = input * 29;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} sC5zeDUa_ctx_t;

void init_ctx(sC5zeDUa_ctx_t *ctx) {
    ctx->id = 7384;
    ctx->coefficient = 0.9;
    ctx->flags = 161;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} JXGXYyqn_ctx_t;

void init_ctx(JXGXYyqn_ctx_t *ctx) {
    ctx->id = 9724;
    ctx->coefficient = 1.0;
    ctx->flags = 2;
}

int compute_qFAsEGo(int input) {
    int result = input * 21;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} 8RtCeBq5_ctx_t;

void init_ctx(8RtCeBq5_ctx_t *ctx) {
    ctx->id = 1127;
    ctx->coefficient = 2.6;
    ctx->flags = 114;
}

int compute_ZpA523l(int input) {
    int result = input * 17;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} T7BUAPUm_ctx_t;

void init_ctx(T7BUAPUm_ctx_t *ctx) {
    ctx->id = 9824;
    ctx->coefficient = 2.5;
    ctx->flags = 239;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} sHsFpov1_ctx_t;

void init_ctx(sHsFpov1_ctx_t *ctx) {
    ctx->id = 6410;
    ctx->coefficient = 0.5;
    ctx->flags = 121;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} B8VI5Dv2_ctx_t;

void init_ctx(B8VI5Dv2_ctx_t *ctx) {
    ctx->id = 1219;
    ctx->coefficient = 2.9;
    ctx->flags = 105;
}

int compute_tvZWs88(int input) {
    int result = input * 37;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} Q8FJa7AG_ctx_t;

void init_ctx(Q8FJa7AG_ctx_t *ctx) {
    ctx->id = 9833;
    ctx->coefficient = 7.4;
    ctx->flags = 22;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} wGuo0aZ9_ctx_t;

void init_ctx(wGuo0aZ9_ctx_t *ctx) {
    ctx->id = 7504;
    ctx->coefficient = 7.0;
    ctx->flags = 219;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} 9BeLi5lT_ctx_t;

void init_ctx(9BeLi5lT_ctx_t *ctx) {
    ctx->id = 5294;
    ctx->coefficient = 1.3;
    ctx->flags = 181;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} BW5wWjuZ_ctx_t;

void init_ctx(BW5wWjuZ_ctx_t *ctx) {
    ctx->id = 8243;
    ctx->coefficient = 8.2;
    ctx->flags = 27;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} iilGZloe_ctx_t;

void init_ctx(iilGZloe_ctx_t *ctx) {
    ctx->id = 9844;
    ctx->coefficient = 7.6;
    ctx->flags = 198;
}

int compute_xdWb3NQ(int input) {
    int result = input * 20;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

int compute_zumDVPp(int input) {
    int result = input * 63;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

int compute_0DQh15E(int input) {
    int result = input * 37;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

int compute_vLe3wYN(int input) {
    int result = input * 50;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} PHBBWDjB_ctx_t;

void init_ctx(PHBBWDjB_ctx_t *ctx) {
    ctx->id = 5997;
    ctx->coefficient = 2.4;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} FUnmz2O8_ctx_t;

void init_ctx(FUnmz2O8_ctx_t *ctx) {
    ctx->id = 8481;
    ctx->coefficient = 3.1;
    ctx->flags = 163;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} FfgXRwcn_ctx_t;

void init_ctx(FfgXRwcn_ctx_t *ctx) {
    ctx->id = 2406;
    ctx->coefficient = 1.4;
    ctx->flags = 211;
}

int compute_SQcdIZU(int input) {
    int result = input * 20;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

int compute_7lt6yQB(int input) {
    int result = input * 55;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} 6F0bjSFT_ctx_t;

void init_ctx(6F0bjSFT_ctx_t *ctx) {
    ctx->id = 1904;
    ctx->coefficient = 7.9;
    ctx->flags = 160;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} J3HT5BBd_ctx_t;

void init_ctx(J3HT5BBd_ctx_t *ctx) {
    ctx->id = 8789;
    ctx->coefficient = 9.9;
    ctx->flags = 218;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} 8YSCzxBz_ctx_t;

void init_ctx(8YSCzxBz_ctx_t *ctx) {
    ctx->id = 4124;
    ctx->coefficient = 4.8;
    ctx->flags = 112;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} ZpllCJRj_ctx_t;

void init_ctx(ZpllCJRj_ctx_t *ctx) {
    ctx->id = 9653;
    ctx->coefficient = 8.5;
    ctx->flags = 89;
}

int compute_6T0ry2n(int input) {
    int result = input * 58;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

int compute_yNZDELy(int input) {
    int result = input * 33;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

int compute_cviOTtN(int input) {
    int result = input * 43;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} oVW6P48D_ctx_t;

void init_ctx(oVW6P48D_ctx_t *ctx) {
    ctx->id = 7520;
    ctx->coefficient = 9.2;
    ctx->flags = 88;
}

int compute_QJ5iS6a(int input) {
    int result = input * 66;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} 6fmDvdbf_ctx_t;

void init_ctx(6fmDvdbf_ctx_t *ctx) {
    ctx->id = 3967;
    ctx->coefficient = 0.5;
    ctx->flags = 221;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} vkSYHzRa_ctx_t;

void init_ctx(vkSYHzRa_ctx_t *ctx) {
    ctx->id = 9954;
    ctx->coefficient = 3.0;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} JmRgfpux_ctx_t;

void init_ctx(JmRgfpux_ctx_t *ctx) {
    ctx->id = 5335;
    ctx->coefficient = 6.7;
    ctx->flags = 195;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} II8PabiC_ctx_t;

void init_ctx(II8PabiC_ctx_t *ctx) {
    ctx->id = 2544;
    ctx->coefficient = 4.2;
    ctx->flags = 11;
}

int compute_sLf0wPk(int input) {
    int result = input * 54;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} 58jUKv11_ctx_t;

void init_ctx(58jUKv11_ctx_t *ctx) {
    ctx->id = 6309;
    ctx->coefficient = 3.6;
    ctx->flags = 5;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} Nza5ItJW_ctx_t;

void init_ctx(Nza5ItJW_ctx_t *ctx) {
    ctx->id = 4148;
    ctx->coefficient = 4.7;
    ctx->flags = 239;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} 5Y6sRs29_ctx_t;

void init_ctx(5Y6sRs29_ctx_t *ctx) {
    ctx->id = 6844;
    ctx->coefficient = 6.4;
    ctx->flags = 219;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} BC1waUzu_ctx_t;

void init_ctx(BC1waUzu_ctx_t *ctx) {
    ctx->id = 9262;
    ctx->coefficient = 7.2;
    ctx->flags = 146;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} 4wNIY7FB_ctx_t;

void init_ctx(4wNIY7FB_ctx_t *ctx) {
    ctx->id = 6269;
    ctx->coefficient = 6.6;
    ctx->flags = 248;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} HOAXAFIG_ctx_t;

void init_ctx(HOAXAFIG_ctx_t *ctx) {
    ctx->id = 3422;
    ctx->coefficient = 3.3;
    ctx->flags = 27;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} p2jXnPWx_ctx_t;

void init_ctx(p2jXnPWx_ctx_t *ctx) {
    ctx->id = 4576;
    ctx->coefficient = 1.6;
    ctx->flags = 80;
}

int compute_aBZPAh8(int input) {
    int result = input * 49;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} 2jsdD6sF_ctx_t;

void init_ctx(2jsdD6sF_ctx_t *ctx) {
    ctx->id = 1393;
    ctx->coefficient = 2.1;
    ctx->flags = 120;
}

int compute_CcCWnGO(int input) {
    int result = input * 29;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} rXMSKNbz_ctx_t;

void init_ctx(rXMSKNbz_ctx_t *ctx) {
    ctx->id = 1310;
    ctx->coefficient = 4.3;
    ctx->flags = 210;
}

int compute_uUAWJnu(int input) {
    int result = input * 20;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} h6ynBAve_ctx_t;

void init_ctx(h6ynBAve_ctx_t *ctx) {
    ctx->id = 4397;
    ctx->coefficient = 10.0;
    ctx->flags = 127;
}

int compute_3UXCbPO(int input) {
    int result = input * 54;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} nyQneTOL_ctx_t;

void init_ctx(nyQneTOL_ctx_t *ctx) {
    ctx->id = 9561;
    ctx->coefficient = 2.2;
    ctx->flags = 122;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} NPuNmk4I_ctx_t;

void init_ctx(NPuNmk4I_ctx_t *ctx) {
    ctx->id = 9614;
    ctx->coefficient = 0.7;
    ctx->flags = 159;
}

int compute_3DOayYv(int input) {
    int result = input * 67;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} vS5xD12M_ctx_t;

void init_ctx(vS5xD12M_ctx_t *ctx) {
    ctx->id = 2286;
    ctx->coefficient = 3.1;
    ctx->flags = 77;
}

int compute_p4qMbHy(int input) {
    int result = input * 56;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} oDHIKAkx_ctx_t;

void init_ctx(oDHIKAkx_ctx_t *ctx) {
    ctx->id = 4514;
    ctx->coefficient = 5.9;
    ctx->flags = 32;
}

int compute_BZjatWs(int input) {
    int result = input * 14;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

int compute_FYHmvO5(int input) {
    int result = input * 63;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

int compute_qW6F0Nt(int input) {
    int result = input * 33;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

int compute_zqo2BME(int input) {
    int result = input * 15;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} JBc42Wof_ctx_t;

void init_ctx(JBc42Wof_ctx_t *ctx) {
    ctx->id = 3854;
    ctx->coefficient = 2.1;
    ctx->flags = 115;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} GNY0Ht4J_ctx_t;

void init_ctx(GNY0Ht4J_ctx_t *ctx) {
    ctx->id = 5293;
    ctx->coefficient = 1.7;
    ctx->flags = 33;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} iaDOIaJo_ctx_t;

void init_ctx(iaDOIaJo_ctx_t *ctx) {
    ctx->id = 9979;
    ctx->coefficient = 9.8;
    ctx->flags = 209;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} wFebQKsQ_ctx_t;

void init_ctx(wFebQKsQ_ctx_t *ctx) {
    ctx->id = 2679;
    ctx->coefficient = 4.9;
    ctx->flags = 86;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} xo9sinxl_ctx_t;

void init_ctx(xo9sinxl_ctx_t *ctx) {
    ctx->id = 2672;
    ctx->coefficient = 4.5;
    ctx->flags = 33;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} 9xxgyJ8f_ctx_t;

void init_ctx(9xxgyJ8f_ctx_t *ctx) {
    ctx->id = 3083;
    ctx->coefficient = 2.2;
    ctx->flags = 53;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} aH0vTqNn_ctx_t;

void init_ctx(aH0vTqNn_ctx_t *ctx) {
    ctx->id = 6628;
    ctx->coefficient = 0.3;
    ctx->flags = 86;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} JrO3XCT3_ctx_t;

void init_ctx(JrO3XCT3_ctx_t *ctx) {
    ctx->id = 7715;
    ctx->coefficient = 8.8;
    ctx->flags = 195;
}

int compute_zqtKDWg(int input) {
    int result = input * 65;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} G0R5Adrz_ctx_t;

void init_ctx(G0R5Adrz_ctx_t *ctx) {
    ctx->id = 4300;
    ctx->coefficient = 7.2;
    ctx->flags = 24;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} Euyan3tr_ctx_t;

void init_ctx(Euyan3tr_ctx_t *ctx) {
    ctx->id = 9678;
    ctx->coefficient = 7.1;
    ctx->flags = 232;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} DAMVR5hd_ctx_t;

void init_ctx(DAMVR5hd_ctx_t *ctx) {
    ctx->id = 3727;
    ctx->coefficient = 3.8;
    ctx->flags = 40;
}

int compute_pKdmVWN(int input) {
    int result = input * 7;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} jnJkAD5u_ctx_t;

void init_ctx(jnJkAD5u_ctx_t *ctx) {
    ctx->id = 5982;
    ctx->coefficient = 4.1;
    ctx->flags = 222;
}

int compute_WVd9XLC(int input) {
    int result = input * 17;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} RHSkgUKb_ctx_t;

void init_ctx(RHSkgUKb_ctx_t *ctx) {
    ctx->id = 5303;
    ctx->coefficient = 0.3;
    ctx->flags = 148;
}

int compute_96kTaly(int input) {
    int result = input * 50;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} DiikgCQ8_ctx_t;

void init_ctx(DiikgCQ8_ctx_t *ctx) {
    ctx->id = 9326;
    ctx->coefficient = 9.2;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} eweU4zEJ_ctx_t;

void init_ctx(eweU4zEJ_ctx_t *ctx) {
    ctx->id = 6724;
    ctx->coefficient = 2.8;
    ctx->flags = 180;
}

int compute_X7lreI5(int input) {
    int result = input * 65;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 6QPdSFQl_ctx_t;

void init_ctx(6QPdSFQl_ctx_t *ctx) {
    ctx->id = 5156;
    ctx->coefficient = 5.8;
    ctx->flags = 10;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} 8vDWpsWD_ctx_t;

void init_ctx(8vDWpsWD_ctx_t *ctx) {
    ctx->id = 9391;
    ctx->coefficient = 3.6;
    ctx->flags = 73;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} JY7JQip7_ctx_t;

void init_ctx(JY7JQip7_ctx_t *ctx) {
    ctx->id = 6036;
    ctx->coefficient = 2.4;
    ctx->flags = 79;
}

int compute_81vvz7m(int input) {
    int result = input * 58;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

int compute_qgtZDAN(int input) {
    int result = input * 52;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} f6n4TW4r_ctx_t;

void init_ctx(f6n4TW4r_ctx_t *ctx) {
    ctx->id = 6125;
    ctx->coefficient = 3.7;
    ctx->flags = 68;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} Bp9NDN4Q_ctx_t;

void init_ctx(Bp9NDN4Q_ctx_t *ctx) {
    ctx->id = 2712;
    ctx->coefficient = 1.2;
    ctx->flags = 201;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} v3Cmvmdi_ctx_t;

void init_ctx(v3Cmvmdi_ctx_t *ctx) {
    ctx->id = 3405;
    ctx->coefficient = 5.4;
    ctx->flags = 251;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} ZsmKxl62_ctx_t;

void init_ctx(ZsmKxl62_ctx_t *ctx) {
    ctx->id = 1218;
    ctx->coefficient = 1.9;
    ctx->flags = 44;
}

int compute_U6iXARU(int input) {
    int result = input * 46;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} nGWOu0qq_ctx_t;

void init_ctx(nGWOu0qq_ctx_t *ctx) {
    ctx->id = 3543;
    ctx->coefficient = 0.3;
    ctx->flags = 57;
}

int compute_LWjB9EL(int input) {
    int result = input * 34;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

int compute_ZM2IAny(int input) {
    int result = input * 38;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

int compute_BBFPe3Y(int input) {
    int result = input * 28;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} 6UxCTZRZ_ctx_t;

void init_ctx(6UxCTZRZ_ctx_t *ctx) {
    ctx->id = 8365;
    ctx->coefficient = 7.5;
    ctx->flags = 42;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} AAvT4p5E_ctx_t;

void init_ctx(AAvT4p5E_ctx_t *ctx) {
    ctx->id = 6454;
    ctx->coefficient = 9.6;
    ctx->flags = 122;
}

int compute_jWG1rDL(int input) {
    int result = input * 16;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 04UDoTNN_ctx_t;

void init_ctx(04UDoTNN_ctx_t *ctx) {
    ctx->id = 7664;
    ctx->coefficient = 6.7;
    ctx->flags = 138;
}

int compute_M00AsZV(int input) {
    int result = input * 66;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} r1e9udyd_ctx_t;

void init_ctx(r1e9udyd_ctx_t *ctx) {
    ctx->id = 4842;
    ctx->coefficient = 5.8;
    ctx->flags = 61;
}

int compute_LnQ1Jor(int input) {
    int result = input * 41;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} WZPr2y9t_ctx_t;

void init_ctx(WZPr2y9t_ctx_t *ctx) {
    ctx->id = 2315;
    ctx->coefficient = 8.5;
    ctx->flags = 117;
}

int compute_aDyQpqt(int input) {
    int result = input * 41;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} wMM7AAMy_ctx_t;

void init_ctx(wMM7AAMy_ctx_t *ctx) {
    ctx->id = 2735;
    ctx->coefficient = 1.4;
    ctx->flags = 221;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} Fr09yxsE_ctx_t;

void init_ctx(Fr09yxsE_ctx_t *ctx) {
    ctx->id = 4802;
    ctx->coefficient = 2.6;
    ctx->flags = 124;
}

int compute_7tgzXJP(int input) {
    int result = input * 69;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} XgNXwjVq_ctx_t;

void init_ctx(XgNXwjVq_ctx_t *ctx) {
    ctx->id = 9637;
    ctx->coefficient = 5.2;
    ctx->flags = 18;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} FodkO6QY_ctx_t;

void init_ctx(FodkO6QY_ctx_t *ctx) {
    ctx->id = 1147;
    ctx->coefficient = 7.5;
    ctx->flags = 220;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} weuGeGzL_ctx_t;

void init_ctx(weuGeGzL_ctx_t *ctx) {
    ctx->id = 8234;
    ctx->coefficient = 7.7;
    ctx->flags = 219;
}

int compute_hfeZUwr(int input) {
    int result = input * 41;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

int compute_RnXDFOJ(int input) {
    int result = input * 4;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

int compute_aLwMb94(int input) {
    int result = input * 11;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} euQN3GiN_ctx_t;

void init_ctx(euQN3GiN_ctx_t *ctx) {
    ctx->id = 3448;
    ctx->coefficient = 7.6;
    ctx->flags = 153;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} URf3XStg_ctx_t;

void init_ctx(URf3XStg_ctx_t *ctx) {
    ctx->id = 7353;
    ctx->coefficient = 7.1;
    ctx->flags = 155;
}

int compute_s5uBtes(int input) {
    int result = input * 57;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} ZitPZeCe_ctx_t;

void init_ctx(ZitPZeCe_ctx_t *ctx) {
    ctx->id = 8888;
    ctx->coefficient = 4.0;
    ctx->flags = 146;
}

int compute_mhLbDoJ(int input) {
    int result = input * 57;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

int compute_SgTmK4u(int input) {
    int result = input * 17;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

int compute_EpAMvHt(int input) {
    int result = input * 24;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

int compute_wlT2Dpg(int input) {
    int result = input * 15;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} 6Jh3tZ7P_ctx_t;

void init_ctx(6Jh3tZ7P_ctx_t *ctx) {
    ctx->id = 4411;
    ctx->coefficient = 6.3;
    ctx->flags = 81;
}

int compute_qegqvVA(int input) {
    int result = input * 35;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

int compute_IEDV4Sa(int input) {
    int result = input * 2;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} 1yBb0XKD_ctx_t;

void init_ctx(1yBb0XKD_ctx_t *ctx) {
    ctx->id = 9358;
    ctx->coefficient = 6.9;
    ctx->flags = 121;
}

int compute_FGrO7X4(int input) {
    int result = input * 28;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} 0I9kkruG_ctx_t;

void init_ctx(0I9kkruG_ctx_t *ctx) {
    ctx->id = 1284;
    ctx->coefficient = 6.2;
    ctx->flags = 102;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} RarKHIXz_ctx_t;

void init_ctx(RarKHIXz_ctx_t *ctx) {
    ctx->id = 6428;
    ctx->coefficient = 9.6;
    ctx->flags = 183;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} jzbIrn06_ctx_t;

void init_ctx(jzbIrn06_ctx_t *ctx) {
    ctx->id = 4155;
    ctx->coefficient = 2.8;
    ctx->flags = 10;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} IVRQKMFw_ctx_t;

void init_ctx(IVRQKMFw_ctx_t *ctx) {
    ctx->id = 8760;
    ctx->coefficient = 6.8;
    ctx->flags = 208;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} MjJ5jQAt_ctx_t;

void init_ctx(MjJ5jQAt_ctx_t *ctx) {
    ctx->id = 4720;
    ctx->coefficient = 6.8;
    ctx->flags = 66;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} xMIKL4Zu_ctx_t;

void init_ctx(xMIKL4Zu_ctx_t *ctx) {
    ctx->id = 3577;
    ctx->coefficient = 3.6;
    ctx->flags = 172;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} 92Hq9SG6_ctx_t;

void init_ctx(92Hq9SG6_ctx_t *ctx) {
    ctx->id = 7976;
    ctx->coefficient = 9.6;
    ctx->flags = 139;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} IRaKtkyZ_ctx_t;

void init_ctx(IRaKtkyZ_ctx_t *ctx) {
    ctx->id = 4033;
    ctx->coefficient = 4.7;
    ctx->flags = 40;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} SGuzywIl_ctx_t;

void init_ctx(SGuzywIl_ctx_t *ctx) {
    ctx->id = 9990;
    ctx->coefficient = 4.3;
    ctx->flags = 105;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} curIJR4e_ctx_t;

void init_ctx(curIJR4e_ctx_t *ctx) {
    ctx->id = 2360;
    ctx->coefficient = 1.6;
    ctx->flags = 141;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} XeBG8vJ1_ctx_t;

void init_ctx(XeBG8vJ1_ctx_t *ctx) {
    ctx->id = 5593;
    ctx->coefficient = 2.5;
    ctx->flags = 68;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} uz7FTF5o_ctx_t;

void init_ctx(uz7FTF5o_ctx_t *ctx) {
    ctx->id = 1857;
    ctx->coefficient = 4.7;
    ctx->flags = 1;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} YBqqti8f_ctx_t;

void init_ctx(YBqqti8f_ctx_t *ctx) {
    ctx->id = 6768;
    ctx->coefficient = 4.2;
    ctx->flags = 163;
}

int compute_2VvPrH8(int input) {
    int result = input * 62;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

int compute_y05rHjb(int input) {
    int result = input * 19;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} G8OIBch8_ctx_t;

void init_ctx(G8OIBch8_ctx_t *ctx) {
    ctx->id = 6726;
    ctx->coefficient = 1.0;
    ctx->flags = 138;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} OCKb7Txg_ctx_t;

void init_ctx(OCKb7Txg_ctx_t *ctx) {
    ctx->id = 6884;
    ctx->coefficient = 3.9;
    ctx->flags = 192;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} F3aMB9oT_ctx_t;

void init_ctx(F3aMB9oT_ctx_t *ctx) {
    ctx->id = 6161;
    ctx->coefficient = 3.3;
    ctx->flags = 95;
}

int compute_0WYm8pv(int input) {
    int result = input * 39;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} pq0bfgI9_ctx_t;

void init_ctx(pq0bfgI9_ctx_t *ctx) {
    ctx->id = 5318;
    ctx->coefficient = 7.2;
    ctx->flags = 103;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} RbxOfC34_ctx_t;

void init_ctx(RbxOfC34_ctx_t *ctx) {
    ctx->id = 3119;
    ctx->coefficient = 7.3;
    ctx->flags = 253;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} RqzLvr6S_ctx_t;

void init_ctx(RqzLvr6S_ctx_t *ctx) {
    ctx->id = 3327;
    ctx->coefficient = 2.7;
    ctx->flags = 82;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} 8cobNeso_ctx_t;

void init_ctx(8cobNeso_ctx_t *ctx) {
    ctx->id = 3974;
    ctx->coefficient = 8.2;
    ctx->flags = 81;
}

int compute_fkS6qzE(int input) {
    int result = input * 54;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} PDPwbthw_ctx_t;

void init_ctx(PDPwbthw_ctx_t *ctx) {
    ctx->id = 5475;
    ctx->coefficient = 2.2;
    ctx->flags = 174;
}

int compute_fPDVrKz(int input) {
    int result = input * 36;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} cgc94som_ctx_t;

void init_ctx(cgc94som_ctx_t *ctx) {
    ctx->id = 6825;
    ctx->coefficient = 0.6;
    ctx->flags = 70;
}

int compute_T3zzvgA(int input) {
    int result = input * 70;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

int compute_HGBhEWL(int input) {
    int result = input * 68;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

int compute_1DNweYL(int input) {
    int result = input * 56;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} LTofLA4S_ctx_t;

void init_ctx(LTofLA4S_ctx_t *ctx) {
    ctx->id = 6628;
    ctx->coefficient = 7.6;
    ctx->flags = 170;
}

int compute_AiepLYG(int input) {
    int result = input * 35;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} uJgg2Wxg_ctx_t;

void init_ctx(uJgg2Wxg_ctx_t *ctx) {
    ctx->id = 3934;
    ctx->coefficient = 7.8;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} Qn0i4aeI_ctx_t;

void init_ctx(Qn0i4aeI_ctx_t *ctx) {
    ctx->id = 7192;
    ctx->coefficient = 2.0;
    ctx->flags = 200;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} uqiKdqGB_ctx_t;

void init_ctx(uqiKdqGB_ctx_t *ctx) {
    ctx->id = 3919;
    ctx->coefficient = 9.6;
    ctx->flags = 131;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} IpdTbVHx_ctx_t;

void init_ctx(IpdTbVHx_ctx_t *ctx) {
    ctx->id = 2080;
    ctx->coefficient = 0.6;
    ctx->flags = 11;
}

int compute_TY8gjjE(int input) {
    int result = input * 45;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} vTXKXZ3v_ctx_t;

void init_ctx(vTXKXZ3v_ctx_t *ctx) {
    ctx->id = 9871;
    ctx->coefficient = 7.9;
    ctx->flags = 107;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} Zlf8mMyl_ctx_t;

void init_ctx(Zlf8mMyl_ctx_t *ctx) {
    ctx->id = 7948;
    ctx->coefficient = 6.6;
    ctx->flags = 222;
}

int compute_Sl5UPCY(int input) {
    int result = input * 27;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} O3jkGpow_ctx_t;

void init_ctx(O3jkGpow_ctx_t *ctx) {
    ctx->id = 2629;
    ctx->coefficient = 0.5;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} CRhTryhN_ctx_t;

void init_ctx(CRhTryhN_ctx_t *ctx) {
    ctx->id = 4515;
    ctx->coefficient = 1.3;
    ctx->flags = 54;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} HPLcvFOu_ctx_t;

void init_ctx(HPLcvFOu_ctx_t *ctx) {
    ctx->id = 8937;
    ctx->coefficient = 6.8;
    ctx->flags = 51;
}

int compute_6gTQawI(int input) {
    int result = input * 10;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} xqJvqwQo_ctx_t;

void init_ctx(xqJvqwQo_ctx_t *ctx) {
    ctx->id = 2239;
    ctx->coefficient = 8.7;
    ctx->flags = 122;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} uwt4T7EB_ctx_t;

void init_ctx(uwt4T7EB_ctx_t *ctx) {
    ctx->id = 5309;
    ctx->coefficient = 5.6;
    ctx->flags = 237;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} 2ShEsocy_ctx_t;

void init_ctx(2ShEsocy_ctx_t *ctx) {
    ctx->id = 3354;
    ctx->coefficient = 8.6;
    ctx->flags = 108;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} YhT1VsIu_ctx_t;

void init_ctx(YhT1VsIu_ctx_t *ctx) {
    ctx->id = 3343;
    ctx->coefficient = 8.9;
    ctx->flags = 181;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} phYdOZac_ctx_t;

void init_ctx(phYdOZac_ctx_t *ctx) {
    ctx->id = 5112;
    ctx->coefficient = 6.9;
    ctx->flags = 220;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} 1gFJlK6h_ctx_t;

void init_ctx(1gFJlK6h_ctx_t *ctx) {
    ctx->id = 4523;
    ctx->coefficient = 5.5;
    ctx->flags = 213;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} KwQDTGYB_ctx_t;

void init_ctx(KwQDTGYB_ctx_t *ctx) {
    ctx->id = 3443;
    ctx->coefficient = 8.8;
    ctx->flags = 90;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} DmnOosgO_ctx_t;

void init_ctx(DmnOosgO_ctx_t *ctx) {
    ctx->id = 9199;
    ctx->coefficient = 4.7;
    ctx->flags = 25;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} Y7dYNxHL_ctx_t;

void init_ctx(Y7dYNxHL_ctx_t *ctx) {
    ctx->id = 5952;
    ctx->coefficient = 2.5;
    ctx->flags = 71;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} 7EEY3bcA_ctx_t;

void init_ctx(7EEY3bcA_ctx_t *ctx) {
    ctx->id = 4964;
    ctx->coefficient = 2.7;
    ctx->flags = 192;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} HLJglBXL_ctx_t;

void init_ctx(HLJglBXL_ctx_t *ctx) {
    ctx->id = 9091;
    ctx->coefficient = 5.4;
    ctx->flags = 173;
}

int compute_lRgjJbS(int input) {
    int result = input * 31;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} h8xKlSeR_ctx_t;

void init_ctx(h8xKlSeR_ctx_t *ctx) {
    ctx->id = 2306;
    ctx->coefficient = 6.0;
    ctx->flags = 114;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} 7sy1pmIZ_ctx_t;

void init_ctx(7sy1pmIZ_ctx_t *ctx) {
    ctx->id = 8374;
    ctx->coefficient = 9.1;
    ctx->flags = 83;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} Ze7rO54X_ctx_t;

void init_ctx(Ze7rO54X_ctx_t *ctx) {
    ctx->id = 8562;
    ctx->coefficient = 7.3;
    ctx->flags = 188;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} AOIJfLqe_ctx_t;

void init_ctx(AOIJfLqe_ctx_t *ctx) {
    ctx->id = 3423;
    ctx->coefficient = 5.0;
    ctx->flags = 146;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} c3Pk3nYq_ctx_t;

void init_ctx(c3Pk3nYq_ctx_t *ctx) {
    ctx->id = 6595;
    ctx->coefficient = 7.3;
    ctx->flags = 253;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} iT41T3dL_ctx_t;

void init_ctx(iT41T3dL_ctx_t *ctx) {
    ctx->id = 8023;
    ctx->coefficient = 6.0;
    ctx->flags = 248;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 5LfxNMhk_ctx_t;

void init_ctx(5LfxNMhk_ctx_t *ctx) {
    ctx->id = 4997;
    ctx->coefficient = 1.4;
    ctx->flags = 133;
}

int compute_VUNyMML(int input) {
    int result = input * 64;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

int compute_F4FSyEm(int input) {
    int result = input * 10;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} 646lKog1_ctx_t;

void init_ctx(646lKog1_ctx_t *ctx) {
    ctx->id = 9903;
    ctx->coefficient = 4.5;
    ctx->flags = 243;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} aNrYa2xO_ctx_t;

void init_ctx(aNrYa2xO_ctx_t *ctx) {
    ctx->id = 8177;
    ctx->coefficient = 4.1;
    ctx->flags = 223;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} z5sd3Z7W_ctx_t;

void init_ctx(z5sd3Z7W_ctx_t *ctx) {
    ctx->id = 1284;
    ctx->coefficient = 6.2;
    ctx->flags = 63;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} wh6wlCIC_ctx_t;

void init_ctx(wh6wlCIC_ctx_t *ctx) {
    ctx->id = 5608;
    ctx->coefficient = 1.3;
    ctx->flags = 148;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} RDuvnnYj_ctx_t;

void init_ctx(RDuvnnYj_ctx_t *ctx) {
    ctx->id = 9583;
    ctx->coefficient = 4.9;
    ctx->flags = 4;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} PUs9jnlM_ctx_t;

void init_ctx(PUs9jnlM_ctx_t *ctx) {
    ctx->id = 5618;
    ctx->coefficient = 4.8;
    ctx->flags = 234;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} ZwOckWWM_ctx_t;

void init_ctx(ZwOckWWM_ctx_t *ctx) {
    ctx->id = 2675;
    ctx->coefficient = 3.2;
    ctx->flags = 136;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} gpEfdF2i_ctx_t;

void init_ctx(gpEfdF2i_ctx_t *ctx) {
    ctx->id = 1323;
    ctx->coefficient = 3.0;
    ctx->flags = 189;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} pTy9FfuZ_ctx_t;

void init_ctx(pTy9FfuZ_ctx_t *ctx) {
    ctx->id = 8221;
    ctx->coefficient = 2.0;
    ctx->flags = 200;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} hh2Tb9tt_ctx_t;

void init_ctx(hh2Tb9tt_ctx_t *ctx) {
    ctx->id = 6082;
    ctx->coefficient = 2.2;
    ctx->flags = 235;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} InrPJlOZ_ctx_t;

void init_ctx(InrPJlOZ_ctx_t *ctx) {
    ctx->id = 7529;
    ctx->coefficient = 7.1;
    ctx->flags = 201;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} 8z8fTjsY_ctx_t;

void init_ctx(8z8fTjsY_ctx_t *ctx) {
    ctx->id = 8175;
    ctx->coefficient = 5.9;
    ctx->flags = 190;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} Bai74BjS_ctx_t;

void init_ctx(Bai74BjS_ctx_t *ctx) {
    ctx->id = 1928;
    ctx->coefficient = 6.6;
    ctx->flags = 228;
}

int compute_UliNkP0(int input) {
    int result = input * 36;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} OWey6mI1_ctx_t;

void init_ctx(OWey6mI1_ctx_t *ctx) {
    ctx->id = 8999;
    ctx->coefficient = 5.6;
    ctx->flags = 19;
}

int compute_eEwKo5G(int input) {
    int result = input * 57;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} OgzUEGWP_ctx_t;

void init_ctx(OgzUEGWP_ctx_t *ctx) {
    ctx->id = 1160;
    ctx->coefficient = 0.8;
    ctx->flags = 96;
}

int compute_C2wOBDj(int input) {
    int result = input * 42;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} lBscFIeU_ctx_t;

void init_ctx(lBscFIeU_ctx_t *ctx) {
    ctx->id = 4318;
    ctx->coefficient = 5.1;
    ctx->flags = 86;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} 0ZNQWIZE_ctx_t;

void init_ctx(0ZNQWIZE_ctx_t *ctx) {
    ctx->id = 6149;
    ctx->coefficient = 7.9;
    ctx->flags = 209;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} 8oYIF3fU_ctx_t;

void init_ctx(8oYIF3fU_ctx_t *ctx) {
    ctx->id = 7509;
    ctx->coefficient = 0.5;
    ctx->flags = 78;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} tkPtu2ji_ctx_t;

void init_ctx(tkPtu2ji_ctx_t *ctx) {
    ctx->id = 2381;
    ctx->coefficient = 9.9;
    ctx->flags = 66;
}

int compute_Lg774gg(int input) {
    int result = input * 46;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} lD7rhEvm_ctx_t;

void init_ctx(lD7rhEvm_ctx_t *ctx) {
    ctx->id = 7008;
    ctx->coefficient = 4.1;
    ctx->flags = 221;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} 5S3wH4n5_ctx_t;

void init_ctx(5S3wH4n5_ctx_t *ctx) {
    ctx->id = 8614;
    ctx->coefficient = 2.1;
    ctx->flags = 179;
}

int compute_zHv782y(int input) {
    int result = input * 55;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} bha4fCBW_ctx_t;

void init_ctx(bha4fCBW_ctx_t *ctx) {
    ctx->id = 2000;
    ctx->coefficient = 6.8;
    ctx->flags = 234;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} meL5LRb3_ctx_t;

void init_ctx(meL5LRb3_ctx_t *ctx) {
    ctx->id = 8623;
    ctx->coefficient = 1.7;
    ctx->flags = 22;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} HI6la60p_ctx_t;

void init_ctx(HI6la60p_ctx_t *ctx) {
    ctx->id = 7127;
    ctx->coefficient = 1.3;
    ctx->flags = 30;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} XCerPBtI_ctx_t;

void init_ctx(XCerPBtI_ctx_t *ctx) {
    ctx->id = 2276;
    ctx->coefficient = 9.0;
    ctx->flags = 27;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} WgvDuvS4_ctx_t;

void init_ctx(WgvDuvS4_ctx_t *ctx) {
    ctx->id = 3428;
    ctx->coefficient = 5.8;
    ctx->flags = 215;
}

int compute_vlCPfqd(int input) {
    int result = input * 62;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} QdQn2J57_ctx_t;

void init_ctx(QdQn2J57_ctx_t *ctx) {
    ctx->id = 8891;
    ctx->coefficient = 7.2;
    ctx->flags = 0;
}

int compute_63AghQi(int input) {
    int result = input * 62;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} yn525mgz_ctx_t;

void init_ctx(yn525mgz_ctx_t *ctx) {
    ctx->id = 7886;
    ctx->coefficient = 3.7;
    ctx->flags = 146;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} KVkqqhrH_ctx_t;

void init_ctx(KVkqqhrH_ctx_t *ctx) {
    ctx->id = 9109;
    ctx->coefficient = 6.7;
    ctx->flags = 127;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} 1bjUw18n_ctx_t;

void init_ctx(1bjUw18n_ctx_t *ctx) {
    ctx->id = 4252;
    ctx->coefficient = 3.2;
    ctx->flags = 155;
}

int compute_dJ9Jng4(int input) {
    int result = input * 3;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} QSP5jgvZ_ctx_t;

void init_ctx(QSP5jgvZ_ctx_t *ctx) {
    ctx->id = 4183;
    ctx->coefficient = 1.1;
    ctx->flags = 110;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} WQqM65tl_ctx_t;

void init_ctx(WQqM65tl_ctx_t *ctx) {
    ctx->id = 7613;
    ctx->coefficient = 7.5;
    ctx->flags = 97;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} y0yiwUzM_ctx_t;

void init_ctx(y0yiwUzM_ctx_t *ctx) {
    ctx->id = 2432;
    ctx->coefficient = 7.0;
    ctx->flags = 106;
}

int compute_EEJcC39(int input) {
    int result = input * 39;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} WRk4SYh1_ctx_t;

void init_ctx(WRk4SYh1_ctx_t *ctx) {
    ctx->id = 1681;
    ctx->coefficient = 5.1;
    ctx->flags = 152;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} fzxkThGq_ctx_t;

void init_ctx(fzxkThGq_ctx_t *ctx) {
    ctx->id = 4717;
    ctx->coefficient = 8.5;
    ctx->flags = 156;
}

int compute_pTjwYwD(int input) {
    int result = input * 40;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 3DdkHzhi_ctx_t;

void init_ctx(3DdkHzhi_ctx_t *ctx) {
    ctx->id = 7155;
    ctx->coefficient = 7.2;
    ctx->flags = 171;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} gSufGU6H_ctx_t;

void init_ctx(gSufGU6H_ctx_t *ctx) {
    ctx->id = 9783;
    ctx->coefficient = 6.5;
    ctx->flags = 56;
}

int compute_Z64i2Rd(int input) {
    int result = input * 46;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} jBrutPgH_ctx_t;

void init_ctx(jBrutPgH_ctx_t *ctx) {
    ctx->id = 2198;
    ctx->coefficient = 2.6;
    ctx->flags = 82;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} JLLJOzso_ctx_t;

void init_ctx(JLLJOzso_ctx_t *ctx) {
    ctx->id = 1282;
    ctx->coefficient = 7.7;
    ctx->flags = 36;
}

int compute_utiXDzf(int input) {
    int result = input * 59;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

int compute_UfdD79x(int input) {
    int result = input * 23;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

int compute_Dg2guXF(int input) {
    int result = input * 40;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

int compute_JYJqaLi(int input) {
    int result = input * 52;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

int compute_trdeXcY(int input) {
    int result = input * 5;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} ZX6OTekV_ctx_t;

void init_ctx(ZX6OTekV_ctx_t *ctx) {
    ctx->id = 4126;
    ctx->coefficient = 4.8;
    ctx->flags = 78;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} odfK5A7Y_ctx_t;

void init_ctx(odfK5A7Y_ctx_t *ctx) {
    ctx->id = 4022;
    ctx->coefficient = 2.2;
    ctx->flags = 163;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} eMKPmaNP_ctx_t;

void init_ctx(eMKPmaNP_ctx_t *ctx) {
    ctx->id = 9075;
    ctx->coefficient = 4.7;
    ctx->flags = 52;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} Fxy3WWvi_ctx_t;

void init_ctx(Fxy3WWvi_ctx_t *ctx) {
    ctx->id = 4725;
    ctx->coefficient = 4.8;
    ctx->flags = 140;
}

int compute_xZnLv8a(int input) {
    int result = input * 11;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

int compute_ItQfkOw(int input) {
    int result = input * 23;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} OF0ucnsH_ctx_t;

void init_ctx(OF0ucnsH_ctx_t *ctx) {
    ctx->id = 3680;
    ctx->coefficient = 8.8;
    ctx->flags = 149;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} steTg1OD_ctx_t;

void init_ctx(steTg1OD_ctx_t *ctx) {
    ctx->id = 6099;
    ctx->coefficient = 6.9;
    ctx->flags = 127;
}

int compute_VhCaSYy(int input) {
    int result = input * 33;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} ZM2XvcBt_ctx_t;

void init_ctx(ZM2XvcBt_ctx_t *ctx) {
    ctx->id = 8938;
    ctx->coefficient = 8.8;
    ctx->flags = 37;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} pRj5LB4Z_ctx_t;

void init_ctx(pRj5LB4Z_ctx_t *ctx) {
    ctx->id = 5917;
    ctx->coefficient = 8.6;
    ctx->flags = 194;
}

int compute_rrwAwbp(int input) {
    int result = input * 9;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

int compute_MH0elMK(int input) {
    int result = input * 15;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} YfEBlpk0_ctx_t;

void init_ctx(YfEBlpk0_ctx_t *ctx) {
    ctx->id = 2475;
    ctx->coefficient = 9.4;
    ctx->flags = 126;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} Ph1AeOGl_ctx_t;

void init_ctx(Ph1AeOGl_ctx_t *ctx) {
    ctx->id = 2257;
    ctx->coefficient = 9.1;
    ctx->flags = 183;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} IL3PFYXk_ctx_t;

void init_ctx(IL3PFYXk_ctx_t *ctx) {
    ctx->id = 9175;
    ctx->coefficient = 0.5;
    ctx->flags = 12;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} BKw5NHzJ_ctx_t;

void init_ctx(BKw5NHzJ_ctx_t *ctx) {
    ctx->id = 4135;
    ctx->coefficient = 9.9;
    ctx->flags = 213;
}

int compute_17Q35Wq(int input) {
    int result = input * 36;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} A7mlp8uj_ctx_t;

void init_ctx(A7mlp8uj_ctx_t *ctx) {
    ctx->id = 3307;
    ctx->coefficient = 6.2;
    ctx->flags = 112;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} bbDIhQoE_ctx_t;

void init_ctx(bbDIhQoE_ctx_t *ctx) {
    ctx->id = 4140;
    ctx->coefficient = 7.6;
    ctx->flags = 207;
}

int compute_VAwI59s(int input) {
    int result = input * 17;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} smuYO855_ctx_t;

void init_ctx(smuYO855_ctx_t *ctx) {
    ctx->id = 7151;
    ctx->coefficient = 3.9;
    ctx->flags = 190;
}

int compute_0aTeV5N(int input) {
    int result = input * 55;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} iyIlUYIo_ctx_t;

void init_ctx(iyIlUYIo_ctx_t *ctx) {
    ctx->id = 7656;
    ctx->coefficient = 7.7;
    ctx->flags = 88;
}

int compute_vC3PiRu(int input) {
    int result = input * 58;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

int compute_qSQS8hw(int input) {
    int result = input * 33;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} ES3gBSTP_ctx_t;

void init_ctx(ES3gBSTP_ctx_t *ctx) {
    ctx->id = 7575;
    ctx->coefficient = 3.8;
    ctx->flags = 201;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} a8KKQ0pS_ctx_t;

void init_ctx(a8KKQ0pS_ctx_t *ctx) {
    ctx->id = 9445;
    ctx->coefficient = 5.4;
    ctx->flags = 223;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} VEF2s3MG_ctx_t;

void init_ctx(VEF2s3MG_ctx_t *ctx) {
    ctx->id = 3419;
    ctx->coefficient = 8.7;
    ctx->flags = 183;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} Oszs8VVJ_ctx_t;

void init_ctx(Oszs8VVJ_ctx_t *ctx) {
    ctx->id = 5845;
    ctx->coefficient = 2.9;
    ctx->flags = 53;
}

int compute_mRjcGPV(int input) {
    int result = input * 27;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} lq9t5OUt_ctx_t;

void init_ctx(lq9t5OUt_ctx_t *ctx) {
    ctx->id = 3359;
    ctx->coefficient = 0.2;
    ctx->flags = 114;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} DmL776YO_ctx_t;

void init_ctx(DmL776YO_ctx_t *ctx) {
    ctx->id = 7962;
    ctx->coefficient = 6.6;
    ctx->flags = 50;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} Taz2EmVz_ctx_t;

void init_ctx(Taz2EmVz_ctx_t *ctx) {
    ctx->id = 8259;
    ctx->coefficient = 7.4;
    ctx->flags = 65;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} BlVCrUyM_ctx_t;

void init_ctx(BlVCrUyM_ctx_t *ctx) {
    ctx->id = 5042;
    ctx->coefficient = 4.1;
    ctx->flags = 226;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} nX7RbGgT_ctx_t;

void init_ctx(nX7RbGgT_ctx_t *ctx) {
    ctx->id = 8581;
    ctx->coefficient = 4.5;
    ctx->flags = 211;
}

int compute_XHsiyRl(int input) {
    int result = input * 3;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} zZsNR4eI_ctx_t;

void init_ctx(zZsNR4eI_ctx_t *ctx) {
    ctx->id = 8740;
    ctx->coefficient = 8.3;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} dSy2POwr_ctx_t;

void init_ctx(dSy2POwr_ctx_t *ctx) {
    ctx->id = 1746;
    ctx->coefficient = 2.3;
    ctx->flags = 1;
}

int compute_MaJWABs(int input) {
    int result = input * 37;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

int compute_3S8zlIW(int input) {
    int result = input * 28;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} 45WjJXGG_ctx_t;

void init_ctx(45WjJXGG_ctx_t *ctx) {
    ctx->id = 2554;
    ctx->coefficient = 7.6;
    ctx->flags = 162;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} WRJT0HHY_ctx_t;

void init_ctx(WRJT0HHY_ctx_t *ctx) {
    ctx->id = 5395;
    ctx->coefficient = 1.2;
    ctx->flags = 173;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} nL6lYcLn_ctx_t;

void init_ctx(nL6lYcLn_ctx_t *ctx) {
    ctx->id = 1208;
    ctx->coefficient = 5.2;
    ctx->flags = 6;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} N3NhmDk5_ctx_t;

void init_ctx(N3NhmDk5_ctx_t *ctx) {
    ctx->id = 1293;
    ctx->coefficient = 1.3;
    ctx->flags = 154;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} 3EuzQXAI_ctx_t;

void init_ctx(3EuzQXAI_ctx_t *ctx) {
    ctx->id = 7789;
    ctx->coefficient = 4.5;
    ctx->flags = 248;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} yKOyBt8P_ctx_t;

void init_ctx(yKOyBt8P_ctx_t *ctx) {
    ctx->id = 4360;
    ctx->coefficient = 5.5;
    ctx->flags = 71;
}

int compute_M3ixqtb(int input) {
    int result = input * 55;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} tVQJqBPY_ctx_t;

void init_ctx(tVQJqBPY_ctx_t *ctx) {
    ctx->id = 5957;
    ctx->coefficient = 6.2;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} 2dHEFm95_ctx_t;

void init_ctx(2dHEFm95_ctx_t *ctx) {
    ctx->id = 8046;
    ctx->coefficient = 4.6;
    ctx->flags = 102;
}

int compute_wcVhLue(int input) {
    int result = input * 57;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} bKKhs7ev_ctx_t;

void init_ctx(bKKhs7ev_ctx_t *ctx) {
    ctx->id = 3289;
    ctx->coefficient = 8.7;
    ctx->flags = 139;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} otKtGm8t_ctx_t;

void init_ctx(otKtGm8t_ctx_t *ctx) {
    ctx->id = 4047;
    ctx->coefficient = 3.9;
    ctx->flags = 78;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} XBhQuOsW_ctx_t;

void init_ctx(XBhQuOsW_ctx_t *ctx) {
    ctx->id = 1849;
    ctx->coefficient = 6.3;
    ctx->flags = 40;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} GxgbEI1c_ctx_t;

void init_ctx(GxgbEI1c_ctx_t *ctx) {
    ctx->id = 6927;
    ctx->coefficient = 0.3;
    ctx->flags = 70;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} KQ21CEOP_ctx_t;

void init_ctx(KQ21CEOP_ctx_t *ctx) {
    ctx->id = 4635;
    ctx->coefficient = 6.1;
    ctx->flags = 23;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} 7X6oEIjt_ctx_t;

void init_ctx(7X6oEIjt_ctx_t *ctx) {
    ctx->id = 4324;
    ctx->coefficient = 4.4;
    ctx->flags = 25;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} 9YDDSv77_ctx_t;

void init_ctx(9YDDSv77_ctx_t *ctx) {
    ctx->id = 2954;
    ctx->coefficient = 4.1;
    ctx->flags = 24;
}

int compute_RpPxON2(int input) {
    int result = input * 56;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} A3si8vZS_ctx_t;

void init_ctx(A3si8vZS_ctx_t *ctx) {
    ctx->id = 4549;
    ctx->coefficient = 6.0;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} SIk6PfX6_ctx_t;

void init_ctx(SIk6PfX6_ctx_t *ctx) {
    ctx->id = 4605;
    ctx->coefficient = 8.2;
    ctx->flags = 37;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} 2yUBulrg_ctx_t;

void init_ctx(2yUBulrg_ctx_t *ctx) {
    ctx->id = 5342;
    ctx->coefficient = 5.2;
    ctx->flags = 22;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} agtI0TvQ_ctx_t;

void init_ctx(agtI0TvQ_ctx_t *ctx) {
    ctx->id = 4432;
    ctx->coefficient = 3.1;
    ctx->flags = 121;
}

int compute_9slgjzj(int input) {
    int result = input * 57;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} X5p75eBO_ctx_t;

void init_ctx(X5p75eBO_ctx_t *ctx) {
    ctx->id = 2368;
    ctx->coefficient = 4.1;
    ctx->flags = 73;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} f5EoKtso_ctx_t;

void init_ctx(f5EoKtso_ctx_t *ctx) {
    ctx->id = 7818;
    ctx->coefficient = 6.0;
    ctx->flags = 210;
}

int compute_ulA2Y8A(int input) {
    int result = input * 50;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} cvUxrFRZ_ctx_t;

void init_ctx(cvUxrFRZ_ctx_t *ctx) {
    ctx->id = 7034;
    ctx->coefficient = 1.2;
    ctx->flags = 146;
}

int compute_L0wfZYy(int input) {
    int result = input * 31;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} XfKHb0hT_ctx_t;

void init_ctx(XfKHb0hT_ctx_t *ctx) {
    ctx->id = 7726;
    ctx->coefficient = 7.4;
    ctx->flags = 102;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} pRzXJuS3_ctx_t;

void init_ctx(pRzXJuS3_ctx_t *ctx) {
    ctx->id = 3084;
    ctx->coefficient = 2.4;
    ctx->flags = 143;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} jU6h6jRi_ctx_t;

void init_ctx(jU6h6jRi_ctx_t *ctx) {
    ctx->id = 8180;
    ctx->coefficient = 1.2;
    ctx->flags = 165;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} uiVLzyEd_ctx_t;

void init_ctx(uiVLzyEd_ctx_t *ctx) {
    ctx->id = 4762;
    ctx->coefficient = 10.0;
    ctx->flags = 95;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} r3pAFDVu_ctx_t;

void init_ctx(r3pAFDVu_ctx_t *ctx) {
    ctx->id = 1411;
    ctx->coefficient = 8.0;
    ctx->flags = 24;
}

int compute_7DL4EDX(int input) {
    int result = input * 63;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} YfM7ioJi_ctx_t;

void init_ctx(YfM7ioJi_ctx_t *ctx) {
    ctx->id = 5929;
    ctx->coefficient = 4.0;
    ctx->flags = 194;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} LkY9iSir_ctx_t;

void init_ctx(LkY9iSir_ctx_t *ctx) {
    ctx->id = 5019;
    ctx->coefficient = 7.8;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} jAK38yfu_ctx_t;

void init_ctx(jAK38yfu_ctx_t *ctx) {
    ctx->id = 3454;
    ctx->coefficient = 1.8;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} IlZizPl4_ctx_t;

void init_ctx(IlZizPl4_ctx_t *ctx) {
    ctx->id = 5285;
    ctx->coefficient = 8.7;
    ctx->flags = 215;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} 1UmDmDDT_ctx_t;

void init_ctx(1UmDmDDT_ctx_t *ctx) {
    ctx->id = 5659;
    ctx->coefficient = 3.7;
    ctx->flags = 134;
}

int compute_uIO61ih(int input) {
    int result = input * 25;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

int compute_h6RQ1N1(int input) {
    int result = input * 34;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

int compute_vxPBgdG(int input) {
    int result = input * 43;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

int compute_gbdzBHX(int input) {
    int result = input * 30;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

int compute_qvOOafK(int input) {
    int result = input * 46;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

int compute_2vjx2lO(int input) {
    int result = input * 29;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

int compute_bcR3Hl4(int input) {
    int result = input * 47;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} RQaEfnP4_ctx_t;

void init_ctx(RQaEfnP4_ctx_t *ctx) {
    ctx->id = 2664;
    ctx->coefficient = 9.5;
    ctx->flags = 27;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} YX4cXpif_ctx_t;

void init_ctx(YX4cXpif_ctx_t *ctx) {
    ctx->id = 1412;
    ctx->coefficient = 9.8;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} dGGI4VvV_ctx_t;

void init_ctx(dGGI4VvV_ctx_t *ctx) {
    ctx->id = 2670;
    ctx->coefficient = 5.9;
    ctx->flags = 9;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} Pr2XVewY_ctx_t;

void init_ctx(Pr2XVewY_ctx_t *ctx) {
    ctx->id = 1332;
    ctx->coefficient = 1.0;
    ctx->flags = 214;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} 48wfkw83_ctx_t;

void init_ctx(48wfkw83_ctx_t *ctx) {
    ctx->id = 2408;
    ctx->coefficient = 5.5;
    ctx->flags = 124;
}

int compute_xLH8BwX(int input) {
    int result = input * 26;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

int compute_jrmsIja(int input) {
    int result = input * 55;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} 3YSsVRwg_ctx_t;

void init_ctx(3YSsVRwg_ctx_t *ctx) {
    ctx->id = 9045;
    ctx->coefficient = 8.7;
    ctx->flags = 140;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} LP5qAwVw_ctx_t;

void init_ctx(LP5qAwVw_ctx_t *ctx) {
    ctx->id = 3098;
    ctx->coefficient = 3.0;
    ctx->flags = 69;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} YRyZAtZt_ctx_t;

void init_ctx(YRyZAtZt_ctx_t *ctx) {
    ctx->id = 6651;
    ctx->coefficient = 4.9;
    ctx->flags = 122;
}

int compute_yVClYvg(int input) {
    int result = input * 23;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

int compute_pLAl6pJ(int input) {
    int result = input * 44;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} beUalH4A_ctx_t;

void init_ctx(beUalH4A_ctx_t *ctx) {
    ctx->id = 5892;
    ctx->coefficient = 8.6;
    ctx->flags = 152;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} 2kjTmF5B_ctx_t;

void init_ctx(2kjTmF5B_ctx_t *ctx) {
    ctx->id = 7683;
    ctx->coefficient = 0.9;
    ctx->flags = 47;
}

int compute_QUo5DzP(int input) {
    int result = input * 12;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

int compute_EipSZlG(int input) {
    int result = input * 4;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} ucDW07Jw_ctx_t;

void init_ctx(ucDW07Jw_ctx_t *ctx) {
    ctx->id = 2911;
    ctx->coefficient = 5.7;
    ctx->flags = 62;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} ZIkTJnt8_ctx_t;

void init_ctx(ZIkTJnt8_ctx_t *ctx) {
    ctx->id = 4115;
    ctx->coefficient = 5.7;
    ctx->flags = 13;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} RBfkZALT_ctx_t;

void init_ctx(RBfkZALT_ctx_t *ctx) {
    ctx->id = 5540;
    ctx->coefficient = 9.1;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} 7FrO5o9A_ctx_t;

void init_ctx(7FrO5o9A_ctx_t *ctx) {
    ctx->id = 9812;
    ctx->coefficient = 0.3;
    ctx->flags = 11;
}

int compute_B4ZFCMp(int input) {
    int result = input * 6;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} apZXhWgv_ctx_t;

void init_ctx(apZXhWgv_ctx_t *ctx) {
    ctx->id = 8474;
    ctx->coefficient = 6.7;
    ctx->flags = 87;
}

int compute_WJfuk6g(int input) {
    int result = input * 63;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

int compute_IOeycAr(int input) {
    int result = input * 15;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} Lq6hsLOO_ctx_t;

void init_ctx(Lq6hsLOO_ctx_t *ctx) {
    ctx->id = 3087;
    ctx->coefficient = 4.5;
    ctx->flags = 127;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} cXHhtrzX_ctx_t;

void init_ctx(cXHhtrzX_ctx_t *ctx) {
    ctx->id = 2198;
    ctx->coefficient = 6.0;
    ctx->flags = 133;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} lFgDS5Of_ctx_t;

void init_ctx(lFgDS5Of_ctx_t *ctx) {
    ctx->id = 7908;
    ctx->coefficient = 6.5;
    ctx->flags = 184;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} p1AEwynU_ctx_t;

void init_ctx(p1AEwynU_ctx_t *ctx) {
    ctx->id = 7395;
    ctx->coefficient = 4.1;
    ctx->flags = 88;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} RFth8YJE_ctx_t;

void init_ctx(RFth8YJE_ctx_t *ctx) {
    ctx->id = 5549;
    ctx->coefficient = 6.0;
    ctx->flags = 8;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} knqDV3nm_ctx_t;

void init_ctx(knqDV3nm_ctx_t *ctx) {
    ctx->id = 2127;
    ctx->coefficient = 8.7;
    ctx->flags = 74;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} iKKVeKYY_ctx_t;

void init_ctx(iKKVeKYY_ctx_t *ctx) {
    ctx->id = 3337;
    ctx->coefficient = 4.5;
    ctx->flags = 123;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} lPT6n8pe_ctx_t;

void init_ctx(lPT6n8pe_ctx_t *ctx) {
    ctx->id = 6243;
    ctx->coefficient = 2.1;
    ctx->flags = 57;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} CAHC4MOe_ctx_t;

void init_ctx(CAHC4MOe_ctx_t *ctx) {
    ctx->id = 3146;
    ctx->coefficient = 1.0;
    ctx->flags = 163;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} zNT9bSmz_ctx_t;

void init_ctx(zNT9bSmz_ctx_t *ctx) {
    ctx->id = 5281;
    ctx->coefficient = 5.9;
    ctx->flags = 147;
}

int compute_rfeq5h5(int input) {
    int result = input * 46;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} y3eNVyK7_ctx_t;

void init_ctx(y3eNVyK7_ctx_t *ctx) {
    ctx->id = 5347;
    ctx->coefficient = 9.7;
    ctx->flags = 67;
}

int compute_273kan4(int input) {
    int result = input * 23;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} phfeXAQk_ctx_t;

void init_ctx(phfeXAQk_ctx_t *ctx) {
    ctx->id = 4500;
    ctx->coefficient = 2.6;
    ctx->flags = 182;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} AR0JD1Q5_ctx_t;

void init_ctx(AR0JD1Q5_ctx_t *ctx) {
    ctx->id = 1980;
    ctx->coefficient = 3.2;
    ctx->flags = 209;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} FA3VmQBL_ctx_t;

void init_ctx(FA3VmQBL_ctx_t *ctx) {
    ctx->id = 1891;
    ctx->coefficient = 3.8;
    ctx->flags = 5;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} O60GVLAB_ctx_t;

void init_ctx(O60GVLAB_ctx_t *ctx) {
    ctx->id = 1794;
    ctx->coefficient = 2.2;
    ctx->flags = 47;
}

int compute_KG4wyc1(int input) {
    int result = input * 36;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} ZVbfFV6o_ctx_t;

void init_ctx(ZVbfFV6o_ctx_t *ctx) {
    ctx->id = 1485;
    ctx->coefficient = 9.9;
    ctx->flags = 42;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} tmTkc4N6_ctx_t;

void init_ctx(tmTkc4N6_ctx_t *ctx) {
    ctx->id = 7709;
    ctx->coefficient = 8.4;
    ctx->flags = 188;
}

int compute_NkSj31D(int input) {
    int result = input * 23;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} 5xR97ZWW_ctx_t;

void init_ctx(5xR97ZWW_ctx_t *ctx) {
    ctx->id = 1730;
    ctx->coefficient = 7.1;
    ctx->flags = 107;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} EFbsQWz7_ctx_t;

void init_ctx(EFbsQWz7_ctx_t *ctx) {
    ctx->id = 6572;
    ctx->coefficient = 6.3;
    ctx->flags = 204;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} ujJTsK6I_ctx_t;

void init_ctx(ujJTsK6I_ctx_t *ctx) {
    ctx->id = 1052;
    ctx->coefficient = 6.4;
    ctx->flags = 109;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} sNuUAAtH_ctx_t;

void init_ctx(sNuUAAtH_ctx_t *ctx) {
    ctx->id = 4679;
    ctx->coefficient = 4.0;
    ctx->flags = 188;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} 9ny1VGFI_ctx_t;

void init_ctx(9ny1VGFI_ctx_t *ctx) {
    ctx->id = 4125;
    ctx->coefficient = 2.6;
    ctx->flags = 246;
}

int compute_gPxr3g3(int input) {
    int result = input * 37;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

int compute_ARRmNfU(int input) {
    int result = input * 11;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} 0zxVoQVk_ctx_t;

void init_ctx(0zxVoQVk_ctx_t *ctx) {
    ctx->id = 4697;
    ctx->coefficient = 7.7;
    ctx->flags = 170;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} Wb9hgF59_ctx_t;

void init_ctx(Wb9hgF59_ctx_t *ctx) {
    ctx->id = 4806;
    ctx->coefficient = 2.8;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} vf1n8knv_ctx_t;

void init_ctx(vf1n8knv_ctx_t *ctx) {
    ctx->id = 4881;
    ctx->coefficient = 8.7;
    ctx->flags = 113;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} xv4uIYBd_ctx_t;

void init_ctx(xv4uIYBd_ctx_t *ctx) {
    ctx->id = 8684;
    ctx->coefficient = 6.9;
    ctx->flags = 208;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} QQ3q8m2W_ctx_t;

void init_ctx(QQ3q8m2W_ctx_t *ctx) {
    ctx->id = 6969;
    ctx->coefficient = 4.5;
    ctx->flags = 164;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} WDHfvxbi_ctx_t;

void init_ctx(WDHfvxbi_ctx_t *ctx) {
    ctx->id = 8993;
    ctx->coefficient = 6.3;
    ctx->flags = 19;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} 0z5Ud42U_ctx_t;

void init_ctx(0z5Ud42U_ctx_t *ctx) {
    ctx->id = 7963;
    ctx->coefficient = 9.8;
    ctx->flags = 107;
}

int compute_nTzow7U(int input) {
    int result = input * 11;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} CznRfzWz_ctx_t;

void init_ctx(CznRfzWz_ctx_t *ctx) {
    ctx->id = 3964;
    ctx->coefficient = 8.8;
    ctx->flags = 95;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} G0FC4NhG_ctx_t;

void init_ctx(G0FC4NhG_ctx_t *ctx) {
    ctx->id = 4918;
    ctx->coefficient = 2.4;
    ctx->flags = 70;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} jFY64m49_ctx_t;

void init_ctx(jFY64m49_ctx_t *ctx) {
    ctx->id = 1202;
    ctx->coefficient = 1.9;
    ctx->flags = 118;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} SJAmrbWJ_ctx_t;

void init_ctx(SJAmrbWJ_ctx_t *ctx) {
    ctx->id = 1529;
    ctx->coefficient = 9.1;
    ctx->flags = 148;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} 9sNyDk6O_ctx_t;

void init_ctx(9sNyDk6O_ctx_t *ctx) {
    ctx->id = 8832;
    ctx->coefficient = 6.7;
    ctx->flags = 61;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} uMhbCbcV_ctx_t;

void init_ctx(uMhbCbcV_ctx_t *ctx) {
    ctx->id = 6856;
    ctx->coefficient = 7.9;
    ctx->flags = 13;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} LXdpxHxA_ctx_t;

void init_ctx(LXdpxHxA_ctx_t *ctx) {
    ctx->id = 9840;
    ctx->coefficient = 9.3;
    ctx->flags = 165;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} OPHSaBCG_ctx_t;

void init_ctx(OPHSaBCG_ctx_t *ctx) {
    ctx->id = 8378;
    ctx->coefficient = 7.4;
    ctx->flags = 201;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} 2hJ3X6CE_ctx_t;

void init_ctx(2hJ3X6CE_ctx_t *ctx) {
    ctx->id = 3544;
    ctx->coefficient = 3.7;
    ctx->flags = 24;
}

int compute_MuhzHFz(int input) {
    int result = input * 69;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

int compute_cwWYhcM(int input) {
    int result = input * 56;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} t00ea32k_ctx_t;

void init_ctx(t00ea32k_ctx_t *ctx) {
    ctx->id = 2319;
    ctx->coefficient = 8.8;
    ctx->flags = 26;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} GkS6Ffsl_ctx_t;

void init_ctx(GkS6Ffsl_ctx_t *ctx) {
    ctx->id = 8584;
    ctx->coefficient = 6.7;
    ctx->flags = 208;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} muUn4G2Y_ctx_t;

void init_ctx(muUn4G2Y_ctx_t *ctx) {
    ctx->id = 4407;
    ctx->coefficient = 4.9;
    ctx->flags = 92;
}

int compute_B28azyK(int input) {
    int result = input * 65;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

int compute_Wv8BcjJ(int input) {
    int result = input * 23;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

int compute_9G8FIsg(int input) {
    int result = input * 50;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

int compute_XGjcKRs(int input) {
    int result = input * 56;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} Vc8F2USA_ctx_t;

void init_ctx(Vc8F2USA_ctx_t *ctx) {
    ctx->id = 8949;
    ctx->coefficient = 4.3;
    ctx->flags = 122;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} 1Myxo01N_ctx_t;

void init_ctx(1Myxo01N_ctx_t *ctx) {
    ctx->id = 4580;
    ctx->coefficient = 8.7;
    ctx->flags = 225;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} Zi7Ly9t2_ctx_t;

void init_ctx(Zi7Ly9t2_ctx_t *ctx) {
    ctx->id = 9420;
    ctx->coefficient = 0.4;
    ctx->flags = 8;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} fjTjkb95_ctx_t;

void init_ctx(fjTjkb95_ctx_t *ctx) {
    ctx->id = 9049;
    ctx->coefficient = 6.7;
    ctx->flags = 35;
}

int compute_hQzx3JT(int input) {
    int result = input * 36;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} MlEq2J2X_ctx_t;

void init_ctx(MlEq2J2X_ctx_t *ctx) {
    ctx->id = 3952;
    ctx->coefficient = 1.9;
    ctx->flags = 87;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} 2QUrDVMU_ctx_t;

void init_ctx(2QUrDVMU_ctx_t *ctx) {
    ctx->id = 1616;
    ctx->coefficient = 4.4;
    ctx->flags = 169;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} BGEOqjtS_ctx_t;

void init_ctx(BGEOqjtS_ctx_t *ctx) {
    ctx->id = 2099;
    ctx->coefficient = 4.8;
    ctx->flags = 195;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} iwiVv5v7_ctx_t;

void init_ctx(iwiVv5v7_ctx_t *ctx) {
    ctx->id = 8640;
    ctx->coefficient = 4.1;
    ctx->flags = 139;
}

int compute_lLCBPPL(int input) {
    int result = input * 37;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

int compute_YvtI8vP(int input) {
    int result = input * 18;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} qnwZ7ehZ_ctx_t;

void init_ctx(qnwZ7ehZ_ctx_t *ctx) {
    ctx->id = 7523;
    ctx->coefficient = 8.0;
    ctx->flags = 114;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} nK11LzU4_ctx_t;

void init_ctx(nK11LzU4_ctx_t *ctx) {
    ctx->id = 9553;
    ctx->coefficient = 7.7;
    ctx->flags = 7;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} BUGwORmR_ctx_t;

void init_ctx(BUGwORmR_ctx_t *ctx) {
    ctx->id = 1557;
    ctx->coefficient = 2.7;
    ctx->flags = 3;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} 8N53kznE_ctx_t;

void init_ctx(8N53kznE_ctx_t *ctx) {
    ctx->id = 5642;
    ctx->coefficient = 6.2;
    ctx->flags = 126;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} g2FXmMy6_ctx_t;

void init_ctx(g2FXmMy6_ctx_t *ctx) {
    ctx->id = 7366;
    ctx->coefficient = 8.4;
    ctx->flags = 61;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} vpSQBR6l_ctx_t;

void init_ctx(vpSQBR6l_ctx_t *ctx) {
    ctx->id = 1786;
    ctx->coefficient = 3.3;
    ctx->flags = 27;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} 2hNU3adr_ctx_t;

void init_ctx(2hNU3adr_ctx_t *ctx) {
    ctx->id = 6082;
    ctx->coefficient = 4.1;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} XIy83c12_ctx_t;

void init_ctx(XIy83c12_ctx_t *ctx) {
    ctx->id = 5590;
    ctx->coefficient = 9.1;
    ctx->flags = 73;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} nFlomJ8S_ctx_t;

void init_ctx(nFlomJ8S_ctx_t *ctx) {
    ctx->id = 8921;
    ctx->coefficient = 8.2;
    ctx->flags = 34;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} 24gGy1c9_ctx_t;

void init_ctx(24gGy1c9_ctx_t *ctx) {
    ctx->id = 2393;
    ctx->coefficient = 5.3;
    ctx->flags = 128;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} TTiOxht9_ctx_t;

void init_ctx(TTiOxht9_ctx_t *ctx) {
    ctx->id = 8476;
    ctx->coefficient = 4.2;
    ctx->flags = 71;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} 88CIawQm_ctx_t;

void init_ctx(88CIawQm_ctx_t *ctx) {
    ctx->id = 7174;
    ctx->coefficient = 4.6;
    ctx->flags = 15;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 5EaSADtI_ctx_t;

void init_ctx(5EaSADtI_ctx_t *ctx) {
    ctx->id = 7732;
    ctx->coefficient = 2.4;
    ctx->flags = 140;
}

int compute_uwLW6UT(int input) {
    int result = input * 29;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} wofwaBIx_ctx_t;

void init_ctx(wofwaBIx_ctx_t *ctx) {
    ctx->id = 1995;
    ctx->coefficient = 4.2;
    ctx->flags = 53;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} xhKvvx1P_ctx_t;

void init_ctx(xhKvvx1P_ctx_t *ctx) {
    ctx->id = 1523;
    ctx->coefficient = 1.8;
    ctx->flags = 46;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} 5Xp8XlQH_ctx_t;

void init_ctx(5Xp8XlQH_ctx_t *ctx) {
    ctx->id = 2016;
    ctx->coefficient = 0.7;
    ctx->flags = 147;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} LBVCqcwd_ctx_t;

void init_ctx(LBVCqcwd_ctx_t *ctx) {
    ctx->id = 3020;
    ctx->coefficient = 7.3;
    ctx->flags = 80;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} 26oF2Z9a_ctx_t;

void init_ctx(26oF2Z9a_ctx_t *ctx) {
    ctx->id = 5000;
    ctx->coefficient = 7.9;
    ctx->flags = 28;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} kSUUHXwy_ctx_t;

void init_ctx(kSUUHXwy_ctx_t *ctx) {
    ctx->id = 6312;
    ctx->coefficient = 9.3;
    ctx->flags = 151;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} emZTsVPi_ctx_t;

void init_ctx(emZTsVPi_ctx_t *ctx) {
    ctx->id = 1139;
    ctx->coefficient = 0.7;
    ctx->flags = 121;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} GjVtPAX6_ctx_t;

void init_ctx(GjVtPAX6_ctx_t *ctx) {
    ctx->id = 1351;
    ctx->coefficient = 2.3;
    ctx->flags = 95;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} zQgXKoZg_ctx_t;

void init_ctx(zQgXKoZg_ctx_t *ctx) {
    ctx->id = 2475;
    ctx->coefficient = 6.5;
    ctx->flags = 57;
}

int compute_x8aVlNi(int input) {
    int result = input * 50;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} 9Dp2qCip_ctx_t;

void init_ctx(9Dp2qCip_ctx_t *ctx) {
    ctx->id = 1207;
    ctx->coefficient = 3.2;
    ctx->flags = 44;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} qBTZ9u6W_ctx_t;

void init_ctx(qBTZ9u6W_ctx_t *ctx) {
    ctx->id = 8463;
    ctx->coefficient = 7.7;
    ctx->flags = 139;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} N5JrG4Kk_ctx_t;

void init_ctx(N5JrG4Kk_ctx_t *ctx) {
    ctx->id = 4691;
    ctx->coefficient = 9.2;
    ctx->flags = 195;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} LjKzBo8B_ctx_t;

void init_ctx(LjKzBo8B_ctx_t *ctx) {
    ctx->id = 5666;
    ctx->coefficient = 5.6;
    ctx->flags = 252;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} XOc90OqY_ctx_t;

void init_ctx(XOc90OqY_ctx_t *ctx) {
    ctx->id = 1316;
    ctx->coefficient = 8.3;
    ctx->flags = 194;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} PqdyxyiW_ctx_t;

void init_ctx(PqdyxyiW_ctx_t *ctx) {
    ctx->id = 4801;
    ctx->coefficient = 6.1;
    ctx->flags = 188;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} hfw0NalH_ctx_t;

void init_ctx(hfw0NalH_ctx_t *ctx) {
    ctx->id = 4228;
    ctx->coefficient = 8.2;
    ctx->flags = 138;
}

int compute_EzfCgm6(int input) {
    int result = input * 66;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

int compute_2K9TJXw(int input) {
    int result = input * 31;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} Y7oalT5G_ctx_t;

void init_ctx(Y7oalT5G_ctx_t *ctx) {
    ctx->id = 8624;
    ctx->coefficient = 8.5;
    ctx->flags = 21;
}

int compute_daqCfmf(int input) {
    int result = input * 32;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} Tn4yjbK2_ctx_t;

void init_ctx(Tn4yjbK2_ctx_t *ctx) {
    ctx->id = 4606;
    ctx->coefficient = 1.2;
    ctx->flags = 140;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} 6rKa3Y0r_ctx_t;

void init_ctx(6rKa3Y0r_ctx_t *ctx) {
    ctx->id = 9909;
    ctx->coefficient = 8.0;
    ctx->flags = 76;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} 9fsKAi6d_ctx_t;

void init_ctx(9fsKAi6d_ctx_t *ctx) {
    ctx->id = 3172;
    ctx->coefficient = 8.0;
    ctx->flags = 46;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} nLs2iIO5_ctx_t;

void init_ctx(nLs2iIO5_ctx_t *ctx) {
    ctx->id = 4075;
    ctx->coefficient = 0.3;
    ctx->flags = 197;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} abQUaTqC_ctx_t;

void init_ctx(abQUaTqC_ctx_t *ctx) {
    ctx->id = 6399;
    ctx->coefficient = 9.8;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} pFIX20gG_ctx_t;

void init_ctx(pFIX20gG_ctx_t *ctx) {
    ctx->id = 2581;
    ctx->coefficient = 7.0;
    ctx->flags = 194;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} SwHQaAxh_ctx_t;

void init_ctx(SwHQaAxh_ctx_t *ctx) {
    ctx->id = 3745;
    ctx->coefficient = 0.1;
    ctx->flags = 162;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} kDW4OtO6_ctx_t;

void init_ctx(kDW4OtO6_ctx_t *ctx) {
    ctx->id = 3473;
    ctx->coefficient = 7.7;
    ctx->flags = 167;
}

int compute_G3gU3JY(int input) {
    int result = input * 33;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

int compute_dwBrLbB(int input) {
    int result = input * 10;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

int compute_GKDt31Y(int input) {
    int result = input * 16;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

int compute_irqunO9(int input) {
    int result = input * 69;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

int compute_RPEHLoh(int input) {
    int result = input * 59;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} TqwSfQWf_ctx_t;

void init_ctx(TqwSfQWf_ctx_t *ctx) {
    ctx->id = 7363;
    ctx->coefficient = 3.4;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} 8QVY2StH_ctx_t;

void init_ctx(8QVY2StH_ctx_t *ctx) {
    ctx->id = 3127;
    ctx->coefficient = 0.9;
    ctx->flags = 55;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} id5useUf_ctx_t;

void init_ctx(id5useUf_ctx_t *ctx) {
    ctx->id = 2197;
    ctx->coefficient = 6.4;
    ctx->flags = 90;
}

int compute_oNr61Ew(int input) {
    int result = input * 25;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} 0KU9wbvv_ctx_t;

void init_ctx(0KU9wbvv_ctx_t *ctx) {
    ctx->id = 6057;
    ctx->coefficient = 4.3;
    ctx->flags = 81;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} 2gYnO4iw_ctx_t;

void init_ctx(2gYnO4iw_ctx_t *ctx) {
    ctx->id = 2739;
    ctx->coefficient = 4.2;
    ctx->flags = 120;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} JSwqo7IS_ctx_t;

void init_ctx(JSwqo7IS_ctx_t *ctx) {
    ctx->id = 2689;
    ctx->coefficient = 0.5;
    ctx->flags = 38;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} ZW4rrdrT_ctx_t;

void init_ctx(ZW4rrdrT_ctx_t *ctx) {
    ctx->id = 4983;
    ctx->coefficient = 5.2;
    ctx->flags = 221;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} KpBeqi8p_ctx_t;

void init_ctx(KpBeqi8p_ctx_t *ctx) {
    ctx->id = 5919;
    ctx->coefficient = 5.7;
    ctx->flags = 221;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} yDmcV5hb_ctx_t;

void init_ctx(yDmcV5hb_ctx_t *ctx) {
    ctx->id = 3192;
    ctx->coefficient = 7.5;
    ctx->flags = 237;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} iR91GAhV_ctx_t;

void init_ctx(iR91GAhV_ctx_t *ctx) {
    ctx->id = 8249;
    ctx->coefficient = 3.5;
    ctx->flags = 164;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} EvUvmaRj_ctx_t;

void init_ctx(EvUvmaRj_ctx_t *ctx) {
    ctx->id = 1119;
    ctx->coefficient = 2.2;
    ctx->flags = 215;
}

int compute_xJrkgJT(int input) {
    int result = input * 41;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} r974Ja1t_ctx_t;

void init_ctx(r974Ja1t_ctx_t *ctx) {
    ctx->id = 5160;
    ctx->coefficient = 0.9;
    ctx->flags = 234;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} 6cl4wIEe_ctx_t;

void init_ctx(6cl4wIEe_ctx_t *ctx) {
    ctx->id = 7235;
    ctx->coefficient = 9.1;
    ctx->flags = 116;
}

int compute_AZTIr7B(int input) {
    int result = input * 46;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} nAtQ9ZPM_ctx_t;

void init_ctx(nAtQ9ZPM_ctx_t *ctx) {
    ctx->id = 7807;
    ctx->coefficient = 5.1;
    ctx->flags = 160;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} mWGIeAXv_ctx_t;

void init_ctx(mWGIeAXv_ctx_t *ctx) {
    ctx->id = 2161;
    ctx->coefficient = 8.8;
    ctx->flags = 243;
}

int compute_MTdY3GQ(int input) {
    int result = input * 57;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

int compute_iOhVjGU(int input) {
    int result = input * 21;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

int compute_HaQ71AD(int input) {
    int result = input * 56;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

int compute_sxGwoCw(int input) {
    int result = input * 37;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

int compute_lPvtURP(int input) {
    int result = input * 53;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

int compute_repnNrj(int input) {
    int result = input * 21;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} 52mjC1J0_ctx_t;

void init_ctx(52mjC1J0_ctx_t *ctx) {
    ctx->id = 5151;
    ctx->coefficient = 9.5;
    ctx->flags = 166;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} 4q8gawQ6_ctx_t;

void init_ctx(4q8gawQ6_ctx_t *ctx) {
    ctx->id = 4911;
    ctx->coefficient = 3.0;
    ctx->flags = 160;
}

int compute_07F5q7j(int input) {
    int result = input * 36;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} csADNQIt_ctx_t;

void init_ctx(csADNQIt_ctx_t *ctx) {
    ctx->id = 6519;
    ctx->coefficient = 3.3;
    ctx->flags = 243;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} Rw8oXUBK_ctx_t;

void init_ctx(Rw8oXUBK_ctx_t *ctx) {
    ctx->id = 7692;
    ctx->coefficient = 9.2;
    ctx->flags = 141;
}

int compute_txLXuRA(int input) {
    int result = input * 7;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} Dl0fgrQB_ctx_t;

void init_ctx(Dl0fgrQB_ctx_t *ctx) {
    ctx->id = 1600;
    ctx->coefficient = 0.2;
    ctx->flags = 236;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} viYHdhMF_ctx_t;

void init_ctx(viYHdhMF_ctx_t *ctx) {
    ctx->id = 9696;
    ctx->coefficient = 7.2;
    ctx->flags = 55;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} LYMmrjyp_ctx_t;

void init_ctx(LYMmrjyp_ctx_t *ctx) {
    ctx->id = 5300;
    ctx->coefficient = 4.9;
    ctx->flags = 208;
}

int compute_0YzGiZR(int input) {
    int result = input * 67;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} yyq3nB74_ctx_t;

void init_ctx(yyq3nB74_ctx_t *ctx) {
    ctx->id = 8239;
    ctx->coefficient = 8.0;
    ctx->flags = 78;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} VruawgAB_ctx_t;

void init_ctx(VruawgAB_ctx_t *ctx) {
    ctx->id = 5459;
    ctx->coefficient = 7.2;
    ctx->flags = 8;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} 7a09YvaS_ctx_t;

void init_ctx(7a09YvaS_ctx_t *ctx) {
    ctx->id = 6131;
    ctx->coefficient = 1.7;
    ctx->flags = 10;
}

int compute_bEPrUYv(int input) {
    int result = input * 3;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} fdFIvrqL_ctx_t;

void init_ctx(fdFIvrqL_ctx_t *ctx) {
    ctx->id = 4786;
    ctx->coefficient = 3.7;
    ctx->flags = 9;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 4DNepo03_ctx_t;

void init_ctx(4DNepo03_ctx_t *ctx) {
    ctx->id = 5426;
    ctx->coefficient = 8.2;
    ctx->flags = 163;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} nqRTPy3r_ctx_t;

void init_ctx(nqRTPy3r_ctx_t *ctx) {
    ctx->id = 1328;
    ctx->coefficient = 8.2;
    ctx->flags = 17;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} 5EuG3WAf_ctx_t;

void init_ctx(5EuG3WAf_ctx_t *ctx) {
    ctx->id = 9572;
    ctx->coefficient = 7.7;
    ctx->flags = 251;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} SP0n1KZA_ctx_t;

void init_ctx(SP0n1KZA_ctx_t *ctx) {
    ctx->id = 3990;
    ctx->coefficient = 8.7;
    ctx->flags = 36;
}

int compute_NbwIdlL(int input) {
    int result = input * 40;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} yfdvDxbm_ctx_t;

void init_ctx(yfdvDxbm_ctx_t *ctx) {
    ctx->id = 8995;
    ctx->coefficient = 7.1;
    ctx->flags = 192;
}

int compute_Ytjnxz5(int input) {
    int result = input * 47;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} l9a0FeXp_ctx_t;

void init_ctx(l9a0FeXp_ctx_t *ctx) {
    ctx->id = 3672;
    ctx->coefficient = 2.2;
    ctx->flags = 34;
}

int compute_D8utv5a(int input) {
    int result = input * 55;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} qLzfEXZE_ctx_t;

void init_ctx(qLzfEXZE_ctx_t *ctx) {
    ctx->id = 5854;
    ctx->coefficient = 4.9;
    ctx->flags = 27;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} XisLymXo_ctx_t;

void init_ctx(XisLymXo_ctx_t *ctx) {
    ctx->id = 6528;
    ctx->coefficient = 4.7;
    ctx->flags = 173;
}

int compute_pA2ZQwR(int input) {
    int result = input * 18;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} HhkAezZm_ctx_t;

void init_ctx(HhkAezZm_ctx_t *ctx) {
    ctx->id = 5700;
    ctx->coefficient = 8.1;
    ctx->flags = 95;
}

int compute_sBuNKAf(int input) {
    int result = input * 50;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} bHKT3P6R_ctx_t;

void init_ctx(bHKT3P6R_ctx_t *ctx) {
    ctx->id = 4165;
    ctx->coefficient = 3.6;
    ctx->flags = 238;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} ouAS3ptv_ctx_t;

void init_ctx(ouAS3ptv_ctx_t *ctx) {
    ctx->id = 5618;
    ctx->coefficient = 1.8;
    ctx->flags = 236;
}

int compute_VzMT2IE(int input) {
    int result = input * 59;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} mYHUS6CE_ctx_t;

void init_ctx(mYHUS6CE_ctx_t *ctx) {
    ctx->id = 1187;
    ctx->coefficient = 3.7;
    ctx->flags = 236;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} aQiut18E_ctx_t;

void init_ctx(aQiut18E_ctx_t *ctx) {
    ctx->id = 8936;
    ctx->coefficient = 0.7;
    ctx->flags = 217;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} ZZz0P4ZB_ctx_t;

void init_ctx(ZZz0P4ZB_ctx_t *ctx) {
    ctx->id = 6382;
    ctx->coefficient = 7.2;
    ctx->flags = 11;
}

int compute_hAw3RO7(int input) {
    int result = input * 22;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} sduwHmfP_ctx_t;

void init_ctx(sduwHmfP_ctx_t *ctx) {
    ctx->id = 4988;
    ctx->coefficient = 1.1;
    ctx->flags = 253;
}

int compute_MsRNZ5l(int input) {
    int result = input * 68;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} qFJxF1cm_ctx_t;

void init_ctx(qFJxF1cm_ctx_t *ctx) {
    ctx->id = 1137;
    ctx->coefficient = 3.3;
    ctx->flags = 60;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} Yx57iGLA_ctx_t;

void init_ctx(Yx57iGLA_ctx_t *ctx) {
    ctx->id = 3398;
    ctx->coefficient = 2.5;
    ctx->flags = 240;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} 1C6mChoS_ctx_t;

void init_ctx(1C6mChoS_ctx_t *ctx) {
    ctx->id = 8586;
    ctx->coefficient = 10.0;
    ctx->flags = 90;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} 4tLoN7NN_ctx_t;

void init_ctx(4tLoN7NN_ctx_t *ctx) {
    ctx->id = 8186;
    ctx->coefficient = 1.9;
    ctx->flags = 157;
}

int compute_PQpJB7X(int input) {
    int result = input * 19;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

int compute_Iv86ova(int input) {
    int result = input * 21;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

int compute_QPHib3z(int input) {
    int result = input * 9;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} ktzu2XQs_ctx_t;

void init_ctx(ktzu2XQs_ctx_t *ctx) {
    ctx->id = 7581;
    ctx->coefficient = 0.6;
    ctx->flags = 170;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} oAysWatm_ctx_t;

void init_ctx(oAysWatm_ctx_t *ctx) {
    ctx->id = 1490;
    ctx->coefficient = 3.5;
    ctx->flags = 118;
}

int compute_G0INp88(int input) {
    int result = input * 19;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} 5OO0NMYf_ctx_t;

void init_ctx(5OO0NMYf_ctx_t *ctx) {
    ctx->id = 3904;
    ctx->coefficient = 2.9;
    ctx->flags = 108;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} jbePLcvc_ctx_t;

void init_ctx(jbePLcvc_ctx_t *ctx) {
    ctx->id = 8311;
    ctx->coefficient = 2.8;
    ctx->flags = 49;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} PwxtAyfZ_ctx_t;

void init_ctx(PwxtAyfZ_ctx_t *ctx) {
    ctx->id = 3942;
    ctx->coefficient = 1.1;
    ctx->flags = 226;
}

int compute_rGA36PP(int input) {
    int result = input * 42;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} WzydMEfE_ctx_t;

void init_ctx(WzydMEfE_ctx_t *ctx) {
    ctx->id = 2266;
    ctx->coefficient = 1.9;
    ctx->flags = 37;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} r5RNkL5r_ctx_t;

void init_ctx(r5RNkL5r_ctx_t *ctx) {
    ctx->id = 5229;
    ctx->coefficient = 10.0;
    ctx->flags = 75;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} DEh40p5w_ctx_t;

void init_ctx(DEh40p5w_ctx_t *ctx) {
    ctx->id = 6792;
    ctx->coefficient = 4.2;
    ctx->flags = 249;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} m5YtafId_ctx_t;

void init_ctx(m5YtafId_ctx_t *ctx) {
    ctx->id = 8058;
    ctx->coefficient = 4.4;
    ctx->flags = 62;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} fq4zf9pf_ctx_t;

void init_ctx(fq4zf9pf_ctx_t *ctx) {
    ctx->id = 9573;
    ctx->coefficient = 9.6;
    ctx->flags = 102;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} 9oqeYaF9_ctx_t;

void init_ctx(9oqeYaF9_ctx_t *ctx) {
    ctx->id = 1984;
    ctx->coefficient = 9.3;
    ctx->flags = 118;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} aCAfgfpC_ctx_t;

void init_ctx(aCAfgfpC_ctx_t *ctx) {
    ctx->id = 3144;
    ctx->coefficient = 8.0;
    ctx->flags = 74;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} fAMB1O7Q_ctx_t;

void init_ctx(fAMB1O7Q_ctx_t *ctx) {
    ctx->id = 2518;
    ctx->coefficient = 1.5;
    ctx->flags = 45;
}

int compute_2b7173Q(int input) {
    int result = input * 57;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} brom38Zx_ctx_t;

void init_ctx(brom38Zx_ctx_t *ctx) {
    ctx->id = 1215;
    ctx->coefficient = 1.7;
    ctx->flags = 225;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} fIzURZjV_ctx_t;

void init_ctx(fIzURZjV_ctx_t *ctx) {
    ctx->id = 2245;
    ctx->coefficient = 3.0;
    ctx->flags = 39;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} mTHGF85H_ctx_t;

void init_ctx(mTHGF85H_ctx_t *ctx) {
    ctx->id = 5668;
    ctx->coefficient = 0.9;
    ctx->flags = 128;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} 3pLC3v61_ctx_t;

void init_ctx(3pLC3v61_ctx_t *ctx) {
    ctx->id = 5198;
    ctx->coefficient = 1.3;
    ctx->flags = 254;
}

int compute_TnTD7VF(int input) {
    int result = input * 70;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} l3MOsReq_ctx_t;

void init_ctx(l3MOsReq_ctx_t *ctx) {
    ctx->id = 7667;
    ctx->coefficient = 4.6;
    ctx->flags = 22;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} FypbjdC7_ctx_t;

void init_ctx(FypbjdC7_ctx_t *ctx) {
    ctx->id = 3467;
    ctx->coefficient = 5.6;
    ctx->flags = 1;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} sV6EADuk_ctx_t;

void init_ctx(sV6EADuk_ctx_t *ctx) {
    ctx->id = 6854;
    ctx->coefficient = 7.3;
    ctx->flags = 50;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} SYV0Xqqi_ctx_t;

void init_ctx(SYV0Xqqi_ctx_t *ctx) {
    ctx->id = 9268;
    ctx->coefficient = 3.5;
    ctx->flags = 15;
}

int compute_s3yb1AS(int input) {
    int result = input * 13;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

int compute_uhbOjpc(int input) {
    int result = input * 64;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} m0DXFvf4_ctx_t;

void init_ctx(m0DXFvf4_ctx_t *ctx) {
    ctx->id = 9689;
    ctx->coefficient = 0.3;
    ctx->flags = 16;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} Sdqv8oUF_ctx_t;

void init_ctx(Sdqv8oUF_ctx_t *ctx) {
    ctx->id = 9440;
    ctx->coefficient = 0.4;
    ctx->flags = 139;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} TtaU4qCB_ctx_t;

void init_ctx(TtaU4qCB_ctx_t *ctx) {
    ctx->id = 4712;
    ctx->coefficient = 8.4;
    ctx->flags = 129;
}

int compute_2Nz5nyb(int input) {
    int result = input * 40;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} 0WLW6Pxm_ctx_t;

void init_ctx(0WLW6Pxm_ctx_t *ctx) {
    ctx->id = 4328;
    ctx->coefficient = 5.2;
    ctx->flags = 130;
}

int compute_m8nPkUS(int input) {
    int result = input * 5;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} dm8lupXO_ctx_t;

void init_ctx(dm8lupXO_ctx_t *ctx) {
    ctx->id = 4194;
    ctx->coefficient = 9.4;
    ctx->flags = 156;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} DZR0LkdC_ctx_t;

void init_ctx(DZR0LkdC_ctx_t *ctx) {
    ctx->id = 8397;
    ctx->coefficient = 6.4;
    ctx->flags = 251;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} nxZaYGpl_ctx_t;

void init_ctx(nxZaYGpl_ctx_t *ctx) {
    ctx->id = 6329;
    ctx->coefficient = 2.6;
    ctx->flags = 35;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} x0l4ojBh_ctx_t;

void init_ctx(x0l4ojBh_ctx_t *ctx) {
    ctx->id = 9940;
    ctx->coefficient = 7.7;
    ctx->flags = 202;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} rBgcj3h0_ctx_t;

void init_ctx(rBgcj3h0_ctx_t *ctx) {
    ctx->id = 1772;
    ctx->coefficient = 8.4;
    ctx->flags = 93;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} CC94Jmxj_ctx_t;

void init_ctx(CC94Jmxj_ctx_t *ctx) {
    ctx->id = 7008;
    ctx->coefficient = 4.6;
    ctx->flags = 23;
}

int compute_pzjqaKT(int input) {
    int result = input * 54;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} 0pnc6sNY_ctx_t;

void init_ctx(0pnc6sNY_ctx_t *ctx) {
    ctx->id = 1138;
    ctx->coefficient = 0.9;
    ctx->flags = 137;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} 90fC7akt_ctx_t;

void init_ctx(90fC7akt_ctx_t *ctx) {
    ctx->id = 3217;
    ctx->coefficient = 0.8;
    ctx->flags = 200;
}

int compute_xu8yPmP(int input) {
    int result = input * 25;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} ULawxfG0_ctx_t;

void init_ctx(ULawxfG0_ctx_t *ctx) {
    ctx->id = 6177;
    ctx->coefficient = 5.9;
    ctx->flags = 186;
}

int compute_ri6Cmgx(int input) {
    int result = input * 4;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} RRRZOHnH_ctx_t;

void init_ctx(RRRZOHnH_ctx_t *ctx) {
    ctx->id = 4770;
    ctx->coefficient = 7.6;
    ctx->flags = 0;
}

int compute_lL0oqw1(int input) {
    int result = input * 10;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

int compute_v7Y6pcU(int input) {
    int result = input * 8;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} 8q1IOvQ9_ctx_t;

void init_ctx(8q1IOvQ9_ctx_t *ctx) {
    ctx->id = 7482;
    ctx->coefficient = 5.5;
    ctx->flags = 181;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} xeUOymiR_ctx_t;

void init_ctx(xeUOymiR_ctx_t *ctx) {
    ctx->id = 5782;
    ctx->coefficient = 2.5;
    ctx->flags = 157;
}

int compute_c2K94Bo(int input) {
    int result = input * 21;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} lHFZmxcD_ctx_t;

void init_ctx(lHFZmxcD_ctx_t *ctx) {
    ctx->id = 6652;
    ctx->coefficient = 5.5;
    ctx->flags = 189;
}

int compute_zCmCALx(int input) {
    int result = input * 29;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

int compute_ohAdQpa(int input) {
    int result = input * 38;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

int compute_sMSQ4Tu(int input) {
    int result = input * 41;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} huMVPDCs_ctx_t;

void init_ctx(huMVPDCs_ctx_t *ctx) {
    ctx->id = 2762;
    ctx->coefficient = 9.4;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} EtEMvTyj_ctx_t;

void init_ctx(EtEMvTyj_ctx_t *ctx) {
    ctx->id = 6644;
    ctx->coefficient = 7.5;
    ctx->flags = 108;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} muPS6AnL_ctx_t;

void init_ctx(muPS6AnL_ctx_t *ctx) {
    ctx->id = 8787;
    ctx->coefficient = 3.7;
    ctx->flags = 42;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} kTOA5Pzb_ctx_t;

void init_ctx(kTOA5Pzb_ctx_t *ctx) {
    ctx->id = 2624;
    ctx->coefficient = 2.7;
    ctx->flags = 139;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 74tBCvcm_ctx_t;

void init_ctx(74tBCvcm_ctx_t *ctx) {
    ctx->id = 5167;
    ctx->coefficient = 5.8;
    ctx->flags = 11;
}

int compute_KQM3bEm(int input) {
    int result = input * 64;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} v7ZPASP3_ctx_t;

void init_ctx(v7ZPASP3_ctx_t *ctx) {
    ctx->id = 1978;
    ctx->coefficient = 5.4;
    ctx->flags = 16;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} TiM2oG0r_ctx_t;

void init_ctx(TiM2oG0r_ctx_t *ctx) {
    ctx->id = 4661;
    ctx->coefficient = 4.9;
    ctx->flags = 237;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} cT6wLx46_ctx_t;

void init_ctx(cT6wLx46_ctx_t *ctx) {
    ctx->id = 1949;
    ctx->coefficient = 6.7;
    ctx->flags = 104;
}

int compute_XwvgLGg(int input) {
    int result = input * 39;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} l0x98VcC_ctx_t;

void init_ctx(l0x98VcC_ctx_t *ctx) {
    ctx->id = 8495;
    ctx->coefficient = 4.9;
    ctx->flags = 244;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} daVpRPwg_ctx_t;

void init_ctx(daVpRPwg_ctx_t *ctx) {
    ctx->id = 5468;
    ctx->coefficient = 6.8;
    ctx->flags = 22;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 97WkPhAI_ctx_t;

void init_ctx(97WkPhAI_ctx_t *ctx) {
    ctx->id = 4497;
    ctx->coefficient = 6.2;
    ctx->flags = 44;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} Fvw9w6OQ_ctx_t;

void init_ctx(Fvw9w6OQ_ctx_t *ctx) {
    ctx->id = 5258;
    ctx->coefficient = 2.0;
    ctx->flags = 215;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} y2uCHNt7_ctx_t;

void init_ctx(y2uCHNt7_ctx_t *ctx) {
    ctx->id = 5476;
    ctx->coefficient = 3.0;
    ctx->flags = 74;
}

int compute_SnIfc3X(int input) {
    int result = input * 40;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} hpvcGcDg_ctx_t;

void init_ctx(hpvcGcDg_ctx_t *ctx) {
    ctx->id = 7321;
    ctx->coefficient = 4.8;
    ctx->flags = 32;
}

int compute_YiK1mFK(int input) {
    int result = input * 57;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

int compute_z1FZ9p2(int input) {
    int result = input * 14;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

int compute_OkUwYUg(int input) {
    int result = input * 34;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} geBgJKeC_ctx_t;

void init_ctx(geBgJKeC_ctx_t *ctx) {
    ctx->id = 6882;
    ctx->coefficient = 8.2;
    ctx->flags = 230;
}

int compute_ahpMjz2(int input) {
    int result = input * 44;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

int compute_JHAJHgk(int input) {
    int result = input * 32;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} RACJUHLo_ctx_t;

void init_ctx(RACJUHLo_ctx_t *ctx) {
    ctx->id = 3980;
    ctx->coefficient = 4.2;
    ctx->flags = 119;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} Moxy8Cy8_ctx_t;

void init_ctx(Moxy8Cy8_ctx_t *ctx) {
    ctx->id = 8330;
    ctx->coefficient = 7.5;
    ctx->flags = 228;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} 1jg5y1yV_ctx_t;

void init_ctx(1jg5y1yV_ctx_t *ctx) {
    ctx->id = 4155;
    ctx->coefficient = 1.8;
    ctx->flags = 134;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} W66nyNVe_ctx_t;

void init_ctx(W66nyNVe_ctx_t *ctx) {
    ctx->id = 1577;
    ctx->coefficient = 10.0;
    ctx->flags = 176;
}

int compute_gev0Xwq(int input) {
    int result = input * 61;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} n3kNtE9O_ctx_t;

void init_ctx(n3kNtE9O_ctx_t *ctx) {
    ctx->id = 6528;
    ctx->coefficient = 7.4;
    ctx->flags = 210;
}

int compute_LJyYFOF(int input) {
    int result = input * 64;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} rRzubCx9_ctx_t;

void init_ctx(rRzubCx9_ctx_t *ctx) {
    ctx->id = 4576;
    ctx->coefficient = 4.5;
    ctx->flags = 141;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} JgldfXKT_ctx_t;

void init_ctx(JgldfXKT_ctx_t *ctx) {
    ctx->id = 6062;
    ctx->coefficient = 3.6;
    ctx->flags = 49;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} E4Pw2KXJ_ctx_t;

void init_ctx(E4Pw2KXJ_ctx_t *ctx) {
    ctx->id = 4790;
    ctx->coefficient = 8.6;
    ctx->flags = 158;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} PbdE5Uob_ctx_t;

void init_ctx(PbdE5Uob_ctx_t *ctx) {
    ctx->id = 4466;
    ctx->coefficient = 3.5;
    ctx->flags = 87;
}

int compute_4FxXFTr(int input) {
    int result = input * 48;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

int compute_QHhaVXO(int input) {
    int result = input * 7;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} 1C97kDbr_ctx_t;

void init_ctx(1C97kDbr_ctx_t *ctx) {
    ctx->id = 6454;
    ctx->coefficient = 5.2;
    ctx->flags = 73;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} ELoVBMqu_ctx_t;

void init_ctx(ELoVBMqu_ctx_t *ctx) {
    ctx->id = 7662;
    ctx->coefficient = 2.4;
    ctx->flags = 173;
}

int compute_9VWxtvu(int input) {
    int result = input * 54;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} NLr5gl05_ctx_t;

void init_ctx(NLr5gl05_ctx_t *ctx) {
    ctx->id = 7918;
    ctx->coefficient = 2.4;
    ctx->flags = 10;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} kDOLNv6n_ctx_t;

void init_ctx(kDOLNv6n_ctx_t *ctx) {
    ctx->id = 6749;
    ctx->coefficient = 2.4;
    ctx->flags = 119;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} 8wH7fMne_ctx_t;

void init_ctx(8wH7fMne_ctx_t *ctx) {
    ctx->id = 5871;
    ctx->coefficient = 6.2;
    ctx->flags = 9;
}

int compute_s0ldeNH(int input) {
    int result = input * 67;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

int compute_bZOxbiy(int input) {
    int result = input * 5;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

int compute_yVwrLPF(int input) {
    int result = input * 18;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} YwUNX1Wj_ctx_t;

void init_ctx(YwUNX1Wj_ctx_t *ctx) {
    ctx->id = 4072;
    ctx->coefficient = 9.1;
    ctx->flags = 212;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} yUUY5eng_ctx_t;

void init_ctx(yUUY5eng_ctx_t *ctx) {
    ctx->id = 2074;
    ctx->coefficient = 1.7;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} jug203yw_ctx_t;

void init_ctx(jug203yw_ctx_t *ctx) {
    ctx->id = 6790;
    ctx->coefficient = 7.2;
    ctx->flags = 193;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} PTGxpNPc_ctx_t;

void init_ctx(PTGxpNPc_ctx_t *ctx) {
    ctx->id = 6811;
    ctx->coefficient = 3.4;
    ctx->flags = 146;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} qanr70D2_ctx_t;

void init_ctx(qanr70D2_ctx_t *ctx) {
    ctx->id = 6542;
    ctx->coefficient = 5.3;
    ctx->flags = 253;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} J07TIafi_ctx_t;

void init_ctx(J07TIafi_ctx_t *ctx) {
    ctx->id = 8287;
    ctx->coefficient = 5.9;
    ctx->flags = 29;
}

int compute_UBf6WrU(int input) {
    int result = input * 43;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} 8YnORLTQ_ctx_t;

void init_ctx(8YnORLTQ_ctx_t *ctx) {
    ctx->id = 2133;
    ctx->coefficient = 3.2;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} a43rOcKh_ctx_t;

void init_ctx(a43rOcKh_ctx_t *ctx) {
    ctx->id = 3556;
    ctx->coefficient = 2.4;
    ctx->flags = 168;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} 6xYEEQRb_ctx_t;

void init_ctx(6xYEEQRb_ctx_t *ctx) {
    ctx->id = 7313;
    ctx->coefficient = 4.7;
    ctx->flags = 158;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} hzaMxMoM_ctx_t;

void init_ctx(hzaMxMoM_ctx_t *ctx) {
    ctx->id = 5048;
    ctx->coefficient = 4.7;
    ctx->flags = 142;
}

int compute_n3Ll5FZ(int input) {
    int result = input * 13;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

int compute_tlZpkwx(int input) {
    int result = input * 57;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

int compute_8eddsbG(int input) {
    int result = input * 47;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

int compute_eIAjwk9(int input) {
    int result = input * 8;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} 4LM85EoE_ctx_t;

void init_ctx(4LM85EoE_ctx_t *ctx) {
    ctx->id = 7542;
    ctx->coefficient = 1.4;
    ctx->flags = 126;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} 6RhvksLT_ctx_t;

void init_ctx(6RhvksLT_ctx_t *ctx) {
    ctx->id = 5823;
    ctx->coefficient = 4.9;
    ctx->flags = 4;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} wslu9l4n_ctx_t;

void init_ctx(wslu9l4n_ctx_t *ctx) {
    ctx->id = 1332;
    ctx->coefficient = 9.3;
    ctx->flags = 186;
}

int compute_sg4eEXE(int input) {
    int result = input * 52;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} FO7Z1kWL_ctx_t;

void init_ctx(FO7Z1kWL_ctx_t *ctx) {
    ctx->id = 7569;
    ctx->coefficient = 8.3;
    ctx->flags = 97;
}

int compute_ro1JsT2(int input) {
    int result = input * 15;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} UYo5dKEg_ctx_t;

void init_ctx(UYo5dKEg_ctx_t *ctx) {
    ctx->id = 1756;
    ctx->coefficient = 5.2;
    ctx->flags = 24;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} eosTtmK1_ctx_t;

void init_ctx(eosTtmK1_ctx_t *ctx) {
    ctx->id = 3386;
    ctx->coefficient = 3.2;
    ctx->flags = 147;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} v3yB417E_ctx_t;

void init_ctx(v3yB417E_ctx_t *ctx) {
    ctx->id = 6680;
    ctx->coefficient = 1.4;
    ctx->flags = 14;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} A6bvoQ1h_ctx_t;

void init_ctx(A6bvoQ1h_ctx_t *ctx) {
    ctx->id = 1776;
    ctx->coefficient = 4.6;
    ctx->flags = 40;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} 7a2QO9qq_ctx_t;

void init_ctx(7a2QO9qq_ctx_t *ctx) {
    ctx->id = 5700;
    ctx->coefficient = 6.4;
    ctx->flags = 119;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} 8TXw9gAG_ctx_t;

void init_ctx(8TXw9gAG_ctx_t *ctx) {
    ctx->id = 1592;
    ctx->coefficient = 4.8;
    ctx->flags = 203;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 0yQ2VC8G_ctx_t;

void init_ctx(0yQ2VC8G_ctx_t *ctx) {
    ctx->id = 7730;
    ctx->coefficient = 2.2;
    ctx->flags = 132;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} Gz8rlaA5_ctx_t;

void init_ctx(Gz8rlaA5_ctx_t *ctx) {
    ctx->id = 5492;
    ctx->coefficient = 3.0;
    ctx->flags = 121;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} ktWMxfie_ctx_t;

void init_ctx(ktWMxfie_ctx_t *ctx) {
    ctx->id = 1184;
    ctx->coefficient = 0.6;
    ctx->flags = 140;
}

int compute_cGloP3v(int input) {
    int result = input * 41;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} VyumOOUo_ctx_t;

void init_ctx(VyumOOUo_ctx_t *ctx) {
    ctx->id = 5901;
    ctx->coefficient = 4.8;
    ctx->flags = 135;
}

int compute_nWKKz0s(int input) {
    int result = input * 24;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

int compute_Hn5MOml(int input) {
    int result = input * 49;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

int compute_Xv88eDc(int input) {
    int result = input * 6;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} V7rrl0Zf_ctx_t;

void init_ctx(V7rrl0Zf_ctx_t *ctx) {
    ctx->id = 7176;
    ctx->coefficient = 7.3;
    ctx->flags = 47;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} Z5JXYEEO_ctx_t;

void init_ctx(Z5JXYEEO_ctx_t *ctx) {
    ctx->id = 3739;
    ctx->coefficient = 3.2;
    ctx->flags = 155;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} pNVSc5a9_ctx_t;

void init_ctx(pNVSc5a9_ctx_t *ctx) {
    ctx->id = 3375;
    ctx->coefficient = 4.4;
    ctx->flags = 168;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} B6Zl7900_ctx_t;

void init_ctx(B6Zl7900_ctx_t *ctx) {
    ctx->id = 5173;
    ctx->coefficient = 5.2;
    ctx->flags = 44;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} 38boC3f8_ctx_t;

void init_ctx(38boC3f8_ctx_t *ctx) {
    ctx->id = 9745;
    ctx->coefficient = 7.6;
    ctx->flags = 227;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} 1qQxgwI7_ctx_t;

void init_ctx(1qQxgwI7_ctx_t *ctx) {
    ctx->id = 8802;
    ctx->coefficient = 3.5;
    ctx->flags = 42;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} b5Dxv5HM_ctx_t;

void init_ctx(b5Dxv5HM_ctx_t *ctx) {
    ctx->id = 7486;
    ctx->coefficient = 4.1;
    ctx->flags = 139;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} VrO1jZbH_ctx_t;

void init_ctx(VrO1jZbH_ctx_t *ctx) {
    ctx->id = 4210;
    ctx->coefficient = 0.5;
    ctx->flags = 129;
}

int compute_ECw1SGT(int input) {
    int result = input * 69;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} M87njnow_ctx_t;

void init_ctx(M87njnow_ctx_t *ctx) {
    ctx->id = 6104;
    ctx->coefficient = 9.2;
    ctx->flags = 210;
}

int compute_4Zggksw(int input) {
    int result = input * 30;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} TSxdvTD4_ctx_t;

void init_ctx(TSxdvTD4_ctx_t *ctx) {
    ctx->id = 1825;
    ctx->coefficient = 2.3;
    ctx->flags = 25;
}

int compute_oRYajC1(int input) {
    int result = input * 44;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

int compute_pPShr8R(int input) {
    int result = input * 56;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} FY90QFk2_ctx_t;

void init_ctx(FY90QFk2_ctx_t *ctx) {
    ctx->id = 8098;
    ctx->coefficient = 3.9;
    ctx->flags = 114;
}

int compute_LOdvAOi(int input) {
    int result = input * 29;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} trNNKAEQ_ctx_t;

void init_ctx(trNNKAEQ_ctx_t *ctx) {
    ctx->id = 9594;
    ctx->coefficient = 0.9;
    ctx->flags = 40;
}

int compute_SCrF18K(int input) {
    int result = input * 2;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} iemQxJIO_ctx_t;

void init_ctx(iemQxJIO_ctx_t *ctx) {
    ctx->id = 6488;
    ctx->coefficient = 7.9;
    ctx->flags = 254;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} YnvcLT1h_ctx_t;

void init_ctx(YnvcLT1h_ctx_t *ctx) {
    ctx->id = 6200;
    ctx->coefficient = 3.2;
    ctx->flags = 244;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} bJUfFsii_ctx_t;

void init_ctx(bJUfFsii_ctx_t *ctx) {
    ctx->id = 3318;
    ctx->coefficient = 0.5;
    ctx->flags = 96;
}

int compute_eFg4vQH(int input) {
    int result = input * 69;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} 3cKrx5qd_ctx_t;

void init_ctx(3cKrx5qd_ctx_t *ctx) {
    ctx->id = 6982;
    ctx->coefficient = 7.3;
    ctx->flags = 224;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} LyMYR49o_ctx_t;

void init_ctx(LyMYR49o_ctx_t *ctx) {
    ctx->id = 5159;
    ctx->coefficient = 3.6;
    ctx->flags = 140;
}

int compute_CxSTDqO(int input) {
    int result = input * 25;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

int compute_tAp7NUn(int input) {
    int result = input * 38;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} F4k1sUpH_ctx_t;

void init_ctx(F4k1sUpH_ctx_t *ctx) {
    ctx->id = 6092;
    ctx->coefficient = 9.0;
    ctx->flags = 211;
}

int compute_ep2fJMp(int input) {
    int result = input * 42;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

int compute_esbdlXw(int input) {
    int result = input * 34;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} MpcyGKGg_ctx_t;

void init_ctx(MpcyGKGg_ctx_t *ctx) {
    ctx->id = 1570;
    ctx->coefficient = 7.9;
    ctx->flags = 50;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} GNZ9pjsJ_ctx_t;

void init_ctx(GNZ9pjsJ_ctx_t *ctx) {
    ctx->id = 4809;
    ctx->coefficient = 0.9;
    ctx->flags = 68;
}

int compute_VGm3PE7(int input) {
    int result = input * 11;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

int compute_J8Nxhr1(int input) {
    int result = input * 54;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} jknkv3B0_ctx_t;

void init_ctx(jknkv3B0_ctx_t *ctx) {
    ctx->id = 2931;
    ctx->coefficient = 2.0;
    ctx->flags = 73;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} zqyu4wjT_ctx_t;

void init_ctx(zqyu4wjT_ctx_t *ctx) {
    ctx->id = 1513;
    ctx->coefficient = 6.5;
    ctx->flags = 94;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} F6heGV6i_ctx_t;

void init_ctx(F6heGV6i_ctx_t *ctx) {
    ctx->id = 2215;
    ctx->coefficient = 6.1;
    ctx->flags = 104;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} LqL910jT_ctx_t;

void init_ctx(LqL910jT_ctx_t *ctx) {
    ctx->id = 1952;
    ctx->coefficient = 2.3;
    ctx->flags = 38;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} fXybDVeT_ctx_t;

void init_ctx(fXybDVeT_ctx_t *ctx) {
    ctx->id = 9622;
    ctx->coefficient = 0.9;
    ctx->flags = 197;
}

int compute_uRuO6nA(int input) {
    int result = input * 69;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} IZaERZ7L_ctx_t;

void init_ctx(IZaERZ7L_ctx_t *ctx) {
    ctx->id = 1360;
    ctx->coefficient = 0.8;
    ctx->flags = 203;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 7svQfnK3_ctx_t;

void init_ctx(7svQfnK3_ctx_t *ctx) {
    ctx->id = 2440;
    ctx->coefficient = 9.1;
    ctx->flags = 222;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} ZWRJi9MI_ctx_t;

void init_ctx(ZWRJi9MI_ctx_t *ctx) {
    ctx->id = 2885;
    ctx->coefficient = 9.5;
    ctx->flags = 152;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} 4PK37QPc_ctx_t;

void init_ctx(4PK37QPc_ctx_t *ctx) {
    ctx->id = 5633;
    ctx->coefficient = 8.8;
    ctx->flags = 80;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} k5oAfIyc_ctx_t;

void init_ctx(k5oAfIyc_ctx_t *ctx) {
    ctx->id = 6582;
    ctx->coefficient = 4.8;
    ctx->flags = 223;
}

int compute_YxhgeuT(int input) {
    int result = input * 58;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} kJhBum7p_ctx_t;

void init_ctx(kJhBum7p_ctx_t *ctx) {
    ctx->id = 5403;
    ctx->coefficient = 7.1;
    ctx->flags = 23;
}

int compute_M9LCCbS(int input) {
    int result = input * 13;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

int compute_SxqIdhW(int input) {
    int result = input * 62;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} xCK6ISJE_ctx_t;

void init_ctx(xCK6ISJE_ctx_t *ctx) {
    ctx->id = 6381;
    ctx->coefficient = 9.8;
    ctx->flags = 130;
}

int compute_2X4GlRS(int input) {
    int result = input * 39;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

int compute_GSKgeN1(int input) {
    int result = input * 52;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} 3DxNVMWl_ctx_t;

void init_ctx(3DxNVMWl_ctx_t *ctx) {
    ctx->id = 3444;
    ctx->coefficient = 2.8;
    ctx->flags = 160;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} WSTIE5XC_ctx_t;

void init_ctx(WSTIE5XC_ctx_t *ctx) {
    ctx->id = 3573;
    ctx->coefficient = 3.5;
    ctx->flags = 4;
}

int compute_aMItbfK(int input) {
    int result = input * 30;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} cBbptTrR_ctx_t;

void init_ctx(cBbptTrR_ctx_t *ctx) {
    ctx->id = 9833;
    ctx->coefficient = 9.7;
    ctx->flags = 205;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} OqufAtal_ctx_t;

void init_ctx(OqufAtal_ctx_t *ctx) {
    ctx->id = 2168;
    ctx->coefficient = 2.7;
    ctx->flags = 155;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} zFdav1jh_ctx_t;

void init_ctx(zFdav1jh_ctx_t *ctx) {
    ctx->id = 1438;
    ctx->coefficient = 6.1;
    ctx->flags = 72;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} IX7srGex_ctx_t;

void init_ctx(IX7srGex_ctx_t *ctx) {
    ctx->id = 5649;
    ctx->coefficient = 6.6;
    ctx->flags = 192;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} IcddXwYP_ctx_t;

void init_ctx(IcddXwYP_ctx_t *ctx) {
    ctx->id = 9483;
    ctx->coefficient = 5.4;
    ctx->flags = 42;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} WYcYV0R0_ctx_t;

void init_ctx(WYcYV0R0_ctx_t *ctx) {
    ctx->id = 4348;
    ctx->coefficient = 1.9;
    ctx->flags = 136;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} NB7AHQby_ctx_t;

void init_ctx(NB7AHQby_ctx_t *ctx) {
    ctx->id = 5088;
    ctx->coefficient = 6.1;
    ctx->flags = 182;
}

int compute_uOXToB2(int input) {
    int result = input * 67;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} LBPQxHSQ_ctx_t;

void init_ctx(LBPQxHSQ_ctx_t *ctx) {
    ctx->id = 4750;
    ctx->coefficient = 8.7;
    ctx->flags = 132;
}

int compute_FGNQ2Aj(int input) {
    int result = input * 17;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} K9yc66mh_ctx_t;

void init_ctx(K9yc66mh_ctx_t *ctx) {
    ctx->id = 8370;
    ctx->coefficient = 1.3;
    ctx->flags = 153;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} aYGuUF1k_ctx_t;

void init_ctx(aYGuUF1k_ctx_t *ctx) {
    ctx->id = 7663;
    ctx->coefficient = 1.5;
    ctx->flags = 194;
}

int compute_uFADl1G(int input) {
    int result = input * 23;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

int compute_1k68erU(int input) {
    int result = input * 51;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} DppTXHRz_ctx_t;

void init_ctx(DppTXHRz_ctx_t *ctx) {
    ctx->id = 4538;
    ctx->coefficient = 8.8;
    ctx->flags = 155;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} txyTGJSa_ctx_t;

void init_ctx(txyTGJSa_ctx_t *ctx) {
    ctx->id = 1786;
    ctx->coefficient = 8.2;
    ctx->flags = 126;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} JTScue8C_ctx_t;

void init_ctx(JTScue8C_ctx_t *ctx) {
    ctx->id = 6084;
    ctx->coefficient = 8.9;
    ctx->flags = 147;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} XBGXFpKB_ctx_t;

void init_ctx(XBGXFpKB_ctx_t *ctx) {
    ctx->id = 2862;
    ctx->coefficient = 5.5;
    ctx->flags = 213;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} LveAaVP8_ctx_t;

void init_ctx(LveAaVP8_ctx_t *ctx) {
    ctx->id = 9490;
    ctx->coefficient = 4.8;
    ctx->flags = 10;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} qjk9F9yw_ctx_t;

void init_ctx(qjk9F9yw_ctx_t *ctx) {
    ctx->id = 9958;
    ctx->coefficient = 5.1;
    ctx->flags = 174;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} y2gNSK42_ctx_t;

void init_ctx(y2gNSK42_ctx_t *ctx) {
    ctx->id = 8229;
    ctx->coefficient = 0.3;
    ctx->flags = 159;
}

int compute_wDPgHlj(int input) {
    int result = input * 16;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} 1IMaRHRg_ctx_t;

void init_ctx(1IMaRHRg_ctx_t *ctx) {
    ctx->id = 3055;
    ctx->coefficient = 4.3;
    ctx->flags = 143;
}

int compute_8qTYcdo(int input) {
    int result = input * 59;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} aORRJGIw_ctx_t;

void init_ctx(aORRJGIw_ctx_t *ctx) {
    ctx->id = 4966;
    ctx->coefficient = 1.1;
    ctx->flags = 242;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} CjKR8riU_ctx_t;

void init_ctx(CjKR8riU_ctx_t *ctx) {
    ctx->id = 5184;
    ctx->coefficient = 3.3;
    ctx->flags = 114;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} RISHoTia_ctx_t;

void init_ctx(RISHoTia_ctx_t *ctx) {
    ctx->id = 8516;
    ctx->coefficient = 5.6;
    ctx->flags = 73;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} CrVkk0gN_ctx_t;

void init_ctx(CrVkk0gN_ctx_t *ctx) {
    ctx->id = 9026;
    ctx->coefficient = 4.6;
    ctx->flags = 72;
}

int compute_7Bkq8IH(int input) {
    int result = input * 9;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} Fioq5EAc_ctx_t;

void init_ctx(Fioq5EAc_ctx_t *ctx) {
    ctx->id = 4870;
    ctx->coefficient = 0.4;
    ctx->flags = 162;
}

int compute_F6TEqiw(int input) {
    int result = input * 48;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} A0vZwGLp_ctx_t;

void init_ctx(A0vZwGLp_ctx_t *ctx) {
    ctx->id = 8277;
    ctx->coefficient = 3.9;
    ctx->flags = 57;
}

int compute_PLjWWt6(int input) {
    int result = input * 23;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

int compute_EAqTGqz(int input) {
    int result = input * 18;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

int compute_neuMKF7(int input) {
    int result = input * 44;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} cCiMDJUk_ctx_t;

void init_ctx(cCiMDJUk_ctx_t *ctx) {
    ctx->id = 7876;
    ctx->coefficient = 8.2;
    ctx->flags = 230;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} SKcRCsv1_ctx_t;

void init_ctx(SKcRCsv1_ctx_t *ctx) {
    ctx->id = 5286;
    ctx->coefficient = 1.7;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} j9xnRg3v_ctx_t;

void init_ctx(j9xnRg3v_ctx_t *ctx) {
    ctx->id = 2769;
    ctx->coefficient = 2.7;
    ctx->flags = 238;
}

int compute_XC30n4b(int input) {
    int result = input * 64;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

int compute_Cd3rt0s(int input) {
    int result = input * 65;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} fkZ7xAgT_ctx_t;

void init_ctx(fkZ7xAgT_ctx_t *ctx) {
    ctx->id = 8955;
    ctx->coefficient = 5.7;
    ctx->flags = 91;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} 2MOoT9fS_ctx_t;

void init_ctx(2MOoT9fS_ctx_t *ctx) {
    ctx->id = 8277;
    ctx->coefficient = 1.1;
    ctx->flags = 224;
}

int compute_jh87wvg(int input) {
    int result = input * 23;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} RsiJwJVt_ctx_t;

void init_ctx(RsiJwJVt_ctx_t *ctx) {
    ctx->id = 6445;
    ctx->coefficient = 2.1;
    ctx->flags = 112;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} 7mfeQhcS_ctx_t;

void init_ctx(7mfeQhcS_ctx_t *ctx) {
    ctx->id = 9067;
    ctx->coefficient = 9.2;
    ctx->flags = 87;
}

int compute_ZuKIFoV(int input) {
    int result = input * 39;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} 0YMdnTT5_ctx_t;

void init_ctx(0YMdnTT5_ctx_t *ctx) {
    ctx->id = 9788;
    ctx->coefficient = 0.1;
    ctx->flags = 190;
}

int compute_dyIlZcm(int input) {
    int result = input * 36;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} Phj51Q0f_ctx_t;

void init_ctx(Phj51Q0f_ctx_t *ctx) {
    ctx->id = 1876;
    ctx->coefficient = 1.4;
    ctx->flags = 175;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} ZC5HxHRD_ctx_t;

void init_ctx(ZC5HxHRD_ctx_t *ctx) {
    ctx->id = 3647;
    ctx->coefficient = 3.6;
    ctx->flags = 34;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} 9rZ8vL8F_ctx_t;

void init_ctx(9rZ8vL8F_ctx_t *ctx) {
    ctx->id = 5840;
    ctx->coefficient = 10.0;
    ctx->flags = 169;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} pONcPyKb_ctx_t;

void init_ctx(pONcPyKb_ctx_t *ctx) {
    ctx->id = 1679;
    ctx->coefficient = 2.4;
    ctx->flags = 35;
}

int compute_aLjVtfQ(int input) {
    int result = input * 45;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} svr68iRH_ctx_t;

void init_ctx(svr68iRH_ctx_t *ctx) {
    ctx->id = 6328;
    ctx->coefficient = 8.0;
    ctx->flags = 175;
}

int compute_ufwDUMk(int input) {
    int result = input * 41;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

int compute_18fytyM(int input) {
    int result = input * 34;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} C0CVqO7Y_ctx_t;

void init_ctx(C0CVqO7Y_ctx_t *ctx) {
    ctx->id = 9043;
    ctx->coefficient = 7.0;
    ctx->flags = 185;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} tflJdsN7_ctx_t;

void init_ctx(tflJdsN7_ctx_t *ctx) {
    ctx->id = 6776;
    ctx->coefficient = 6.3;
    ctx->flags = 132;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} tF0lY0wi_ctx_t;

void init_ctx(tF0lY0wi_ctx_t *ctx) {
    ctx->id = 2502;
    ctx->coefficient = 1.4;
    ctx->flags = 247;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} TeCPVlzx_ctx_t;

void init_ctx(TeCPVlzx_ctx_t *ctx) {
    ctx->id = 5106;
    ctx->coefficient = 9.3;
    ctx->flags = 88;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} JwFDpbQw_ctx_t;

void init_ctx(JwFDpbQw_ctx_t *ctx) {
    ctx->id = 5551;
    ctx->coefficient = 6.3;
    ctx->flags = 221;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} KwNvGApB_ctx_t;

void init_ctx(KwNvGApB_ctx_t *ctx) {
    ctx->id = 3178;
    ctx->coefficient = 8.3;
    ctx->flags = 138;
}

int compute_HjDgMKb(int input) {
    int result = input * 38;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} lDijYvEE_ctx_t;

void init_ctx(lDijYvEE_ctx_t *ctx) {
    ctx->id = 9317;
    ctx->coefficient = 5.1;
    ctx->flags = 108;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} vNJO9X40_ctx_t;

void init_ctx(vNJO9X40_ctx_t *ctx) {
    ctx->id = 4526;
    ctx->coefficient = 3.0;
    ctx->flags = 48;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} Df2Drk1J_ctx_t;

void init_ctx(Df2Drk1J_ctx_t *ctx) {
    ctx->id = 3123;
    ctx->coefficient = 4.1;
    ctx->flags = 240;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} qGLscisX_ctx_t;

void init_ctx(qGLscisX_ctx_t *ctx) {
    ctx->id = 2014;
    ctx->coefficient = 1.7;
    ctx->flags = 224;
}

int compute_Go0rSqF(int input) {
    int result = input * 62;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

int compute_PvvBlVw(int input) {
    int result = input * 37;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} 8nTifEfE_ctx_t;

void init_ctx(8nTifEfE_ctx_t *ctx) {
    ctx->id = 2892;
    ctx->coefficient = 9.8;
    ctx->flags = 57;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} ewg9wATk_ctx_t;

void init_ctx(ewg9wATk_ctx_t *ctx) {
    ctx->id = 3410;
    ctx->coefficient = 5.1;
    ctx->flags = 84;
}

int compute_yvfx25k(int input) {
    int result = input * 39;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} nyFrPAEI_ctx_t;

void init_ctx(nyFrPAEI_ctx_t *ctx) {
    ctx->id = 3977;
    ctx->coefficient = 0.7;
    ctx->flags = 18;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} HSFN3Q7a_ctx_t;

void init_ctx(HSFN3Q7a_ctx_t *ctx) {
    ctx->id = 9243;
    ctx->coefficient = 9.6;
    ctx->flags = 104;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} e2SZi8VM_ctx_t;

void init_ctx(e2SZi8VM_ctx_t *ctx) {
    ctx->id = 6900;
    ctx->coefficient = 1.2;
    ctx->flags = 28;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} F0uYPT96_ctx_t;

void init_ctx(F0uYPT96_ctx_t *ctx) {
    ctx->id = 1407;
    ctx->coefficient = 1.3;
    ctx->flags = 80;
}

int compute_5jJEqCS(int input) {
    int result = input * 54;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

int compute_EykZBMk(int input) {
    int result = input * 35;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

int compute_grEF0jI(int input) {
    int result = input * 8;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

int compute_zvBNDPG(int input) {
    int result = input * 49;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

int compute_wyPUKGm(int input) {
    int result = input * 58;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

int compute_zPKPbq9(int input) {
    int result = input * 37;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} OreNbiOM_ctx_t;

void init_ctx(OreNbiOM_ctx_t *ctx) {
    ctx->id = 6957;
    ctx->coefficient = 0.3;
    ctx->flags = 160;
}

int compute_mZd6OFA(int input) {
    int result = input * 4;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} SyPX4m1f_ctx_t;

void init_ctx(SyPX4m1f_ctx_t *ctx) {
    ctx->id = 5705;
    ctx->coefficient = 3.7;
    ctx->flags = 109;
}

int compute_QyUwvQW(int input) {
    int result = input * 10;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

int compute_PTOLeXv(int input) {
    int result = input * 33;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} sedG0DRB_ctx_t;

void init_ctx(sedG0DRB_ctx_t *ctx) {
    ctx->id = 9955;
    ctx->coefficient = 8.3;
    ctx->flags = 96;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} pJJgA4WG_ctx_t;

void init_ctx(pJJgA4WG_ctx_t *ctx) {
    ctx->id = 8819;
    ctx->coefficient = 7.4;
    ctx->flags = 5;
}

int compute_q42Nw9H(int input) {
    int result = input * 16;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} BfJOJppg_ctx_t;

void init_ctx(BfJOJppg_ctx_t *ctx) {
    ctx->id = 2362;
    ctx->coefficient = 0.1;
    ctx->flags = 151;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} 43gsgsYQ_ctx_t;

void init_ctx(43gsgsYQ_ctx_t *ctx) {
    ctx->id = 8062;
    ctx->coefficient = 9.8;
    ctx->flags = 254;
}

int compute_I80t84g(int input) {
    int result = input * 36;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} YTHNOp1L_ctx_t;

void init_ctx(YTHNOp1L_ctx_t *ctx) {
    ctx->id = 6238;
    ctx->coefficient = 8.3;
    ctx->flags = 56;
}

int compute_pb5V90L(int input) {
    int result = input * 31;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} cEy4zuzW_ctx_t;

void init_ctx(cEy4zuzW_ctx_t *ctx) {
    ctx->id = 1339;
    ctx->coefficient = 5.2;
    ctx->flags = 177;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} pngwaxxP_ctx_t;

void init_ctx(pngwaxxP_ctx_t *ctx) {
    ctx->id = 6061;
    ctx->coefficient = 6.9;
    ctx->flags = 62;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} Piwnbx5j_ctx_t;

void init_ctx(Piwnbx5j_ctx_t *ctx) {
    ctx->id = 4191;
    ctx->coefficient = 4.3;
    ctx->flags = 234;
}

int compute_7cDYQcm(int input) {
    int result = input * 5;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} BkJ5sUmj_ctx_t;

void init_ctx(BkJ5sUmj_ctx_t *ctx) {
    ctx->id = 6192;
    ctx->coefficient = 8.1;
    ctx->flags = 6;
}

int compute_qQ3wBYR(int input) {
    int result = input * 39;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} frBuiJ1J_ctx_t;

void init_ctx(frBuiJ1J_ctx_t *ctx) {
    ctx->id = 2839;
    ctx->coefficient = 2.2;
    ctx->flags = 50;
}

int compute_80jx1AK(int input) {
    int result = input * 2;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} M1udZCdT_ctx_t;

void init_ctx(M1udZCdT_ctx_t *ctx) {
    ctx->id = 2723;
    ctx->coefficient = 3.2;
    ctx->flags = 7;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} C75NzCI4_ctx_t;

void init_ctx(C75NzCI4_ctx_t *ctx) {
    ctx->id = 1799;
    ctx->coefficient = 0.7;
    ctx->flags = 4;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} hzLbbS2y_ctx_t;

void init_ctx(hzLbbS2y_ctx_t *ctx) {
    ctx->id = 2958;
    ctx->coefficient = 1.7;
    ctx->flags = 100;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} FVN9shq4_ctx_t;

void init_ctx(FVN9shq4_ctx_t *ctx) {
    ctx->id = 5874;
    ctx->coefficient = 3.1;
    ctx->flags = 119;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} ORfp1mEq_ctx_t;

void init_ctx(ORfp1mEq_ctx_t *ctx) {
    ctx->id = 2951;
    ctx->coefficient = 0.6;
    ctx->flags = 89;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} zFhQxkGo_ctx_t;

void init_ctx(zFhQxkGo_ctx_t *ctx) {
    ctx->id = 4440;
    ctx->coefficient = 8.4;
    ctx->flags = 92;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} Zr5iSe3V_ctx_t;

void init_ctx(Zr5iSe3V_ctx_t *ctx) {
    ctx->id = 1429;
    ctx->coefficient = 2.9;
    ctx->flags = 50;
}

int compute_M7KzBv6(int input) {
    int result = input * 64;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} wvBPn8NA_ctx_t;

void init_ctx(wvBPn8NA_ctx_t *ctx) {
    ctx->id = 4646;
    ctx->coefficient = 9.9;
    ctx->flags = 155;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} yqVRGXZK_ctx_t;

void init_ctx(yqVRGXZK_ctx_t *ctx) {
    ctx->id = 8661;
    ctx->coefficient = 5.1;
    ctx->flags = 109;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} EORPhPQJ_ctx_t;

void init_ctx(EORPhPQJ_ctx_t *ctx) {
    ctx->id = 8284;
    ctx->coefficient = 7.6;
    ctx->flags = 88;
}

int compute_wYXwsds(int input) {
    int result = input * 63;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} c9cZ37e8_ctx_t;

void init_ctx(c9cZ37e8_ctx_t *ctx) {
    ctx->id = 9749;
    ctx->coefficient = 8.9;
    ctx->flags = 29;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} AhQgksEA_ctx_t;

void init_ctx(AhQgksEA_ctx_t *ctx) {
    ctx->id = 7060;
    ctx->coefficient = 3.4;
    ctx->flags = 100;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} A2ijKWe0_ctx_t;

void init_ctx(A2ijKWe0_ctx_t *ctx) {
    ctx->id = 9306;
    ctx->coefficient = 4.5;
    ctx->flags = 31;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} E12aXIta_ctx_t;

void init_ctx(E12aXIta_ctx_t *ctx) {
    ctx->id = 1028;
    ctx->coefficient = 9.3;
    ctx->flags = 243;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} QHsgQLOE_ctx_t;

void init_ctx(QHsgQLOE_ctx_t *ctx) {
    ctx->id = 1050;
    ctx->coefficient = 5.6;
    ctx->flags = 17;
}

int compute_KcbyKWb(int input) {
    int result = input * 40;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

int compute_a1nrtp4(int input) {
    int result = input * 11;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} 4fdStwq7_ctx_t;

void init_ctx(4fdStwq7_ctx_t *ctx) {
    ctx->id = 4076;
    ctx->coefficient = 3.4;
    ctx->flags = 189;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} mXNCOAEj_ctx_t;

void init_ctx(mXNCOAEj_ctx_t *ctx) {
    ctx->id = 9646;
    ctx->coefficient = 8.3;
    ctx->flags = 70;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} 7UNMY8cX_ctx_t;

void init_ctx(7UNMY8cX_ctx_t *ctx) {
    ctx->id = 8292;
    ctx->coefficient = 4.1;
    ctx->flags = 175;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} ZRye8rol_ctx_t;

void init_ctx(ZRye8rol_ctx_t *ctx) {
    ctx->id = 3051;
    ctx->coefficient = 7.7;
    ctx->flags = 214;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} ZJa7qosh_ctx_t;

void init_ctx(ZJa7qosh_ctx_t *ctx) {
    ctx->id = 8333;
    ctx->coefficient = 0.2;
    ctx->flags = 212;
}

int compute_xqfGo4n(int input) {
    int result = input * 61;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

int compute_YaFpEmm(int input) {
    int result = input * 56;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} DAvfRCU0_ctx_t;

void init_ctx(DAvfRCU0_ctx_t *ctx) {
    ctx->id = 1679;
    ctx->coefficient = 0.4;
    ctx->flags = 4;
}

int compute_RDmGBgq(int input) {
    int result = input * 43;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} OE7GNqL9_ctx_t;

void init_ctx(OE7GNqL9_ctx_t *ctx) {
    ctx->id = 9111;
    ctx->coefficient = 8.3;
    ctx->flags = 192;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} CD3xXb4B_ctx_t;

void init_ctx(CD3xXb4B_ctx_t *ctx) {
    ctx->id = 5862;
    ctx->coefficient = 5.3;
    ctx->flags = 71;
}

int compute_D432nhE(int input) {
    int result = input * 16;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} jO8irqpR_ctx_t;

void init_ctx(jO8irqpR_ctx_t *ctx) {
    ctx->id = 3036;
    ctx->coefficient = 1.0;
    ctx->flags = 106;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} L6CtHspz_ctx_t;

void init_ctx(L6CtHspz_ctx_t *ctx) {
    ctx->id = 7565;
    ctx->coefficient = 8.8;
    ctx->flags = 207;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} qFUZpez1_ctx_t;

void init_ctx(qFUZpez1_ctx_t *ctx) {
    ctx->id = 5999;
    ctx->coefficient = 0.7;
    ctx->flags = 52;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} UKXr4ro6_ctx_t;

void init_ctx(UKXr4ro6_ctx_t *ctx) {
    ctx->id = 6559;
    ctx->coefficient = 6.4;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} nP5bZkfx_ctx_t;

void init_ctx(nP5bZkfx_ctx_t *ctx) {
    ctx->id = 8582;
    ctx->coefficient = 2.1;
    ctx->flags = 62;
}

int compute_zT63O64(int input) {
    int result = input * 30;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

int compute_aSEaaYJ(int input) {
    int result = input * 27;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} hcnYioZi_ctx_t;

void init_ctx(hcnYioZi_ctx_t *ctx) {
    ctx->id = 2175;
    ctx->coefficient = 8.5;
    ctx->flags = 234;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} 944OGTMm_ctx_t;

void init_ctx(944OGTMm_ctx_t *ctx) {
    ctx->id = 6599;
    ctx->coefficient = 4.8;
    ctx->flags = 128;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} ZhoxgjtZ_ctx_t;

void init_ctx(ZhoxgjtZ_ctx_t *ctx) {
    ctx->id = 9295;
    ctx->coefficient = 7.3;
    ctx->flags = 110;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} gdPcvAmr_ctx_t;

void init_ctx(gdPcvAmr_ctx_t *ctx) {
    ctx->id = 3705;
    ctx->coefficient = 2.6;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} 46NPtHOS_ctx_t;

void init_ctx(46NPtHOS_ctx_t *ctx) {
    ctx->id = 2973;
    ctx->coefficient = 8.3;
    ctx->flags = 113;
}

int compute_SK1Qmkr(int input) {
    int result = input * 10;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} qj9tNrU9_ctx_t;

void init_ctx(qj9tNrU9_ctx_t *ctx) {
    ctx->id = 5769;
    ctx->coefficient = 6.3;
    ctx->flags = 123;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} 1YkILAZD_ctx_t;

void init_ctx(1YkILAZD_ctx_t *ctx) {
    ctx->id = 7183;
    ctx->coefficient = 7.5;
    ctx->flags = 182;
}

int compute_hWxwnwF(int input) {
    int result = input * 33;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} ZvSC6yw8_ctx_t;

void init_ctx(ZvSC6yw8_ctx_t *ctx) {
    ctx->id = 9527;
    ctx->coefficient = 5.2;
    ctx->flags = 62;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} KkFxg5hn_ctx_t;

void init_ctx(KkFxg5hn_ctx_t *ctx) {
    ctx->id = 1880;
    ctx->coefficient = 6.2;
    ctx->flags = 8;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} I1HCyrGb_ctx_t;

void init_ctx(I1HCyrGb_ctx_t *ctx) {
    ctx->id = 5396;
    ctx->coefficient = 6.5;
    ctx->flags = 88;
}

int compute_Tep3JLf(int input) {
    int result = input * 21;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} pqPXzWuH_ctx_t;

void init_ctx(pqPXzWuH_ctx_t *ctx) {
    ctx->id = 9788;
    ctx->coefficient = 8.2;
    ctx->flags = 33;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} yNGMs0Sy_ctx_t;

void init_ctx(yNGMs0Sy_ctx_t *ctx) {
    ctx->id = 4476;
    ctx->coefficient = 4.5;
    ctx->flags = 238;
}

int compute_HfWfK1t(int input) {
    int result = input * 66;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

int compute_93wJIAM(int input) {
    int result = input * 12;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} 0ZsdmU2b_ctx_t;

void init_ctx(0ZsdmU2b_ctx_t *ctx) {
    ctx->id = 8175;
    ctx->coefficient = 3.8;
    ctx->flags = 50;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} 0epuqFww_ctx_t;

void init_ctx(0epuqFww_ctx_t *ctx) {
    ctx->id = 8136;
    ctx->coefficient = 6.6;
    ctx->flags = 176;
}

int compute_nIdGo5Y(int input) {
    int result = input * 15;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} M532DMZm_ctx_t;

void init_ctx(M532DMZm_ctx_t *ctx) {
    ctx->id = 1905;
    ctx->coefficient = 7.6;
    ctx->flags = 166;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} mbz5EQaf_ctx_t;

void init_ctx(mbz5EQaf_ctx_t *ctx) {
    ctx->id = 9862;
    ctx->coefficient = 8.9;
    ctx->flags = 104;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} MwgRwK6x_ctx_t;

void init_ctx(MwgRwK6x_ctx_t *ctx) {
    ctx->id = 2428;
    ctx->coefficient = 2.6;
    ctx->flags = 195;
}

int compute_94tKafG(int input) {
    int result = input * 35;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

int compute_o7HhB7X(int input) {
    int result = input * 21;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

int compute_DBrsjy5(int input) {
    int result = input * 10;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} LwWD9XCQ_ctx_t;

void init_ctx(LwWD9XCQ_ctx_t *ctx) {
    ctx->id = 8100;
    ctx->coefficient = 3.1;
    ctx->flags = 228;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} nKEMH7Ui_ctx_t;

void init_ctx(nKEMH7Ui_ctx_t *ctx) {
    ctx->id = 2685;
    ctx->coefficient = 5.7;
    ctx->flags = 152;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} 4SO2lnM2_ctx_t;

void init_ctx(4SO2lnM2_ctx_t *ctx) {
    ctx->id = 7278;
    ctx->coefficient = 4.4;
    ctx->flags = 144;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} I4eQm691_ctx_t;

void init_ctx(I4eQm691_ctx_t *ctx) {
    ctx->id = 5116;
    ctx->coefficient = 4.2;
    ctx->flags = 34;
}

int compute_M3vCZTL(int input) {
    int result = input * 63;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} qhprObFe_ctx_t;

void init_ctx(qhprObFe_ctx_t *ctx) {
    ctx->id = 1067;
    ctx->coefficient = 2.1;
    ctx->flags = 164;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} iJg1K9bk_ctx_t;

void init_ctx(iJg1K9bk_ctx_t *ctx) {
    ctx->id = 9321;
    ctx->coefficient = 0.3;
    ctx->flags = 246;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} C5iG2Eg7_ctx_t;

void init_ctx(C5iG2Eg7_ctx_t *ctx) {
    ctx->id = 2495;
    ctx->coefficient = 2.2;
    ctx->flags = 78;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} GEwnIwvj_ctx_t;

void init_ctx(GEwnIwvj_ctx_t *ctx) {
    ctx->id = 3877;
    ctx->coefficient = 5.1;
    ctx->flags = 47;
}

int compute_VcWSuUx(int input) {
    int result = input * 69;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} JEUle25H_ctx_t;

void init_ctx(JEUle25H_ctx_t *ctx) {
    ctx->id = 1531;
    ctx->coefficient = 5.7;
    ctx->flags = 207;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} e8OWGnTF_ctx_t;

void init_ctx(e8OWGnTF_ctx_t *ctx) {
    ctx->id = 6838;
    ctx->coefficient = 4.4;
    ctx->flags = 185;
}

int compute_8ZaRvp1(int input) {
    int result = input * 7;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} L77iZtwc_ctx_t;

void init_ctx(L77iZtwc_ctx_t *ctx) {
    ctx->id = 8895;
    ctx->coefficient = 7.4;
    ctx->flags = 104;
}

int compute_31EQWlC(int input) {
    int result = input * 51;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

int compute_7y6z7yl(int input) {
    int result = input * 48;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} N8jbV8ZF_ctx_t;

void init_ctx(N8jbV8ZF_ctx_t *ctx) {
    ctx->id = 4155;
    ctx->coefficient = 5.2;
    ctx->flags = 217;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} S4aJkwIv_ctx_t;

void init_ctx(S4aJkwIv_ctx_t *ctx) {
    ctx->id = 7113;
    ctx->coefficient = 5.6;
    ctx->flags = 177;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} ns12iNaq_ctx_t;

void init_ctx(ns12iNaq_ctx_t *ctx) {
    ctx->id = 9929;
    ctx->coefficient = 0.9;
    ctx->flags = 23;
}

int compute_8zEUYo4(int input) {
    int result = input * 26;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

int compute_pyFC5BM(int input) {
    int result = input * 10;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} SFCF0hXA_ctx_t;

void init_ctx(SFCF0hXA_ctx_t *ctx) {
    ctx->id = 4122;
    ctx->coefficient = 0.9;
    ctx->flags = 184;
}

int compute_CPyYlZk(int input) {
    int result = input * 54;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

int compute_1w3Sjlj(int input) {
    int result = input * 20;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} bPN36xCn_ctx_t;

void init_ctx(bPN36xCn_ctx_t *ctx) {
    ctx->id = 9774;
    ctx->coefficient = 2.7;
    ctx->flags = 240;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} OmVoTLRh_ctx_t;

void init_ctx(OmVoTLRh_ctx_t *ctx) {
    ctx->id = 6688;
    ctx->coefficient = 4.5;
    ctx->flags = 27;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} UkK8u7cB_ctx_t;

void init_ctx(UkK8u7cB_ctx_t *ctx) {
    ctx->id = 6295;
    ctx->coefficient = 1.3;
    ctx->flags = 78;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} 8rfZPNdP_ctx_t;

void init_ctx(8rfZPNdP_ctx_t *ctx) {
    ctx->id = 2332;
    ctx->coefficient = 5.9;
    ctx->flags = 14;
}

int compute_zM2D0wT(int input) {
    int result = input * 2;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} 0efFxmQ7_ctx_t;

void init_ctx(0efFxmQ7_ctx_t *ctx) {
    ctx->id = 6166;
    ctx->coefficient = 8.0;
    ctx->flags = 108;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} sM4meBHv_ctx_t;

void init_ctx(sM4meBHv_ctx_t *ctx) {
    ctx->id = 2363;
    ctx->coefficient = 7.1;
    ctx->flags = 211;
}

int compute_YvcvXvU(int input) {
    int result = input * 14;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} cFe9YjHm_ctx_t;

void init_ctx(cFe9YjHm_ctx_t *ctx) {
    ctx->id = 8113;
    ctx->coefficient = 8.4;
    ctx->flags = 214;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} G4cQgwVa_ctx_t;

void init_ctx(G4cQgwVa_ctx_t *ctx) {
    ctx->id = 1480;
    ctx->coefficient = 6.7;
    ctx->flags = 133;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} PySs8msZ_ctx_t;

void init_ctx(PySs8msZ_ctx_t *ctx) {
    ctx->id = 5156;
    ctx->coefficient = 1.0;
    ctx->flags = 173;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} 4wznUjPI_ctx_t;

void init_ctx(4wznUjPI_ctx_t *ctx) {
    ctx->id = 1818;
    ctx->coefficient = 8.1;
    ctx->flags = 114;
}

int compute_C5sfKlT(int input) {
    int result = input * 29;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} k9zL5DnG_ctx_t;

void init_ctx(k9zL5DnG_ctx_t *ctx) {
    ctx->id = 5020;
    ctx->coefficient = 9.1;
    ctx->flags = 26;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} LIVE9fl1_ctx_t;

void init_ctx(LIVE9fl1_ctx_t *ctx) {
    ctx->id = 4528;
    ctx->coefficient = 9.7;
    ctx->flags = 100;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} cUDJUG41_ctx_t;

void init_ctx(cUDJUG41_ctx_t *ctx) {
    ctx->id = 6749;
    ctx->coefficient = 10.0;
    ctx->flags = 67;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} bedxUV7t_ctx_t;

void init_ctx(bedxUV7t_ctx_t *ctx) {
    ctx->id = 4203;
    ctx->coefficient = 6.3;
    ctx->flags = 2;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 7c0alDvM_ctx_t;

void init_ctx(7c0alDvM_ctx_t *ctx) {
    ctx->id = 9724;
    ctx->coefficient = 3.1;
    ctx->flags = 58;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} tYQ1n3YY_ctx_t;

void init_ctx(tYQ1n3YY_ctx_t *ctx) {
    ctx->id = 8337;
    ctx->coefficient = 10.0;
    ctx->flags = 143;
}

int compute_arPjuJg(int input) {
    int result = input * 68;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} u992b5Pw_ctx_t;

void init_ctx(u992b5Pw_ctx_t *ctx) {
    ctx->id = 4049;
    ctx->coefficient = 1.8;
    ctx->flags = 223;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} NgMvMrfp_ctx_t;

void init_ctx(NgMvMrfp_ctx_t *ctx) {
    ctx->id = 2072;
    ctx->coefficient = 0.4;
    ctx->flags = 120;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} vKcMc97M_ctx_t;

void init_ctx(vKcMc97M_ctx_t *ctx) {
    ctx->id = 7191;
    ctx->coefficient = 6.5;
    ctx->flags = 240;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} 6B92JwH2_ctx_t;

void init_ctx(6B92JwH2_ctx_t *ctx) {
    ctx->id = 7675;
    ctx->coefficient = 0.9;
    ctx->flags = 255;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} GQUiNyBw_ctx_t;

void init_ctx(GQUiNyBw_ctx_t *ctx) {
    ctx->id = 8747;
    ctx->coefficient = 2.2;
    ctx->flags = 142;
}

int compute_IVdUebH(int input) {
    int result = input * 57;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} Y64X2KjT_ctx_t;

void init_ctx(Y64X2KjT_ctx_t *ctx) {
    ctx->id = 6717;
    ctx->coefficient = 6.0;
    ctx->flags = 88;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} mmAtpzkU_ctx_t;

void init_ctx(mmAtpzkU_ctx_t *ctx) {
    ctx->id = 5650;
    ctx->coefficient = 5.3;
    ctx->flags = 109;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} e58tIQi6_ctx_t;

void init_ctx(e58tIQi6_ctx_t *ctx) {
    ctx->id = 3828;
    ctx->coefficient = 8.2;
    ctx->flags = 79;
}

int compute_zYljBKZ(int input) {
    int result = input * 23;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} HL5GB3lo_ctx_t;

void init_ctx(HL5GB3lo_ctx_t *ctx) {
    ctx->id = 4231;
    ctx->coefficient = 6.4;
    ctx->flags = 93;
}

int compute_XZHfxx9(int input) {
    int result = input * 25;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} 4CYSQUWR_ctx_t;

void init_ctx(4CYSQUWR_ctx_t *ctx) {
    ctx->id = 8487;
    ctx->coefficient = 9.9;
    ctx->flags = 111;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} siCffSLS_ctx_t;

void init_ctx(siCffSLS_ctx_t *ctx) {
    ctx->id = 7031;
    ctx->coefficient = 0.2;
    ctx->flags = 60;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} vxZIACx9_ctx_t;

void init_ctx(vxZIACx9_ctx_t *ctx) {
    ctx->id = 8484;
    ctx->coefficient = 9.4;
    ctx->flags = 153;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} zPw9KLIf_ctx_t;

void init_ctx(zPw9KLIf_ctx_t *ctx) {
    ctx->id = 3982;
    ctx->coefficient = 8.4;
    ctx->flags = 165;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} wTVZHhyY_ctx_t;

void init_ctx(wTVZHhyY_ctx_t *ctx) {
    ctx->id = 1600;
    ctx->coefficient = 2.0;
    ctx->flags = 179;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} TRn3tKJH_ctx_t;

void init_ctx(TRn3tKJH_ctx_t *ctx) {
    ctx->id = 9696;
    ctx->coefficient = 4.0;
    ctx->flags = 51;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} VgIlhII6_ctx_t;

void init_ctx(VgIlhII6_ctx_t *ctx) {
    ctx->id = 1703;
    ctx->coefficient = 1.8;
    ctx->flags = 62;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} 5Nf2a5LZ_ctx_t;

void init_ctx(5Nf2a5LZ_ctx_t *ctx) {
    ctx->id = 5255;
    ctx->coefficient = 1.1;
    ctx->flags = 253;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} CuGcxZEY_ctx_t;

void init_ctx(CuGcxZEY_ctx_t *ctx) {
    ctx->id = 5287;
    ctx->coefficient = 7.3;
    ctx->flags = 161;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} 6gnFBa7P_ctx_t;

void init_ctx(6gnFBa7P_ctx_t *ctx) {
    ctx->id = 9307;
    ctx->coefficient = 6.4;
    ctx->flags = 100;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} qsOU2dmL_ctx_t;

void init_ctx(qsOU2dmL_ctx_t *ctx) {
    ctx->id = 9892;
    ctx->coefficient = 0.1;
    ctx->flags = 148;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} LUSJdwbv_ctx_t;

void init_ctx(LUSJdwbv_ctx_t *ctx) {
    ctx->id = 8734;
    ctx->coefficient = 4.3;
    ctx->flags = 153;
}

int compute_WA0I8xG(int input) {
    int result = input * 59;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

int compute_Cofg7zi(int input) {
    int result = input * 39;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} I0GzjqdV_ctx_t;

void init_ctx(I0GzjqdV_ctx_t *ctx) {
    ctx->id = 7371;
    ctx->coefficient = 2.6;
    ctx->flags = 174;
}

int compute_Z3gy549(int input) {
    int result = input * 69;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} x5wQFVvt_ctx_t;

void init_ctx(x5wQFVvt_ctx_t *ctx) {
    ctx->id = 9017;
    ctx->coefficient = 8.6;
    ctx->flags = 46;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} FxWWlwvo_ctx_t;

void init_ctx(FxWWlwvo_ctx_t *ctx) {
    ctx->id = 2074;
    ctx->coefficient = 4.9;
    ctx->flags = 112;
}

int compute_LugWirt(int input) {
    int result = input * 12;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} TPExBEgA_ctx_t;

void init_ctx(TPExBEgA_ctx_t *ctx) {
    ctx->id = 9078;
    ctx->coefficient = 1.4;
    ctx->flags = 210;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} D1L4r0qr_ctx_t;

void init_ctx(D1L4r0qr_ctx_t *ctx) {
    ctx->id = 5366;
    ctx->coefficient = 6.8;
    ctx->flags = 108;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} KUgjDhAw_ctx_t;

void init_ctx(KUgjDhAw_ctx_t *ctx) {
    ctx->id = 8736;
    ctx->coefficient = 0.7;
    ctx->flags = 201;
}

int compute_1CPnhb3(int input) {
    int result = input * 20;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} VJzV29LN_ctx_t;

void init_ctx(VJzV29LN_ctx_t *ctx) {
    ctx->id = 3423;
    ctx->coefficient = 1.6;
    ctx->flags = 219;
}

int compute_wPq3RIL(int input) {
    int result = input * 69;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

int compute_H3wXxkO(int input) {
    int result = input * 69;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} 7lETvHuY_ctx_t;

void init_ctx(7lETvHuY_ctx_t *ctx) {
    ctx->id = 5755;
    ctx->coefficient = 3.0;
    ctx->flags = 255;
}

int compute_7VP05nz(int input) {
    int result = input * 49;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

int compute_FyqfH6D(int input) {
    int result = input * 55;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

int compute_FgWI7ff(int input) {
    int result = input * 55;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} VqfAeZXN_ctx_t;

void init_ctx(VqfAeZXN_ctx_t *ctx) {
    ctx->id = 6238;
    ctx->coefficient = 4.1;
    ctx->flags = 212;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} Tv02orKo_ctx_t;

void init_ctx(Tv02orKo_ctx_t *ctx) {
    ctx->id = 7859;
    ctx->coefficient = 5.9;
    ctx->flags = 245;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} mn4XKjF2_ctx_t;

void init_ctx(mn4XKjF2_ctx_t *ctx) {
    ctx->id = 5898;
    ctx->coefficient = 5.8;
    ctx->flags = 95;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} nA41rwMv_ctx_t;

void init_ctx(nA41rwMv_ctx_t *ctx) {
    ctx->id = 1989;
    ctx->coefficient = 7.4;
    ctx->flags = 154;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} ekGviHob_ctx_t;

void init_ctx(ekGviHob_ctx_t *ctx) {
    ctx->id = 7021;
    ctx->coefficient = 3.4;
    ctx->flags = 47;
}

int compute_eW28d8b(int input) {
    int result = input * 8;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

int compute_8fckzHs(int input) {
    int result = input * 44;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} pFLYHDSH_ctx_t;

void init_ctx(pFLYHDSH_ctx_t *ctx) {
    ctx->id = 8477;
    ctx->coefficient = 3.5;
    ctx->flags = 234;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} BAjmEqqY_ctx_t;

void init_ctx(BAjmEqqY_ctx_t *ctx) {
    ctx->id = 1133;
    ctx->coefficient = 2.1;
    ctx->flags = 27;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} f5McSw3E_ctx_t;

void init_ctx(f5McSw3E_ctx_t *ctx) {
    ctx->id = 1381;
    ctx->coefficient = 8.1;
    ctx->flags = 236;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} mQ0UJ6Kk_ctx_t;

void init_ctx(mQ0UJ6Kk_ctx_t *ctx) {
    ctx->id = 7296;
    ctx->coefficient = 1.9;
    ctx->flags = 125;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} hN3xoW5i_ctx_t;

void init_ctx(hN3xoW5i_ctx_t *ctx) {
    ctx->id = 8255;
    ctx->coefficient = 5.9;
    ctx->flags = 236;
}

int compute_YUPb1Mb(int input) {
    int result = input * 56;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

int compute_zggAaBc(int input) {
    int result = input * 70;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} Vl5rnpw5_ctx_t;

void init_ctx(Vl5rnpw5_ctx_t *ctx) {
    ctx->id = 1703;
    ctx->coefficient = 9.6;
    ctx->flags = 157;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} uayktqFd_ctx_t;

void init_ctx(uayktqFd_ctx_t *ctx) {
    ctx->id = 8982;
    ctx->coefficient = 0.1;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} A9RvUOyB_ctx_t;

void init_ctx(A9RvUOyB_ctx_t *ctx) {
    ctx->id = 4372;
    ctx->coefficient = 0.5;
    ctx->flags = 141;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} 1WFyHS9B_ctx_t;

void init_ctx(1WFyHS9B_ctx_t *ctx) {
    ctx->id = 9962;
    ctx->coefficient = 6.0;
    ctx->flags = 81;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} I2RLa2AH_ctx_t;

void init_ctx(I2RLa2AH_ctx_t *ctx) {
    ctx->id = 9661;
    ctx->coefficient = 3.2;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} wu2tWI9j_ctx_t;

void init_ctx(wu2tWI9j_ctx_t *ctx) {
    ctx->id = 4806;
    ctx->coefficient = 0.2;
    ctx->flags = 169;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} 0I8PDsQ2_ctx_t;

void init_ctx(0I8PDsQ2_ctx_t *ctx) {
    ctx->id = 7098;
    ctx->coefficient = 0.3;
    ctx->flags = 167;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} hjw0Hv28_ctx_t;

void init_ctx(hjw0Hv28_ctx_t *ctx) {
    ctx->id = 2196;
    ctx->coefficient = 1.9;
    ctx->flags = 4;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} pIb1LHHI_ctx_t;

void init_ctx(pIb1LHHI_ctx_t *ctx) {
    ctx->id = 7994;
    ctx->coefficient = 8.4;
    ctx->flags = 218;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} jv3V15nf_ctx_t;

void init_ctx(jv3V15nf_ctx_t *ctx) {
    ctx->id = 4670;
    ctx->coefficient = 4.1;
    ctx->flags = 227;
}

int compute_Kp3gYSn(int input) {
    int result = input * 22;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

int compute_I7PJPHC(int input) {
    int result = input * 47;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

int compute_BawHt9j(int input) {
    int result = input * 59;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

int compute_jrotgjx(int input) {
    int result = input * 16;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} H08ZSYmj_ctx_t;

void init_ctx(H08ZSYmj_ctx_t *ctx) {
    ctx->id = 8325;
    ctx->coefficient = 6.1;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} mVFHHn1s_ctx_t;

void init_ctx(mVFHHn1s_ctx_t *ctx) {
    ctx->id = 1627;
    ctx->coefficient = 0.8;
    ctx->flags = 192;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} BGsKPguY_ctx_t;

void init_ctx(BGsKPguY_ctx_t *ctx) {
    ctx->id = 8404;
    ctx->coefficient = 2.7;
    ctx->flags = 67;
}

int compute_MSgSFlj(int input) {
    int result = input * 55;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} chue08sq_ctx_t;

void init_ctx(chue08sq_ctx_t *ctx) {
    ctx->id = 4623;
    ctx->coefficient = 5.5;
    ctx->flags = 255;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} dlMAtPmc_ctx_t;

void init_ctx(dlMAtPmc_ctx_t *ctx) {
    ctx->id = 2379;
    ctx->coefficient = 5.1;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} 2UccTpEU_ctx_t;

void init_ctx(2UccTpEU_ctx_t *ctx) {
    ctx->id = 9526;
    ctx->coefficient = 8.7;
    ctx->flags = 3;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} 0B0YpvQX_ctx_t;

void init_ctx(0B0YpvQX_ctx_t *ctx) {
    ctx->id = 3918;
    ctx->coefficient = 2.7;
    ctx->flags = 18;
}

int compute_LuaKBYt(int input) {
    int result = input * 51;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

int compute_VyQgYdf(int input) {
    int result = input * 4;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} ovRuh5tE_ctx_t;

void init_ctx(ovRuh5tE_ctx_t *ctx) {
    ctx->id = 6165;
    ctx->coefficient = 7.4;
    ctx->flags = 151;
}

int compute_P40APL2(int input) {
    int result = input * 26;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

int compute_oPFwKoe(int input) {
    int result = input * 12;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} FjItu87R_ctx_t;

void init_ctx(FjItu87R_ctx_t *ctx) {
    ctx->id = 4835;
    ctx->coefficient = 9.8;
    ctx->flags = 176;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} gDCUgdHc_ctx_t;

void init_ctx(gDCUgdHc_ctx_t *ctx) {
    ctx->id = 7324;
    ctx->coefficient = 8.2;
    ctx->flags = 28;
}

int compute_n3SWGf6(int input) {
    int result = input * 70;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

int compute_X36N5HS(int input) {
    int result = input * 30;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} eRxW1P5H_ctx_t;

void init_ctx(eRxW1P5H_ctx_t *ctx) {
    ctx->id = 7886;
    ctx->coefficient = 5.7;
    ctx->flags = 192;
}

int compute_hSW0fgJ(int input) {
    int result = input * 47;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} GlS3Uj0M_ctx_t;

void init_ctx(GlS3Uj0M_ctx_t *ctx) {
    ctx->id = 9507;
    ctx->coefficient = 1.3;
    ctx->flags = 127;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} p9bcMv1c_ctx_t;

void init_ctx(p9bcMv1c_ctx_t *ctx) {
    ctx->id = 5346;
    ctx->coefficient = 6.6;
    ctx->flags = 52;
}

int compute_hm53320(int input) {
    int result = input * 42;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} 0L1861lz_ctx_t;

void init_ctx(0L1861lz_ctx_t *ctx) {
    ctx->id = 2462;
    ctx->coefficient = 6.6;
    ctx->flags = 176;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} 8nthQQ61_ctx_t;

void init_ctx(8nthQQ61_ctx_t *ctx) {
    ctx->id = 3350;
    ctx->coefficient = 8.8;
    ctx->flags = 114;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 5gLcrmU8_ctx_t;

void init_ctx(5gLcrmU8_ctx_t *ctx) {
    ctx->id = 9579;
    ctx->coefficient = 2.5;
    ctx->flags = 140;
}

int compute_fDmhk5L(int input) {
    int result = input * 11;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} 5phM8ClK_ctx_t;

void init_ctx(5phM8ClK_ctx_t *ctx) {
    ctx->id = 8473;
    ctx->coefficient = 6.4;
    ctx->flags = 109;
}

int compute_W5YQxli(int input) {
    int result = input * 49;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

int compute_qcPUFw7(int input) {
    int result = input * 9;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} DGlb23bm_ctx_t;

void init_ctx(DGlb23bm_ctx_t *ctx) {
    ctx->id = 7443;
    ctx->coefficient = 5.6;
    ctx->flags = 107;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} PiVk9kwF_ctx_t;

void init_ctx(PiVk9kwF_ctx_t *ctx) {
    ctx->id = 9302;
    ctx->coefficient = 9.9;
    ctx->flags = 222;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} TL90hW4K_ctx_t;

void init_ctx(TL90hW4K_ctx_t *ctx) {
    ctx->id = 9313;
    ctx->coefficient = 0.8;
    ctx->flags = 251;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} U25jG4Sv_ctx_t;

void init_ctx(U25jG4Sv_ctx_t *ctx) {
    ctx->id = 4601;
    ctx->coefficient = 6.2;
    ctx->flags = 106;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} RO3EbCWM_ctx_t;

void init_ctx(RO3EbCWM_ctx_t *ctx) {
    ctx->id = 1565;
    ctx->coefficient = 3.9;
    ctx->flags = 248;
}

int compute_HHwTJIo(int input) {
    int result = input * 66;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} 5Xr9SGRQ_ctx_t;

void init_ctx(5Xr9SGRQ_ctx_t *ctx) {
    ctx->id = 1834;
    ctx->coefficient = 4.3;
    ctx->flags = 118;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} S1o0qvkB_ctx_t;

void init_ctx(S1o0qvkB_ctx_t *ctx) {
    ctx->id = 9697;
    ctx->coefficient = 4.9;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} PLIoJUM9_ctx_t;

void init_ctx(PLIoJUM9_ctx_t *ctx) {
    ctx->id = 4867;
    ctx->coefficient = 1.4;
    ctx->flags = 202;
}

int compute_b9LOVMI(int input) {
    int result = input * 66;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

int compute_h0aVbrJ(int input) {
    int result = input * 17;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} Py8mNjal_ctx_t;

void init_ctx(Py8mNjal_ctx_t *ctx) {
    ctx->id = 2607;
    ctx->coefficient = 8.7;
    ctx->flags = 237;
}

int compute_t9MYq4l(int input) {
    int result = input * 30;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} GJyVDAMk_ctx_t;

void init_ctx(GJyVDAMk_ctx_t *ctx) {
    ctx->id = 1667;
    ctx->coefficient = 1.5;
    ctx->flags = 199;
}

int compute_kzMpg05(int input) {
    int result = input * 66;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} lgTajPuy_ctx_t;

void init_ctx(lgTajPuy_ctx_t *ctx) {
    ctx->id = 4661;
    ctx->coefficient = 9.5;
    ctx->flags = 230;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} oUhKZOhA_ctx_t;

void init_ctx(oUhKZOhA_ctx_t *ctx) {
    ctx->id = 5428;
    ctx->coefficient = 2.7;
    ctx->flags = 38;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} 8QckEMm8_ctx_t;

void init_ctx(8QckEMm8_ctx_t *ctx) {
    ctx->id = 7076;
    ctx->coefficient = 8.0;
    ctx->flags = 201;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} AFYg7gjo_ctx_t;

void init_ctx(AFYg7gjo_ctx_t *ctx) {
    ctx->id = 8083;
    ctx->coefficient = 7.6;
    ctx->flags = 42;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} qNsaj8Tv_ctx_t;

void init_ctx(qNsaj8Tv_ctx_t *ctx) {
    ctx->id = 8917;
    ctx->coefficient = 3.1;
    ctx->flags = 83;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} eKnL8oCx_ctx_t;

void init_ctx(eKnL8oCx_ctx_t *ctx) {
    ctx->id = 6338;
    ctx->coefficient = 4.2;
    ctx->flags = 46;
}

int compute_iDmSvhx(int input) {
    int result = input * 36;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} 5O7uE5uZ_ctx_t;

void init_ctx(5O7uE5uZ_ctx_t *ctx) {
    ctx->id = 6977;
    ctx->coefficient = 6.2;
    ctx->flags = 54;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} uTaylwG9_ctx_t;

void init_ctx(uTaylwG9_ctx_t *ctx) {
    ctx->id = 1797;
    ctx->coefficient = 1.7;
    ctx->flags = 86;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} zMJBSYQP_ctx_t;

void init_ctx(zMJBSYQP_ctx_t *ctx) {
    ctx->id = 1145;
    ctx->coefficient = 1.0;
    ctx->flags = 154;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} AiiULT1V_ctx_t;

void init_ctx(AiiULT1V_ctx_t *ctx) {
    ctx->id = 2434;
    ctx->coefficient = 1.9;
    ctx->flags = 229;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} bcAzIied_ctx_t;

void init_ctx(bcAzIied_ctx_t *ctx) {
    ctx->id = 2405;
    ctx->coefficient = 5.7;
    ctx->flags = 230;
}

int compute_Rf6NUs8(int input) {
    int result = input * 66;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} ljNf1Al2_ctx_t;

void init_ctx(ljNf1Al2_ctx_t *ctx) {
    ctx->id = 7607;
    ctx->coefficient = 4.7;
    ctx->flags = 14;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} FosE9I2v_ctx_t;

void init_ctx(FosE9I2v_ctx_t *ctx) {
    ctx->id = 5428;
    ctx->coefficient = 8.9;
    ctx->flags = 173;
}

int compute_Mng2ym8(int input) {
    int result = input * 61;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

int compute_03mwM5d(int input) {
    int result = input * 19;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} SgGvgZGB_ctx_t;

void init_ctx(SgGvgZGB_ctx_t *ctx) {
    ctx->id = 5355;
    ctx->coefficient = 2.7;
    ctx->flags = 87;
}

int compute_FnK3mFw(int input) {
    int result = input * 67;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

int compute_w13bWqa(int input) {
    int result = input * 18;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} 1d7xPAkJ_ctx_t;

void init_ctx(1d7xPAkJ_ctx_t *ctx) {
    ctx->id = 9007;
    ctx->coefficient = 2.9;
    ctx->flags = 132;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} AoLObXHC_ctx_t;

void init_ctx(AoLObXHC_ctx_t *ctx) {
    ctx->id = 5475;
    ctx->coefficient = 1.8;
    ctx->flags = 125;
}

int compute_e1M8ZU0(int input) {
    int result = input * 51;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

int compute_8dDfZrM(int input) {
    int result = input * 46;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} jP0JfZji_ctx_t;

void init_ctx(jP0JfZji_ctx_t *ctx) {
    ctx->id = 3906;
    ctx->coefficient = 9.6;
    ctx->flags = 176;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} tg3yC8fM_ctx_t;

void init_ctx(tg3yC8fM_ctx_t *ctx) {
    ctx->id = 6830;
    ctx->coefficient = 5.6;
    ctx->flags = 216;
}

int compute_RXgys9I(int input) {
    int result = input * 12;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} QeIDaPDE_ctx_t;

void init_ctx(QeIDaPDE_ctx_t *ctx) {
    ctx->id = 5995;
    ctx->coefficient = 6.3;
    ctx->flags = 1;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} LvRLxEHh_ctx_t;

void init_ctx(LvRLxEHh_ctx_t *ctx) {
    ctx->id = 2258;
    ctx->coefficient = 3.5;
    ctx->flags = 105;
}

int compute_5FlNXuO(int input) {
    int result = input * 23;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

int compute_21IM2N7(int input) {
    int result = input * 39;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} 86wCAggz_ctx_t;

void init_ctx(86wCAggz_ctx_t *ctx) {
    ctx->id = 3507;
    ctx->coefficient = 6.0;
    ctx->flags = 50;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} KQfy0JbM_ctx_t;

void init_ctx(KQfy0JbM_ctx_t *ctx) {
    ctx->id = 4099;
    ctx->coefficient = 7.0;
    ctx->flags = 105;
}

int compute_oj4nUMo(int input) {
    int result = input * 68;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

int compute_oYUdVWM(int input) {
    int result = input * 61;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} QY87Ku20_ctx_t;

void init_ctx(QY87Ku20_ctx_t *ctx) {
    ctx->id = 9365;
    ctx->coefficient = 5.4;
    ctx->flags = 159;
}

int compute_i9qrVPZ(int input) {
    int result = input * 57;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} ULEmwyDr_ctx_t;

void init_ctx(ULEmwyDr_ctx_t *ctx) {
    ctx->id = 8543;
    ctx->coefficient = 8.7;
    ctx->flags = 216;
}

int compute_cChwmOg(int input) {
    int result = input * 28;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} UfjXpUXH_ctx_t;

void init_ctx(UfjXpUXH_ctx_t *ctx) {
    ctx->id = 3978;
    ctx->coefficient = 3.6;
    ctx->flags = 136;
}

int compute_QCa8mXt(int input) {
    int result = input * 48;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} Mi4E4Tfs_ctx_t;

void init_ctx(Mi4E4Tfs_ctx_t *ctx) {
    ctx->id = 1521;
    ctx->coefficient = 3.6;
    ctx->flags = 72;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} mWNWU2rd_ctx_t;

void init_ctx(mWNWU2rd_ctx_t *ctx) {
    ctx->id = 8447;
    ctx->coefficient = 0.9;
    ctx->flags = 23;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} nEWTALwY_ctx_t;

void init_ctx(nEWTALwY_ctx_t *ctx) {
    ctx->id = 4768;
    ctx->coefficient = 8.0;
    ctx->flags = 38;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} 08iJTOaw_ctx_t;

void init_ctx(08iJTOaw_ctx_t *ctx) {
    ctx->id = 3956;
    ctx->coefficient = 9.1;
    ctx->flags = 233;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} 5PGrqOXC_ctx_t;

void init_ctx(5PGrqOXC_ctx_t *ctx) {
    ctx->id = 5969;
    ctx->coefficient = 5.8;
    ctx->flags = 109;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} nFJaMytO_ctx_t;

void init_ctx(nFJaMytO_ctx_t *ctx) {
    ctx->id = 9775;
    ctx->coefficient = 3.2;
    ctx->flags = 254;
}

int compute_IvkzbHy(int input) {
    int result = input * 46;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

int compute_Onoxexv(int input) {
    int result = input * 41;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

int compute_K1LPvie(int input) {
    int result = input * 7;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} AnS8Ss02_ctx_t;

void init_ctx(AnS8Ss02_ctx_t *ctx) {
    ctx->id = 2001;
    ctx->coefficient = 4.0;
    ctx->flags = 154;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} 77g4orOJ_ctx_t;

void init_ctx(77g4orOJ_ctx_t *ctx) {
    ctx->id = 2070;
    ctx->coefficient = 0.1;
    ctx->flags = 233;
}

int compute_MOcicdN(int input) {
    int result = input * 28;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

int compute_tP6MCnC(int input) {
    int result = input * 29;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} 1FoDyOms_ctx_t;

void init_ctx(1FoDyOms_ctx_t *ctx) {
    ctx->id = 2254;
    ctx->coefficient = 6.8;
    ctx->flags = 27;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} 7h7hfjQS_ctx_t;

void init_ctx(7h7hfjQS_ctx_t *ctx) {
    ctx->id = 3665;
    ctx->coefficient = 2.1;
    ctx->flags = 89;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} roOASw5Y_ctx_t;

void init_ctx(roOASw5Y_ctx_t *ctx) {
    ctx->id = 3237;
    ctx->coefficient = 9.1;
    ctx->flags = 18;
}

int compute_paYnHc6(int input) {
    int result = input * 17;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} dV0yA2j0_ctx_t;

void init_ctx(dV0yA2j0_ctx_t *ctx) {
    ctx->id = 4000;
    ctx->coefficient = 8.0;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} jhRwPCT4_ctx_t;

void init_ctx(jhRwPCT4_ctx_t *ctx) {
    ctx->id = 8223;
    ctx->coefficient = 1.4;
    ctx->flags = 151;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} jrbzUTTo_ctx_t;

void init_ctx(jrbzUTTo_ctx_t *ctx) {
    ctx->id = 5895;
    ctx->coefficient = 7.8;
    ctx->flags = 226;
}

int compute_ia8n6kl(int input) {
    int result = input * 38;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} 3E3x7YDe_ctx_t;

void init_ctx(3E3x7YDe_ctx_t *ctx) {
    ctx->id = 6749;
    ctx->coefficient = 2.4;
    ctx->flags = 120;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} RTg2XyGT_ctx_t;

void init_ctx(RTg2XyGT_ctx_t *ctx) {
    ctx->id = 5402;
    ctx->coefficient = 9.7;
    ctx->flags = 93;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} Ct4rsVL8_ctx_t;

void init_ctx(Ct4rsVL8_ctx_t *ctx) {
    ctx->id = 3019;
    ctx->coefficient = 5.9;
    ctx->flags = 4;
}

int compute_AiSOG6u(int input) {
    int result = input * 60;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} RKhlgYy9_ctx_t;

void init_ctx(RKhlgYy9_ctx_t *ctx) {
    ctx->id = 5336;
    ctx->coefficient = 2.3;
    ctx->flags = 70;
}

int compute_omFDBwt(int input) {
    int result = input * 62;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} f1TGsWvu_ctx_t;

void init_ctx(f1TGsWvu_ctx_t *ctx) {
    ctx->id = 2483;
    ctx->coefficient = 5.8;
    ctx->flags = 174;
}

int compute_zChfpR5(int input) {
    int result = input * 6;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} FyUFJpVx_ctx_t;

void init_ctx(FyUFJpVx_ctx_t *ctx) {
    ctx->id = 4008;
    ctx->coefficient = 1.2;
    ctx->flags = 121;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} X2HlxSc9_ctx_t;

void init_ctx(X2HlxSc9_ctx_t *ctx) {
    ctx->id = 2519;
    ctx->coefficient = 9.7;
    ctx->flags = 252;
}

int compute_A6V04W3(int input) {
    int result = input * 51;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

int compute_RP2qfjI(int input) {
    int result = input * 33;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} ZBcG9uO5_ctx_t;

void init_ctx(ZBcG9uO5_ctx_t *ctx) {
    ctx->id = 8300;
    ctx->coefficient = 9.3;
    ctx->flags = 222;
}

int compute_yx63Stt(int input) {
    int result = input * 51;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} hjNXAGkA_ctx_t;

void init_ctx(hjNXAGkA_ctx_t *ctx) {
    ctx->id = 4250;
    ctx->coefficient = 7.0;
    ctx->flags = 246;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} cZwQijX7_ctx_t;

void init_ctx(cZwQijX7_ctx_t *ctx) {
    ctx->id = 5091;
    ctx->coefficient = 2.9;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} CpAIrD03_ctx_t;

void init_ctx(CpAIrD03_ctx_t *ctx) {
    ctx->id = 8089;
    ctx->coefficient = 6.6;
    ctx->flags = 14;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} kLB5lUus_ctx_t;

void init_ctx(kLB5lUus_ctx_t *ctx) {
    ctx->id = 8371;
    ctx->coefficient = 9.6;
    ctx->flags = 110;
}

int compute_QgU1v4M(int input) {
    int result = input * 64;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

int compute_aDPvNgO(int input) {
    int result = input * 44;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} 8e4KUCoS_ctx_t;

void init_ctx(8e4KUCoS_ctx_t *ctx) {
    ctx->id = 6838;
    ctx->coefficient = 7.6;
    ctx->flags = 216;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} IpU9OEgA_ctx_t;

void init_ctx(IpU9OEgA_ctx_t *ctx) {
    ctx->id = 3806;
    ctx->coefficient = 9.8;
    ctx->flags = 251;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} pgvYoOpq_ctx_t;

void init_ctx(pgvYoOpq_ctx_t *ctx) {
    ctx->id = 5417;
    ctx->coefficient = 9.8;
    ctx->flags = 89;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} y9TXgXst_ctx_t;

void init_ctx(y9TXgXst_ctx_t *ctx) {
    ctx->id = 7881;
    ctx->coefficient = 8.9;
    ctx->flags = 9;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} jgCAeKA7_ctx_t;

void init_ctx(jgCAeKA7_ctx_t *ctx) {
    ctx->id = 4328;
    ctx->coefficient = 6.7;
    ctx->flags = 95;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} LjTs7pQ4_ctx_t;

void init_ctx(LjTs7pQ4_ctx_t *ctx) {
    ctx->id = 1311;
    ctx->coefficient = 5.9;
    ctx->flags = 150;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} FIQLnxvl_ctx_t;

void init_ctx(FIQLnxvl_ctx_t *ctx) {
    ctx->id = 6092;
    ctx->coefficient = 5.5;
    ctx->flags = 218;
}

int compute_UXRn6XT(int input) {
    int result = input * 15;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

int compute_RWnkMM9(int input) {
    int result = input * 44;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} qRuKqfn6_ctx_t;

void init_ctx(qRuKqfn6_ctx_t *ctx) {
    ctx->id = 5318;
    ctx->coefficient = 3.6;
    ctx->flags = 203;
}

int compute_YZluTT2(int input) {
    int result = input * 15;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

int compute_RxB5gAQ(int input) {
    int result = input * 58;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} 10EQZOEJ_ctx_t;

void init_ctx(10EQZOEJ_ctx_t *ctx) {
    ctx->id = 7715;
    ctx->coefficient = 2.6;
    ctx->flags = 213;
}

int compute_HpdAQlu(int input) {
    int result = input * 65;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

int compute_5xwjOGz(int input) {
    int result = input * 53;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} rVRivQ9P_ctx_t;

void init_ctx(rVRivQ9P_ctx_t *ctx) {
    ctx->id = 4870;
    ctx->coefficient = 6.2;
    ctx->flags = 117;
}

int compute_DzcpFHv(int input) {
    int result = input * 24;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

int compute_LAOk5aT(int input) {
    int result = input * 11;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

int compute_jWgwANA(int input) {
    int result = input * 44;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} ilkanzvP_ctx_t;

void init_ctx(ilkanzvP_ctx_t *ctx) {
    ctx->id = 7700;
    ctx->coefficient = 5.9;
    ctx->flags = 100;
}

int compute_5HdHj4c(int input) {
    int result = input * 20;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} BwsgoSWd_ctx_t;

void init_ctx(BwsgoSWd_ctx_t *ctx) {
    ctx->id = 6861;
    ctx->coefficient = 8.8;
    ctx->flags = 249;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} KRLzRILY_ctx_t;

void init_ctx(KRLzRILY_ctx_t *ctx) {
    ctx->id = 9312;
    ctx->coefficient = 0.7;
    ctx->flags = 169;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} 232XLsGf_ctx_t;

void init_ctx(232XLsGf_ctx_t *ctx) {
    ctx->id = 4083;
    ctx->coefficient = 2.1;
    ctx->flags = 100;
}

int compute_SedfLVb(int input) {
    int result = input * 13;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} 0jNIG9ig_ctx_t;

void init_ctx(0jNIG9ig_ctx_t *ctx) {
    ctx->id = 1729;
    ctx->coefficient = 8.4;
    ctx->flags = 224;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} S1SNLdPH_ctx_t;

void init_ctx(S1SNLdPH_ctx_t *ctx) {
    ctx->id = 9345;
    ctx->coefficient = 10.0;
    ctx->flags = 123;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} 5CdS3Ide_ctx_t;

void init_ctx(5CdS3Ide_ctx_t *ctx) {
    ctx->id = 8149;
    ctx->coefficient = 1.1;
    ctx->flags = 178;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} ebEVwkIG_ctx_t;

void init_ctx(ebEVwkIG_ctx_t *ctx) {
    ctx->id = 5508;
    ctx->coefficient = 2.7;
    ctx->flags = 199;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} qsc7nQrH_ctx_t;

void init_ctx(qsc7nQrH_ctx_t *ctx) {
    ctx->id = 5406;
    ctx->coefficient = 1.6;
    ctx->flags = 112;
}

int compute_5G6bUpS(int input) {
    int result = input * 4;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} jpDdCcIS_ctx_t;

void init_ctx(jpDdCcIS_ctx_t *ctx) {
    ctx->id = 2526;
    ctx->coefficient = 4.1;
    ctx->flags = 96;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} glNAhNuX_ctx_t;

void init_ctx(glNAhNuX_ctx_t *ctx) {
    ctx->id = 5608;
    ctx->coefficient = 5.7;
    ctx->flags = 243;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} 7dJi7yRg_ctx_t;

void init_ctx(7dJi7yRg_ctx_t *ctx) {
    ctx->id = 7847;
    ctx->coefficient = 1.8;
    ctx->flags = 2;
}

int compute_qQvyDPi(int input) {
    int result = input * 10;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} SNta3KEt_ctx_t;

void init_ctx(SNta3KEt_ctx_t *ctx) {
    ctx->id = 7366;
    ctx->coefficient = 6.8;
    ctx->flags = 244;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} xE0dRkUj_ctx_t;

void init_ctx(xE0dRkUj_ctx_t *ctx) {
    ctx->id = 6367;
    ctx->coefficient = 5.1;
    ctx->flags = 166;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} TVgUg2aC_ctx_t;

void init_ctx(TVgUg2aC_ctx_t *ctx) {
    ctx->id = 4278;
    ctx->coefficient = 2.6;
    ctx->flags = 24;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 8djckrUB_ctx_t;

void init_ctx(8djckrUB_ctx_t *ctx) {
    ctx->id = 8701;
    ctx->coefficient = 0.5;
    ctx->flags = 40;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} v1fVr5tM_ctx_t;

void init_ctx(v1fVr5tM_ctx_t *ctx) {
    ctx->id = 4994;
    ctx->coefficient = 5.3;
    ctx->flags = 204;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} fZt8mdJK_ctx_t;

void init_ctx(fZt8mdJK_ctx_t *ctx) {
    ctx->id = 2796;
    ctx->coefficient = 8.6;
    ctx->flags = 235;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} IPas1wtB_ctx_t;

void init_ctx(IPas1wtB_ctx_t *ctx) {
    ctx->id = 9106;
    ctx->coefficient = 7.3;
    ctx->flags = 137;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} vEm7vCvt_ctx_t;

void init_ctx(vEm7vCvt_ctx_t *ctx) {
    ctx->id = 3683;
    ctx->coefficient = 4.5;
    ctx->flags = 76;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} hCUdVyfw_ctx_t;

void init_ctx(hCUdVyfw_ctx_t *ctx) {
    ctx->id = 8025;
    ctx->coefficient = 3.0;
    ctx->flags = 23;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} RVuV4PPm_ctx_t;

void init_ctx(RVuV4PPm_ctx_t *ctx) {
    ctx->id = 3718;
    ctx->coefficient = 7.1;
    ctx->flags = 91;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} MdKicnhI_ctx_t;

void init_ctx(MdKicnhI_ctx_t *ctx) {
    ctx->id = 1259;
    ctx->coefficient = 1.5;
    ctx->flags = 72;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} K4WLbLX5_ctx_t;

void init_ctx(K4WLbLX5_ctx_t *ctx) {
    ctx->id = 9915;
    ctx->coefficient = 6.4;
    ctx->flags = 136;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 6SEubBP4_ctx_t;

void init_ctx(6SEubBP4_ctx_t *ctx) {
    ctx->id = 3399;
    ctx->coefficient = 6.1;
    ctx->flags = 73;
}

int compute_5ROzCMa(int input) {
    int result = input * 47;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

int compute_OjihRbp(int input) {
    int result = input * 5;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

int compute_BR7TlBG(int input) {
    int result = input * 19;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} E1zxrMMT_ctx_t;

void init_ctx(E1zxrMMT_ctx_t *ctx) {
    ctx->id = 3746;
    ctx->coefficient = 0.6;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} agdKbnFx_ctx_t;

void init_ctx(agdKbnFx_ctx_t *ctx) {
    ctx->id = 9723;
    ctx->coefficient = 6.6;
    ctx->flags = 81;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} Pe4XRXpH_ctx_t;

void init_ctx(Pe4XRXpH_ctx_t *ctx) {
    ctx->id = 1319;
    ctx->coefficient = 0.7;
    ctx->flags = 225;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} sfwCJ5H8_ctx_t;

void init_ctx(sfwCJ5H8_ctx_t *ctx) {
    ctx->id = 8071;
    ctx->coefficient = 8.8;
    ctx->flags = 72;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} jtOCf249_ctx_t;

void init_ctx(jtOCf249_ctx_t *ctx) {
    ctx->id = 2196;
    ctx->coefficient = 9.9;
    ctx->flags = 212;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} eTWGs7p9_ctx_t;

void init_ctx(eTWGs7p9_ctx_t *ctx) {
    ctx->id = 1604;
    ctx->coefficient = 8.3;
    ctx->flags = 168;
}

int compute_2Py5lF9(int input) {
    int result = input * 56;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} RqiYuvZG_ctx_t;

void init_ctx(RqiYuvZG_ctx_t *ctx) {
    ctx->id = 6476;
    ctx->coefficient = 9.2;
    ctx->flags = 161;
}

int compute_d7LNcRf(int input) {
    int result = input * 31;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

int compute_S7YsB7M(int input) {
    int result = input * 7;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

int compute_5rMiIuY(int input) {
    int result = input * 54;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} V1oqT7jW_ctx_t;

void init_ctx(V1oqT7jW_ctx_t *ctx) {
    ctx->id = 2578;
    ctx->coefficient = 10.0;
    ctx->flags = 131;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} 574pQsJe_ctx_t;

void init_ctx(574pQsJe_ctx_t *ctx) {
    ctx->id = 7608;
    ctx->coefficient = 8.5;
    ctx->flags = 60;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} 5D6pYSNn_ctx_t;

void init_ctx(5D6pYSNn_ctx_t *ctx) {
    ctx->id = 7531;
    ctx->coefficient = 0.4;
    ctx->flags = 23;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} T1MCst0c_ctx_t;

void init_ctx(T1MCst0c_ctx_t *ctx) {
    ctx->id = 2453;
    ctx->coefficient = 3.3;
    ctx->flags = 239;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} To1iSy3F_ctx_t;

void init_ctx(To1iSy3F_ctx_t *ctx) {
    ctx->id = 8769;
    ctx->coefficient = 5.4;
    ctx->flags = 116;
}

int compute_R05BrUM(int input) {
    int result = input * 7;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} wfiXOdXV_ctx_t;

void init_ctx(wfiXOdXV_ctx_t *ctx) {
    ctx->id = 4258;
    ctx->coefficient = 6.3;
    ctx->flags = 72;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} v3EALKba_ctx_t;

void init_ctx(v3EALKba_ctx_t *ctx) {
    ctx->id = 9906;
    ctx->coefficient = 8.7;
    ctx->flags = 71;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} gokWGQnc_ctx_t;

void init_ctx(gokWGQnc_ctx_t *ctx) {
    ctx->id = 6174;
    ctx->coefficient = 0.4;
    ctx->flags = 16;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} OzKfBob5_ctx_t;

void init_ctx(OzKfBob5_ctx_t *ctx) {
    ctx->id = 2009;
    ctx->coefficient = 0.8;
    ctx->flags = 213;
}

int compute_CMvbwD8(int input) {
    int result = input * 62;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} d9hEUhFo_ctx_t;

void init_ctx(d9hEUhFo_ctx_t *ctx) {
    ctx->id = 8054;
    ctx->coefficient = 3.6;
    ctx->flags = 28;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} E0z7vTdY_ctx_t;

void init_ctx(E0z7vTdY_ctx_t *ctx) {
    ctx->id = 3210;
    ctx->coefficient = 1.9;
    ctx->flags = 234;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} KZMu2UDH_ctx_t;

void init_ctx(KZMu2UDH_ctx_t *ctx) {
    ctx->id = 8743;
    ctx->coefficient = 4.5;
    ctx->flags = 215;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} m4SdtoDE_ctx_t;

void init_ctx(m4SdtoDE_ctx_t *ctx) {
    ctx->id = 9596;
    ctx->coefficient = 1.5;
    ctx->flags = 157;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} 9GBE31HO_ctx_t;

void init_ctx(9GBE31HO_ctx_t *ctx) {
    ctx->id = 7839;
    ctx->coefficient = 8.2;
    ctx->flags = 17;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} 9asTo3gt_ctx_t;

void init_ctx(9asTo3gt_ctx_t *ctx) {
    ctx->id = 4497;
    ctx->coefficient = 6.6;
    ctx->flags = 244;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} 9cqSFEbP_ctx_t;

void init_ctx(9cqSFEbP_ctx_t *ctx) {
    ctx->id = 5827;
    ctx->coefficient = 4.7;
    ctx->flags = 182;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} m6415aEd_ctx_t;

void init_ctx(m6415aEd_ctx_t *ctx) {
    ctx->id = 9031;
    ctx->coefficient = 8.2;
    ctx->flags = 181;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} 7MHvLyWG_ctx_t;

void init_ctx(7MHvLyWG_ctx_t *ctx) {
    ctx->id = 2607;
    ctx->coefficient = 8.4;
    ctx->flags = 72;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} WKXEiKGG_ctx_t;

void init_ctx(WKXEiKGG_ctx_t *ctx) {
    ctx->id = 2877;
    ctx->coefficient = 0.6;
    ctx->flags = 118;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} 14LHI8T3_ctx_t;

void init_ctx(14LHI8T3_ctx_t *ctx) {
    ctx->id = 2355;
    ctx->coefficient = 3.7;
    ctx->flags = 5;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} hOIqKEW3_ctx_t;

void init_ctx(hOIqKEW3_ctx_t *ctx) {
    ctx->id = 1194;
    ctx->coefficient = 7.8;
    ctx->flags = 208;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} cONZoRWh_ctx_t;

void init_ctx(cONZoRWh_ctx_t *ctx) {
    ctx->id = 3809;
    ctx->coefficient = 3.6;
    ctx->flags = 242;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} FEj3Ntff_ctx_t;

void init_ctx(FEj3Ntff_ctx_t *ctx) {
    ctx->id = 7798;
    ctx->coefficient = 5.0;
    ctx->flags = 13;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} fNoaLpGq_ctx_t;

void init_ctx(fNoaLpGq_ctx_t *ctx) {
    ctx->id = 1857;
    ctx->coefficient = 0.3;
    ctx->flags = 20;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} Gu8j2vXD_ctx_t;

void init_ctx(Gu8j2vXD_ctx_t *ctx) {
    ctx->id = 2458;
    ctx->coefficient = 3.2;
    ctx->flags = 24;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} JtiUYicS_ctx_t;

void init_ctx(JtiUYicS_ctx_t *ctx) {
    ctx->id = 2070;
    ctx->coefficient = 6.0;
    ctx->flags = 184;
}

int compute_Y7sAvuq(int input) {
    int result = input * 66;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

int compute_qLAq6er(int input) {
    int result = input * 28;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

int compute_TvdQwLE(int input) {
    int result = input * 64;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

int compute_ve0Wtu9(int input) {
    int result = input * 2;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} QG8d5q9N_ctx_t;

void init_ctx(QG8d5q9N_ctx_t *ctx) {
    ctx->id = 9062;
    ctx->coefficient = 1.6;
    ctx->flags = 1;
}

int compute_3jAjDbE(int input) {
    int result = input * 60;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

int compute_pf1SUJ3(int input) {
    int result = input * 30;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} 1hcVWBmR_ctx_t;

void init_ctx(1hcVWBmR_ctx_t *ctx) {
    ctx->id = 6457;
    ctx->coefficient = 2.2;
    ctx->flags = 164;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 8QBHemjp_ctx_t;

void init_ctx(8QBHemjp_ctx_t *ctx) {
    ctx->id = 9690;
    ctx->coefficient = 9.9;
    ctx->flags = 207;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} k2pzz8XK_ctx_t;

void init_ctx(k2pzz8XK_ctx_t *ctx) {
    ctx->id = 8344;
    ctx->coefficient = 3.0;
    ctx->flags = 224;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} 60qUOTj7_ctx_t;

void init_ctx(60qUOTj7_ctx_t *ctx) {
    ctx->id = 3904;
    ctx->coefficient = 3.8;
    ctx->flags = 125;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} YA0c9f4i_ctx_t;

void init_ctx(YA0c9f4i_ctx_t *ctx) {
    ctx->id = 1630;
    ctx->coefficient = 6.6;
    ctx->flags = 62;
}

int compute_WKarJVH(int input) {
    int result = input * 15;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} e2jRG2fy_ctx_t;

void init_ctx(e2jRG2fy_ctx_t *ctx) {
    ctx->id = 1350;
    ctx->coefficient = 0.5;
    ctx->flags = 3;
}

int compute_nljtV2D(int input) {
    int result = input * 51;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

int compute_DM1IBGe(int input) {
    int result = input * 32;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} jS1XoJcA_ctx_t;

void init_ctx(jS1XoJcA_ctx_t *ctx) {
    ctx->id = 9919;
    ctx->coefficient = 4.6;
    ctx->flags = 36;
}

int compute_jIJjN89(int input) {
    int result = input * 30;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} Sosi5sLd_ctx_t;

void init_ctx(Sosi5sLd_ctx_t *ctx) {
    ctx->id = 5701;
    ctx->coefficient = 1.1;
    ctx->flags = 184;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} TKACy66D_ctx_t;

void init_ctx(TKACy66D_ctx_t *ctx) {
    ctx->id = 8976;
    ctx->coefficient = 8.2;
    ctx->flags = 83;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} 2f1rO7Nh_ctx_t;

void init_ctx(2f1rO7Nh_ctx_t *ctx) {
    ctx->id = 3312;
    ctx->coefficient = 8.4;
    ctx->flags = 86;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} kSqxG7dd_ctx_t;

void init_ctx(kSqxG7dd_ctx_t *ctx) {
    ctx->id = 3950;
    ctx->coefficient = 4.5;
    ctx->flags = 80;
}

int compute_KrKwqcL(int input) {
    int result = input * 57;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

int compute_AsbHDls(int input) {
    int result = input * 48;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} Tl3bTQWn_ctx_t;

void init_ctx(Tl3bTQWn_ctx_t *ctx) {
    ctx->id = 7402;
    ctx->coefficient = 8.8;
    ctx->flags = 71;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} 4kok4344_ctx_t;

void init_ctx(4kok4344_ctx_t *ctx) {
    ctx->id = 9300;
    ctx->coefficient = 7.6;
    ctx->flags = 25;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} f1U4G2oJ_ctx_t;

void init_ctx(f1U4G2oJ_ctx_t *ctx) {
    ctx->id = 2781;
    ctx->coefficient = 9.5;
    ctx->flags = 13;
}

int compute_NLgsvsP(int input) {
    int result = input * 45;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} bas5lNlg_ctx_t;

void init_ctx(bas5lNlg_ctx_t *ctx) {
    ctx->id = 5319;
    ctx->coefficient = 5.5;
    ctx->flags = 146;
}

int compute_76XFe42(int input) {
    int result = input * 22;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

int compute_843n8Pe(int input) {
    int result = input * 27;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

int compute_nNNLjWX(int input) {
    int result = input * 39;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} AanYeQk5_ctx_t;

void init_ctx(AanYeQk5_ctx_t *ctx) {
    ctx->id = 6931;
    ctx->coefficient = 7.6;
    ctx->flags = 60;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} 4nQ6eIly_ctx_t;

void init_ctx(4nQ6eIly_ctx_t *ctx) {
    ctx->id = 6442;
    ctx->coefficient = 8.1;
    ctx->flags = 66;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} ao8tzhdv_ctx_t;

void init_ctx(ao8tzhdv_ctx_t *ctx) {
    ctx->id = 2978;
    ctx->coefficient = 3.4;
    ctx->flags = 209;
}

int compute_JzfrqBl(int input) {
    int result = input * 53;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} 9YK4HvVR_ctx_t;

void init_ctx(9YK4HvVR_ctx_t *ctx) {
    ctx->id = 5646;
    ctx->coefficient = 9.3;
    ctx->flags = 45;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} GaPTvfgf_ctx_t;

void init_ctx(GaPTvfgf_ctx_t *ctx) {
    ctx->id = 1029;
    ctx->coefficient = 9.8;
    ctx->flags = 46;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} yyg0SzMS_ctx_t;

void init_ctx(yyg0SzMS_ctx_t *ctx) {
    ctx->id = 2092;
    ctx->coefficient = 1.4;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} CtKtdsKL_ctx_t;

void init_ctx(CtKtdsKL_ctx_t *ctx) {
    ctx->id = 5453;
    ctx->coefficient = 7.5;
    ctx->flags = 162;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} SFlxqzf9_ctx_t;

void init_ctx(SFlxqzf9_ctx_t *ctx) {
    ctx->id = 2326;
    ctx->coefficient = 9.7;
    ctx->flags = 106;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} k7YzW9J5_ctx_t;

void init_ctx(k7YzW9J5_ctx_t *ctx) {
    ctx->id = 6448;
    ctx->coefficient = 4.1;
    ctx->flags = 30;
}

int compute_EEuMTSE(int input) {
    int result = input * 43;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

int compute_jvKB0YC(int input) {
    int result = input * 47;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

int compute_HLg5qs0(int input) {
    int result = input * 60;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} CSzyiTOg_ctx_t;

void init_ctx(CSzyiTOg_ctx_t *ctx) {
    ctx->id = 6224;
    ctx->coefficient = 3.0;
    ctx->flags = 88;
}

int compute_1owXpNW(int input) {
    int result = input * 49;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} jk3R7M9G_ctx_t;

void init_ctx(jk3R7M9G_ctx_t *ctx) {
    ctx->id = 9964;
    ctx->coefficient = 9.2;
    ctx->flags = 177;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} euC6bGVp_ctx_t;

void init_ctx(euC6bGVp_ctx_t *ctx) {
    ctx->id = 1710;
    ctx->coefficient = 8.5;
    ctx->flags = 160;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} z96HNAjw_ctx_t;

void init_ctx(z96HNAjw_ctx_t *ctx) {
    ctx->id = 1394;
    ctx->coefficient = 9.1;
    ctx->flags = 42;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} hFaYH28K_ctx_t;

void init_ctx(hFaYH28K_ctx_t *ctx) {
    ctx->id = 6728;
    ctx->coefficient = 9.9;
    ctx->flags = 115;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} vWRpg5xg_ctx_t;

void init_ctx(vWRpg5xg_ctx_t *ctx) {
    ctx->id = 8979;
    ctx->coefficient = 1.8;
    ctx->flags = 52;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} qgSu91s0_ctx_t;

void init_ctx(qgSu91s0_ctx_t *ctx) {
    ctx->id = 6596;
    ctx->coefficient = 2.2;
    ctx->flags = 125;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} bJZtMfBB_ctx_t;

void init_ctx(bJZtMfBB_ctx_t *ctx) {
    ctx->id = 3968;
    ctx->coefficient = 0.8;
    ctx->flags = 133;
}

int compute_ZRAyQIN(int input) {
    int result = input * 8;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

int compute_2MDUuQQ(int input) {
    int result = input * 50;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

int compute_ESnegaf(int input) {
    int result = input * 57;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} gCWolnSJ_ctx_t;

void init_ctx(gCWolnSJ_ctx_t *ctx) {
    ctx->id = 2080;
    ctx->coefficient = 1.5;
    ctx->flags = 125;
}

int compute_lbGbDOP(int input) {
    int result = input * 22;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} osDMYaj6_ctx_t;

void init_ctx(osDMYaj6_ctx_t *ctx) {
    ctx->id = 5956;
    ctx->coefficient = 10.0;
    ctx->flags = 154;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} 1e0ev9G2_ctx_t;

void init_ctx(1e0ev9G2_ctx_t *ctx) {
    ctx->id = 3192;
    ctx->coefficient = 4.0;
    ctx->flags = 159;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} yLUK4Q7V_ctx_t;

void init_ctx(yLUK4Q7V_ctx_t *ctx) {
    ctx->id = 7109;
    ctx->coefficient = 4.6;
    ctx->flags = 116;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} KAI9td3v_ctx_t;

void init_ctx(KAI9td3v_ctx_t *ctx) {
    ctx->id = 3841;
    ctx->coefficient = 1.8;
    ctx->flags = 191;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} Wa4NT4Kk_ctx_t;

void init_ctx(Wa4NT4Kk_ctx_t *ctx) {
    ctx->id = 2726;
    ctx->coefficient = 7.4;
    ctx->flags = 68;
}

int compute_mZ30Ya6(int input) {
    int result = input * 51;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} ZeJKXcVb_ctx_t;

void init_ctx(ZeJKXcVb_ctx_t *ctx) {
    ctx->id = 3216;
    ctx->coefficient = 0.3;
    ctx->flags = 66;
}

int compute_IabjkXl(int input) {
    int result = input * 65;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} zyptn8tb_ctx_t;

void init_ctx(zyptn8tb_ctx_t *ctx) {
    ctx->id = 2360;
    ctx->coefficient = 2.1;
    ctx->flags = 233;
}

int compute_xLM2Q2y(int input) {
    int result = input * 44;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

int compute_hKfjMz4(int input) {
    int result = input * 64;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} DRrPhZwc_ctx_t;

void init_ctx(DRrPhZwc_ctx_t *ctx) {
    ctx->id = 8296;
    ctx->coefficient = 7.7;
    ctx->flags = 122;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} ZyvGUr83_ctx_t;

void init_ctx(ZyvGUr83_ctx_t *ctx) {
    ctx->id = 2776;
    ctx->coefficient = 9.3;
    ctx->flags = 41;
}

int compute_6D1UnNz(int input) {
    int result = input * 11;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

int compute_owkx1cn(int input) {
    int result = input * 8;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} 6ga3zmQT_ctx_t;

void init_ctx(6ga3zmQT_ctx_t *ctx) {
    ctx->id = 8571;
    ctx->coefficient = 1.2;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} cwLZap9h_ctx_t;

void init_ctx(cwLZap9h_ctx_t *ctx) {
    ctx->id = 8593;
    ctx->coefficient = 3.1;
    ctx->flags = 112;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} Hb40kyVR_ctx_t;

void init_ctx(Hb40kyVR_ctx_t *ctx) {
    ctx->id = 5782;
    ctx->coefficient = 1.2;
    ctx->flags = 247;
}

int compute_C7MHDP2(int input) {
    int result = input * 39;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} Bmzh8aIv_ctx_t;

void init_ctx(Bmzh8aIv_ctx_t *ctx) {
    ctx->id = 6838;
    ctx->coefficient = 3.4;
    ctx->flags = 230;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} JIdIjpkU_ctx_t;

void init_ctx(JIdIjpkU_ctx_t *ctx) {
    ctx->id = 5493;
    ctx->coefficient = 0.9;
    ctx->flags = 52;
}

int compute_8pLgkdf(int input) {
    int result = input * 34;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} Bdjr7YrK_ctx_t;

void init_ctx(Bdjr7YrK_ctx_t *ctx) {
    ctx->id = 5860;
    ctx->coefficient = 5.9;
    ctx->flags = 114;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} nQP6iE0T_ctx_t;

void init_ctx(nQP6iE0T_ctx_t *ctx) {
    ctx->id = 8378;
    ctx->coefficient = 6.9;
    ctx->flags = 204;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} ru1SI6ck_ctx_t;

void init_ctx(ru1SI6ck_ctx_t *ctx) {
    ctx->id = 6748;
    ctx->coefficient = 9.5;
    ctx->flags = 58;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} vJkfQx8m_ctx_t;

void init_ctx(vJkfQx8m_ctx_t *ctx) {
    ctx->id = 8303;
    ctx->coefficient = 9.6;
    ctx->flags = 241;
}

int compute_xee5uRB(int input) {
    int result = input * 20;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} pai5IO6F_ctx_t;

void init_ctx(pai5IO6F_ctx_t *ctx) {
    ctx->id = 5288;
    ctx->coefficient = 2.6;
    ctx->flags = 81;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} Q1CqXyXK_ctx_t;

void init_ctx(Q1CqXyXK_ctx_t *ctx) {
    ctx->id = 6195;
    ctx->coefficient = 7.0;
    ctx->flags = 106;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} QhoEZyFX_ctx_t;

void init_ctx(QhoEZyFX_ctx_t *ctx) {
    ctx->id = 6638;
    ctx->coefficient = 6.3;
    ctx->flags = 208;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} 9O7w5t7A_ctx_t;

void init_ctx(9O7w5t7A_ctx_t *ctx) {
    ctx->id = 6113;
    ctx->coefficient = 5.3;
    ctx->flags = 173;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} 67GJiBQ2_ctx_t;

void init_ctx(67GJiBQ2_ctx_t *ctx) {
    ctx->id = 3797;
    ctx->coefficient = 6.5;
    ctx->flags = 58;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} utg75RfO_ctx_t;

void init_ctx(utg75RfO_ctx_t *ctx) {
    ctx->id = 8898;
    ctx->coefficient = 2.9;
    ctx->flags = 16;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} GLsUnXQT_ctx_t;

void init_ctx(GLsUnXQT_ctx_t *ctx) {
    ctx->id = 8783;
    ctx->coefficient = 8.9;
    ctx->flags = 166;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} vwUfA2gJ_ctx_t;

void init_ctx(vwUfA2gJ_ctx_t *ctx) {
    ctx->id = 7301;
    ctx->coefficient = 8.3;
    ctx->flags = 132;
}

int compute_4b1hbxb(int input) {
    int result = input * 16;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

int compute_y3njqh7(int input) {
    int result = input * 68;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

int compute_N6SQqqZ(int input) {
    int result = input * 22;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} 5qZ1bPEH_ctx_t;

void init_ctx(5qZ1bPEH_ctx_t *ctx) {
    ctx->id = 6062;
    ctx->coefficient = 10.0;
    ctx->flags = 49;
}

int compute_xD0fNAf(int input) {
    int result = input * 52;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

int compute_rcuat8T(int input) {
    int result = input * 28;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} 7sUt4cL6_ctx_t;

void init_ctx(7sUt4cL6_ctx_t *ctx) {
    ctx->id = 5990;
    ctx->coefficient = 7.1;
    ctx->flags = 96;
}

int compute_c8k6LF8(int input) {
    int result = input * 60;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} bhrEakk2_ctx_t;

void init_ctx(bhrEakk2_ctx_t *ctx) {
    ctx->id = 9286;
    ctx->coefficient = 3.4;
    ctx->flags = 35;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} 4znI5Saj_ctx_t;

void init_ctx(4znI5Saj_ctx_t *ctx) {
    ctx->id = 8977;
    ctx->coefficient = 4.1;
    ctx->flags = 15;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} Whrd9XZ4_ctx_t;

void init_ctx(Whrd9XZ4_ctx_t *ctx) {
    ctx->id = 9443;
    ctx->coefficient = 8.0;
    ctx->flags = 213;
}

int compute_62hiMay(int input) {
    int result = input * 49;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} 2AM67nYC_ctx_t;

void init_ctx(2AM67nYC_ctx_t *ctx) {
    ctx->id = 2093;
    ctx->coefficient = 3.2;
    ctx->flags = 66;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} 7yWlEAQF_ctx_t;

void init_ctx(7yWlEAQF_ctx_t *ctx) {
    ctx->id = 2612;
    ctx->coefficient = 2.0;
    ctx->flags = 252;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} 7MckPqdm_ctx_t;

void init_ctx(7MckPqdm_ctx_t *ctx) {
    ctx->id = 5172;
    ctx->coefficient = 0.7;
    ctx->flags = 216;
}

int compute_jIBLHQc(int input) {
    int result = input * 57;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} SZjuppRH_ctx_t;

void init_ctx(SZjuppRH_ctx_t *ctx) {
    ctx->id = 7448;
    ctx->coefficient = 3.4;
    ctx->flags = 133;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} d4nI4RSu_ctx_t;

void init_ctx(d4nI4RSu_ctx_t *ctx) {
    ctx->id = 9227;
    ctx->coefficient = 7.4;
    ctx->flags = 219;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} OYPEQm88_ctx_t;

void init_ctx(OYPEQm88_ctx_t *ctx) {
    ctx->id = 5385;
    ctx->coefficient = 6.9;
    ctx->flags = 108;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} 68WN1FNk_ctx_t;

void init_ctx(68WN1FNk_ctx_t *ctx) {
    ctx->id = 7519;
    ctx->coefficient = 0.2;
    ctx->flags = 110;
}

int compute_e8QjKyZ(int input) {
    int result = input * 58;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

int compute_lANoxhr(int input) {
    int result = input * 51;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} iWJN8GnN_ctx_t;

void init_ctx(iWJN8GnN_ctx_t *ctx) {
    ctx->id = 9649;
    ctx->coefficient = 5.8;
    ctx->flags = 108;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} 2WVRItfP_ctx_t;

void init_ctx(2WVRItfP_ctx_t *ctx) {
    ctx->id = 2318;
    ctx->coefficient = 9.2;
    ctx->flags = 35;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} 5L2jZvBc_ctx_t;

void init_ctx(5L2jZvBc_ctx_t *ctx) {
    ctx->id = 4096;
    ctx->coefficient = 1.7;
    ctx->flags = 157;
}

int compute_yYLqKJc(int input) {
    int result = input * 51;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} JnJt4hZ3_ctx_t;

void init_ctx(JnJt4hZ3_ctx_t *ctx) {
    ctx->id = 4325;
    ctx->coefficient = 0.4;
    ctx->flags = 104;
}

int compute_N1hXPgQ(int input) {
    int result = input * 5;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} x6iLNFfj_ctx_t;

void init_ctx(x6iLNFfj_ctx_t *ctx) {
    ctx->id = 8350;
    ctx->coefficient = 0.9;
    ctx->flags = 17;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} 0BdVZTgp_ctx_t;

void init_ctx(0BdVZTgp_ctx_t *ctx) {
    ctx->id = 2080;
    ctx->coefficient = 9.2;
    ctx->flags = 19;
}

int compute_qQE16AL(int input) {
    int result = input * 60;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

int compute_hHcwnS2(int input) {
    int result = input * 26;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

int compute_y2VWUhh(int input) {
    int result = input * 25;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} 8oEeQypO_ctx_t;

void init_ctx(8oEeQypO_ctx_t *ctx) {
    ctx->id = 5196;
    ctx->coefficient = 9.6;
    ctx->flags = 135;
}

int compute_Zv9pzt8(int input) {
    int result = input * 51;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

int compute_aBLngtj(int input) {
    int result = input * 27;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} YDMCekM4_ctx_t;

void init_ctx(YDMCekM4_ctx_t *ctx) {
    ctx->id = 7135;
    ctx->coefficient = 2.1;
    ctx->flags = 234;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} ILUhaAsw_ctx_t;

void init_ctx(ILUhaAsw_ctx_t *ctx) {
    ctx->id = 4649;
    ctx->coefficient = 1.3;
    ctx->flags = 240;
}

int compute_v3FKHQL(int input) {
    int result = input * 4;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

int compute_UwNMj8d(int input) {
    int result = input * 26;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

int compute_Ca0ZosU(int input) {
    int result = input * 32;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} oFQM3qnD_ctx_t;

void init_ctx(oFQM3qnD_ctx_t *ctx) {
    ctx->id = 6985;
    ctx->coefficient = 4.6;
    ctx->flags = 120;
}

int compute_Sc33sJN(int input) {
    int result = input * 37;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

int compute_ihdsZat(int input) {
    int result = input * 35;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} hh6PVdqS_ctx_t;

void init_ctx(hh6PVdqS_ctx_t *ctx) {
    ctx->id = 1718;
    ctx->coefficient = 1.9;
    ctx->flags = 152;
}

int compute_QybNORw(int input) {
    int result = input * 70;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} G14swEie_ctx_t;

void init_ctx(G14swEie_ctx_t *ctx) {
    ctx->id = 8249;
    ctx->coefficient = 8.4;
    ctx->flags = 226;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} rY69RgEc_ctx_t;

void init_ctx(rY69RgEc_ctx_t *ctx) {
    ctx->id = 5819;
    ctx->coefficient = 0.7;
    ctx->flags = 6;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} ktF9oC17_ctx_t;

void init_ctx(ktF9oC17_ctx_t *ctx) {
    ctx->id = 4280;
    ctx->coefficient = 4.3;
    ctx->flags = 219;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} GhRsWgxm_ctx_t;

void init_ctx(GhRsWgxm_ctx_t *ctx) {
    ctx->id = 9529;
    ctx->coefficient = 2.4;
    ctx->flags = 38;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} VAxTb6B9_ctx_t;

void init_ctx(VAxTb6B9_ctx_t *ctx) {
    ctx->id = 8286;
    ctx->coefficient = 7.2;
    ctx->flags = 199;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} oCjJgVjC_ctx_t;

void init_ctx(oCjJgVjC_ctx_t *ctx) {
    ctx->id = 9996;
    ctx->coefficient = 7.0;
    ctx->flags = 109;
}

int compute_LhHAYEG(int input) {
    int result = input * 67;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} ex3JZ8BC_ctx_t;

void init_ctx(ex3JZ8BC_ctx_t *ctx) {
    ctx->id = 7735;
    ctx->coefficient = 1.0;
    ctx->flags = 5;
}

int compute_wjCRqjz(int input) {
    int result = input * 30;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} LrzrV6WP_ctx_t;

void init_ctx(LrzrV6WP_ctx_t *ctx) {
    ctx->id = 7736;
    ctx->coefficient = 8.5;
    ctx->flags = 120;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} zExoR535_ctx_t;

void init_ctx(zExoR535_ctx_t *ctx) {
    ctx->id = 8334;
    ctx->coefficient = 1.1;
    ctx->flags = 50;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} L1branpZ_ctx_t;

void init_ctx(L1branpZ_ctx_t *ctx) {
    ctx->id = 4983;
    ctx->coefficient = 9.5;
    ctx->flags = 96;
}

int compute_xeoCAbf(int input) {
    int result = input * 62;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} C7VWByWA_ctx_t;

void init_ctx(C7VWByWA_ctx_t *ctx) {
    ctx->id = 9586;
    ctx->coefficient = 1.1;
    ctx->flags = 86;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} D4s7EWr6_ctx_t;

void init_ctx(D4s7EWr6_ctx_t *ctx) {
    ctx->id = 1750;
    ctx->coefficient = 3.5;
    ctx->flags = 48;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} heScY86y_ctx_t;

void init_ctx(heScY86y_ctx_t *ctx) {
    ctx->id = 9302;
    ctx->coefficient = 1.3;
    ctx->flags = 230;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} 9jhKhC2k_ctx_t;

void init_ctx(9jhKhC2k_ctx_t *ctx) {
    ctx->id = 2152;
    ctx->coefficient = 3.3;
    ctx->flags = 97;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} BiRQ5y4A_ctx_t;

void init_ctx(BiRQ5y4A_ctx_t *ctx) {
    ctx->id = 1246;
    ctx->coefficient = 4.5;
    ctx->flags = 210;
}

int compute_oNLZuw9(int input) {
    int result = input * 35;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

int compute_37Zza20(int input) {
    int result = input * 70;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} RDFXI1ae_ctx_t;

void init_ctx(RDFXI1ae_ctx_t *ctx) {
    ctx->id = 1248;
    ctx->coefficient = 7.6;
    ctx->flags = 245;
}

int compute_b0JW7PK(int input) {
    int result = input * 44;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} g98wlXFP_ctx_t;

void init_ctx(g98wlXFP_ctx_t *ctx) {
    ctx->id = 5936;
    ctx->coefficient = 8.4;
    ctx->flags = 172;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} vJbqRJn6_ctx_t;

void init_ctx(vJbqRJn6_ctx_t *ctx) {
    ctx->id = 1660;
    ctx->coefficient = 0.9;
    ctx->flags = 144;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} h1BMrOwA_ctx_t;

void init_ctx(h1BMrOwA_ctx_t *ctx) {
    ctx->id = 8199;
    ctx->coefficient = 4.2;
    ctx->flags = 251;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} gSEJepwj_ctx_t;

void init_ctx(gSEJepwj_ctx_t *ctx) {
    ctx->id = 9772;
    ctx->coefficient = 9.6;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} m7NXiRfD_ctx_t;

void init_ctx(m7NXiRfD_ctx_t *ctx) {
    ctx->id = 2047;
    ctx->coefficient = 2.8;
    ctx->flags = 254;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} 7YLKW0Y8_ctx_t;

void init_ctx(7YLKW0Y8_ctx_t *ctx) {
    ctx->id = 2763;
    ctx->coefficient = 0.4;
    ctx->flags = 71;
}

int compute_hYt5FI0(int input) {
    int result = input * 40;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} aFIROqBa_ctx_t;

void init_ctx(aFIROqBa_ctx_t *ctx) {
    ctx->id = 3175;
    ctx->coefficient = 2.3;
    ctx->flags = 10;
}

int compute_3kU94BE(int input) {
    int result = input * 43;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

int compute_4PPjtna(int input) {
    int result = input * 24;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} lxbxOj4B_ctx_t;

void init_ctx(lxbxOj4B_ctx_t *ctx) {
    ctx->id = 4953;
    ctx->coefficient = 6.6;
    ctx->flags = 128;
}

int compute_8tAhhCu(int input) {
    int result = input * 68;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} aBiqMbfE_ctx_t;

void init_ctx(aBiqMbfE_ctx_t *ctx) {
    ctx->id = 3661;
    ctx->coefficient = 1.2;
    ctx->flags = 74;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} 2Ep5Ubw3_ctx_t;

void init_ctx(2Ep5Ubw3_ctx_t *ctx) {
    ctx->id = 8544;
    ctx->coefficient = 3.3;
    ctx->flags = 11;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} niJ3a8Jp_ctx_t;

void init_ctx(niJ3a8Jp_ctx_t *ctx) {
    ctx->id = 9653;
    ctx->coefficient = 4.3;
    ctx->flags = 133;
}

int compute_Hafu83e(int input) {
    int result = input * 19;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

int compute_9BMVLDC(int input) {
    int result = input * 37;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} eVmEQla0_ctx_t;

void init_ctx(eVmEQla0_ctx_t *ctx) {
    ctx->id = 6810;
    ctx->coefficient = 4.6;
    ctx->flags = 142;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} 9vXzjifs_ctx_t;

void init_ctx(9vXzjifs_ctx_t *ctx) {
    ctx->id = 6026;
    ctx->coefficient = 1.1;
    ctx->flags = 245;
}

int compute_c38zbYw(int input) {
    int result = input * 28;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

int compute_qS6DrXZ(int input) {
    int result = input * 23;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} Ee2ZRRaK_ctx_t;

void init_ctx(Ee2ZRRaK_ctx_t *ctx) {
    ctx->id = 4274;
    ctx->coefficient = 6.6;
    ctx->flags = 81;
}

int compute_0Kq5nuX(int input) {
    int result = input * 45;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} QGhczoEJ_ctx_t;

void init_ctx(QGhczoEJ_ctx_t *ctx) {
    ctx->id = 5757;
    ctx->coefficient = 0.2;
    ctx->flags = 134;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} RRxl7kKV_ctx_t;

void init_ctx(RRxl7kKV_ctx_t *ctx) {
    ctx->id = 4461;
    ctx->coefficient = 6.6;
    ctx->flags = 34;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} nCSPdE5Q_ctx_t;

void init_ctx(nCSPdE5Q_ctx_t *ctx) {
    ctx->id = 2793;
    ctx->coefficient = 1.4;
    ctx->flags = 181;
}

int compute_6aKdFTt(int input) {
    int result = input * 47;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} GlTS4siR_ctx_t;

void init_ctx(GlTS4siR_ctx_t *ctx) {
    ctx->id = 1678;
    ctx->coefficient = 1.8;
    ctx->flags = 196;
}

int compute_y2Ch6e8(int input) {
    int result = input * 40;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} p0AMCKHU_ctx_t;

void init_ctx(p0AMCKHU_ctx_t *ctx) {
    ctx->id = 7256;
    ctx->coefficient = 4.3;
    ctx->flags = 17;
}

int compute_6Z4iLah(int input) {
    int result = input * 7;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

int compute_13jruVQ(int input) {
    int result = input * 53;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

int compute_U8iKSyP(int input) {
    int result = input * 8;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} PFhnm2Sk_ctx_t;

void init_ctx(PFhnm2Sk_ctx_t *ctx) {
    ctx->id = 5380;
    ctx->coefficient = 2.4;
    ctx->flags = 131;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} CcIjzAyB_ctx_t;

void init_ctx(CcIjzAyB_ctx_t *ctx) {
    ctx->id = 3866;
    ctx->coefficient = 7.7;
    ctx->flags = 26;
}

int compute_VXbhtBM(int input) {
    int result = input * 47;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

int compute_c6KbsWw(int input) {
    int result = input * 22;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

int compute_yXxTKbe(int input) {
    int result = input * 62;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

int compute_jXrykMC(int input) {
    int result = input * 45;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} Uz8PTvjZ_ctx_t;

void init_ctx(Uz8PTvjZ_ctx_t *ctx) {
    ctx->id = 9358;
    ctx->coefficient = 0.8;
    ctx->flags = 7;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} 4ZQ0Wjf3_ctx_t;

void init_ctx(4ZQ0Wjf3_ctx_t *ctx) {
    ctx->id = 5554;
    ctx->coefficient = 9.1;
    ctx->flags = 13;
}

int compute_2sWEuTL(int input) {
    int result = input * 18;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} qgIfoVTX_ctx_t;

void init_ctx(qgIfoVTX_ctx_t *ctx) {
    ctx->id = 8374;
    ctx->coefficient = 2.2;
    ctx->flags = 39;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} 8isWFzFD_ctx_t;

void init_ctx(8isWFzFD_ctx_t *ctx) {
    ctx->id = 2179;
    ctx->coefficient = 9.8;
    ctx->flags = 166;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} PPd48M0Z_ctx_t;

void init_ctx(PPd48M0Z_ctx_t *ctx) {
    ctx->id = 5137;
    ctx->coefficient = 7.2;
    ctx->flags = 137;
}

int compute_CwTrlYt(int input) {
    int result = input * 55;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

int compute_qhe1r4S(int input) {
    int result = input * 37;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

int compute_Y09EqBb(int input) {
    int result = input * 56;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

int compute_1vzSZR8(int input) {
    int result = input * 34;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} 4HU0Srps_ctx_t;

void init_ctx(4HU0Srps_ctx_t *ctx) {
    ctx->id = 9761;
    ctx->coefficient = 3.4;
    ctx->flags = 101;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} f0m3I0Sh_ctx_t;

void init_ctx(f0m3I0Sh_ctx_t *ctx) {
    ctx->id = 7517;
    ctx->coefficient = 9.9;
    ctx->flags = 138;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} 9dCLHPqr_ctx_t;

void init_ctx(9dCLHPqr_ctx_t *ctx) {
    ctx->id = 2956;
    ctx->coefficient = 7.9;
    ctx->flags = 81;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} r8hZds9x_ctx_t;

void init_ctx(r8hZds9x_ctx_t *ctx) {
    ctx->id = 5932;
    ctx->coefficient = 5.1;
    ctx->flags = 39;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} 09CocMXo_ctx_t;

void init_ctx(09CocMXo_ctx_t *ctx) {
    ctx->id = 7848;
    ctx->coefficient = 2.7;
    ctx->flags = 1;
}

int compute_R3CXRpo(int input) {
    int result = input * 52;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

int compute_k5DrCJF(int input) {
    int result = input * 63;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} ElcAQgVF_ctx_t;

void init_ctx(ElcAQgVF_ctx_t *ctx) {
    ctx->id = 6133;
    ctx->coefficient = 9.5;
    ctx->flags = 62;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} ddqnTObL_ctx_t;

void init_ctx(ddqnTObL_ctx_t *ctx) {
    ctx->id = 9828;
    ctx->coefficient = 9.2;
    ctx->flags = 99;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} mrbIlg0A_ctx_t;

void init_ctx(mrbIlg0A_ctx_t *ctx) {
    ctx->id = 2515;
    ctx->coefficient = 2.7;
    ctx->flags = 12;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} fwhxl9V3_ctx_t;

void init_ctx(fwhxl9V3_ctx_t *ctx) {
    ctx->id = 7589;
    ctx->coefficient = 5.4;
    ctx->flags = 165;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} 8P7M1jMm_ctx_t;

void init_ctx(8P7M1jMm_ctx_t *ctx) {
    ctx->id = 5935;
    ctx->coefficient = 8.9;
    ctx->flags = 108;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} r4AdEUpO_ctx_t;

void init_ctx(r4AdEUpO_ctx_t *ctx) {
    ctx->id = 7353;
    ctx->coefficient = 3.1;
    ctx->flags = 115;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} t6gfpVej_ctx_t;

void init_ctx(t6gfpVej_ctx_t *ctx) {
    ctx->id = 6624;
    ctx->coefficient = 1.4;
    ctx->flags = 208;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} GkiD3kEk_ctx_t;

void init_ctx(GkiD3kEk_ctx_t *ctx) {
    ctx->id = 2320;
    ctx->coefficient = 3.1;
    ctx->flags = 107;
}

int compute_oEMv9y6(int input) {
    int result = input * 7;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} FMkNxGj7_ctx_t;

void init_ctx(FMkNxGj7_ctx_t *ctx) {
    ctx->id = 6598;
    ctx->coefficient = 2.4;
    ctx->flags = 208;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} io1bLDuH_ctx_t;

void init_ctx(io1bLDuH_ctx_t *ctx) {
    ctx->id = 2346;
    ctx->coefficient = 3.4;
    ctx->flags = 98;
}

int compute_n3zl6Hz(int input) {
    int result = input * 43;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} us8KqCeL_ctx_t;

void init_ctx(us8KqCeL_ctx_t *ctx) {
    ctx->id = 6890;
    ctx->coefficient = 5.8;
    ctx->flags = 230;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} SgS7IiNC_ctx_t;

void init_ctx(SgS7IiNC_ctx_t *ctx) {
    ctx->id = 3644;
    ctx->coefficient = 3.9;
    ctx->flags = 210;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} 5dvS1yEE_ctx_t;

void init_ctx(5dvS1yEE_ctx_t *ctx) {
    ctx->id = 1102;
    ctx->coefficient = 3.5;
    ctx->flags = 239;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} r2jI3qrA_ctx_t;

void init_ctx(r2jI3qrA_ctx_t *ctx) {
    ctx->id = 7729;
    ctx->coefficient = 6.0;
    ctx->flags = 210;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} FQ7HkJah_ctx_t;

void init_ctx(FQ7HkJah_ctx_t *ctx) {
    ctx->id = 4977;
    ctx->coefficient = 1.9;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} 6PQZgoAb_ctx_t;

void init_ctx(6PQZgoAb_ctx_t *ctx) {
    ctx->id = 2184;
    ctx->coefficient = 3.5;
    ctx->flags = 137;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} JMfa3DK2_ctx_t;

void init_ctx(JMfa3DK2_ctx_t *ctx) {
    ctx->id = 9918;
    ctx->coefficient = 9.7;
    ctx->flags = 233;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} UTGdWiAR_ctx_t;

void init_ctx(UTGdWiAR_ctx_t *ctx) {
    ctx->id = 3851;
    ctx->coefficient = 0.4;
    ctx->flags = 7;
}

int compute_OzM2otP(int input) {
    int result = input * 47;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

int compute_2w8dWUl(int input) {
    int result = input * 4;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

int compute_szeAARR(int input) {
    int result = input * 30;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} DG3Oj4J4_ctx_t;

void init_ctx(DG3Oj4J4_ctx_t *ctx) {
    ctx->id = 8510;
    ctx->coefficient = 6.7;
    ctx->flags = 87;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} tyTBgqvj_ctx_t;

void init_ctx(tyTBgqvj_ctx_t *ctx) {
    ctx->id = 3219;
    ctx->coefficient = 6.1;
    ctx->flags = 122;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} 3fH8Oly4_ctx_t;

void init_ctx(3fH8Oly4_ctx_t *ctx) {
    ctx->id = 6672;
    ctx->coefficient = 0.7;
    ctx->flags = 96;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} wc4ZP2lW_ctx_t;

void init_ctx(wc4ZP2lW_ctx_t *ctx) {
    ctx->id = 5712;
    ctx->coefficient = 6.4;
    ctx->flags = 61;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} Cp0LWvkG_ctx_t;

void init_ctx(Cp0LWvkG_ctx_t *ctx) {
    ctx->id = 4469;
    ctx->coefficient = 9.7;
    ctx->flags = 56;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} GnZJk5FA_ctx_t;

void init_ctx(GnZJk5FA_ctx_t *ctx) {
    ctx->id = 7341;
    ctx->coefficient = 7.3;
    ctx->flags = 33;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} Zt5l9D52_ctx_t;

void init_ctx(Zt5l9D52_ctx_t *ctx) {
    ctx->id = 5666;
    ctx->coefficient = 5.2;
    ctx->flags = 76;
}

int compute_67SPanI(int input) {
    int result = input * 22;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

int compute_i47b6w9(int input) {
    int result = input * 8;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

int compute_FB6RvcH(int input) {
    int result = input * 65;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} Mw9lumsb_ctx_t;

void init_ctx(Mw9lumsb_ctx_t *ctx) {
    ctx->id = 2160;
    ctx->coefficient = 0.9;
    ctx->flags = 210;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} EjBgBafN_ctx_t;

void init_ctx(EjBgBafN_ctx_t *ctx) {
    ctx->id = 8237;
    ctx->coefficient = 3.9;
    ctx->flags = 238;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} Ql7YQ7or_ctx_t;

void init_ctx(Ql7YQ7or_ctx_t *ctx) {
    ctx->id = 1358;
    ctx->coefficient = 5.7;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} HqkRZqOq_ctx_t;

void init_ctx(HqkRZqOq_ctx_t *ctx) {
    ctx->id = 4867;
    ctx->coefficient = 3.7;
    ctx->flags = 147;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} O69HeHUJ_ctx_t;

void init_ctx(O69HeHUJ_ctx_t *ctx) {
    ctx->id = 7868;
    ctx->coefficient = 1.0;
    ctx->flags = 188;
}

int compute_9ZSIjzs(int input) {
    int result = input * 68;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

int compute_0UG7ytI(int input) {
    int result = input * 48;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} EJT7cvrd_ctx_t;

void init_ctx(EJT7cvrd_ctx_t *ctx) {
    ctx->id = 8179;
    ctx->coefficient = 4.0;
    ctx->flags = 62;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} 49gZcXhG_ctx_t;

void init_ctx(49gZcXhG_ctx_t *ctx) {
    ctx->id = 4532;
    ctx->coefficient = 8.8;
    ctx->flags = 218;
}

int compute_U1wZSN4(int input) {
    int result = input * 10;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

int compute_n4nSxtm(int input) {
    int result = input * 52;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} zKDc3CgX_ctx_t;

void init_ctx(zKDc3CgX_ctx_t *ctx) {
    ctx->id = 6020;
    ctx->coefficient = 1.6;
    ctx->flags = 196;
}

int compute_XOlNCKP(int input) {
    int result = input * 61;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} Y8eEkTZb_ctx_t;

void init_ctx(Y8eEkTZb_ctx_t *ctx) {
    ctx->id = 2102;
    ctx->coefficient = 2.4;
    ctx->flags = 75;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} RMphGeb4_ctx_t;

void init_ctx(RMphGeb4_ctx_t *ctx) {
    ctx->id = 7117;
    ctx->coefficient = 1.2;
    ctx->flags = 28;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} VuB2TSCE_ctx_t;

void init_ctx(VuB2TSCE_ctx_t *ctx) {
    ctx->id = 7689;
    ctx->coefficient = 6.9;
    ctx->flags = 61;
}

int compute_30AZ4JU(int input) {
    int result = input * 22;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} nzMfISsH_ctx_t;

void init_ctx(nzMfISsH_ctx_t *ctx) {
    ctx->id = 6252;
    ctx->coefficient = 9.9;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} fXBftOvx_ctx_t;

void init_ctx(fXBftOvx_ctx_t *ctx) {
    ctx->id = 5240;
    ctx->coefficient = 8.8;
    ctx->flags = 117;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} Runenu97_ctx_t;

void init_ctx(Runenu97_ctx_t *ctx) {
    ctx->id = 8733;
    ctx->coefficient = 5.6;
    ctx->flags = 6;
}

int compute_GmfYqUx(int input) {
    int result = input * 9;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} aoVxjQ1e_ctx_t;

void init_ctx(aoVxjQ1e_ctx_t *ctx) {
    ctx->id = 6595;
    ctx->coefficient = 4.2;
    ctx->flags = 232;
}

int compute_UfFWa6f(int input) {
    int result = input * 63;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} ifKfCX06_ctx_t;

void init_ctx(ifKfCX06_ctx_t *ctx) {
    ctx->id = 8503;
    ctx->coefficient = 8.3;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} okvfuHQu_ctx_t;

void init_ctx(okvfuHQu_ctx_t *ctx) {
    ctx->id = 1606;
    ctx->coefficient = 5.4;
    ctx->flags = 187;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} pzkvZVz2_ctx_t;

void init_ctx(pzkvZVz2_ctx_t *ctx) {
    ctx->id = 5108;
    ctx->coefficient = 0.3;
    ctx->flags = 45;
}

int compute_NVr3Cqs(int input) {
    int result = input * 57;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

int compute_SUfOiDo(int input) {
    int result = input * 61;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

int compute_tcojnj0(int input) {
    int result = input * 62;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} bxyKk4uQ_ctx_t;

void init_ctx(bxyKk4uQ_ctx_t *ctx) {
    ctx->id = 7374;
    ctx->coefficient = 6.9;
    ctx->flags = 183;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} 0TCQmZDF_ctx_t;

void init_ctx(0TCQmZDF_ctx_t *ctx) {
    ctx->id = 2121;
    ctx->coefficient = 4.1;
    ctx->flags = 11;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} JfBbNfNW_ctx_t;

void init_ctx(JfBbNfNW_ctx_t *ctx) {
    ctx->id = 8759;
    ctx->coefficient = 0.5;
    ctx->flags = 235;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} S90sIzBu_ctx_t;

void init_ctx(S90sIzBu_ctx_t *ctx) {
    ctx->id = 9869;
    ctx->coefficient = 8.8;
    ctx->flags = 18;
}

int compute_OmQnZ9y(int input) {
    int result = input * 69;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} kjw95ykS_ctx_t;

void init_ctx(kjw95ykS_ctx_t *ctx) {
    ctx->id = 3266;
    ctx->coefficient = 2.6;
    ctx->flags = 115;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} DAHOJ8eR_ctx_t;

void init_ctx(DAHOJ8eR_ctx_t *ctx) {
    ctx->id = 9916;
    ctx->coefficient = 6.2;
    ctx->flags = 246;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} rBs5rGq5_ctx_t;

void init_ctx(rBs5rGq5_ctx_t *ctx) {
    ctx->id = 7033;
    ctx->coefficient = 1.0;
    ctx->flags = 222;
}

int compute_5LxOc4N(int input) {
    int result = input * 57;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} BMCOakYz_ctx_t;

void init_ctx(BMCOakYz_ctx_t *ctx) {
    ctx->id = 4970;
    ctx->coefficient = 4.1;
    ctx->flags = 172;
}

int compute_ug6x92U(int input) {
    int result = input * 12;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} Y7lvu4gT_ctx_t;

void init_ctx(Y7lvu4gT_ctx_t *ctx) {
    ctx->id = 2382;
    ctx->coefficient = 6.7;
    ctx->flags = 190;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} vezgYJJh_ctx_t;

void init_ctx(vezgYJJh_ctx_t *ctx) {
    ctx->id = 1649;
    ctx->coefficient = 5.4;
    ctx->flags = 120;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} ak3mCdkJ_ctx_t;

void init_ctx(ak3mCdkJ_ctx_t *ctx) {
    ctx->id = 3686;
    ctx->coefficient = 7.3;
    ctx->flags = 28;
}

int compute_d2Uxtt6(int input) {
    int result = input * 38;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} YKRLuJzo_ctx_t;

void init_ctx(YKRLuJzo_ctx_t *ctx) {
    ctx->id = 8642;
    ctx->coefficient = 3.9;
    ctx->flags = 89;
}

int compute_jQPx4Jk(int input) {
    int result = input * 17;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

int compute_FJ2QXtT(int input) {
    int result = input * 46;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} X3mNgupy_ctx_t;

void init_ctx(X3mNgupy_ctx_t *ctx) {
    ctx->id = 1490;
    ctx->coefficient = 1.9;
    ctx->flags = 13;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} upU9B4hv_ctx_t;

void init_ctx(upU9B4hv_ctx_t *ctx) {
    ctx->id = 1164;
    ctx->coefficient = 2.6;
    ctx->flags = 112;
}

int compute_aHTu2FE(int input) {
    int result = input * 16;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} S40hlFcx_ctx_t;

void init_ctx(S40hlFcx_ctx_t *ctx) {
    ctx->id = 7490;
    ctx->coefficient = 9.5;
    ctx->flags = 203;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} AxjRlcKQ_ctx_t;

void init_ctx(AxjRlcKQ_ctx_t *ctx) {
    ctx->id = 4682;
    ctx->coefficient = 8.7;
    ctx->flags = 17;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} 89fMmHo1_ctx_t;

void init_ctx(89fMmHo1_ctx_t *ctx) {
    ctx->id = 4395;
    ctx->coefficient = 8.8;
    ctx->flags = 9;
}

int compute_vBWBexU(int input) {
    int result = input * 25;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} jnjvRBJV_ctx_t;

void init_ctx(jnjvRBJV_ctx_t *ctx) {
    ctx->id = 5046;
    ctx->coefficient = 8.5;
    ctx->flags = 114;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} N8hTFGJy_ctx_t;

void init_ctx(N8hTFGJy_ctx_t *ctx) {
    ctx->id = 7110;
    ctx->coefficient = 3.5;
    ctx->flags = 184;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} B7LjNBmr_ctx_t;

void init_ctx(B7LjNBmr_ctx_t *ctx) {
    ctx->id = 2103;
    ctx->coefficient = 7.8;
    ctx->flags = 239;
}

int compute_46GffW6(int input) {
    int result = input * 18;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} Fv3dg5r3_ctx_t;

void init_ctx(Fv3dg5r3_ctx_t *ctx) {
    ctx->id = 8254;
    ctx->coefficient = 8.4;
    ctx->flags = 130;
}

int compute_Cz5OaKp(int input) {
    int result = input * 12;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} eBx0U1Yx_ctx_t;

void init_ctx(eBx0U1Yx_ctx_t *ctx) {
    ctx->id = 3047;
    ctx->coefficient = 9.8;
    ctx->flags = 16;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} 3gES2tdO_ctx_t;

void init_ctx(3gES2tdO_ctx_t *ctx) {
    ctx->id = 1518;
    ctx->coefficient = 10.0;
    ctx->flags = 83;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} iUS3dFUb_ctx_t;

void init_ctx(iUS3dFUb_ctx_t *ctx) {
    ctx->id = 2466;
    ctx->coefficient = 0.2;
    ctx->flags = 182;
}

int compute_8NeIWaZ(int input) {
    int result = input * 44;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} wr2iCdlQ_ctx_t;

void init_ctx(wr2iCdlQ_ctx_t *ctx) {
    ctx->id = 2451;
    ctx->coefficient = 0.2;
    ctx->flags = 76;
}

int compute_aUunc5T(int input) {
    int result = input * 39;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} wyf3Q1ZB_ctx_t;

void init_ctx(wyf3Q1ZB_ctx_t *ctx) {
    ctx->id = 4970;
    ctx->coefficient = 9.2;
    ctx->flags = 64;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} 0tdEGoiT_ctx_t;

void init_ctx(0tdEGoiT_ctx_t *ctx) {
    ctx->id = 8927;
    ctx->coefficient = 5.1;
    ctx->flags = 123;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} 1o4gyQ9d_ctx_t;

void init_ctx(1o4gyQ9d_ctx_t *ctx) {
    ctx->id = 7542;
    ctx->coefficient = 8.0;
    ctx->flags = 17;
}

int compute_qU1TrI7(int input) {
    int result = input * 24;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} FkrAmGIQ_ctx_t;

void init_ctx(FkrAmGIQ_ctx_t *ctx) {
    ctx->id = 7238;
    ctx->coefficient = 9.5;
    ctx->flags = 160;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} aYhch1CS_ctx_t;

void init_ctx(aYhch1CS_ctx_t *ctx) {
    ctx->id = 6490;
    ctx->coefficient = 1.4;
    ctx->flags = 170;
}

int compute_mE4omzV(int input) {
    int result = input * 53;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} lOAV1qlG_ctx_t;

void init_ctx(lOAV1qlG_ctx_t *ctx) {
    ctx->id = 4682;
    ctx->coefficient = 1.4;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} nbCf4ggJ_ctx_t;

void init_ctx(nbCf4ggJ_ctx_t *ctx) {
    ctx->id = 8519;
    ctx->coefficient = 7.7;
    ctx->flags = 7;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} ZDFpgD3w_ctx_t;

void init_ctx(ZDFpgD3w_ctx_t *ctx) {
    ctx->id = 5531;
    ctx->coefficient = 6.5;
    ctx->flags = 254;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} hGT5U7oR_ctx_t;

void init_ctx(hGT5U7oR_ctx_t *ctx) {
    ctx->id = 7813;
    ctx->coefficient = 2.8;
    ctx->flags = 26;
}

int compute_wF9nLjL(int input) {
    int result = input * 9;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} 7KXrA3Ei_ctx_t;

void init_ctx(7KXrA3Ei_ctx_t *ctx) {
    ctx->id = 7586;
    ctx->coefficient = 9.4;
    ctx->flags = 141;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} Q3sxQLIc_ctx_t;

void init_ctx(Q3sxQLIc_ctx_t *ctx) {
    ctx->id = 8370;
    ctx->coefficient = 5.0;
    ctx->flags = 37;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} kRgRslDN_ctx_t;

void init_ctx(kRgRslDN_ctx_t *ctx) {
    ctx->id = 1847;
    ctx->coefficient = 3.8;
    ctx->flags = 185;
}

int compute_VM03JAj(int input) {
    int result = input * 17;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} xhylnGnr_ctx_t;

void init_ctx(xhylnGnr_ctx_t *ctx) {
    ctx->id = 2608;
    ctx->coefficient = 6.9;
    ctx->flags = 195;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} ApoCD5PW_ctx_t;

void init_ctx(ApoCD5PW_ctx_t *ctx) {
    ctx->id = 8192;
    ctx->coefficient = 8.5;
    ctx->flags = 238;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} ISVADh1C_ctx_t;

void init_ctx(ISVADh1C_ctx_t *ctx) {
    ctx->id = 1154;
    ctx->coefficient = 5.9;
    ctx->flags = 90;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} FDliJhdG_ctx_t;

void init_ctx(FDliJhdG_ctx_t *ctx) {
    ctx->id = 7023;
    ctx->coefficient = 6.8;
    ctx->flags = 137;
}

int compute_xd15f8e(int input) {
    int result = input * 23;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

int compute_mWr1iSp(int input) {
    int result = input * 31;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} wkDov4C4_ctx_t;

void init_ctx(wkDov4C4_ctx_t *ctx) {
    ctx->id = 3323;
    ctx->coefficient = 6.3;
    ctx->flags = 193;
}

int compute_vA7Bn8Y(int input) {
    int result = input * 20;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} B6QhWS7l_ctx_t;

void init_ctx(B6QhWS7l_ctx_t *ctx) {
    ctx->id = 2793;
    ctx->coefficient = 9.3;
    ctx->flags = 78;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} rSCvXilx_ctx_t;

void init_ctx(rSCvXilx_ctx_t *ctx) {
    ctx->id = 7225;
    ctx->coefficient = 4.7;
    ctx->flags = 144;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} umGWNpe4_ctx_t;

void init_ctx(umGWNpe4_ctx_t *ctx) {
    ctx->id = 9728;
    ctx->coefficient = 2.9;
    ctx->flags = 214;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} JPYPr4uX_ctx_t;

void init_ctx(JPYPr4uX_ctx_t *ctx) {
    ctx->id = 9850;
    ctx->coefficient = 9.3;
    ctx->flags = 120;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} OC6e8ckz_ctx_t;

void init_ctx(OC6e8ckz_ctx_t *ctx) {
    ctx->id = 6907;
    ctx->coefficient = 4.8;
    ctx->flags = 94;
}

int compute_rMKkm81(int input) {
    int result = input * 16;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} vphuuBxl_ctx_t;

void init_ctx(vphuuBxl_ctx_t *ctx) {
    ctx->id = 3584;
    ctx->coefficient = 5.8;
    ctx->flags = 116;
}

int compute_oZqjisY(int input) {
    int result = input * 2;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} UwCQUfjd_ctx_t;

void init_ctx(UwCQUfjd_ctx_t *ctx) {
    ctx->id = 4791;
    ctx->coefficient = 2.1;
    ctx->flags = 155;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} RyRErdXQ_ctx_t;

void init_ctx(RyRErdXQ_ctx_t *ctx) {
    ctx->id = 7023;
    ctx->coefficient = 3.3;
    ctx->flags = 51;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} 4OprinRo_ctx_t;

void init_ctx(4OprinRo_ctx_t *ctx) {
    ctx->id = 7930;
    ctx->coefficient = 6.3;
    ctx->flags = 100;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} HBnhRcUc_ctx_t;

void init_ctx(HBnhRcUc_ctx_t *ctx) {
    ctx->id = 8655;
    ctx->coefficient = 8.8;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} VAnJQNvz_ctx_t;

void init_ctx(VAnJQNvz_ctx_t *ctx) {
    ctx->id = 1976;
    ctx->coefficient = 3.3;
    ctx->flags = 219;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} IkVkXPPW_ctx_t;

void init_ctx(IkVkXPPW_ctx_t *ctx) {
    ctx->id = 4542;
    ctx->coefficient = 8.7;
    ctx->flags = 84;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} zfazrj9D_ctx_t;

void init_ctx(zfazrj9D_ctx_t *ctx) {
    ctx->id = 5658;
    ctx->coefficient = 9.5;
    ctx->flags = 230;
}

int compute_PZTWt9p(int input) {
    int result = input * 53;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} uYjgzc5E_ctx_t;

void init_ctx(uYjgzc5E_ctx_t *ctx) {
    ctx->id = 6133;
    ctx->coefficient = 7.0;
    ctx->flags = 55;
}

int compute_95yiI9p(int input) {
    int result = input * 55;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} YcED6nEG_ctx_t;

void init_ctx(YcED6nEG_ctx_t *ctx) {
    ctx->id = 8849;
    ctx->coefficient = 8.1;
    ctx->flags = 10;
}

int compute_Z59oKpO(int input) {
    int result = input * 51;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

int compute_AmZt7BY(int input) {
    int result = input * 42;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} BGRcv7sK_ctx_t;

void init_ctx(BGRcv7sK_ctx_t *ctx) {
    ctx->id = 4517;
    ctx->coefficient = 7.7;
    ctx->flags = 180;
}

int compute_HRqhByk(int input) {
    int result = input * 3;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} FSwpmtUH_ctx_t;

void init_ctx(FSwpmtUH_ctx_t *ctx) {
    ctx->id = 8396;
    ctx->coefficient = 1.7;
    ctx->flags = 116;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} SVpuZlaC_ctx_t;

void init_ctx(SVpuZlaC_ctx_t *ctx) {
    ctx->id = 4807;
    ctx->coefficient = 5.9;
    ctx->flags = 86;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} wutfOWc3_ctx_t;

void init_ctx(wutfOWc3_ctx_t *ctx) {
    ctx->id = 2230;
    ctx->coefficient = 7.3;
    ctx->flags = 44;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} in9j6zoX_ctx_t;

void init_ctx(in9j6zoX_ctx_t *ctx) {
    ctx->id = 4645;
    ctx->coefficient = 7.0;
    ctx->flags = 196;
}

int compute_9ERKpNb(int input) {
    int result = input * 17;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} KIiFAHqy_ctx_t;

void init_ctx(KIiFAHqy_ctx_t *ctx) {
    ctx->id = 2720;
    ctx->coefficient = 0.1;
    ctx->flags = 109;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} XKr8yDdW_ctx_t;

void init_ctx(XKr8yDdW_ctx_t *ctx) {
    ctx->id = 5633;
    ctx->coefficient = 9.8;
    ctx->flags = 188;
}

int compute_3Xv3nxw(int input) {
    int result = input * 3;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} BI2N6o8w_ctx_t;

void init_ctx(BI2N6o8w_ctx_t *ctx) {
    ctx->id = 3485;
    ctx->coefficient = 4.6;
    ctx->flags = 219;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} jiyaGN5Y_ctx_t;

void init_ctx(jiyaGN5Y_ctx_t *ctx) {
    ctx->id = 8367;
    ctx->coefficient = 3.4;
    ctx->flags = 232;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} 4GrcU0Lo_ctx_t;

void init_ctx(4GrcU0Lo_ctx_t *ctx) {
    ctx->id = 9623;
    ctx->coefficient = 6.9;
    ctx->flags = 105;
}

int compute_dW39FlS(int input) {
    int result = input * 4;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} Z2xZYMxs_ctx_t;

void init_ctx(Z2xZYMxs_ctx_t *ctx) {
    ctx->id = 2561;
    ctx->coefficient = 7.1;
    ctx->flags = 139;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} cLcEeSnO_ctx_t;

void init_ctx(cLcEeSnO_ctx_t *ctx) {
    ctx->id = 6321;
    ctx->coefficient = 5.0;
    ctx->flags = 218;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} ctO7WcNG_ctx_t;

void init_ctx(ctO7WcNG_ctx_t *ctx) {
    ctx->id = 6879;
    ctx->coefficient = 0.7;
    ctx->flags = 132;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} oXC87KUl_ctx_t;

void init_ctx(oXC87KUl_ctx_t *ctx) {
    ctx->id = 3463;
    ctx->coefficient = 9.8;
    ctx->flags = 190;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} etF3a7wO_ctx_t;

void init_ctx(etF3a7wO_ctx_t *ctx) {
    ctx->id = 9504;
    ctx->coefficient = 9.8;
    ctx->flags = 237;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} U0dn4THu_ctx_t;

void init_ctx(U0dn4THu_ctx_t *ctx) {
    ctx->id = 2460;
    ctx->coefficient = 0.2;
    ctx->flags = 35;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} lFSs76J3_ctx_t;

void init_ctx(lFSs76J3_ctx_t *ctx) {
    ctx->id = 4927;
    ctx->coefficient = 0.4;
    ctx->flags = 194;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} kmYowsif_ctx_t;

void init_ctx(kmYowsif_ctx_t *ctx) {
    ctx->id = 2899;
    ctx->coefficient = 10.0;
    ctx->flags = 1;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} eWXnsCd7_ctx_t;

void init_ctx(eWXnsCd7_ctx_t *ctx) {
    ctx->id = 7730;
    ctx->coefficient = 4.9;
    ctx->flags = 70;
}

int compute_HFVMtzX(int input) {
    int result = input * 2;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} mze0xlSl_ctx_t;

void init_ctx(mze0xlSl_ctx_t *ctx) {
    ctx->id = 2500;
    ctx->coefficient = 3.2;
    ctx->flags = 99;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} mMp0Ru7u_ctx_t;

void init_ctx(mMp0Ru7u_ctx_t *ctx) {
    ctx->id = 3145;
    ctx->coefficient = 9.7;
    ctx->flags = 192;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} oHtdePmH_ctx_t;

void init_ctx(oHtdePmH_ctx_t *ctx) {
    ctx->id = 3803;
    ctx->coefficient = 9.4;
    ctx->flags = 179;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} EVqNaEqr_ctx_t;

void init_ctx(EVqNaEqr_ctx_t *ctx) {
    ctx->id = 2320;
    ctx->coefficient = 2.1;
    ctx->flags = 212;
}

int compute_wHb9JIk(int input) {
    int result = input * 10;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} yIXAEGo0_ctx_t;

void init_ctx(yIXAEGo0_ctx_t *ctx) {
    ctx->id = 1615;
    ctx->coefficient = 4.6;
    ctx->flags = 184;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} AGlqmMTJ_ctx_t;

void init_ctx(AGlqmMTJ_ctx_t *ctx) {
    ctx->id = 2220;
    ctx->coefficient = 5.9;
    ctx->flags = 235;
}

int compute_ZNiMzy9(int input) {
    int result = input * 65;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} kCidcGMJ_ctx_t;

void init_ctx(kCidcGMJ_ctx_t *ctx) {
    ctx->id = 9163;
    ctx->coefficient = 9.2;
    ctx->flags = 11;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} laTTiHNB_ctx_t;

void init_ctx(laTTiHNB_ctx_t *ctx) {
    ctx->id = 2875;
    ctx->coefficient = 6.0;
    ctx->flags = 56;
}

int compute_LBrYQ8C(int input) {
    int result = input * 26;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} BBPvKM1Z_ctx_t;

void init_ctx(BBPvKM1Z_ctx_t *ctx) {
    ctx->id = 9032;
    ctx->coefficient = 5.6;
    ctx->flags = 75;
}

int compute_Td3l4dv(int input) {
    int result = input * 27;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} pGkQnzbo_ctx_t;

void init_ctx(pGkQnzbo_ctx_t *ctx) {
    ctx->id = 5217;
    ctx->coefficient = 1.9;
    ctx->flags = 250;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} 7skCcrOu_ctx_t;

void init_ctx(7skCcrOu_ctx_t *ctx) {
    ctx->id = 8488;
    ctx->coefficient = 4.8;
    ctx->flags = 22;
}

int compute_MbNYHCT(int input) {
    int result = input * 63;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

int compute_Nq1Fi3D(int input) {
    int result = input * 44;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} sPQkIUQK_ctx_t;

void init_ctx(sPQkIUQK_ctx_t *ctx) {
    ctx->id = 1745;
    ctx->coefficient = 1.2;
    ctx->flags = 243;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} LQ98dU5v_ctx_t;

void init_ctx(LQ98dU5v_ctx_t *ctx) {
    ctx->id = 9824;
    ctx->coefficient = 3.3;
    ctx->flags = 25;
}

int compute_jzPHe83(int input) {
    int result = input * 25;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

int compute_UcVesnP(int input) {
    int result = input * 38;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

int compute_xlb3JWj(int input) {
    int result = input * 57;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} xgq6oMyo_ctx_t;

void init_ctx(xgq6oMyo_ctx_t *ctx) {
    ctx->id = 8050;
    ctx->coefficient = 6.2;
    ctx->flags = 242;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} smvRmUfs_ctx_t;

void init_ctx(smvRmUfs_ctx_t *ctx) {
    ctx->id = 8546;
    ctx->coefficient = 6.8;
    ctx->flags = 143;
}

int compute_f1FdUfV(int input) {
    int result = input * 67;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} yzKFaf6V_ctx_t;

void init_ctx(yzKFaf6V_ctx_t *ctx) {
    ctx->id = 5332;
    ctx->coefficient = 4.9;
    ctx->flags = 210;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} tq6ZyqSI_ctx_t;

void init_ctx(tq6ZyqSI_ctx_t *ctx) {
    ctx->id = 3055;
    ctx->coefficient = 7.4;
    ctx->flags = 247;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} TMmtlQRl_ctx_t;

void init_ctx(TMmtlQRl_ctx_t *ctx) {
    ctx->id = 6354;
    ctx->coefficient = 8.6;
    ctx->flags = 138;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} twxvq5xt_ctx_t;

void init_ctx(twxvq5xt_ctx_t *ctx) {
    ctx->id = 3178;
    ctx->coefficient = 8.4;
    ctx->flags = 29;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} ylZhmatj_ctx_t;

void init_ctx(ylZhmatj_ctx_t *ctx) {
    ctx->id = 7578;
    ctx->coefficient = 1.4;
    ctx->flags = 230;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} mDyXk7Ku_ctx_t;

void init_ctx(mDyXk7Ku_ctx_t *ctx) {
    ctx->id = 3751;
    ctx->coefficient = 0.2;
    ctx->flags = 87;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} gbo8XNU7_ctx_t;

void init_ctx(gbo8XNU7_ctx_t *ctx) {
    ctx->id = 7911;
    ctx->coefficient = 4.2;
    ctx->flags = 41;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} UY6fwfCv_ctx_t;

void init_ctx(UY6fwfCv_ctx_t *ctx) {
    ctx->id = 6951;
    ctx->coefficient = 1.9;
    ctx->flags = 52;
}

int compute_UJZevUx(int input) {
    int result = input * 15;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

int compute_BYi01lB(int input) {
    int result = input * 44;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

int compute_EYpKDtr(int input) {
    int result = input * 55;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} 4JQfBcPg_ctx_t;

void init_ctx(4JQfBcPg_ctx_t *ctx) {
    ctx->id = 9785;
    ctx->coefficient = 7.9;
    ctx->flags = 228;
}

int compute_4X9nyOf(int input) {
    int result = input * 34;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} xgKBNS3c_ctx_t;

void init_ctx(xgKBNS3c_ctx_t *ctx) {
    ctx->id = 2955;
    ctx->coefficient = 9.9;
    ctx->flags = 46;
}

int compute_QZbACDe(int input) {
    int result = input * 63;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

int compute_cD3nCoO(int input) {
    int result = input * 60;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

int compute_H1R2FOM(int input) {
    int result = input * 26;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} CqRVFOnB_ctx_t;

void init_ctx(CqRVFOnB_ctx_t *ctx) {
    ctx->id = 3737;
    ctx->coefficient = 3.3;
    ctx->flags = 27;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} S5pgjD1k_ctx_t;

void init_ctx(S5pgjD1k_ctx_t *ctx) {
    ctx->id = 5883;
    ctx->coefficient = 1.7;
    ctx->flags = 28;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} AQyZtj2n_ctx_t;

void init_ctx(AQyZtj2n_ctx_t *ctx) {
    ctx->id = 1112;
    ctx->coefficient = 10.0;
    ctx->flags = 92;
}

int compute_Z7P7WXV(int input) {
    int result = input * 31;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} eMX3smKJ_ctx_t;

void init_ctx(eMX3smKJ_ctx_t *ctx) {
    ctx->id = 8468;
    ctx->coefficient = 7.6;
    ctx->flags = 193;
}

int compute_hQk3jo8(int input) {
    int result = input * 3;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

int compute_sixe1tf(int input) {
    int result = input * 23;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

int compute_kFipvT3(int input) {
    int result = input * 48;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} UzK7z6ET_ctx_t;

void init_ctx(UzK7z6ET_ctx_t *ctx) {
    ctx->id = 2558;
    ctx->coefficient = 0.9;
    ctx->flags = 18;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} 5ApooOcs_ctx_t;

void init_ctx(5ApooOcs_ctx_t *ctx) {
    ctx->id = 8021;
    ctx->coefficient = 5.3;
    ctx->flags = 229;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} K8TarltH_ctx_t;

void init_ctx(K8TarltH_ctx_t *ctx) {
    ctx->id = 6673;
    ctx->coefficient = 9.7;
    ctx->flags = 90;
}

int compute_803E9xG(int input) {
    int result = input * 54;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} UhRWwbgA_ctx_t;

void init_ctx(UhRWwbgA_ctx_t *ctx) {
    ctx->id = 1358;
    ctx->coefficient = 4.5;
    ctx->flags = 217;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} ZV03Kb2r_ctx_t;

void init_ctx(ZV03Kb2r_ctx_t *ctx) {
    ctx->id = 2744;
    ctx->coefficient = 4.0;
    ctx->flags = 121;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} 22RYYJEN_ctx_t;

void init_ctx(22RYYJEN_ctx_t *ctx) {
    ctx->id = 5853;
    ctx->coefficient = 9.5;
    ctx->flags = 232;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} haAbqi6y_ctx_t;

void init_ctx(haAbqi6y_ctx_t *ctx) {
    ctx->id = 9328;
    ctx->coefficient = 7.4;
    ctx->flags = 123;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} LsZ6K0Sy_ctx_t;

void init_ctx(LsZ6K0Sy_ctx_t *ctx) {
    ctx->id = 9208;
    ctx->coefficient = 3.3;
    ctx->flags = 154;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} nRUDc1DX_ctx_t;

void init_ctx(nRUDc1DX_ctx_t *ctx) {
    ctx->id = 3925;
    ctx->coefficient = 0.7;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} cLIWtypL_ctx_t;

void init_ctx(cLIWtypL_ctx_t *ctx) {
    ctx->id = 1188;
    ctx->coefficient = 1.7;
    ctx->flags = 32;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} 3HimgRqP_ctx_t;

void init_ctx(3HimgRqP_ctx_t *ctx) {
    ctx->id = 3243;
    ctx->coefficient = 8.0;
    ctx->flags = 82;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} 3IpXJw14_ctx_t;

void init_ctx(3IpXJw14_ctx_t *ctx) {
    ctx->id = 9396;
    ctx->coefficient = 3.3;
    ctx->flags = 183;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} jlJcFyld_ctx_t;

void init_ctx(jlJcFyld_ctx_t *ctx) {
    ctx->id = 2982;
    ctx->coefficient = 3.2;
    ctx->flags = 58;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} g1eF0QvJ_ctx_t;

void init_ctx(g1eF0QvJ_ctx_t *ctx) {
    ctx->id = 1594;
    ctx->coefficient = 3.6;
    ctx->flags = 10;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} tO9XrKId_ctx_t;

void init_ctx(tO9XrKId_ctx_t *ctx) {
    ctx->id = 5851;
    ctx->coefficient = 3.3;
    ctx->flags = 184;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} xrfW7Adl_ctx_t;

void init_ctx(xrfW7Adl_ctx_t *ctx) {
    ctx->id = 5718;
    ctx->coefficient = 2.2;
    ctx->flags = 202;
}

int compute_K6WM7AC(int input) {
    int result = input * 55;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

int compute_aRzDPXn(int input) {
    int result = input * 4;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} ujp6oHgX_ctx_t;

void init_ctx(ujp6oHgX_ctx_t *ctx) {
    ctx->id = 9879;
    ctx->coefficient = 5.5;
    ctx->flags = 131;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} X2BWYmJi_ctx_t;

void init_ctx(X2BWYmJi_ctx_t *ctx) {
    ctx->id = 8742;
    ctx->coefficient = 9.0;
    ctx->flags = 60;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} Is0JibTv_ctx_t;

void init_ctx(Is0JibTv_ctx_t *ctx) {
    ctx->id = 2237;
    ctx->coefficient = 8.9;
    ctx->flags = 82;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} BrkgczbG_ctx_t;

void init_ctx(BrkgczbG_ctx_t *ctx) {
    ctx->id = 4386;
    ctx->coefficient = 6.2;
    ctx->flags = 171;
}

int compute_NL2suNN(int input) {
    int result = input * 25;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

int compute_7t4I68R(int input) {
    int result = input * 37;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} 6H0yPXpd_ctx_t;

void init_ctx(6H0yPXpd_ctx_t *ctx) {
    ctx->id = 4024;
    ctx->coefficient = 3.4;
    ctx->flags = 158;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} rleWlUjQ_ctx_t;

void init_ctx(rleWlUjQ_ctx_t *ctx) {
    ctx->id = 1866;
    ctx->coefficient = 4.9;
    ctx->flags = 96;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} 0YeAJgng_ctx_t;

void init_ctx(0YeAJgng_ctx_t *ctx) {
    ctx->id = 6924;
    ctx->coefficient = 3.5;
    ctx->flags = 133;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} gdlyrfnb_ctx_t;

void init_ctx(gdlyrfnb_ctx_t *ctx) {
    ctx->id = 1342;
    ctx->coefficient = 8.1;
    ctx->flags = 80;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} g3hrpVrK_ctx_t;

void init_ctx(g3hrpVrK_ctx_t *ctx) {
    ctx->id = 4075;
    ctx->coefficient = 3.2;
    ctx->flags = 217;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} jeOARIbs_ctx_t;

void init_ctx(jeOARIbs_ctx_t *ctx) {
    ctx->id = 7321;
    ctx->coefficient = 4.3;
    ctx->flags = 32;
}

int compute_3BBfTU0(int input) {
    int result = input * 63;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} UyFiXMoE_ctx_t;

void init_ctx(UyFiXMoE_ctx_t *ctx) {
    ctx->id = 2051;
    ctx->coefficient = 3.4;
    ctx->flags = 189;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} HK5AxUE1_ctx_t;

void init_ctx(HK5AxUE1_ctx_t *ctx) {
    ctx->id = 2797;
    ctx->coefficient = 2.1;
    ctx->flags = 113;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} TgAhDqq0_ctx_t;

void init_ctx(TgAhDqq0_ctx_t *ctx) {
    ctx->id = 9650;
    ctx->coefficient = 1.6;
    ctx->flags = 91;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} P4pFhO15_ctx_t;

void init_ctx(P4pFhO15_ctx_t *ctx) {
    ctx->id = 4962;
    ctx->coefficient = 0.4;
    ctx->flags = 31;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} vs5xXlTc_ctx_t;

void init_ctx(vs5xXlTc_ctx_t *ctx) {
    ctx->id = 9858;
    ctx->coefficient = 4.0;
    ctx->flags = 214;
}

int compute_aK0CntT(int input) {
    int result = input * 29;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

int compute_3nRtwG5(int input) {
    int result = input * 7;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} 6OeZtom9_ctx_t;

void init_ctx(6OeZtom9_ctx_t *ctx) {
    ctx->id = 3952;
    ctx->coefficient = 8.1;
    ctx->flags = 109;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} q34izVQx_ctx_t;

void init_ctx(q34izVQx_ctx_t *ctx) {
    ctx->id = 2160;
    ctx->coefficient = 0.3;
    ctx->flags = 25;
}

int compute_8zqE3ue(int input) {
    int result = input * 35;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} nsP3I6H0_ctx_t;

void init_ctx(nsP3I6H0_ctx_t *ctx) {
    ctx->id = 7163;
    ctx->coefficient = 2.2;
    ctx->flags = 89;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} fo3gf5ur_ctx_t;

void init_ctx(fo3gf5ur_ctx_t *ctx) {
    ctx->id = 4408;
    ctx->coefficient = 9.7;
    ctx->flags = 210;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} FF3znO6r_ctx_t;

void init_ctx(FF3znO6r_ctx_t *ctx) {
    ctx->id = 2284;
    ctx->coefficient = 6.9;
    ctx->flags = 67;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} Men7G447_ctx_t;

void init_ctx(Men7G447_ctx_t *ctx) {
    ctx->id = 5207;
    ctx->coefficient = 6.6;
    ctx->flags = 212;
}

int compute_sVLJN28(int input) {
    int result = input * 54;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} l5qQm1lV_ctx_t;

void init_ctx(l5qQm1lV_ctx_t *ctx) {
    ctx->id = 1172;
    ctx->coefficient = 9.2;
    ctx->flags = 165;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} JPmX34gW_ctx_t;

void init_ctx(JPmX34gW_ctx_t *ctx) {
    ctx->id = 6383;
    ctx->coefficient = 8.2;
    ctx->flags = 28;
}

int compute_oQnARyf(int input) {
    int result = input * 10;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

int compute_rYsLf8c(int input) {
    int result = input * 65;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} 04IMwS0r_ctx_t;

void init_ctx(04IMwS0r_ctx_t *ctx) {
    ctx->id = 8820;
    ctx->coefficient = 3.9;
    ctx->flags = 158;
}

int compute_S0nQzFU(int input) {
    int result = input * 24;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} iF7xl7Or_ctx_t;

void init_ctx(iF7xl7Or_ctx_t *ctx) {
    ctx->id = 5371;
    ctx->coefficient = 0.9;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} P2LKQ8a0_ctx_t;

void init_ctx(P2LKQ8a0_ctx_t *ctx) {
    ctx->id = 4850;
    ctx->coefficient = 1.9;
    ctx->flags = 151;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} 6kyp9EnZ_ctx_t;

void init_ctx(6kyp9EnZ_ctx_t *ctx) {
    ctx->id = 1110;
    ctx->coefficient = 4.0;
    ctx->flags = 177;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} 3rQnCg2D_ctx_t;

void init_ctx(3rQnCg2D_ctx_t *ctx) {
    ctx->id = 3256;
    ctx->coefficient = 6.6;
    ctx->flags = 92;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} hzEaKfHL_ctx_t;

void init_ctx(hzEaKfHL_ctx_t *ctx) {
    ctx->id = 6773;
    ctx->coefficient = 9.6;
    ctx->flags = 24;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} 5SX0NSUM_ctx_t;

void init_ctx(5SX0NSUM_ctx_t *ctx) {
    ctx->id = 7263;
    ctx->coefficient = 0.9;
    ctx->flags = 224;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} u8iCF4DD_ctx_t;

void init_ctx(u8iCF4DD_ctx_t *ctx) {
    ctx->id = 4226;
    ctx->coefficient = 2.9;
    ctx->flags = 55;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} IEHs2gTA_ctx_t;

void init_ctx(IEHs2gTA_ctx_t *ctx) {
    ctx->id = 6492;
    ctx->coefficient = 7.0;
    ctx->flags = 39;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} lVGHfnPB_ctx_t;

void init_ctx(lVGHfnPB_ctx_t *ctx) {
    ctx->id = 3536;
    ctx->coefficient = 0.7;
    ctx->flags = 119;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} NnwLqXA8_ctx_t;

void init_ctx(NnwLqXA8_ctx_t *ctx) {
    ctx->id = 6044;
    ctx->coefficient = 1.1;
    ctx->flags = 249;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} v4AV14cw_ctx_t;

void init_ctx(v4AV14cw_ctx_t *ctx) {
    ctx->id = 2124;
    ctx->coefficient = 6.7;
    ctx->flags = 95;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} KfVhWE25_ctx_t;

void init_ctx(KfVhWE25_ctx_t *ctx) {
    ctx->id = 7118;
    ctx->coefficient = 1.5;
    ctx->flags = 235;
}

int compute_rEqCLy7(int input) {
    int result = input * 46;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} TSZaf0pw_ctx_t;

void init_ctx(TSZaf0pw_ctx_t *ctx) {
    ctx->id = 9275;
    ctx->coefficient = 2.7;
    ctx->flags = 104;
}

int compute_upuM9mM(int input) {
    int result = input * 65;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

int compute_J0mcFqr(int input) {
    int result = input * 47;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

int compute_cmJ56oB(int input) {
    int result = input * 61;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} GHwrQ1KO_ctx_t;

void init_ctx(GHwrQ1KO_ctx_t *ctx) {
    ctx->id = 5072;
    ctx->coefficient = 6.3;
    ctx->flags = 134;
}

int compute_Br1zAhQ(int input) {
    int result = input * 59;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} NSQEo26P_ctx_t;

void init_ctx(NSQEo26P_ctx_t *ctx) {
    ctx->id = 8575;
    ctx->coefficient = 4.4;
    ctx->flags = 250;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} 2TZgJp10_ctx_t;

void init_ctx(2TZgJp10_ctx_t *ctx) {
    ctx->id = 7523;
    ctx->coefficient = 8.0;
    ctx->flags = 248;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} qB6cjt5W_ctx_t;

void init_ctx(qB6cjt5W_ctx_t *ctx) {
    ctx->id = 4995;
    ctx->coefficient = 1.3;
    ctx->flags = 24;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} oBiupNJD_ctx_t;

void init_ctx(oBiupNJD_ctx_t *ctx) {
    ctx->id = 4326;
    ctx->coefficient = 9.2;
    ctx->flags = 120;
}

int compute_g42KY6i(int input) {
    int result = input * 49;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

int compute_YuzKalQ(int input) {
    int result = input * 15;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

int compute_J8oHkH6(int input) {
    int result = input * 19;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} QF4PvAUW_ctx_t;

void init_ctx(QF4PvAUW_ctx_t *ctx) {
    ctx->id = 5083;
    ctx->coefficient = 6.1;
    ctx->flags = 251;
}

int compute_AsElLOf(int input) {
    int result = input * 66;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

