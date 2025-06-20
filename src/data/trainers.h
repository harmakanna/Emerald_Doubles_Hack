//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/trainers.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/trainers.h' to remove #line markers.
//

#line 1 "src/data/trainers.party"

#line 76
    [TRAINER_NONE] =
    {
#line 78
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 79
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 81
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 82
        .doubleBattle = FALSE,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 84
    [TRAINER_SAWYER_1] =
    {
#line 85
        .trainerName = _("SAWYER"),
#line 86
        .trainerClass = TRAINER_CLASS_HIKER,
#line 87
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 89
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 90
        .doubleBattle = TRUE,
#line 91
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 93
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 95
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 94
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 97
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 99
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 98
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 101
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 103
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 102
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 105
    [TRAINER_GRUNT_AQUA_HIDEOUT_1] =
    {
#line 106
        .trainerName = _("GRUNT"),
#line 107
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 108
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 110
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 111
        .doubleBattle = TRUE,
#line 112
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 114
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 116
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 115
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 118
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 120
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 119
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 122
    [TRAINER_GRUNT_AQUA_HIDEOUT_2] =
    {
#line 123
        .trainerName = _("GRUNT"),
#line 124
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 125
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 127
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 128
        .doubleBattle = TRUE,
#line 129
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 131
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 133
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 132
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 135
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 137
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 136
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 139
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 141
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 140
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 143
    [TRAINER_GRUNT_AQUA_HIDEOUT_3] =
    {
#line 144
        .trainerName = _("GRUNT"),
#line 145
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 146
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 148
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 149
        .doubleBattle = TRUE,
#line 150
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 152
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 154
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 153
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 156
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 158
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 157
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 160
    [TRAINER_GRUNT_AQUA_HIDEOUT_4] =
    {
#line 161
        .trainerName = _("GRUNT"),
#line 162
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 163
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 165
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 166
        .doubleBattle = TRUE,
#line 167
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 169
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 171
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 170
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 173
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 175
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 174
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 177
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 179
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 178
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 181
    [TRAINER_GRUNT_SEAFLOOR_CAVERN_1] =
    {
#line 182
        .trainerName = _("GRUNT"),
#line 183
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 184
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 186
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 187
        .doubleBattle = TRUE,
#line 188
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 190
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 192
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 191
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 194
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 196
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 195
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 198
    [TRAINER_GRUNT_SEAFLOOR_CAVERN_2] =
    {
#line 199
        .trainerName = _("GRUNT"),
#line 200
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 201
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 203
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 204
        .doubleBattle = TRUE,
#line 205
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 207
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 209
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 208
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 211
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 213
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 212
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 215
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 217
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 216
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 219
    [TRAINER_GRUNT_SEAFLOOR_CAVERN_3] =
    {
#line 220
        .trainerName = _("GRUNT"),
#line 221
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 222
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 224
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 225
        .doubleBattle = TRUE,
#line 226
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 228
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 230
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 229
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 232
            .species = SPECIES_MIENFOO_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 234
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 233
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 236
            .species = SPECIES_GRAPPLOCT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 238
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 237
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 240
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 242
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 241
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 244
    [TRAINER_GABRIELLE_1] =
    {
#line 245
        .trainerName = _("GABRIELLE"),
#line 246
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 247
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 248
F_TRAINER_FEMALE | 
#line 249
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 250
        .doubleBattle = TRUE,
#line 251
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 253
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 255
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 254
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 257
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 259
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 258
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 261
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 263
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 262
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 265
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 267
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 266
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 269
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 271
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 270
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 273
    [TRAINER_GRUNT_PETALBURG_WOODS] =
    {
#line 274
        .trainerName = _("GRUNT"),
#line 275
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 276
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 278
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 279
        .doubleBattle = TRUE,
#line 280
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 282
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 284
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 283
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 286
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 288
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 287
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 290
    [TRAINER_MARCEL] =
    {
#line 291
        .trainerName = _("MARCEL"),
#line 292
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 293
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 295
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 296
        .doubleBattle = TRUE,
#line 297
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 299
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 301
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 300
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 303
            .species = SPECIES_DRAMPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 305
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 304
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 307
            .species = SPECIES_CRABOMINABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 309
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 308
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 311
    [TRAINER_ALBERTO] =
    {
#line 312
        .trainerName = _("ALBERTO"),
#line 313
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 314
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 316
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 317
        .doubleBattle = TRUE,
#line 318
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 320
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 322
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 321
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 324
            .species = SPECIES_SQUAWKABILLY_WHITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 326
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 325
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 328
            .species = SPECIES_CHATOT_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 330
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 329
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 332
    [TRAINER_ED] =
    {
#line 333
        .trainerName = _("ED"),
#line 334
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 335
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender = 
#line 337
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 338
        .doubleBattle = TRUE,
#line 339
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 341
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 343
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 342
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 345
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 347
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 346
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 349
    [TRAINER_GRUNT_SEAFLOOR_CAVERN_4] =
    {
#line 350
        .trainerName = _("GRUNT"),
#line 351
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 352
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 353
F_TRAINER_FEMALE | 
#line 354
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 355
        .doubleBattle = TRUE,
#line 356
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 358
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 360
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 359
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 362
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 364
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 363
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 366
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 368
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 367
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 370
    [TRAINER_DECLAN] =
    {
#line 371
        .trainerName = _("DECLAN"),
#line 372
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 373
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 375
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 376
        .doubleBattle = TRUE,
#line 377
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 379
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 381
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 380
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 383
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 385
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 384
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 387
    [TRAINER_GRUNT_RUSTURF_TUNNEL] =
    {
#line 388
        .trainerName = _("GRUNT"),
#line 389
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 390
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 392
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 393
        .doubleBattle = TRUE,
#line 394
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 396
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 398
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 397
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 400
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 402
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 401
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 404
    [TRAINER_GRUNT_WEATHER_INST_1] =
    {
#line 405
        .trainerName = _("GRUNT"),
#line 406
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 407
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 409
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 410
        .doubleBattle = TRUE,
#line 411
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 413
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 415
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 414
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 417
            .species = SPECIES_WIMPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 419
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 418
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 421
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 423
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 422
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 425
    [TRAINER_GRUNT_WEATHER_INST_2] =
    {
#line 426
        .trainerName = _("GRUNT"),
#line 427
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 428
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 430
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 431
        .doubleBattle = TRUE,
#line 432
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 434
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 436
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 435
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 438
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 440
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 439
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 442
    [TRAINER_GRUNT_WEATHER_INST_3] =
    {
#line 443
        .trainerName = _("GRUNT"),
#line 444
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 445
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 447
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 448
        .doubleBattle = TRUE,
#line 449
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 451
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 453
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 452
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 455
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 457
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 456
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 459
            .species = SPECIES_SANDYGAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 461
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 460
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 463
    [TRAINER_GRUNT_MUSEUM_1] =
    {
#line 464
        .trainerName = _("GRUNT"),
#line 465
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 466
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 468
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 469
        .doubleBattle = TRUE,
#line 470
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 472
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 474
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 473
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 476
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 478
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 477
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 480
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 482
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 481
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 484
    [TRAINER_GRUNT_MUSEUM_2] =
    {
#line 485
        .trainerName = _("GRUNT"),
#line 486
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 487
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 489
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 490
        .doubleBattle = TRUE,
#line 491
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 493
            .species = SPECIES_WIMPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 495
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 494
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 497
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 499
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 498
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 501
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 503
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 502
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 505
    [TRAINER_GRUNT_SPACE_CENTER_1] =
    {
#line 506
        .trainerName = _("GRUNT"),
#line 507
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 508
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 510
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 511
        .doubleBattle = TRUE,
#line 512
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 514
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 516
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 515
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 518
    [TRAINER_GRUNT_MT_PYRE_1] =
    {
#line 519
        .trainerName = _("GRUNT"),
#line 520
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 521
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 523
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 524
        .doubleBattle = TRUE,
#line 525
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 527
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 529
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 528
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 531
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 533
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 532
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 535
    [TRAINER_GRUNT_MT_PYRE_2] =
    {
#line 536
        .trainerName = _("GRUNT"),
#line 537
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 538
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 540
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 541
        .doubleBattle = TRUE,
#line 542
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 544
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 546
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 545
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 548
            .species = SPECIES_SANDYGAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 550
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 549
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 552
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 554
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 553
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 556
    [TRAINER_GRUNT_MT_PYRE_3] =
    {
#line 557
        .trainerName = _("GRUNT"),
#line 558
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 559
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 561
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 562
        .doubleBattle = TRUE,
#line 563
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 565
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 567
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 566
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 569
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 571
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 570
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 573
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 575
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 574
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 577
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 579
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 578
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 581
    [TRAINER_GRUNT_WEATHER_INST_4] =
    {
#line 582
        .trainerName = _("GRUNT"),
#line 583
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 584
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 585
F_TRAINER_FEMALE | 
#line 586
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 587
        .doubleBattle = TRUE,
#line 588
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 590
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 592
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 591
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 594
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 596
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 595
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 598
    [TRAINER_GRUNT_AQUA_HIDEOUT_5] =
    {
#line 599
        .trainerName = _("GRUNT"),
#line 600
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 601
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 602
F_TRAINER_FEMALE | 
#line 603
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 604
        .doubleBattle = TRUE,
#line 605
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 607
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 609
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 608
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 611
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 613
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 612
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 615
    [TRAINER_GRUNT_AQUA_HIDEOUT_6] =
    {
#line 616
        .trainerName = _("GRUNT"),
#line 617
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 618
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 619
F_TRAINER_FEMALE | 
#line 620
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 621
        .doubleBattle = TRUE,
#line 622
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 624
            .species = SPECIES_MIENFOO_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 626
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 625
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 628
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 630
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 629
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 632
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 634
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 633
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 636
    [TRAINER_FREDRICK] =
    {
#line 637
        .trainerName = _("FREDRICK"),
#line 638
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 639
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender = 
#line 641
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 642
        .doubleBattle = TRUE,
#line 643
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 645
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 647
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 646
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 649
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 651
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 650
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 653
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 655
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 654
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 657
    [TRAINER_MATT] =
    {
#line 658
        .trainerName = _("MATT"),
#line 659
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 660
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_M,
        .encounterMusic_gender = 
#line 662
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 663
        .doubleBattle = TRUE,
#line 664
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 666
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 666
            .heldItem = ITEM_POWER_HERB,
#line 669
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 668
            .ability = ABILITY_SUCTION_CUPS,
#line 667
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 670
                MOVE_METEOR_BEAM,
                MOVE_GIGA_DRAIN,
                MOVE_BRINE,
                MOVE_RECOVER,
            },
            },
            {
#line 675
            .species = SPECIES_GOLISOPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 678
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 677
            .ability = ABILITY_EMERGENCY_EXIT,
#line 676
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 679
                MOVE_PROTECT,
                MOVE_FIRST_IMPRESSION,
                MOVE_AQUA_JET,
                MOVE_LIQUIDATION,
            },
            },
            {
#line 684
            .species = SPECIES_GRAPPLOCT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 687
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 686
            .ability = ABILITY_LIMBER,
#line 685
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 688
                MOVE_OCTOLOCK,
                MOVE_DRAIN_PUNCH,
                MOVE_SUCKER_PUNCH,
                MOVE_RETALIATE,
            },
            },
            {
#line 693
            .species = SPECIES_CHATOT_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 693
            .heldItem = ITEM_THROAT_SPRAY,
#line 696
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 695
            .ability = ABILITY_PUNK_ROCK,
#line 694
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 697
                MOVE_EERIE_SPELL,
                MOVE_BOOMBURST,
                MOVE_CHATTER,
                MOVE_TAILWIND,
            },
            },
            {
#line 702
            .species = SPECIES_PALOSSAND,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 705
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 704
            .ability = ABILITY_WATER_COMPACTION,
#line 703
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 706
                MOVE_EARTH_POWER,
                MOVE_SHADOW_BALL,
                MOVE_SHORE_UP,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 711
            .species = SPECIES_HUNTAIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 711
            .heldItem = ITEM_WHITE_HERB,
#line 714
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 713
            .ability = ABILITY_WATER_VEIL,
#line 712
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 715
                MOVE_SUBMISSION,
                MOVE_LIQUIDATION,
                MOVE_LEECH_LIFE,
                MOVE_SHELL_SMASH,
            },
            },
        },
    },
#line 720
    [TRAINER_ZANDER] =
    {
#line 721
        .trainerName = _("ZANDER"),
#line 722
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 723
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 725
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 726
        .doubleBattle = TRUE,
#line 727
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 729
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 731
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 730
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 733
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 735
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 734
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 737
    [TRAINER_SHELLY_WEATHER_INSTITUTE] =
    {
#line 738
        .trainerName = _("SHELLY"),
#line 739
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 740
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender = 
#line 741
F_TRAINER_FEMALE | 
#line 742
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 743
        .doubleBattle = TRUE,
#line 744
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 746
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 749
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 748
            .ability = ABILITY_SHELL_ARMOR,
#line 747
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 750
                MOVE_CLAMP,
                MOVE_BLIZZARD,
                MOVE_IRON_DEFENSE,
                MOVE_SCALD,
            },
            },
            {
#line 755
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 758
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 757
            .ability = ABILITY_INTIMIDATE,
#line 756
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 759
                MOVE_ICE_FANG,
                MOVE_SUCKER_PUNCH,
                MOVE_IRON_HEAD,
                MOVE_FAKE_TEARS,
            },
            },
            {
#line 764
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 764
            .heldItem = ITEM_EVIOLITE,
#line 767
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 766
            .ability = ABILITY_SERENE_GRACE,
#line 765
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 768
                MOVE_AIR_SLASH,
                MOVE_EXTRASENSORY,
                MOVE_DAZZLING_GLEAM,
                MOVE_LIFE_DEW,
            },
            },
            {
#line 773
            .species = SPECIES_KILOWATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 776
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 775
            .ability = ABILITY_VOLT_ABSORB,
#line 774
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 777
                MOVE_AIR_CUTTER,
                MOVE_SHOCK_WAVE,
                MOVE_ROOST,
                MOVE_AGILITY,
            },
            },
            {
#line 782
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 782
            .heldItem = ITEM_CHESTO_BERRY,
#line 785
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 784
            .ability = ABILITY_ROCK_HEAD,
#line 783
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 786
                MOVE_DOUBLE_EDGE,
                MOVE_WATERFALL,
                MOVE_ROCK_SLIDE,
                MOVE_REST,
            },
            },
        },
    },
#line 791
    [TRAINER_SHELLY_SEAFLOOR_CAVERN] =
    {
#line 792
        .trainerName = _("SHELLY"),
#line 793
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 794
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender = 
#line 795
F_TRAINER_FEMALE | 
#line 796
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 797
        .doubleBattle = TRUE,
#line 798
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 800
            .species = SPECIES_KILOWATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 803
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 802
            .ability = ABILITY_VOLT_ABSORB,
#line 801
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 804
                MOVE_THUNDERBOLT,
                MOVE_HURRICANE,
                MOVE_THUNDER_WAVE,
                MOVE_U_TURN,
            },
            },
            {
#line 809
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 812
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 811
            .ability = ABILITY_SWIFT_SWIM,
#line 810
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 813
                MOVE_STEALTH_ROCK,
                MOVE_ROCK_SLIDE,
                MOVE_AQUA_JET,
                MOVE_BREAKING_SWIPE,
            },
            },
            {
#line 818
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 818
            .heldItem = ITEM_ROCKY_HELMET,
#line 821
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 820
            .ability = ABILITY_SERENE_GRACE,
#line 819
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 822
                MOVE_FOLLOW_ME,
                MOVE_MOONBLAST,
                MOVE_HELPING_HAND,
                MOVE_PROTECT,
            },
            },
            {
#line 827
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 830
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 829
            .ability = ABILITY_ROCK_HEAD,
#line 828
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 831
                MOVE_HEAD_SMASH,
                MOVE_WAVE_CRASH,
                MOVE_DOUBLE_EDGE,
                MOVE_ROCK_POLISH,
            },
            },
            {
#line 836
            .species = SPECIES_MAWILE_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 836
            .heldItem = ITEM_LIFE_ORB,
#line 839
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 838
            .ability = ABILITY_INTIMIDATE,
#line 837
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 840
                MOVE_PLAY_ROUGH,
                MOVE_IRON_HEAD,
                MOVE_CRUNCH,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 845
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 845
            .heldItem = ITEM_WISE_GLASSES,
#line 848
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 847
            .ability = ABILITY_SWIFT_SWIM,
#line 846
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 849
                MOVE_MOONBLAST,
                MOVE_MUDDY_WATER,
                MOVE_SHADOW_BALL,
                MOVE_CALM_MIND,
            },
            },
        },
    },
#line 854
    [TRAINER_ARCHIE] =
    {
#line 855
        .trainerName = _("ARCHIE"),
#line 856
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 857
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        .encounterMusic_gender = 
#line 859
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 860
        .doubleBattle = TRUE,
#line 861
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 863
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 863
            .heldItem = ITEM_DAMP_ROCK,
#line 866
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 865
            .ability = ABILITY_DRIZZLE,
#line 864
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 867
                MOVE_PSYSHOCK,
                MOVE_MUDDY_WATER,
                MOVE_ICY_WIND,
                MOVE_SOAK,
            },
            },
            {
#line 872
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 875
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 874
            .ability = ABILITY_LIGHTNING_ROD,
#line 873
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 876
                MOVE_SNARL,
                MOVE_THUNDER,
                MOVE_REFLECT,
                MOVE_EERIE_IMPULSE,
            },
            },
            {
#line 881
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 884
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 883
            .ability = ABILITY_TECHNICIAN,
#line 882
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 885
                MOVE_BULLET_PUNCH,
                MOVE_DUAL_WINGBEAT,
                MOVE_BUG_BITE,
                MOVE_PROTECT,
            },
            },
            {
#line 890
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 890
            .heldItem = ITEM_LEFTOVERS,
#line 893
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 892
            .ability = ABILITY_STICKY_HOLD,
#line 891
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 894
                MOVE_RAIN_DANCE,
                MOVE_GUNK_SHOT,
                MOVE_SHADOW_SNEAK,
                MOVE_EXPLOSION,
            },
            },
            {
#line 899
            .species = SPECIES_DHELMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 899
            .heldItem = ITEM_ASSAULT_VEST,
#line 902
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 901
            .ability = ABILITY_STEELWORKER,
#line 900
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 903
                MOVE_POWER_WHIP,
                MOVE_HEAVY_SLAM,
                MOVE_ASSURANCE,
                MOVE_SHADOW_CLAW,
            },
            },
            {
#line 908
            .species = SPECIES_SHARPEDO_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 908
            .heldItem = ITEM_LIFE_ORB,
#line 911
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 910
            .ability = ABILITY_MOLD_BREAKER,
#line 909
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 912
                MOVE_FISHIOUS_REND,
                MOVE_CRUNCH,
                MOVE_GIGA_IMPACT,
                MOVE_SURF,
            },
            },
        },
    },
#line 917
    [TRAINER_LEAH] =
    {
#line 918
        .trainerName = _("LEAH"),
#line 919
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 920
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 921
F_TRAINER_FEMALE | 
#line 922
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 923
        .doubleBattle = TRUE,
#line 924
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 926
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 928
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 927
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 930
            .species = SPECIES_ORICORIO_SENSU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 932
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 931
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 934
    [TRAINER_DAISY] =
    {
#line 935
        .trainerName = _("DAISY"),
#line 936
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 937
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender = 
#line 938
F_TRAINER_FEMALE | 
#line 939
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 940
        .doubleBattle = TRUE,
#line 941
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 943
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 945
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 944
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 947
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 949
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 948
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 951
    [TRAINER_ROSE_1] =
    {
#line 952
        .trainerName = _("ROSE"),
#line 953
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 954
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender = 
#line 955
F_TRAINER_FEMALE | 
#line 956
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 957
        .doubleBattle = TRUE,
#line 958
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 960
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 962
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 961
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 964
            .species = SPECIES_SUNKERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 966
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 965
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 968
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 970
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 969
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 972
    [TRAINER_FELIX] =
    {
#line 973
        .trainerName = _("FELIX"),
#line 974
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 975
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 977
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 978
        .doubleBattle = TRUE,
#line 979
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 981
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 983
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 982
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 984
                MOVE_PSYCHIC,
            },
            },
            {
#line 986
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 988
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 987
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 989
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 992
    [TRAINER_VIOLET] =
    {
#line 993
        .trainerName = _("VIOLET"),
#line 994
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 995
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender = 
#line 996
F_TRAINER_FEMALE | 
#line 997
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 998
        .doubleBattle = TRUE,
#line 999
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1001
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1003
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1002
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1005
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1007
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1006
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1009
    [TRAINER_DUSTY_1] =
    {
#line 1010
        .trainerName = _("DUSTY"),
#line 1011
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 1012
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 1014
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1015
        .doubleBattle = TRUE,
#line 1016
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1018
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1020
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 1019
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1021
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
            {
#line 1026
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1028
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 1027
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1029
                MOVE_FURY_SWIPES,
                MOVE_METAL_CLAW,
                MOVE_DIG,
                MOVE_RAPID_SPIN,
            },
            },
            {
#line 1034
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1036
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 1035
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1037
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 1042
    [TRAINER_CHIP] =
    {
#line 1043
        .trainerName = _("CHIP"),
#line 1044
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 1045
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 1047
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1048
        .doubleBattle = TRUE,
#line 1049
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1051
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1053
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 1052
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1055
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1057
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 1056
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1059
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1061
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 1060
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1063
    [TRAINER_FOSTER] =
    {
#line 1064
        .trainerName = _("FOSTER"),
#line 1065
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 1066
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 1068
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1069
        .doubleBattle = TRUE,
#line 1070
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1072
            .species = SPECIES_CUFANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1074
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1073
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1076
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1078
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1077
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1080
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1082
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1081
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1083
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 1088
    [TRAINER_GABBY_AND_TY_1] =
    {
#line 1089
        .trainerName = _("GABBY & TY"),
#line 1090
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 1091
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender = 
#line 1093
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 1094
        .doubleBattle = TRUE,
#line 1095
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1097
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1099
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 1098
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1101
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1103
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 1102
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1105
    [TRAINER_GABBY_AND_TY_2] =
    {
#line 1106
        .trainerName = _("GABBY & TY"),
#line 1107
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 1108
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender = 
#line 1110
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 1111
        .doubleBattle = TRUE,
#line 1112
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1114
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1116
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1115
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1118
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1120
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1119
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1122
    [TRAINER_GABBY_AND_TY_3] =
    {
#line 1123
        .trainerName = _("GABBY & TY"),
#line 1124
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 1125
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender = 
#line 1127
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 1128
        .doubleBattle = TRUE,
#line 1129
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1131
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1133
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 1132
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1135
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1137
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 1136
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1139
    [TRAINER_GABBY_AND_TY_4] =
    {
#line 1140
        .trainerName = _("GABBY & TY"),
#line 1141
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 1142
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender = 
#line 1144
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 1145
        .doubleBattle = TRUE,
#line 1146
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1148
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1150
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 1149
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1152
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1154
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 1153
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1156
    [TRAINER_GABBY_AND_TY_5] =
    {
#line 1157
        .trainerName = _("GABBY & TY"),
#line 1158
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 1159
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender = 
#line 1161
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 1162
        .doubleBattle = TRUE,
#line 1163
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1165
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1167
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 1166
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1169
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1171
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 1170
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1173
    [TRAINER_GABBY_AND_TY_6] =
    {
#line 1174
        .trainerName = _("GABBY & TY"),
#line 1175
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 1176
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender = 
#line 1178
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 1179
        .doubleBattle = TRUE,
#line 1180
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1182
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1184
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 1183
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1185
                MOVE_SONIC_BOOM,
                MOVE_THUNDER_WAVE,
                MOVE_METAL_SOUND,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 1190
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1192
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 1191
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1193
                MOVE_ASTONISH,
                MOVE_STOMP,
                MOVE_SUPERSONIC,
                MOVE_HYPER_VOICE,
            },
            },
        },
    },
#line 1198
    [TRAINER_LOLA_1] =
    {
#line 1199
        .trainerName = _("LOLA"),
#line 1200
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 1201
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender = 
#line 1202
F_TRAINER_FEMALE | 
#line 1203
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1204
        .doubleBattle = TRUE,
#line 1205
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1207
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1209
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1208
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1211
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1213
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1212
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1215
    [TRAINER_AUSTINA] =
    {
#line 1216
        .trainerName = _("AUSTINA"),
#line 1217
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 1218
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender = 
#line 1219
F_TRAINER_FEMALE | 
#line 1220
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1221
        .doubleBattle = TRUE,
#line 1222
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1224
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1226
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1225
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1228
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1230
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1229
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1232
    [TRAINER_GWEN] =
    {
#line 1233
        .trainerName = _("GWEN"),
#line 1234
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 1235
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender = 
#line 1236
F_TRAINER_FEMALE | 
#line 1237
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1238
        .doubleBattle = TRUE,
#line 1239
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1241
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1243
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1242
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1245
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1247
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1246
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1249
    [TRAINER_RICKY_1] =
    {
#line 1250
        .trainerName = _("RICKY"),
#line 1251
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 1252
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender = 
#line 1254
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1255
        .doubleBattle = TRUE,
#line 1256
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1258
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1260
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1259
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1261
                MOVE_SAND_ATTACK,
                MOVE_HEADBUTT,
                MOVE_TAIL_WHIP,
                MOVE_SURF,
            },
            },
            {
#line 1266
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1268
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1267
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1270
    [TRAINER_SIMON] =
    {
#line 1271
        .trainerName = _("SIMON"),
#line 1272
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 1273
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender = 
#line 1275
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1276
        .doubleBattle = TRUE,
#line 1277
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1279
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1281
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1280
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1283
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1285
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1284
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1287
    [TRAINER_CHARLIE] =
    {
#line 1288
        .trainerName = _("CHARLIE"),
#line 1289
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 1290
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender = 
#line 1292
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1293
        .doubleBattle = TRUE,
#line 1294
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1296
            .species = SPECIES_TADBULB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1298
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1297
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1300
            .species = SPECIES_SEEL_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1302
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1301
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1304
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1306
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 1305
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1307
                MOVE_SAND_ATTACK,
                MOVE_PIN_MISSILE,
                MOVE_TAIL_WHIP,
                MOVE_SURF,
            },
            },
        },
    },
#line 1312
    [TRAINER_RANDALL] =
    {
#line 1313
        .trainerName = _("RANDALL"),
#line 1314
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1315
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1317
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1318
        .doubleBattle = TRUE,
#line 1319
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1321
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1321
            .heldItem = ITEM_AGUAV_BERRY,
#line 1325
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1323
            .ability = ABILITY_GLUTTONY,
#line 1322
            .lvl = 29,
#line 1324
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1326
                MOVE_BELLY_DRUM,
                MOVE_EXTREME_SPEED,
                MOVE_SHADOW_CLAW,
            },
            },
            {
#line 1330
            .species = SPECIES_GRAFAIAI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1330
            .heldItem = ITEM_WIKI_BERRY,
#line 1334
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1332
            .ability = ABILITY_UNBURDEN,
#line 1331
            .lvl = 29,
#line 1333
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1335
                MOVE_FLING,
                MOVE_SLASH,
                MOVE_FOUL_PLAY,
            },
            },
        },
    },
#line 1339
    [TRAINER_PARKER] =
    {
#line 1340
        .trainerName = _("PARKER"),
#line 1341
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1342
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1344
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1345
        .doubleBattle = TRUE,
#line 1346
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1348
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1351
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1350
            .ability = ABILITY_NORMALIZE,
#line 1349
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1352
                MOVE_HYPER_VOICE,
                MOVE_FAKE_OUT,
                MOVE_THUNDER_WAVE,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 1357
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1360
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1359
            .ability = ABILITY_SCRAPPY,
#line 1358
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1361
                MOVE_HYPER_VOICE,
                MOVE_BRICK_BREAK,
                MOVE_WORK_UP,
            },
            },
        },
    },
#line 1365
    [TRAINER_GEORGE] =
    {
#line 1366
        .trainerName = _("GEORGE"),
#line 1367
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1368
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1370
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1371
        .doubleBattle = TRUE,
#line 1372
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1374
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1377
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1376
            .ability = ABILITY_VITAL_SPIRIT,
#line 1375
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1378
                MOVE_COUNTER,
                MOVE_SLACK_OFF,
                MOVE_SLASH,
                MOVE_SHADOW_CLAW,
            },
            },
            {
#line 1383
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1386
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1385
            .ability = ABILITY_INNER_FOCUS,
#line 1384
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1387
                MOVE_MIRROR_COAT,
                MOVE_MILK_DRINK,
                MOVE_PSYBEAM,
            },
            },
        },
    },
#line 1391
    [TRAINER_BERKE] =
    {
#line 1392
        .trainerName = _("BERKE"),
#line 1393
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1394
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1396
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1397
        .doubleBattle = TRUE,
#line 1398
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1400
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1403
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1402
            .ability = ABILITY_CHEERLEADER,
#line 1401
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1404
                MOVE_RETURN,
                MOVE_ROUND,
                MOVE_HYPER_VOICE,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 1409
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1412
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1411
            .ability = ABILITY_FRIEND_GUARD,
#line 1410
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1413
                MOVE_RETURN,
                MOVE_ROUND,
                MOVE_DAZZLING_GLEAM,
                MOVE_HEAL_PULSE,
            },
            },
        },
    },
#line 1418
    [TRAINER_BRAXTON] =
    {
#line 1419
        .trainerName = _("BRAXTON"),
#line 1420
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1421
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1423
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1424
        .doubleBattle = TRUE,
#line 1425
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1427
            .species = SPECIES_GRAFAIAI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1430
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1429
            .ability = ABILITY_PRANKSTER,
#line 1428
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1431
                MOVE_ACID_SPRAY,
                MOVE_SWAGGER,
                MOVE_PARTING_SHOT,
                MOVE_METRONOME,
            },
            },
            {
#line 1436
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1436
            .heldItem = ITEM_THROAT_SPRAY,
#line 1439
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1438
            .ability = ABILITY_SCRAPPY,
#line 1437
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1440
                MOVE_HYPER_VOICE,
                MOVE_ROAR,
                MOVE_REST,
                MOVE_SLEEP_TALK,
            },
            },
            {
#line 1445
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1448
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1447
            .ability = ABILITY_WIND_RIDER,
#line 1446
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1449
                MOVE_TAILWIND,
                MOVE_AIR_CUTTER,
                MOVE_RAZOR_LEAF,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 1454
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1454
            .heldItem = ITEM_MAGNET,
#line 1457
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1456
            .ability = ABILITY_STATIC,
#line 1455
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1458
                MOVE_SHOCK_WAVE,
                MOVE_THUNDER_WAVE,
                MOVE_DISCHARGE,
                MOVE_SELFDESTRUCT,
            },
            },
            {
#line 1463
            .species = SPECIES_COPPERAJAH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1463
            .heldItem = ITEM_ASSAULT_VEST,
#line 1466
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1465
            .ability = ABILITY_SHEER_FORCE,
#line 1464
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1467
                MOVE_ROLLOUT,
                MOVE_STOMP,
                MOVE_BULLDOZE,
                MOVE_HARD_PRESS,
            },
            },
        },
    },
#line 1472
    [TRAINER_VINCENT] =
    {
#line 1473
        .trainerName = _("VINCENT"),
#line 1474
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1475
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1477
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1478
        .doubleBattle = TRUE,
#line 1479
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1481
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1483
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1482
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1485
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1487
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1486
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1489
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1491
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1490
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1493
    [TRAINER_LEROY] =
    {
#line 1494
        .trainerName = _("LEROY"),
#line 1495
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1496
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1498
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1499
        .doubleBattle = TRUE,
#line 1500
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1502
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1504
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1503
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1506
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1508
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1507
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1510
    [TRAINER_WILTON_1] =
    {
#line 1511
        .trainerName = _("WILTON"),
#line 1512
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1513
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1515
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1516
        .doubleBattle = TRUE,
#line 1517
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1519
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1522
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 1521
            .ability = ABILITY_GUTS,
#line 1520
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1523
                MOVE_BULLDOZE,
                MOVE_FAKE_OUT,
                MOVE_BULLET_PUNCH,
                MOVE_FORCE_PALM,
            },
            },
            {
#line 1528
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1531
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 1530
            .ability = ABILITY_LEVITATE,
#line 1529
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1532
                MOVE_TAILWIND,
                MOVE_PSYBEAM,
                MOVE_YAWN,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 1537
            .species = SPECIES_SQUAWKABILLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1540
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 1539
            .ability = ABILITY_INTIMIDATE,
#line 1538
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1541
                MOVE_SWAGGER,
                MOVE_AERIAL_ACE,
                MOVE_QUICK_ATTACK,
                MOVE_REVERSAL,
            },
            },
        },
    },
#line 1546
    [TRAINER_EDGAR] =
    {
#line 1547
        .trainerName = _("EDGAR"),
#line 1548
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1549
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1551
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1552
        .doubleBattle = TRUE,
#line 1553
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1555
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1557
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1556
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1559
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1561
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1560
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1563
    [TRAINER_ALBERT] =
    {
#line 1564
        .trainerName = _("ALBERT"),
#line 1565
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1566
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1568
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1569
        .doubleBattle = TRUE,
#line 1570
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1572
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1574
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1573
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1576
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1578
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1577
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1580
    [TRAINER_SAMUEL] =
    {
#line 1581
        .trainerName = _("SAMUEL"),
#line 1582
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1583
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1585
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1586
        .doubleBattle = TRUE,
#line 1587
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1589
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1591
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1590
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1593
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1595
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1594
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1597
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1599
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1598
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1601
    [TRAINER_VITO] =
    {
#line 1602
        .trainerName = _("VITO"),
#line 1603
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1604
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1606
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1607
        .doubleBattle = TRUE,
#line 1608
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1610
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1612
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1611
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1614
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1616
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1615
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1618
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1620
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1619
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1622
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1624
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1623
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1626
    [TRAINER_OWEN] =
    {
#line 1627
        .trainerName = _("OWEN"),
#line 1628
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1629
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1631
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1632
        .doubleBattle = TRUE,
#line 1633
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1635
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1637
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1636
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1639
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1641
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1640
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1643
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1645
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1644
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1647
    [TRAINER_WARREN] =
    {
#line 1648
        .trainerName = _("WARREN"),
#line 1649
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1650
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1652
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1653
        .doubleBattle = TRUE,
#line 1654
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1656
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1658
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1657
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1660
            .species = SPECIES_FARIGIRAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1662
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1661
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1664
            .species = SPECIES_GOGOAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1666
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1665
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1668
    [TRAINER_MARY] =
    {
#line 1669
        .trainerName = _("MARY"),
#line 1670
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1671
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1672
F_TRAINER_FEMALE | 
#line 1673
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1674
        .doubleBattle = TRUE,
#line 1675
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1677
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1680
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1679
            .ability = ABILITY_TANGLED_FEET,
#line 1678
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1681
                MOVE_METRONOME,
            },
            },
            {
#line 1683
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1686
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1685
            .ability = ABILITY_TANGLED_FEET,
#line 1684
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1687
                MOVE_METRONOME,
            },
            },
            {
#line 1689
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1692
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1691
            .ability = ABILITY_TANGLED_FEET,
#line 1690
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1693
                MOVE_METRONOME,
            },
            },
            {
#line 1695
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1698
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1697
            .ability = ABILITY_TANGLED_FEET,
#line 1696
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1699
                MOVE_METRONOME,
            },
            },
            {
#line 1701
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1704
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1703
            .ability = ABILITY_TANGLED_FEET,
#line 1702
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1705
                MOVE_METRONOME,
            },
            },
            {
#line 1707
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1710
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1709
            .ability = ABILITY_TANGLED_FEET,
#line 1708
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1711
                MOVE_METRONOME,
            },
            },
        },
    },
#line 1713
    [TRAINER_ALEXIA] =
    {
#line 1714
        .trainerName = _("ALEXIA"),
#line 1715
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1716
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1717
F_TRAINER_FEMALE | 
#line 1718
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1719
        .doubleBattle = TRUE,
#line 1720
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1722
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1725
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1724
            .ability = ABILITY_VITAL_SPIRIT,
#line 1723
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1726
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_DRAIN_PUNCH,
            },
            },
            {
#line 1731
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1734
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1733
            .ability = ABILITY_SOUNDPROOF,
#line 1732
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1735
                MOVE_WATER_PULSE,
                MOVE_SHOCK_WAVE,
                MOVE_EXTRASENSORY,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 1740
    [TRAINER_JODY] =
    {
#line 1741
        .trainerName = _("JODY"),
#line 1742
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1743
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1744
F_TRAINER_FEMALE | 
#line 1745
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1746
        .doubleBattle = TRUE,
#line 1747
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN | AI_FLAG_PREFER_BATON_PASS,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1749
            .species = SPECIES_SQUAWKABILLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1749
            .heldItem = ITEM_LOADED_DICE,
#line 1752
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1751
            .ability = ABILITY_INTIMIDATE,
#line 1750
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1753
                MOVE_PARTING_SHOT,
                MOVE_WING_ATTACK,
                MOVE_FURY_ATTACK,
                MOVE_BATON_PASS,
            },
            },
            {
#line 1758
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1761
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1760
            .ability = ABILITY_CONTRARY,
#line 1759
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1762
                MOVE_DIZZY_PUNCH,
                MOVE_ICY_WIND,
                MOVE_PSYBEAM,
                MOVE_BATON_PASS,
            },
            },
            {
#line 1767
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1770
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1769
            .ability = ABILITY_PSYCH_OUT,
#line 1768
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1771
                MOVE_SKILL_SWAP,
                MOVE_CALM_MIND,
                MOVE_STOMP,
                MOVE_BATON_PASS,
            },
            },
            {
#line 1776
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1779
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1778
            .ability = ABILITY_COMPETITIVE,
#line 1777
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1780
                MOVE_CHARM,
                MOVE_HYPER_VOICE,
                MOVE_CALM_MIND,
                MOVE_BATON_PASS,
            },
            },
        },
    },
#line 1785
    [TRAINER_WENDY] =
    {
#line 1786
        .trainerName = _("WENDY"),
#line 1787
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1788
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1789
F_TRAINER_FEMALE | 
#line 1790
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1791
        .doubleBattle = TRUE,
#line 1792
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1794
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1797
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1796
            .ability = ABILITY_INTIMIDATE,
#line 1795
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1798
                MOVE_ATTRACT,
                MOVE_TAUNT,
                MOVE_METAL_CLAW,
                MOVE_ASSURANCE,
            },
            },
            {
#line 1803
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1803
            .heldItem = ITEM_FLAME_ORB,
#line 1806
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1805
            .ability = ABILITY_GUTS,
#line 1804
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1807
                MOVE_FACADE,
                MOVE_AERIAL_ACE,
                MOVE_AGILITY,
                MOVE_REVERSAL,
            },
            },
            {
#line 1812
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1812
            .heldItem = ITEM_NEVERMELTICE,
#line 1815
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1814
            .ability = ABILITY_ICE_FACE,
#line 1813
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1816
                MOVE_SNOWSCAPE,
                MOVE_AVALANCHE,
                MOVE_BODY_SLAM,
                MOVE_REST,
            },
            },
            {
#line 1821
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1824
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1823
            .ability = ABILITY_LIQUID_OOZE,
#line 1822
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1825
                MOVE_ACID_SPRAY,
                MOVE_DRAINING_KISS,
                MOVE_POISON_GAS,
                MOVE_ENCORE,
            },
            },
            {
#line 1830
            .species = SPECIES_ROSERADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1830
            .heldItem = ITEM_BLACK_SLUDGE,
#line 1833
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1832
            .ability = ABILITY_POISON_POINT,
#line 1831
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1834
                MOVE_VENOSHOCK,
                MOVE_MAGICAL_LEAF,
                MOVE_WEATHER_BALL,
                MOVE_INGRAIN,
            },
            },
        },
    },
#line 1839
    [TRAINER_KEIRA] =
    {
#line 1840
        .trainerName = _("KEIRA"),
#line 1841
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1842
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1843
F_TRAINER_FEMALE | 
#line 1844
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1845
        .doubleBattle = TRUE,
#line 1846
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1848
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1850
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1849
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1852
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1854
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1853
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1856
    [TRAINER_BROOKE_1] =
    {
#line 1857
        .trainerName = _("BROOKE"),
#line 1858
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1859
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1860
F_TRAINER_FEMALE | 
#line 1861
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1862
        .doubleBattle = TRUE,
#line 1863
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1865
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1868
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 1867
            .ability = ABILITY_INTIMIDATE,
#line 1866
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1869
                MOVE_FLAME_CHARGE,
                MOVE_BITE,
                MOVE_HOWL,
                MOVE_MORNING_SUN,
            },
            },
            {
#line 1874
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1877
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 1876
            .ability = ABILITY_PSYCH_OUT,
#line 1875
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1878
                MOVE_STOMP,
                MOVE_GUARD_SWAP,
                MOVE_CONFUSION,
                MOVE_REFLECT,
            },
            },
            {
#line 1883
            .species = SPECIES_ORICORIO_POM_POM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1886
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 1885
            .ability = ABILITY_DANCER,
#line 1884
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1887
                MOVE_FEATHER_DANCE,
                MOVE_HELPING_HAND,
                MOVE_AIR_CUTTER,
                MOVE_REHEARSAL,
            },
            },
        },
    },
#line 1892
    [TRAINER_JENNIFER] =
    {
#line 1893
        .trainerName = _("JENNIFER"),
#line 1894
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1895
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1896
F_TRAINER_FEMALE | 
#line 1897
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1898
        .doubleBattle = TRUE,
#line 1899
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1901
            .species = SPECIES_YANMEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1903
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 1902
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1905
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1907
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 1906
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1909
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1911
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 1910
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1913
    [TRAINER_HOPE] =
    {
#line 1914
        .trainerName = _("HOPE"),
#line 1915
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1916
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1917
F_TRAINER_FEMALE | 
#line 1918
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1919
        .doubleBattle = TRUE,
#line 1920
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1922
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1924
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1923
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1926
    [TRAINER_SHANNON] =
    {
#line 1927
        .trainerName = _("SHANNON"),
#line 1928
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1929
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1930
F_TRAINER_FEMALE | 
#line 1931
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1932
        .doubleBattle = TRUE,
#line 1933
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1935
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1937
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1936
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1939
    [TRAINER_MICHELLE] =
    {
#line 1940
        .trainerName = _("MICHELLE"),
#line 1941
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1942
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1943
F_TRAINER_FEMALE | 
#line 1944
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1945
        .doubleBattle = TRUE,
#line 1946
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1948
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1950
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1949
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1952
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1954
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1953
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1956
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1958
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1957
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1960
    [TRAINER_CAROLINE] =
    {
#line 1961
        .trainerName = _("CAROLINE"),
#line 1962
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1963
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1964
F_TRAINER_FEMALE | 
#line 1965
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1966
        .doubleBattle = TRUE,
#line 1967
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1969
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1971
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1970
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1973
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1975
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1974
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1977
    [TRAINER_JULIE] =
    {
#line 1978
        .trainerName = _("JULIE"),
#line 1979
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1980
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1981
F_TRAINER_FEMALE | 
#line 1982
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1983
        .doubleBattle = TRUE,
#line 1984
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1986
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1988
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1987
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1990
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1992
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1991
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1994
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1996
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1995
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1998
    [TRAINER_PATRICIA] =
    {
#line 1999
        .trainerName = _("PATRICIA"),
#line 2000
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 2001
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 2002
F_TRAINER_FEMALE | 
#line 2003
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2004
        .doubleBattle = TRUE,
#line 2005
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2007
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2009
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2008
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2011
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2013
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2012
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2015
    [TRAINER_KINDRA] =
    {
#line 2016
        .trainerName = _("KINDRA"),
#line 2017
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 2018
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 2019
F_TRAINER_FEMALE | 
#line 2020
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2021
        .doubleBattle = TRUE,
#line 2022
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2024
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2026
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2025
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2028
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2030
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2029
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2032
    [TRAINER_TAMMY] =
    {
#line 2033
        .trainerName = _("TAMMY"),
#line 2034
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 2035
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 2036
F_TRAINER_FEMALE | 
#line 2037
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2038
        .doubleBattle = TRUE,
#line 2039
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2041
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2043
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2042
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2045
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2047
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2046
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2049
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2051
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2050
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2053
    [TRAINER_VALERIE_1] =
    {
#line 2054
        .trainerName = _("VALERIE"),
#line 2055
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 2056
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 2057
F_TRAINER_FEMALE | 
#line 2058
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2059
        .doubleBattle = TRUE,
#line 2060
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2062
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2064
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2063
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2066
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2068
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2067
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2070
    [TRAINER_TASHA] =
    {
#line 2071
        .trainerName = _("TASHA"),
#line 2072
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 2073
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 2074
F_TRAINER_FEMALE | 
#line 2075
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2076
        .doubleBattle = TRUE,
#line 2077
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2079
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2081
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 2080
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2083
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2085
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 2084
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2087
    [TRAINER_CINDY_1] =
    {
#line 2088
        .trainerName = _("CINDY"),
#line 2089
        .trainerClass = TRAINER_CLASS_LADY,
#line 2090
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 2091
F_TRAINER_FEMALE | 
#line 2092
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2093
        .doubleBattle = TRUE,
#line 2094
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2096
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2096
            .heldItem = ITEM_NUGGET,
#line 2099
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2098
            .ability = ABILITY_WATER_BUBBLE,
#line 2097
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2101
            .species = SPECIES_BUDEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2101
            .heldItem = ITEM_NUGGET,
#line 2104
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2103
            .ability = ABILITY_NATURAL_CURE,
#line 2102
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2106
    [TRAINER_DAPHNE] =
    {
#line 2107
        .trainerName = _("DAPHNE"),
#line 2108
        .trainerClass = TRAINER_CLASS_LADY,
#line 2109
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 2110
F_TRAINER_FEMALE | 
#line 2111
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2112
        .doubleBattle = TRUE,
#line 2113
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2115
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2115
            .heldItem = ITEM_NUGGET,
#line 2117
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2116
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2119
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2119
            .heldItem = ITEM_NUGGET,
#line 2121
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2120
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2123
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2123
            .heldItem = ITEM_NUGGET,
#line 2125
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2124
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2127
    [TRAINER_GRUNT_SPACE_CENTER_2] =
    {
#line 2128
        .trainerName = _("GRUNT"),
#line 2129
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 2130
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 2132
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 2133
        .doubleBattle = TRUE,
#line 2134
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2136
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2138
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2137
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2140
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2142
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2141
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2144
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2146
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2145
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2148
    [TRAINER_BRIANNA] =
    {
#line 2149
        .trainerName = _("BRIANNA"),
#line 2150
        .trainerClass = TRAINER_CLASS_LADY,
#line 2151
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 2152
F_TRAINER_FEMALE | 
#line 2153
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2154
        .doubleBattle = TRUE,
#line 2155
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2157
            .species = SPECIES_DEWGONG_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2157
            .heldItem = ITEM_NUGGET,
#line 2159
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2158
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2161
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2161
            .heldItem = ITEM_NUGGET,
#line 2163
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2162
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2165
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2165
            .heldItem = ITEM_NUGGET,
#line 2167
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2166
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2169
    [TRAINER_NAOMI] =
    {
#line 2170
        .trainerName = _("NAOMI"),
#line 2171
        .trainerClass = TRAINER_CLASS_LADY,
#line 2172
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 2173
F_TRAINER_FEMALE | 
#line 2174
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2175
        .doubleBattle = TRUE,
#line 2176
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2178
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2178
            .heldItem = ITEM_NUGGET,
#line 2180
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2179
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2182
    [TRAINER_MELISSA] =
    {
#line 2183
        .trainerName = _("MELISSA"),
#line 2184
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2185
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2186
F_TRAINER_FEMALE | 
#line 2187
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2188
        .doubleBattle = TRUE,
#line 2189
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2191
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2193
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2192
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2195
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2197
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2196
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2199
    [TRAINER_SHEILA] =
    {
#line 2200
        .trainerName = _("SHEILA"),
#line 2201
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2202
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2203
F_TRAINER_FEMALE | 
#line 2204
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2205
        .doubleBattle = TRUE,
#line 2206
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2208
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2210
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2209
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2212
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2214
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2213
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2216
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2218
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2217
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2220
    [TRAINER_SHIRLEY] =
    {
#line 2221
        .trainerName = _("SHIRLEY"),
#line 2222
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2223
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2224
F_TRAINER_FEMALE | 
#line 2225
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2226
        .doubleBattle = TRUE,
#line 2227
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2229
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2231
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2230
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2233
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2235
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2234
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2237
    [TRAINER_JESSICA_1] =
    {
#line 2238
        .trainerName = _("JESSICA"),
#line 2239
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2240
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2241
F_TRAINER_FEMALE | 
#line 2242
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2243
        .doubleBattle = TRUE,
#line 2244
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2246
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2248
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2247
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2250
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2252
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2251
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2254
            .species = SPECIES_CHERRIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2256
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2255
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2258
    [TRAINER_CONNIE] =
    {
#line 2259
        .trainerName = _("CONNIE"),
#line 2260
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2261
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2262
F_TRAINER_FEMALE | 
#line 2263
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2264
        .doubleBattle = TRUE,
#line 2265
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2267
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2269
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2268
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2271
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2273
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2272
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2275
    [TRAINER_BRIDGET] =
    {
#line 2276
        .trainerName = _("BRIDGET"),
#line 2277
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2278
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2279
F_TRAINER_FEMALE | 
#line 2280
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2281
        .doubleBattle = TRUE,
#line 2282
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2284
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2286
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2285
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2288
            .species = SPECIES_GOLISOPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2290
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2289
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2292
    [TRAINER_OLIVIA] =
    {
#line 2293
        .trainerName = _("OLIVIA"),
#line 2294
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2295
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2296
F_TRAINER_FEMALE | 
#line 2297
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2298
        .doubleBattle = TRUE,
#line 2299
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2301
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2303
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2302
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2305
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2307
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2306
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2309
    [TRAINER_TIFFANY] =
    {
#line 2310
        .trainerName = _("TIFFANY"),
#line 2311
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2312
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2313
F_TRAINER_FEMALE | 
#line 2314
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2315
        .doubleBattle = TRUE,
#line 2316
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2318
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2320
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2319
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2322
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2324
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2323
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2326
    [TRAINER_WINSTON_1] =
    {
#line 2327
        .trainerName = _("WINSTON"),
#line 2328
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 2329
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender = 
#line 2331
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2332
        .doubleBattle = TRUE,
#line 2333
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2335
            .species = SPECIES_SHROODLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2335
            .heldItem = ITEM_NUGGET,
#line 2337
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2336
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2339
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2339
            .heldItem = ITEM_NUGGET,
#line 2341
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2340
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2343
    [TRAINER_MOLLIE] =
    {
#line 2344
        .trainerName = _("MOLLIE"),
#line 2345
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 2346
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 2347
F_TRAINER_FEMALE | 
#line 2348
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2349
        .doubleBattle = TRUE,
#line 2350
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2352
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2354
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2353
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2356
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2358
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 2357
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2360
    [TRAINER_GARRET] =
    {
#line 2361
        .trainerName = _("GARRET"),
#line 2362
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 2363
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender = 
#line 2365
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2366
        .doubleBattle = TRUE,
#line 2367
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2369
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2369
            .heldItem = ITEM_NUGGET,
#line 2371
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2370
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2373
    [TRAINER_STEVE_1] =
    {
#line 2374
        .trainerName = _("STEVE"),
#line 2375
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2376
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender = 
#line 2378
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2379
        .doubleBattle = TRUE,
#line 2380
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2382
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2384
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2383
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2386
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2388
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2387
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2390
    [TRAINER_THALIA_1] =
    {
#line 2391
        .trainerName = _("THALIA"),
#line 2392
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2393
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2394
F_TRAINER_FEMALE | 
#line 2395
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2396
        .doubleBattle = TRUE,
#line 2397
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2399
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2401
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2400
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2403
            .species = SPECIES_SUNFLORA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2405
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2404
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2407
    [TRAINER_MARK] =
    {
#line 2408
        .trainerName = _("MARK"),
#line 2409
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2410
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender = 
#line 2412
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2413
        .doubleBattle = TRUE,
#line 2414
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2416
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2418
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2417
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2420
            .species = SPECIES_MAROWAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2422
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2421
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2424
    [TRAINER_GRUNT_MT_CHIMNEY_1] =
    {
#line 2425
        .trainerName = _("GRUNT"),
#line 2426
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 2427
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender = 
#line 2428
F_TRAINER_FEMALE | 
#line 2429
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 2430
        .doubleBattle = TRUE,
#line 2431
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2433
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2435
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2434
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2437
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2439
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2438
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2441
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2443
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2442
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2445
    [TRAINER_LUIS] =
    {
#line 2446
        .trainerName = _("LUIS"),
#line 2447
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2448
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2450
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2451
        .doubleBattle = TRUE,
#line 2452
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2454
            .species = SPECIES_TADBULB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2456
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2455
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2458
            .species = SPECIES_CRABRAWLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2460
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2459
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2462
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2464
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2463
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2466
    [TRAINER_DOMINIK] =
    {
#line 2467
        .trainerName = _("DOMINIK"),
#line 2468
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2469
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2471
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2472
        .doubleBattle = TRUE,
#line 2473
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2475
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2477
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2476
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2479
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2481
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2480
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2483
    [TRAINER_DOUGLAS] =
    {
#line 2484
        .trainerName = _("DOUGLAS"),
#line 2485
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2486
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2488
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2489
        .doubleBattle = TRUE,
#line 2490
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2492
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2494
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2493
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2496
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2498
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2497
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2500
    [TRAINER_DARRIN] =
    {
#line 2501
        .trainerName = _("DARRIN"),
#line 2502
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2503
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2505
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2506
        .doubleBattle = TRUE,
#line 2507
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2509
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2511
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2510
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2513
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2515
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2514
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2517
    [TRAINER_TONY_1] =
    {
#line 2518
        .trainerName = _("TONY"),
#line 2519
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2520
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2522
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2523
        .doubleBattle = TRUE,
#line 2524
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2526
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2528
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2527
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2530
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2532
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2531
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2534
    [TRAINER_JEROME] =
    {
#line 2535
        .trainerName = _("JEROME"),
#line 2536
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2537
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2539
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2540
        .doubleBattle = TRUE,
#line 2541
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2543
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2545
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2544
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2547
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2549
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2548
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2551
    [TRAINER_MATTHEW] =
    {
#line 2552
        .trainerName = _("MATTHEW"),
#line 2553
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2554
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2556
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2557
        .doubleBattle = TRUE,
#line 2558
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2560
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2562
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2561
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2564
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2566
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2565
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2568
    [TRAINER_DAVID] =
    {
#line 2569
        .trainerName = _("DAVID"),
#line 2570
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2571
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2573
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2574
        .doubleBattle = TRUE,
#line 2575
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2577
            .species = SPECIES_SKRELP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2579
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2578
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2581
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2583
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2582
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2585
    [TRAINER_SPENCER] =
    {
#line 2586
        .trainerName = _("SPENCER"),
#line 2587
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2588
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2590
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2591
        .doubleBattle = TRUE,
#line 2592
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2594
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2596
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2595
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2598
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2600
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2599
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2602
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2604
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2603
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2606
    [TRAINER_ROLAND] =
    {
#line 2607
        .trainerName = _("ROLAND"),
#line 2608
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2609
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2611
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2612
        .doubleBattle = TRUE,
#line 2613
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2615
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2617
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2616
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2619
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2621
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2620
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2623
    [TRAINER_NOLEN] =
    {
#line 2624
        .trainerName = _("NOLEN"),
#line 2625
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2626
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2628
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2629
        .doubleBattle = TRUE,
#line 2630
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2632
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2634
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2633
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2636
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2638
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2637
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2640
    [TRAINER_STAN] =
    {
#line 2641
        .trainerName = _("STAN"),
#line 2642
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2643
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2645
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2646
        .doubleBattle = TRUE,
#line 2647
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2649
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2651
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2650
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2653
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2655
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2654
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2657
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2659
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2658
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2661
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2663
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2662
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2665
    [TRAINER_BARRY] =
    {
#line 2666
        .trainerName = _("BARRY"),
#line 2667
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2668
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2670
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2671
        .doubleBattle = TRUE,
#line 2672
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2674
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2676
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2675
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2678
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2680
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2679
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2682
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2684
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2683
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2686
    [TRAINER_DEAN] =
    {
#line 2687
        .trainerName = _("DEAN"),
#line 2688
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2689
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2691
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2692
        .doubleBattle = TRUE,
#line 2693
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2695
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2697
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2696
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2699
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2701
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2700
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2703
    [TRAINER_RODNEY] =
    {
#line 2704
        .trainerName = _("RODNEY"),
#line 2705
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2706
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2708
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2709
        .doubleBattle = TRUE,
#line 2710
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2712
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2714
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2713
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2716
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2718
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2717
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2720
    [TRAINER_RICHARD] =
    {
#line 2721
        .trainerName = _("RICHARD"),
#line 2722
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2723
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2725
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2726
        .doubleBattle = TRUE,
#line 2727
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2729
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2731
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2730
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2733
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2735
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2734
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2737
    [TRAINER_HERMAN] =
    {
#line 2738
        .trainerName = _("HERMAN"),
#line 2739
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2740
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2742
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2743
        .doubleBattle = TRUE,
#line 2744
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2746
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2748
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2747
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2750
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2752
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2751
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2754
    [TRAINER_SANTIAGO] =
    {
#line 2755
        .trainerName = _("SANTIAGO"),
#line 2756
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2757
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2759
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2760
        .doubleBattle = TRUE,
#line 2761
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2763
            .species = SPECIES_MIENFOO_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2765
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2764
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2767
            .species = SPECIES_GRAPPLOCT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2769
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2768
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2771
    [TRAINER_GILBERT] =
    {
#line 2772
        .trainerName = _("GILBERT"),
#line 2773
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2774
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2776
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2777
        .doubleBattle = TRUE,
#line 2778
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2780
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2782
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2781
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2784
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2786
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2785
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2788
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2790
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2789
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2792
            .species = SPECIES_GRAPPLOCT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2794
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2793
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2796
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2798
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2797
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2800
    [TRAINER_FRANKLIN] =
    {
#line 2801
        .trainerName = _("FRANKLIN"),
#line 2802
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2803
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2805
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2806
        .doubleBattle = TRUE,
#line 2807
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2809
            .species = SPECIES_HUNTAIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2811
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2810
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2813
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2815
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2814
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2817
    [TRAINER_KEVIN] =
    {
#line 2818
        .trainerName = _("KEVIN"),
#line 2819
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2820
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2822
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2823
        .doubleBattle = TRUE,
#line 2824
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2826
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2828
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2827
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2830
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2832
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2831
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2834
    [TRAINER_JACK] =
    {
#line 2835
        .trainerName = _("JACK"),
#line 2836
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2837
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2839
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2840
        .doubleBattle = TRUE,
#line 2841
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2843
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2845
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2844
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2847
            .species = SPECIES_KILOWATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2849
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2848
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2851
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2853
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2852
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2855
    [TRAINER_DUDLEY] =
    {
#line 2856
        .trainerName = _("DUDLEY"),
#line 2857
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2858
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2860
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2861
        .doubleBattle = TRUE,
#line 2862
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2864
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2866
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2865
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2868
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2870
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2869
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2872
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2874
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2873
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2876
    [TRAINER_CHAD] =
    {
#line 2877
        .trainerName = _("CHAD"),
#line 2878
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2879
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2881
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2882
        .doubleBattle = TRUE,
#line 2883
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2885
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2887
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2886
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2889
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2891
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2890
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2893
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2895
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2894
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2897
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2899
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2898
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2901
    [TRAINER_TAKAO] =
    {
#line 2902
        .trainerName = _("TAKAO"),
#line 2903
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2904
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 2906
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2907
        .doubleBattle = TRUE,
#line 2908
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2910
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2912
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 2911
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2914
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2916
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 2915
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2918
    [TRAINER_HITOSHI] =
    {
#line 2919
        .trainerName = _("HITOSHI"),
#line 2920
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2921
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 2923
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2924
        .doubleBattle = TRUE,
#line 2925
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2927
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2929
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 2928
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2931
            .species = SPECIES_GRAPPLOCT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2933
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 2932
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2935
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2937
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 2936
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2939
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2941
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 2940
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2943
    [TRAINER_KIYO] =
    {
#line 2944
        .trainerName = _("KIYO"),
#line 2945
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2946
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 2948
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2949
        .doubleBattle = TRUE,
#line 2950
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2952
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2954
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2953
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2956
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2958
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2957
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2960
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2962
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2961
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2964
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2966
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2965
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2968
    [TRAINER_KOICHI] =
    {
#line 2969
        .trainerName = _("KOICHI"),
#line 2970
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2971
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 2973
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2974
        .doubleBattle = TRUE,
#line 2975
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2977
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2979
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2978
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2981
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2983
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2982
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2985
            .species = SPECIES_GRAPPLOCT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2987
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2986
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2989
    [TRAINER_NOB_1] =
    {
#line 2990
        .trainerName = _("NOB"),
#line 2991
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2992
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 2994
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2995
        .doubleBattle = TRUE,
#line 2996
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2998
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3000
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 2999
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3002
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3004
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 3003
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3006
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3008
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 3007
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3010
    [TRAINER_YUJI] =
    {
#line 3011
        .trainerName = _("YUJI"),
#line 3012
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 3013
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 3015
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3016
        .doubleBattle = TRUE,
#line 3017
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3019
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3021
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3020
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3023
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3025
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3024
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3027
    [TRAINER_DAISUKE] =
    {
#line 3028
        .trainerName = _("DAISUKE"),
#line 3029
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 3030
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 3032
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3033
        .doubleBattle = TRUE,
#line 3034
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3036
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3038
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3037
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3040
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3042
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3041
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3044
    [TRAINER_ATSUSHI] =
    {
#line 3045
        .trainerName = _("ATSUSHI"),
#line 3046
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 3047
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 3049
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3050
        .doubleBattle = TRUE,
#line 3051
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3053
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3055
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3054
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3057
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3059
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3058
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3061
    [TRAINER_KIRK] =
    {
#line 3062
        .trainerName = _("KIRK"),
#line 3063
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 3064
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 3066
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3067
        .doubleBattle = TRUE,
#line 3068
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3070
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3072
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3071
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3074
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3076
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3075
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3078
    [TRAINER_GRUNT_AQUA_HIDEOUT_7] =
    {
#line 3079
        .trainerName = _("GRUNT"),
#line 3080
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 3081
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 3082
F_TRAINER_FEMALE | 
#line 3083
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 3084
        .doubleBattle = TRUE,
#line 3085
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3087
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3089
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3088
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3091
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3093
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3092
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3095
    [TRAINER_GRUNT_AQUA_HIDEOUT_8] =
    {
#line 3096
        .trainerName = _("GRUNT"),
#line 3097
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 3098
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 3100
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 3101
        .doubleBattle = TRUE,
#line 3102
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3104
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3106
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3105
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3108
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3110
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3109
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3112
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3114
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3113
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3116
    [TRAINER_SHAWN] =
    {
#line 3117
        .trainerName = _("SHAWN"),
#line 3118
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 3119
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 3121
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3122
        .doubleBattle = TRUE,
#line 3123
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3125
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3127
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3126
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3129
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3131
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3130
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3133
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3135
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3134
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3137
    [TRAINER_FERNANDO_1] =
    {
#line 3138
        .trainerName = _("FERNANDO"),
#line 3139
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 3140
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 3142
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3143
        .doubleBattle = TRUE,
#line 3144
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3146
            .species = SPECIES_REVAVROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3148
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3147
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3150
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3152
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3151
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3154
    [TRAINER_DALTON_1] =
    {
#line 3155
        .trainerName = _("DALTON"),
#line 3156
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 3157
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 3159
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3160
        .doubleBattle = TRUE,
#line 3161
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3163
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3165
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3164
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3167
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3169
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3168
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3171
    [TRAINER_COLE] =
    {
#line 3172
        .trainerName = _("COLE"),
#line 3173
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 3174
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 3176
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3177
        .doubleBattle = TRUE,
#line 3178
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3180
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3182
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3181
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3184
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3186
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3185
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3188
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3190
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3189
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3192
    [TRAINER_JEFF] =
    {
#line 3193
        .trainerName = _("JEFF"),
#line 3194
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 3195
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 3197
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3198
        .doubleBattle = TRUE,
#line 3199
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3201
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3203
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3202
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3205
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3207
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3206
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3209
    [TRAINER_AXLE] =
    {
#line 3210
        .trainerName = _("AXLE"),
#line 3211
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 3212
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 3214
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3215
        .doubleBattle = TRUE,
#line 3216
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3218
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3220
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3219
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3222
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3224
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3223
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3226
    [TRAINER_JACE] =
    {
#line 3227
        .trainerName = _("JACE"),
#line 3228
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 3229
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 3231
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3232
        .doubleBattle = TRUE,
#line 3233
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3235
            .species = SPECIES_SUNKERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3237
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3236
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3239
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3241
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3240
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3243
    [TRAINER_KEEGAN] =
    {
#line 3244
        .trainerName = _("KEEGAN"),
#line 3245
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 3246
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 3248
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3249
        .doubleBattle = TRUE,
#line 3250
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3252
            .species = SPECIES_SUNKERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3254
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3253
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3256
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3258
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3257
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3260
    [TRAINER_BERNIE_1] =
    {
#line 3261
        .trainerName = _("BERNIE"),
#line 3262
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 3263
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 3265
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3266
        .doubleBattle = TRUE,
#line 3267
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3269
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3271
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3270
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3273
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3275
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3274
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3277
    [TRAINER_DREW] =
    {
#line 3278
        .trainerName = _("DREW"),
#line 3279
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3280
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 3282
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3283
        .doubleBattle = TRUE,
#line 3284
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3286
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3288
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3287
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3289
                MOVE_DIG,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
                MOVE_SLASH,
            },
            },
            {
#line 3294
            .species = SPECIES_CACNEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3296
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3295
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3297
                MOVE_PIN_MISSILE,
                MOVE_LEER,
                MOVE_INGRAIN,
                MOVE_BULLET_SEED,
            },
            },
            {
#line 3302
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3304
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3303
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3305
                MOVE_DIG,
                MOVE_POWDER_SNOW,
                MOVE_ICE_SHARD,
                MOVE_MUD_SLAP,
            },
            },
        },
    },
#line 3310
    [TRAINER_BEAU] =
    {
#line 3311
        .trainerName = _("BEAU"),
#line 3312
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3313
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 3315
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3316
        .doubleBattle = TRUE,
#line 3317
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3319
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3321
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3320
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3323
            .species = SPECIES_CUFANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3325
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3324
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3327
    [TRAINER_LARRY] =
    {
#line 3328
        .trainerName = _("LARRY"),
#line 3329
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3330
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 3332
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3333
        .doubleBattle = TRUE,
#line 3334
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3336
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3338
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3337
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3340
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3342
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3341
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3344
    [TRAINER_SHANE] =
    {
#line 3345
        .trainerName = _("SHANE"),
#line 3346
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3347
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 3349
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3350
        .doubleBattle = TRUE,
#line 3351
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3353
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3355
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3354
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3357
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3359
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3358
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3361
    [TRAINER_JUSTIN] =
    {
#line 3362
        .trainerName = _("JUSTIN"),
#line 3363
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3364
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 3366
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3367
        .doubleBattle = TRUE,
#line 3368
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3370
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3372
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3371
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3374
    [TRAINER_ETHAN_1] =
    {
#line 3375
        .trainerName = _("ETHAN"),
#line 3376
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3377
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 3379
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3380
        .doubleBattle = TRUE,
#line 3381
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3383
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3385
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3384
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3387
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3389
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3388
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3391
            .species = SPECIES_CUFANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3393
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3392
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3395
    [TRAINER_AUTUMN] =
    {
#line 3396
        .trainerName = _("AUTUMN"),
#line 3397
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 3398
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 3399
F_TRAINER_FEMALE | 
#line 3400
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3401
        .doubleBattle = TRUE,
#line 3402
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3404
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3406
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3405
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3408
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3410
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3409
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3412
    [TRAINER_TRAVIS] =
    {
#line 3413
        .trainerName = _("TRAVIS"),
#line 3414
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3415
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 3417
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3418
        .doubleBattle = TRUE,
#line 3419
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3421
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3423
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3422
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3425
            .species = SPECIES_SKIDDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3427
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3426
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3429
    [TRAINER_BRENT] =
    {
#line 3430
        .trainerName = _("BRENT"),
#line 3431
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3432
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 3434
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3435
        .doubleBattle = TRUE,
#line 3436
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3438
            .species = SPECIES_LARVESTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3440
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3439
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3442
            .species = SPECIES_SNOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3444
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3443
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3446
    [TRAINER_DONALD] =
    {
#line 3447
        .trainerName = _("DONALD"),
#line 3448
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3449
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 3451
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3452
        .doubleBattle = TRUE,
#line 3453
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3455
            .species = SPECIES_GOLISOPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3457
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3456
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3459
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3461
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3460
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3463
    [TRAINER_TAYLOR] =
    {
#line 3464
        .trainerName = _("TAYLOR"),
#line 3465
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3466
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 3468
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3469
        .doubleBattle = TRUE,
#line 3470
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3472
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3474
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3473
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3476
            .species = SPECIES_GALVANTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3478
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3477
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3480
    [TRAINER_JEFFREY_1] =
    {
#line 3481
        .trainerName = _("JEFFREY"),
#line 3482
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3483
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 3485
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3486
        .doubleBattle = TRUE,
#line 3487
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3489
            .species = SPECIES_SCYTHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3491
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3490
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3493
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3495
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3494
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3497
    [TRAINER_DEREK] =
    {
#line 3498
        .trainerName = _("DEREK"),
#line 3499
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3500
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 3502
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3503
        .doubleBattle = TRUE,
#line 3504
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3506
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3508
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 3507
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3510
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3512
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 3511
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3514
    [TRAINER_EDWARD] =
    {
#line 3515
        .trainerName = _("EDWARD"),
#line 3516
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3517
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 3519
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3520
        .doubleBattle = TRUE,
#line 3521
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3523
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3525
            .iv = TRAINER_PARTY_IVS(3, 18, 4, 2, 2, 4),
#line 3524
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3526
                MOVE_HIDDEN_POWER,
            },
            },
            {
#line 3528
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3530
            .iv = TRAINER_PARTY_IVS(3, 17, 4, 2, 2, 4),
#line 3529
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3531
                MOVE_HIDDEN_POWER,
            },
            },
        },
    },
#line 3533
    [TRAINER_PRESTON] =
    {
#line 3534
        .trainerName = _("PRESTON"),
#line 3535
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3536
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 3538
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3539
        .doubleBattle = TRUE,
#line 3540
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3542
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3544
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3543
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3546
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3548
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3547
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3550
    [TRAINER_VIRGIL] =
    {
#line 3551
        .trainerName = _("VIRGIL"),
#line 3552
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3553
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 3555
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3556
        .doubleBattle = TRUE,
#line 3557
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3559
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3561
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3560
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3563
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3565
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3564
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3567
    [TRAINER_BLAKE] =
    {
#line 3568
        .trainerName = _("BLAKE"),
#line 3569
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3570
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 3572
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3573
        .doubleBattle = TRUE,
#line 3574
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3576
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3578
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3577
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3580
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3582
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3581
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3584
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3586
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3585
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3588
    [TRAINER_WILLIAM] =
    {
#line 3589
        .trainerName = _("WILLIAM"),
#line 3590
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3591
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 3593
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3594
        .doubleBattle = TRUE,
#line 3595
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3597
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3599
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3598
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3601
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3603
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3602
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3605
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3607
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3606
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3609
    [TRAINER_JOSHUA] =
    {
#line 3610
        .trainerName = _("JOSHUA"),
#line 3611
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3612
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 3614
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3615
        .doubleBattle = TRUE,
#line 3616
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3618
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3620
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3619
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3622
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3624
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3623
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3626
    [TRAINER_CAMERON_1] =
    {
#line 3627
        .trainerName = _("CAMERON"),
#line 3628
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3629
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 3631
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3632
        .doubleBattle = TRUE,
#line 3633
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3635
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3637
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3636
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3639
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3641
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3640
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3643
    [TRAINER_JACLYN] =
    {
#line 3644
        .trainerName = _("JACLYN"),
#line 3645
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3646
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 3647
F_TRAINER_FEMALE | 
#line 3648
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3649
        .doubleBattle = TRUE,
#line 3650
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3652
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3654
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3653
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3656
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3658
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3657
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3660
    [TRAINER_HANNAH] =
    {
#line 3661
        .trainerName = _("HANNAH"),
#line 3662
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3663
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 3664
F_TRAINER_FEMALE | 
#line 3665
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3666
        .doubleBattle = TRUE,
#line 3667
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3669
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3671
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3670
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3673
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3675
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3674
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3677
    [TRAINER_SAMANTHA] =
    {
#line 3678
        .trainerName = _("SAMANTHA"),
#line 3679
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3680
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 3681
F_TRAINER_FEMALE | 
#line 3682
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3683
        .doubleBattle = TRUE,
#line 3684
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3686
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3688
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3687
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3690
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3692
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3691
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3694
    [TRAINER_MAURA] =
    {
#line 3695
        .trainerName = _("MAURA"),
#line 3696
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3697
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 3698
F_TRAINER_FEMALE | 
#line 3699
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3700
        .doubleBattle = TRUE,
#line 3701
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3703
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3705
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3704
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3707
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3709
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3708
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3711
            .species = SPECIES_ORICORIO_PAU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3713
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3712
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3715
    [TRAINER_KAYLA] =
    {
#line 3716
        .trainerName = _("KAYLA"),
#line 3717
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3718
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 3719
F_TRAINER_FEMALE | 
#line 3720
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3721
        .doubleBattle = TRUE,
#line 3722
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3724
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3726
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3725
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3728
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3730
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3729
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3732
    [TRAINER_ALEXIS] =
    {
#line 3733
        .trainerName = _("ALEXIS"),
#line 3734
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3735
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 3736
F_TRAINER_FEMALE | 
#line 3737
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3738
        .doubleBattle = TRUE,
#line 3739
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3741
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3743
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3742
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3745
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3747
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3746
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3749
    [TRAINER_JACKI_1] =
    {
#line 3750
        .trainerName = _("JACKI"),
#line 3751
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3752
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 3753
F_TRAINER_FEMALE | 
#line 3754
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3755
        .doubleBattle = TRUE,
#line 3756
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3758
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3760
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3759
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3762
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3764
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3763
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3766
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3768
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3767
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3770
    [TRAINER_WALTER_1] =
    {
#line 3771
        .trainerName = _("WALTER"),
#line 3772
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3773
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 3775
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3776
        .doubleBattle = TRUE,
#line 3777
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3779
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3781
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3780
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3783
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3785
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3784
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3787
    [TRAINER_MICAH] =
    {
#line 3788
        .trainerName = _("MICAH"),
#line 3789
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3790
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 3792
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3793
        .doubleBattle = TRUE,
#line 3794
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3796
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3798
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3797
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3800
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3802
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3801
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3804
    [TRAINER_THOMAS] =
    {
#line 3805
        .trainerName = _("THOMAS"),
#line 3806
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3807
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 3809
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3810
        .doubleBattle = TRUE,
#line 3811
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3813
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3815
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3814
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3817
    [TRAINER_SIDNEY] =
    {
#line 3818
        .trainerName = _("SIDNEY"),
#line 3819
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3820
        .trainerPic = TRAINER_PIC_ELITE_FOUR_SIDNEY,
        .encounterMusic_gender = 
#line 3822
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3823
        .doubleBattle = TRUE,
#line 3824
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SETUP_FIRST_TURN,
#line 3825
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3827
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3829
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3828
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3830
                MOVE_ROAR,
                MOVE_DOUBLE_EDGE,
                MOVE_SAND_ATTACK,
                MOVE_CRUNCH,
            },
            },
            {
#line 3835
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3837
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3836
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3838
                MOVE_TORMENT,
                MOVE_DOUBLE_TEAM,
                MOVE_SWAGGER,
                MOVE_EXTRASENSORY,
            },
            },
            {
#line 3843
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3845
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3844
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3846
                MOVE_LEECH_SEED,
                MOVE_FEINT_ATTACK,
                MOVE_NEEDLE_ARM,
                MOVE_COTTON_SPORE,
            },
            },
            {
#line 3851
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3853
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3852
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3854
                MOVE_SURF,
                MOVE_SWORDS_DANCE,
                MOVE_STRENGTH,
                MOVE_FACADE,
            },
            },
            {
#line 3859
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3859
            .heldItem = ITEM_SITRUS_BERRY,
#line 3861
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3860
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3862
                MOVE_AERIAL_ACE,
                MOVE_ROCK_SLIDE,
                MOVE_SWORDS_DANCE,
                MOVE_SLASH,
            },
            },
        },
    },
#line 3867
    [TRAINER_PHOEBE] =
    {
#line 3868
        .trainerName = _("PHOEBE"),
#line 3869
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3870
        .trainerPic = TRAINER_PIC_ELITE_FOUR_PHOEBE,
        .encounterMusic_gender = 
#line 3871
F_TRAINER_FEMALE | 
#line 3872
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3873
        .doubleBattle = TRUE,
#line 3874
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 3875
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_GREEN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3877
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3879
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3878
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3880
                MOVE_SHADOW_PUNCH,
                MOVE_CONFUSE_RAY,
                MOVE_CURSE,
                MOVE_PROTECT,
            },
            },
            {
#line 3885
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3887
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3886
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3888
                MOVE_SHADOW_BALL,
                MOVE_GRUDGE,
                MOVE_WILL_O_WISP,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 3893
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3895
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3894
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3896
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_TEAM,
                MOVE_NIGHT_SHADE,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 3901
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3903
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3902
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3904
                MOVE_SHADOW_BALL,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_FACADE,
            },
            },
            {
#line 3909
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3909
            .heldItem = ITEM_SITRUS_BERRY,
#line 3911
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3910
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3912
                MOVE_SHADOW_BALL,
                MOVE_ICE_BEAM,
                MOVE_ROCK_SLIDE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 3917
    [TRAINER_GLACIA] =
    {
#line 3918
        .trainerName = _("GLACIA"),
#line 3919
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3920
        .trainerPic = TRAINER_PIC_ELITE_FOUR_GLACIA,
        .encounterMusic_gender = 
#line 3921
F_TRAINER_FEMALE | 
#line 3922
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3923
        .doubleBattle = TRUE,
#line 3924
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 3925
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PINK,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3927
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3929
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3928
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3930
                MOVE_ENCORE,
                MOVE_BODY_SLAM,
                MOVE_HAIL,
                MOVE_ICE_BALL,
            },
            },
            {
#line 3935
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3937
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3936
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3938
                MOVE_LIGHT_SCREEN,
                MOVE_CRUNCH,
                MOVE_ICY_WIND,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 3943
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3945
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3944
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3946
                MOVE_ATTRACT,
                MOVE_DOUBLE_EDGE,
                MOVE_HAIL,
                MOVE_BLIZZARD,
            },
            },
            {
#line 3951
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3953
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3952
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3954
                MOVE_SHADOW_BALL,
                MOVE_EXPLOSION,
                MOVE_HAIL,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 3959
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3959
            .heldItem = ITEM_SITRUS_BERRY,
#line 3961
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3960
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3962
                MOVE_SURF,
                MOVE_BODY_SLAM,
                MOVE_ICE_BEAM,
                MOVE_SHEER_COLD,
            },
            },
        },
    },
#line 3967
    [TRAINER_DRAKE] =
    {
#line 3968
        .trainerName = _("DRAKE"),
#line 3969
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3970
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .encounterMusic_gender = 
#line 3972
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3973
        .doubleBattle = TRUE,
#line 3974
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 3975
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3977
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3979
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3978
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3980
                MOVE_ROCK_TOMB,
                MOVE_DRAGON_CLAW,
                MOVE_PROTECT,
                MOVE_DOUBLE_EDGE,
            },
            },
            {
#line 3985
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3987
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3986
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3988
                MOVE_DOUBLE_EDGE,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 3993
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3995
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3994
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3996
                MOVE_SMOKESCREEN,
                MOVE_DRAGON_DANCE,
                MOVE_SURF,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 4001
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4003
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4002
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4004
                MOVE_FLAMETHROWER,
                MOVE_CRUNCH,
                MOVE_DRAGON_BREATH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 4009
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4009
            .heldItem = ITEM_SITRUS_BERRY,
#line 4011
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4010
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4012
                MOVE_FLAMETHROWER,
                MOVE_DRAGON_CLAW,
                MOVE_ROCK_SLIDE,
                MOVE_CRUNCH,
            },
            },
        },
    },
#line 4017
    [TRAINER_ROXANNE] =
    {
#line 4018
        .trainerName = _("ROXANNE"),
#line 4019
        .trainerClass = TRAINER_CLASS_LEADER,
#line 4020
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender = 
#line 4021
F_TRAINER_FEMALE | 
#line 4022
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4023
        .doubleBattle = TRUE,
#line 4024
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4026
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4030
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4028
            .ability = ABILITY_STORM_DRAIN,
#line 4027
            .lvl = 12,
#line 4029
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4031
                MOVE_STEALTH_ROCK,
                MOVE_LEECH_SEED,
                MOVE_ACID,
                MOVE_ABSORB,
            },
            },
            {
#line 4036
            .species = SPECIES_ANORITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4040
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4038
            .ability = ABILITY_BATTLE_ARMOR,
#line 4037
            .lvl = 12,
#line 4039
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4041
                MOVE_HONE_CLAWS,
                MOVE_FURY_CUTTER,
                MOVE_CUT,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 4046
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4046
            .heldItem = ITEM_CLEAR_AMULET,
#line 4050
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4048
            .ability = ABILITY_STURDY,
#line 4047
            .lvl = 12,
#line 4049
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4051
                MOVE_ROCK_TOMB,
                MOVE_SANDSTORM,
                MOVE_THUNDER_WAVE,
                MOVE_TORMENT,
            },
            },
            {
#line 4056
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4056
            .heldItem = ITEM_METRONOME,
#line 4059
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4057
            .lvl = 13,
#line 4058
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4060
                MOVE_DEFENSE_CURL,
                MOVE_ROLLOUT,
                MOVE_TRAILBLAZE,
                MOVE_FLAIL,
            },
            },
        },
    },
#line 4065
    [TRAINER_BRAWLY] =
    {
#line 4066
        .trainerName = _("BRAWLY"),
#line 4067
        .trainerClass = TRAINER_CLASS_LEADER,
#line 4068
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender = 
#line 4070
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4071
        .doubleBattle = TRUE,
#line 4072
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4074
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4074
            .heldItem = ITEM_ROOM_SERVICE,
#line 4078
            .iv = TRAINER_PARTY_IVS(30, 15, 30, 15, 15, 30),
#line 4076
            .ability = ABILITY_DRY_SKIN,
#line 4075
            .lvl = 16,
#line 4077
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4079
                MOVE_FAKE_OUT,
                MOVE_VENOSHOCK,
                MOVE_KARATE_CHOP,
                MOVE_BULK_UP,
            },
            },
            {
#line 4084
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4088
            .iv = TRAINER_PARTY_IVS(30, 15, 30, 0, 15, 30),
#line 4086
            .ability = ABILITY_PURE_POWER,
#line 4085
            .lvl = 16,
#line 4087
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4089
                MOVE_TRICK_ROOM,
                MOVE_COACHING,
                MOVE_VACUUM_WAVE,
                MOVE_CONFUSION,
            },
            },
            {
#line 4094
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4094
            .heldItem = ITEM_MYSTIC_WATER,
#line 4098
            .iv = TRAINER_PARTY_IVS(30, 15, 30, 0, 15, 30),
#line 4096
            .ability = ABILITY_HYPER_CUTTER,
#line 4095
            .lvl = 17,
#line 4097
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4099
                MOVE_PROTECT,
                MOVE_AQUA_JET,
                MOVE_KNOCK_OFF,
                MOVE_BRICK_BREAK,
            },
            },
            {
#line 4104
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4104
            .heldItem = ITEM_FLAME_ORB,
#line 4108
            .iv = TRAINER_PARTY_IVS(30, 15, 30, 0, 15, 30),
#line 4106
            .ability = ABILITY_GUTS,
#line 4105
            .lvl = 17,
#line 4107
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4109
                MOVE_BULLET_PUNCH,
                MOVE_FAKE_OUT,
                MOVE_PROTECT,
                MOVE_FORCE_PALM,
            },
            },
        },
    },
#line 4114
    [TRAINER_WATTSON] =
    {
#line 4115
        .trainerName = _("WATTSON"),
#line 4116
        .trainerClass = TRAINER_CLASS_LEADER,
#line 4117
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender = 
#line 4119
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4120
        .doubleBattle = TRUE,
#line 4121
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4123
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4127
            .iv = TRAINER_PARTY_IVS(30, 15, 15, 25, 25, 15),
#line 4125
            .ability = ABILITY_PLUS,
#line 4124
            .lvl = 21,
#line 4126
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4128
                MOVE_DISARMING_VOICE,
                MOVE_ENCORE,
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 4133
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4137
            .iv = TRAINER_PARTY_IVS(20, 15, 25, 25, 15, 25),
#line 4135
            .ability = ABILITY_MINUS,
#line 4134
            .lvl = 21,
#line 4136
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4138
                MOVE_NUZZLE,
                MOVE_HELPING_HAND,
                MOVE_TEARFUL_LOOK,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 4143
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4143
            .heldItem = ITEM_EVIOLITE,
#line 4147
            .iv = TRAINER_PARTY_IVS(30, 15, 30, 30, 20, 30),
#line 4145
            .ability = ABILITY_COMPOUND_EYES,
#line 4144
            .lvl = 22,
#line 4146
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4148
                MOVE_ELECTROWEB,
                MOVE_STRUGGLE_BUG,
                MOVE_DOUBLE_TEAM,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 4153
            .species = SPECIES_BELLIBOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4153
            .heldItem = ITEM_RED_CARD,
#line 4157
            .iv = TRAINER_PARTY_IVS(0, 0, 10, 0, 15, 10),
#line 4155
            .ability = ABILITY_ELECTROMORPHOSIS,
#line 4154
            .lvl = 22,
#line 4156
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4158
                MOVE_SHOCK_WAVE,
                MOVE_SLACK_OFF,
                MOVE_WATER_PULSE,
                MOVE_SOAK,
            },
            },
            {
#line 4163
            .species = SPECIES_ROTOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4163
            .heldItem = ITEM_LEFTOVERS,
#line 4167
            .iv = TRAINER_PARTY_IVS(30, 15, 15, 30, 15, 15),
#line 4165
            .ability = ABILITY_LEVITATE,
#line 4164
            .lvl = 23,
#line 4166
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4168
                MOVE_SHOCK_WAVE,
                MOVE_OMINOUS_WIND,
                MOVE_PROTECT,
                MOVE_SUBSTITUTE,
            },
            },
        },
    },
#line 4173
    [TRAINER_FLANNERY] =
    {
#line 4174
        .trainerName = _("FLANNERY"),
#line 4175
        .trainerClass = TRAINER_CLASS_LEADER,
#line 4176
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender = 
#line 4177
F_TRAINER_FEMALE | 
#line 4178
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4179
        .doubleBattle = TRUE,
#line 4180
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4182
            .species = SPECIES_SUNFLORA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4185
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4184
            .ability = ABILITY_DROUGHT,
#line 4183
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4186
                MOVE_PETAL_DANCE,
                MOVE_WEATHER_BALL,
                MOVE_SYNTHESIS,
                MOVE_GROWTH,
            },
            },
            {
#line 4191
            .species = SPECIES_ORICORIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4193
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4192
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4194
                MOVE_REHEARSAL,
                MOVE_AIR_CUTTER,
                MOVE_ICY_WIND,
                MOVE_FEATHER_DANCE,
            },
            },
            {
#line 4199
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4201
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4200
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4202
                MOVE_FLAME_CHARGE,
                MOVE_TAKE_DOWN,
                MOVE_MORNING_SUN,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 4207
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4207
            .heldItem = ITEM_WHITE_HERB,
#line 4210
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 4209
            .ability = ABILITY_WHITE_SMOKE,
#line 4208
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4211
                MOVE_OVERHEAT,
                MOVE_FIRE_SPIN,
                MOVE_BODY_SLAM,
                MOVE_ATTRACT,
            },
            },
            {
#line 4216
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4216
            .heldItem = ITEM_AIR_BALLOON,
#line 4219
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 4218
            .ability = ABILITY_EVAPORATE,
#line 4217
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4220
                MOVE_LAVA_PLUME,
                MOVE_YAWN,
                MOVE_ANCIENT_POWER,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 4225
            .species = SPECIES_DEWGONG_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4225
            .heldItem = ITEM_SITRUS_BERRY,
#line 4228
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4227
            .ability = ABILITY_STEAM_SHOWER,
#line 4226
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4229
                MOVE_SCALD,
                MOVE_FLAMETHROWER,
                MOVE_LIFE_DEW,
                MOVE_ENCORE,
            },
            },
        },
    },
#line 4234
    [TRAINER_NORMAN] =
    {
#line 4235
        .trainerName = _("NORMAN"),
#line 4236
        .trainerClass = TRAINER_CLASS_LEADER,
#line 4237
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender = 
#line 4239
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4240
        .doubleBattle = TRUE,
#line 4241
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4243
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4246
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 4245
            .ability = ABILITY_TRUANT,
#line 4244
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4247
                MOVE_FACADE,
                MOVE_SLACK_OFF,
                MOVE_FEINT,
                MOVE_SHADOW_CLAW,
            },
            },
            {
#line 4252
            .species = SPECIES_GRAFAIAI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4255
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 4254
            .ability = ABILITY_PRANKSTER,
#line 4253
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4256
                MOVE_DOODLE,
                MOVE_KNOCK_OFF,
                MOVE_GUNK_SHOT,
                MOVE_PARTING_SHOT,
            },
            },
            {
#line 4261
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4264
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4263
            .ability = ABILITY_FRIEND_GUARD,
#line 4262
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4265
                MOVE_DAZZLING_GLEAM,
                MOVE_SNARL,
                MOVE_ICY_WIND,
                MOVE_CHARM,
            },
            },
            {
#line 4270
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4273
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4272
            .ability = ABILITY_SCRAPPY,
#line 4271
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4274
                MOVE_HYPER_VOICE,
                MOVE_FLAMETHROWER,
                MOVE_ICE_BEAM,
                MOVE_STOMP,
            },
            },
            {
#line 4279
            .species = SPECIES_DRAMPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4279
            .heldItem = ITEM_CHESTO_BERRY,
#line 4281
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 4280
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4282
                MOVE_DRAGON_BREATH,
                MOVE_HEAT_WAVE,
                MOVE_REST,
                MOVE_SNORE,
            },
            },
            {
#line 4287
            .species = SPECIES_OBSTAGOON_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4287
            .heldItem = ITEM_FLAME_ORB,
#line 4290
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4289
            .ability = ABILITY_GUTS,
#line 4288
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4291
                MOVE_DOUBLE_EDGE,
                MOVE_SUBMISSION,
                MOVE_MAT_BLOCK,
                MOVE_HIGH_HORSEPOWER,
            },
            },
        },
    },
#line 4296
    [TRAINER_WINONA] =
    {
#line 4297
        .trainerName = _("WINONA"),
#line 4298
        .trainerClass = TRAINER_CLASS_LEADER,
#line 4299
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender = 
#line 4300
F_TRAINER_FEMALE | 
#line 4301
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4302
        .doubleBattle = TRUE,
#line 4303
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4305
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4305
            .heldItem = ITEM_FOCUS_SASH,
#line 4308
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 4307
            .ability = ABILITY_SCRAPPY,
#line 4306
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4309
                MOVE_ENDEAVOR,
                MOVE_FEATHER_DANCE,
                MOVE_AERIAL_ACE,
                MOVE_BOOMBURST,
            },
            },
            {
#line 4314
            .species = SPECIES_NOIVERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4317
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 4316
            .ability = ABILITY_TELEPATHY,
#line 4315
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4318
                MOVE_DRAGON_PULSE,
                MOVE_HEAT_WAVE,
                MOVE_WATER_PULSE,
                MOVE_TAILWIND,
            },
            },
            {
#line 4323
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4323
            .heldItem = ITEM_WIDE_LENS,
#line 4325
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 4324
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4326
                MOVE_BRAVE_BIRD,
                MOVE_JUMP_KICK,
                MOVE_DOUBLE_EDGE,
                MOVE_MIRROR_MOVE,
            },
            },
            {
#line 4331
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4331
            .heldItem = ITEM_ASSAULT_VEST,
#line 4334
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 4333
            .ability = ABILITY_THICK_FAT,
#line 4332
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4335
                MOVE_GIGA_DRAIN,
                MOVE_AIR_CUTTER,
                MOVE_BULLDOZE,
                MOVE_BREAKING_SWIPE,
            },
            },
            {
#line 4340
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4340
            .heldItem = ITEM_ORAN_BERRY,
#line 4343
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 4342
            .ability = ABILITY_SKY_SONATA,
#line 4341
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4344
                MOVE_COTTON_GUARD,
                MOVE_AIR_SLASH,
                MOVE_DAZZLING_GLEAM,
                MOVE_ROOST,
            },
            },
            {
#line 4349
            .species = SPECIES_PHIONE_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4349
            .heldItem = ITEM_LEFTOVERS,
#line 4352
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4351
            .ability = ABILITY_FREE_SPIRIT,
#line 4350
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4353
                MOVE_TAIL_GLOW,
                MOVE_HURRICANE,
                MOVE_MOONBLAST,
                MOVE_MOONLIGHT,
            },
            },
        },
    },
#line 4358
    [TRAINER_TATE_AND_LIZA] =
    {
#line 4359
        .trainerName = _("TATE&LIZA"),
#line 4360
        .trainerClass = TRAINER_CLASS_LEADER,
#line 4361
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender = 
#line 4363
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4364
        .doubleBattle = TRUE,
#line 4365
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4367
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4369
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4368
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4370
                MOVE_EARTHQUAKE,
                MOVE_ANCIENT_POWER,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 4375
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4377
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4376
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4378
                MOVE_PSYCHIC,
                MOVE_SUNNY_DAY,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 4383
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4383
            .heldItem = ITEM_SITRUS_BERRY,
#line 4385
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4384
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4386
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_HYPNOSIS,
                MOVE_CALM_MIND,
            },
            },
            {
#line 4391
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4391
            .heldItem = ITEM_SITRUS_BERRY,
#line 4393
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4392
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4394
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 4399
    [TRAINER_JUAN] =
    {
#line 4400
        .trainerName = _("JUAN"),
#line 4401
        .trainerClass = TRAINER_CLASS_LEADER,
#line 4402
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender = 
#line 4404
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4405
        .doubleBattle = TRUE,
#line 4406
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4408
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4410
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4409
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4411
                MOVE_WATER_PULSE,
                MOVE_ATTRACT,
                MOVE_SWEET_KISS,
                MOVE_FLAIL,
            },
            },
            {
#line 4416
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4418
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4417
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4419
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_AMNESIA,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 4424
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4426
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4425
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4427
                MOVE_ENCORE,
                MOVE_BODY_SLAM,
                MOVE_AURORA_BEAM,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 4432
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4434
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4433
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4435
                MOVE_WATER_PULSE,
                MOVE_CRABHAMMER,
                MOVE_TAUNT,
                MOVE_LEER,
            },
            },
            {
#line 4440
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4440
            .heldItem = ITEM_CHESTO_BERRY,
#line 4442
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4441
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4443
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 4448
    [TRAINER_JERRY_1] =
    {
#line 4449
        .trainerName = _("JERRY"),
#line 4450
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4451
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender = 
#line 4453
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4454
        .doubleBattle = TRUE,
#line 4455
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4457
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4459
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4458
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4461
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4463
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4462
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4465
    [TRAINER_TED] =
    {
#line 4466
        .trainerName = _("TED"),
#line 4467
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4468
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender = 
#line 4470
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4471
        .doubleBattle = TRUE,
#line 4472
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4474
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4476
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4475
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4478
    [TRAINER_PAUL] =
    {
#line 4479
        .trainerName = _("PAUL"),
#line 4480
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4481
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender = 
#line 4483
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4484
        .doubleBattle = TRUE,
#line 4485
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4487
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4489
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4488
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4491
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4493
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4492
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4495
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4497
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4496
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4499
    [TRAINER_KAREN_1] =
    {
#line 4500
        .trainerName = _("KAREN"),
#line 4501
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4502
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender = 
#line 4503
F_TRAINER_FEMALE | 
#line 4504
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4505
        .doubleBattle = TRUE,
#line 4506
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4508
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4510
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4509
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4512
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4514
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4513
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4516
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4518
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4517
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4520
    [TRAINER_GEORGIA] =
    {
#line 4521
        .trainerName = _("GEORGIA"),
#line 4522
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4523
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender = 
#line 4524
F_TRAINER_FEMALE | 
#line 4525
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4526
        .doubleBattle = TRUE,
#line 4527
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4529
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4531
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4530
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4533
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4535
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4534
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4537
    [TRAINER_KATE_AND_JOY] =
    {
#line 4538
        .trainerName = _("KATE & JOY"),
#line 4539
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 4540
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender = 
#line 4542
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4543
        .doubleBattle = TRUE,
#line 4544
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4546
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4546
            .heldItem = ITEM_COVERT_CLOAK,
#line 4549
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4548
            .ability = ABILITY_PURE_POWER,
#line 4547
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4550
                MOVE_HYPNOSIS,
                MOVE_SKILL_SWAP,
                MOVE_FEINT,
                MOVE_HIGH_JUMP_KICK,
            },
            },
            {
#line 4555
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4558
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4557
            .ability = ABILITY_TRUANT,
#line 4556
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4559
                MOVE_HAMMER_ARM,
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_FEINT_ATTACK,
            },
            },
        },
    },
#line 4564
    [TRAINER_ANNA_AND_MEG_1] =
    {
#line 4565
        .trainerName = _("ANNA & MEG"),
#line 4566
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 4567
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender = 
#line 4568
F_TRAINER_FEMALE | 
#line 4569
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4570
        .doubleBattle = TRUE,
#line 4571
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4573
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4575
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4574
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4576
                MOVE_GROWL,
                MOVE_TAIL_WHIP,
                MOVE_HEADBUTT,
                MOVE_ODOR_SLEUTH,
            },
            },
            {
#line 4581
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4583
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4582
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4584
                MOVE_TACKLE,
                MOVE_FOCUS_ENERGY,
                MOVE_ARM_THRUST,
            },
            },
        },
    },
#line 4588
    [TRAINER_VICTOR] =
    {
#line 4589
        .trainerName = _("VICTOR"),
#line 4590
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 4591
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender = 
#line 4593
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4594
        .doubleBattle = TRUE,
#line 4595
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4597
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4597
            .heldItem = ITEM_ORAN_BERRY,
#line 4599
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 4598
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4601
            .species = SPECIES_RUFFLET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4601
            .heldItem = ITEM_ORAN_BERRY,
#line 4603
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 4602
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4605
    [TRAINER_MIGUEL_1] =
    {
#line 4606
        .trainerName = _("MIGUEL"),
#line 4607
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4608
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender = 
#line 4610
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4611
        .doubleBattle = TRUE,
#line 4612
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4614
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4614
            .heldItem = ITEM_ORAN_BERRY,
#line 4616
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4615
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4618
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4618
            .heldItem = ITEM_ORAN_BERRY,
#line 4620
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4619
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4622
    [TRAINER_COLTON] =
    {
#line 4623
        .trainerName = _("COLTON"),
#line 4624
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4625
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender = 
#line 4627
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4628
        .doubleBattle = TRUE,
#line 4629
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4631
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4631
            .heldItem = ITEM_ORAN_BERRY,
#line 4633
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4632
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4634
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4639
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4639
            .heldItem = ITEM_ORAN_BERRY,
#line 4641
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4640
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4642
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4647
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4647
            .heldItem = ITEM_ORAN_BERRY,
#line 4649
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4648
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4650
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4655
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4655
            .heldItem = ITEM_ORAN_BERRY,
#line 4657
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4656
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4658
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4663
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4663
            .heldItem = ITEM_ORAN_BERRY,
#line 4665
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4664
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4666
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4671
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4671
            .heldItem = ITEM_ORAN_BERRY,
#line 4673
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4672
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4674
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
        },
    },
#line 4679
    [TRAINER_VICTORIA] =
    {
#line 4680
        .trainerName = _("VICTORIA"),
#line 4681
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 4682
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender = 
#line 4683
F_TRAINER_FEMALE | 
#line 4684
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4685
        .doubleBattle = TRUE,
#line 4686
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4688
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4690
            .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
#line 4689
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4692
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4694
            .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
#line 4693
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4696
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4696
            .heldItem = ITEM_ORAN_BERRY,
#line 4698
            .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
#line 4697
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4700
    [TRAINER_VANESSA] =
    {
#line 4701
        .trainerName = _("VANESSA"),
#line 4702
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4703
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender = 
#line 4704
F_TRAINER_FEMALE | 
#line 4705
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4706
        .doubleBattle = TRUE,
#line 4707
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4709
            .species = SPECIES_VULPIX_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4711
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4710
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4713
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4715
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4714
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4717
    [TRAINER_BETHANY] =
    {
#line 4718
        .trainerName = _("BETHANY"),
#line 4719
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4720
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender = 
#line 4721
F_TRAINER_FEMALE | 
#line 4722
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4723
        .doubleBattle = TRUE,
#line 4724
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4726
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4726
            .heldItem = ITEM_ORAN_BERRY,
#line 4728
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4727
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4730
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4730
            .heldItem = ITEM_ORAN_BERRY,
#line 4732
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4731
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4734
    [TRAINER_ISABEL_1] =
    {
#line 4735
        .trainerName = _("ISABEL"),
#line 4736
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4737
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender = 
#line 4738
F_TRAINER_FEMALE | 
#line 4739
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4740
        .doubleBattle = TRUE,
#line 4741
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4743
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4743
            .heldItem = ITEM_ORAN_BERRY,
#line 4745
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4744
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4747
            .species = SPECIES_IGGLYBUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4747
            .heldItem = ITEM_ORAN_BERRY,
#line 4749
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4748
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4751
    [TRAINER_TIMOTHY_1] =
    {
#line 4752
        .trainerName = _("TIMOTHY"),
#line 4753
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4754
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender = 
#line 4756
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4757
        .doubleBattle = TRUE,
#line 4758
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4760
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4762
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4761
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4764
            .species = SPECIES_SCRAFTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4766
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4765
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4768
    [TRAINER_VICKY] =
    {
#line 4769
        .trainerName = _("VICKY"),
#line 4770
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 4771
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 4772
F_TRAINER_FEMALE | 
#line 4773
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4774
        .doubleBattle = TRUE,
#line 4775
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4777
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4779
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4778
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4780
                MOVE_HIGH_JUMP_KICK,
                MOVE_MEDITATE,
                MOVE_CONFUSION,
                MOVE_DETECT,
            },
            },
            {
#line 4785
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4787
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4786
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4788
                MOVE_CALM_MIND,
                MOVE_YAWN,
                MOVE_CONFUSION,
                MOVE_ICY_WIND,
            },
            },
        },
    },
#line 4793
    [TRAINER_SHELBY_1] =
    {
#line 4794
        .trainerName = _("SHELBY"),
#line 4795
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4796
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 4797
F_TRAINER_FEMALE | 
#line 4798
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4799
        .doubleBattle = TRUE,
#line 4800
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4802
            .species = SPECIES_NOIBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4804
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4803
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4806
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4808
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4807
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4810
    [TRAINER_CALVIN_1] =
    {
#line 4811
        .trainerName = _("CALVIN"),
#line 4812
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4813
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4815
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4816
        .doubleBattle = TRUE,
#line 4817
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4819
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4821
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4820
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4823
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4825
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4824
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4827
    [TRAINER_BILLY] =
    {
#line 4828
        .trainerName = _("BILLY"),
#line 4829
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4830
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4832
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4833
        .doubleBattle = TRUE,
#line 4834
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4836
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4838
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4837
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4840
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4842
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4841
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4844
    [TRAINER_JOSH] =
    {
#line 4845
        .trainerName = _("JOSH"),
#line 4846
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4847
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4849
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4850
        .doubleBattle = TRUE,
#line 4851
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4853
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4855
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4854
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4856
                MOVE_TACKLE,
                MOVE_DEFENSE_CURL,
                MOVE_ROLLOUT,
            },
            },
            {
#line 4860
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4862
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4861
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4863
                MOVE_DEFENSE_CURL,
                MOVE_SCRATCH,
                MOVE_ROLLOUT,
            },
            },
        },
    },
#line 4867
    [TRAINER_TOMMY] =
    {
#line 4868
        .trainerName = _("TOMMY"),
#line 4869
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4870
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4872
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4873
        .doubleBattle = TRUE,
#line 4874
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4876
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4878
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 4877
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4880
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4882
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4881
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4884
    [TRAINER_JOEY] =
    {
#line 4885
        .trainerName = _("JOEY"),
#line 4886
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4887
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4889
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4890
        .doubleBattle = TRUE,
#line 4891
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4893
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4895
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4894
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4897
            .species = SPECIES_SHROODLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4899
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4898
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4901
    [TRAINER_BEN] =
    {
#line 4902
        .trainerName = _("BEN"),
#line 4903
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4904
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4906
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4907
        .doubleBattle = TRUE,
#line 4908
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4910
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4912
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4911
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4913
                MOVE_HEADBUTT,
                MOVE_SAND_ATTACK,
                MOVE_GROWL,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 4918
            .species = SPECIES_TADBULB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4920
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4919
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4922
    [TRAINER_QUINCY] =
    {
#line 4923
        .trainerName = _("QUINCY"),
#line 4924
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4925
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 4927
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4928
        .doubleBattle = TRUE,
#line 4929
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4931
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4933
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4932
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4934
                MOVE_ATTRACT,
                MOVE_ICE_BEAM,
                MOVE_THUNDERBOLT,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 4939
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4941
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4940
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4942
                MOVE_SKILL_SWAP,
                MOVE_PROTECT,
                MOVE_WILL_O_WISP,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 4947
    [TRAINER_KATELYNN] =
    {
#line 4948
        .trainerName = _("KATELYNN"),
#line 4949
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4950
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 4951
F_TRAINER_FEMALE | 
#line 4952
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4953
        .doubleBattle = TRUE,
#line 4954
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4956
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4958
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4957
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4959
                MOVE_SKILL_SWAP,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_CALM_MIND,
            },
            },
            {
#line 4964
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4966
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4965
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4967
                MOVE_EARTHQUAKE,
                MOVE_SHADOW_BALL,
                MOVE_AERIAL_ACE,
                MOVE_BRICK_BREAK,
            },
            },
        },
    },
#line 4972
    [TRAINER_JAYLEN] =
    {
#line 4973
        .trainerName = _("JAYLEN"),
#line 4974
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4975
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4977
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4978
        .doubleBattle = TRUE,
#line 4979
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4981
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4983
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4982
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4985
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4987
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4986
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4989
    [TRAINER_DILLON] =
    {
#line 4990
        .trainerName = _("DILLON"),
#line 4991
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4992
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4994
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4995
        .doubleBattle = TRUE,
#line 4996
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4998
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5000
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4999
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5002
            .species = SPECIES_SKIDDO_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5004
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5003
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5006
    [TRAINER_EDDIE] =
    {
#line 5007
        .trainerName = _("EDDIE"),
#line 5008
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5009
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 5011
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5012
        .doubleBattle = TRUE,
#line 5013
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5015
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5017
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5016
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5019
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5021
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5020
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5023
    [TRAINER_ALLEN] =
    {
#line 5024
        .trainerName = _("ALLEN"),
#line 5025
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5026
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 5028
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5029
        .doubleBattle = TRUE,
#line 5030
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5032
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5034
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5033
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5036
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5038
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5037
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5040
    [TRAINER_TIMMY] =
    {
#line 5041
        .trainerName = _("TIMMY"),
#line 5042
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5043
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 5045
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5046
        .doubleBattle = TRUE,
#line 5047
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5049
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5051
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5050
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5053
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5055
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5054
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5057
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5059
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5058
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5061
    [TRAINER_WALLACE] =
    {
#line 5062
        .trainerName = _("WALLACE"),
#line 5063
        .trainerClass = TRAINER_CLASS_CHAMPION,
#line 5064
        .trainerPic = TRAINER_PIC_CHAMPION_WALLACE,
        .encounterMusic_gender = 
#line 5066
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5067
        .doubleBattle = TRUE,
#line 5068
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 5069
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 5071
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5073
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5072
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5074
                MOVE_RAIN_DANCE,
                MOVE_WATER_SPOUT,
                MOVE_DOUBLE_EDGE,
                MOVE_BLIZZARD,
            },
            },
            {
#line 5079
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5081
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5080
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5082
                MOVE_TOXIC,
                MOVE_HYDRO_PUMP,
                MOVE_SLUDGE_BOMB,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 5087
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5089
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5088
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5090
                MOVE_GIGA_DRAIN,
                MOVE_SURF,
                MOVE_LEECH_SEED,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 5095
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5097
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5096
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5098
                MOVE_EARTHQUAKE,
                MOVE_SURF,
                MOVE_AMNESIA,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 5103
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5105
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5104
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5106
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
                MOVE_HYPER_BEAM,
                MOVE_SURF,
            },
            },
            {
#line 5111
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5111
            .heldItem = ITEM_SITRUS_BERRY,
#line 5113
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5112
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5114
                MOVE_RECOVER,
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 5119
    [TRAINER_ANDREW] =
    {
#line 5120
        .trainerName = _("ANDREW"),
#line 5121
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5122
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5124
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5125
        .doubleBattle = TRUE,
#line 5126
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5128
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5130
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5129
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5132
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5134
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5133
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5136
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5138
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5137
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5140
    [TRAINER_IVAN] =
    {
#line 5141
        .trainerName = _("IVAN"),
#line 5142
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5143
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5145
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5146
        .doubleBattle = TRUE,
#line 5147
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5149
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5151
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5150
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5153
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5155
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5154
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5157
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5159
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5158
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5161
    [TRAINER_CLAUDE] =
    {
#line 5162
        .trainerName = _("CLAUDE"),
#line 5163
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5164
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5166
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5167
        .doubleBattle = TRUE,
#line 5168
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5170
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5172
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5171
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5174
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5176
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5175
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5178
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5180
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5179
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5182
    [TRAINER_ELLIOT_1] =
    {
#line 5183
        .trainerName = _("ELLIOT"),
#line 5184
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5185
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5187
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5188
        .doubleBattle = TRUE,
#line 5189
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5191
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5193
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5192
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5195
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5197
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5196
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5199
    [TRAINER_NED] =
    {
#line 5200
        .trainerName = _("NED"),
#line 5201
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5202
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5204
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5205
        .doubleBattle = TRUE,
#line 5206
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5208
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5210
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5209
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5212
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5214
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5213
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5216
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5218
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5217
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5220
    [TRAINER_DALE] =
    {
#line 5221
        .trainerName = _("DALE"),
#line 5222
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5223
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5225
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5226
        .doubleBattle = TRUE,
#line 5227
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5229
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5231
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5230
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5233
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5235
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5234
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5237
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5239
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5238
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5241
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5243
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5242
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5245
    [TRAINER_NOLAN] =
    {
#line 5246
        .trainerName = _("NOLAN"),
#line 5247
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5248
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5250
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5251
        .doubleBattle = TRUE,
#line 5252
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5254
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5256
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5255
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5258
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5260
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5259
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5262
    [TRAINER_BARNY] =
    {
#line 5263
        .trainerName = _("BARNY"),
#line 5264
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5265
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5267
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5268
        .doubleBattle = TRUE,
#line 5269
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5271
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5273
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5272
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5275
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5277
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5276
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5279
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5281
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5280
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5283
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5285
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5284
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5287
    [TRAINER_WADE] =
    {
#line 5288
        .trainerName = _("WADE"),
#line 5289
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5290
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5292
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5293
        .doubleBattle = TRUE,
#line 5294
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5296
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5298
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5297
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5300
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5302
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5301
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5304
    [TRAINER_CARTER] =
    {
#line 5305
        .trainerName = _("CARTER"),
#line 5306
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5307
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5309
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5310
        .doubleBattle = TRUE,
#line 5311
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5313
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5315
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5314
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5317
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5319
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5318
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5321
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5323
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5322
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5325
    [TRAINER_RONALD] =
    {
#line 5326
        .trainerName = _("RONALD"),
#line 5327
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5328
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5330
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5331
        .doubleBattle = TRUE,
#line 5332
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 5334
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5336
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5335
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5338
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5340
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5339
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5342
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5344
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5343
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5346
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5348
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5347
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5350
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5352
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5351
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5354
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5356
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5355
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5358
    [TRAINER_JACOB] =
    {
#line 5359
        .trainerName = _("JACOB"),
#line 5360
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5361
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5363
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5364
        .doubleBattle = TRUE,
#line 5365
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5367
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5369
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 5368
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5371
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5373
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 5372
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5375
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5377
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 5376
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5379
    [TRAINER_ANTHONY] =
    {
#line 5380
        .trainerName = _("ANTHONY"),
#line 5381
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5382
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5384
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5385
        .doubleBattle = TRUE,
#line 5386
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5388
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5390
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5389
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5392
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5394
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5393
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5396
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5398
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5397
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5400
    [TRAINER_BENJAMIN_1] =
    {
#line 5401
        .trainerName = _("BENJAMIN"),
#line 5402
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5403
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5405
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5406
        .doubleBattle = TRUE,
#line 5407
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5409
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5411
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5410
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5413
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5415
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5414
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5417
    [TRAINER_ABIGAIL_1] =
    {
#line 5418
        .trainerName = _("ABIGAIL"),
#line 5419
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5420
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5421
F_TRAINER_FEMALE | 
#line 5422
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5423
        .doubleBattle = TRUE,
#line 5424
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5426
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5428
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5427
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5430
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5432
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5431
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5434
    [TRAINER_JASMINE] =
    {
#line 5435
        .trainerName = _("JASMINE"),
#line 5436
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5437
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5438
F_TRAINER_FEMALE | 
#line 5439
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5440
        .doubleBattle = TRUE,
#line 5441
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5443
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5445
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 5444
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5447
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5449
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 5448
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5451
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5453
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5452
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5455
    [TRAINER_DYLAN_1] =
    {
#line 5456
        .trainerName = _("DYLAN"),
#line 5457
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5458
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5460
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5461
        .doubleBattle = TRUE,
#line 5462
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5464
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5466
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5465
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5468
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5470
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5469
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5472
    [TRAINER_MARIA_1] =
    {
#line 5473
        .trainerName = _("MARIA"),
#line 5474
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5475
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5476
F_TRAINER_FEMALE | 
#line 5477
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5478
        .doubleBattle = TRUE,
#line 5479
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5481
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5483
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5482
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5485
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5487
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5486
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5489
    [TRAINER_CAMDEN] =
    {
#line 5490
        .trainerName = _("CAMDEN"),
#line 5491
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5492
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5494
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5495
        .doubleBattle = TRUE,
#line 5496
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5498
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5500
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5499
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5502
            .species = SPECIES_RAICHU_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5504
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5503
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5506
    [TRAINER_DEMETRIUS] =
    {
#line 5507
        .trainerName = _("DEMETRIUS"),
#line 5508
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5509
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 5511
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5512
        .doubleBattle = TRUE,
#line 5513
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5515
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5517
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5516
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5519
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5521
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5520
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5523
    [TRAINER_ISAIAH_1] =
    {
#line 5524
        .trainerName = _("ISAIAH"),
#line 5525
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5526
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5528
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5529
        .doubleBattle = TRUE,
#line 5530
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5532
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5534
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5533
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5536
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5538
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5537
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5540
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5542
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5541
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5544
    [TRAINER_PABLO_1] =
    {
#line 5545
        .trainerName = _("PABLO"),
#line 5546
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5547
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5549
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5550
        .doubleBattle = TRUE,
#line 5551
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5553
            .species = SPECIES_KILOWATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5555
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5554
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5557
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5559
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5558
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5561
    [TRAINER_CHASE] =
    {
#line 5562
        .trainerName = _("CHASE"),
#line 5563
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5564
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5566
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5567
        .doubleBattle = TRUE,
#line 5568
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5570
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5572
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5571
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5574
            .species = SPECIES_KILOWATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5576
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 5575
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5578
    [TRAINER_ISOBEL] =
    {
#line 5579
        .trainerName = _("ISOBEL"),
#line 5580
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5581
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5582
F_TRAINER_FEMALE | 
#line 5583
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5584
        .doubleBattle = TRUE,
#line 5585
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5587
            .species = SPECIES_RAICHU_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5589
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5588
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5591
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5593
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5592
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5595
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5597
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5596
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5599
    [TRAINER_DONNY] =
    {
#line 5600
        .trainerName = _("DONNY"),
#line 5601
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5602
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5603
F_TRAINER_FEMALE | 
#line 5604
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5605
        .doubleBattle = TRUE,
#line 5606
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5608
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5610
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5609
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5612
            .species = SPECIES_MIENFOO_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5614
            .iv = TRAINER_PARTY_IVS(19, 19, 19, 19, 19, 19),
#line 5613
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5616
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5618
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5617
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5620
    [TRAINER_TALIA] =
    {
#line 5621
        .trainerName = _("TALIA"),
#line 5622
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5623
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5624
F_TRAINER_FEMALE | 
#line 5625
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5626
        .doubleBattle = TRUE,
#line 5627
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5629
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5631
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5630
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5633
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5635
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5634
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5637
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5639
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5638
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5641
            .species = SPECIES_GALVANTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5643
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5642
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5645
    [TRAINER_KATELYN_1] =
    {
#line 5646
        .trainerName = _("KATELYN"),
#line 5647
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5648
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5649
F_TRAINER_FEMALE | 
#line 5650
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5651
        .doubleBattle = TRUE,
#line 5652
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5654
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5656
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5655
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5658
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5660
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5659
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5662
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5664
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5663
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5666
    [TRAINER_ALLISON] =
    {
#line 5667
        .trainerName = _("ALLISON"),
#line 5668
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5669
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5670
F_TRAINER_FEMALE | 
#line 5671
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5672
        .doubleBattle = TRUE,
#line 5673
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5675
            .species = SPECIES_GALVANTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5677
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5676
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5679
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5681
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 5680
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5683
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5685
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5684
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5687
    [TRAINER_NICOLAS_1] =
    {
#line 5688
        .trainerName = _("NICOLAS"),
#line 5689
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 5690
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender = 
#line 5692
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5693
        .doubleBattle = TRUE,
#line 5694
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5696
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5698
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5697
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5700
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5702
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5701
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5704
    [TRAINER_AARON] =
    {
#line 5705
        .trainerName = _("AARON"),
#line 5706
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 5707
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender = 
#line 5709
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5710
        .doubleBattle = TRUE,
#line 5711
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5713
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5715
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5714
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5717
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5719
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5718
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5721
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5723
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5722
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5725
            .species = SPECIES_DRAKLOAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5727
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5726
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5729
    [TRAINER_PERRY] =
    {
#line 5730
        .trainerName = _("PERRY"),
#line 5731
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5732
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5734
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5735
        .doubleBattle = TRUE,
#line 5736
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5738
            .species = SPECIES_ORICORIO_PAU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5740
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5739
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5742
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5744
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5743
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5746
    [TRAINER_HUGH] =
    {
#line 5747
        .trainerName = _("HUGH"),
#line 5748
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5749
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5751
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5752
        .doubleBattle = TRUE,
#line 5753
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5755
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5757
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5756
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5759
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5761
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5760
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5763
    [TRAINER_PHIL] =
    {
#line 5764
        .trainerName = _("PHIL"),
#line 5765
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5766
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5768
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5769
        .doubleBattle = TRUE,
#line 5770
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5772
            .species = SPECIES_RUFFLET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5774
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5773
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5776
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5778
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5777
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5780
    [TRAINER_JARED] =
    {
#line 5781
        .trainerName = _("JARED"),
#line 5782
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5783
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5785
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5786
        .doubleBattle = TRUE,
#line 5787
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5789
            .species = SPECIES_SQUAWKABILLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5791
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5790
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5793
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5795
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5794
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5797
    [TRAINER_HUMBERTO] =
    {
#line 5798
        .trainerName = _("HUMBERTO"),
#line 5799
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5800
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5802
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5803
        .doubleBattle = TRUE,
#line 5804
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5806
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5808
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 5807
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5810
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5812
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 5811
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5814
    [TRAINER_PRESLEY] =
    {
#line 5815
        .trainerName = _("PRESLEY"),
#line 5816
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5817
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5819
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5820
        .doubleBattle = TRUE,
#line 5821
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5823
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5825
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5824
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5827
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5829
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5828
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5831
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5833
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5832
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5835
    [TRAINER_EDWARDO] =
    {
#line 5836
        .trainerName = _("EDWARDO"),
#line 5837
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5838
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5840
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5841
        .doubleBattle = TRUE,
#line 5842
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5844
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5846
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5845
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5848
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5850
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5849
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5852
    [TRAINER_COLIN] =
    {
#line 5853
        .trainerName = _("COLIN"),
#line 5854
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5855
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5857
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5858
        .doubleBattle = TRUE,
#line 5859
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5861
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5863
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5862
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5865
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5867
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5866
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5869
    [TRAINER_ROBERT_1] =
    {
#line 5870
        .trainerName = _("ROBERT"),
#line 5871
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5872
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5874
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5875
        .doubleBattle = TRUE,
#line 5876
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5878
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5880
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5879
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5882
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5884
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5883
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5886
    [TRAINER_BENNY] =
    {
#line 5887
        .trainerName = _("BENNY"),
#line 5888
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5889
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5891
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5892
        .doubleBattle = TRUE,
#line 5893
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5895
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5897
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5896
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5899
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5901
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5900
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5903
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5905
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5904
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5907
    [TRAINER_CHESTER] =
    {
#line 5908
        .trainerName = _("CHESTER"),
#line 5909
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5910
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5912
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5913
        .doubleBattle = TRUE,
#line 5914
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5916
            .species = SPECIES_ORICORIO_BAILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5918
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5917
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5920
            .species = SPECIES_CHATOT_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5922
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5921
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5924
    [TRAINER_ALEX] =
    {
#line 5925
        .trainerName = _("ALEX"),
#line 5926
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5927
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5929
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5930
        .doubleBattle = TRUE,
#line 5931
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5933
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5935
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5934
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5937
            .species = SPECIES_ORICORIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5939
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5938
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5941
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5943
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5942
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5945
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5947
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5946
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5949
    [TRAINER_BECK] =
    {
#line 5950
        .trainerName = _("BECK"),
#line 5951
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5952
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5954
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5955
        .doubleBattle = TRUE,
#line 5956
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5958
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5960
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5959
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5962
            .species = SPECIES_CHATOT_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5964
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5963
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5966
            .species = SPECIES_ORICORIO_SENSU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5968
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5967
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5970
    [TRAINER_YASU] =
    {
#line 5971
        .trainerName = _("YASU"),
#line 5972
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5973
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 5975
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5976
        .doubleBattle = TRUE,
#line 5977
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5979
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5981
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5980
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5983
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5985
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5984
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5987
    [TRAINER_TAKASHI] =
    {
#line 5988
        .trainerName = _("TAKASHI"),
#line 5989
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5990
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 5992
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5993
        .doubleBattle = TRUE,
#line 5994
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5996
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5998
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5997
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6000
            .species = SPECIES_PAWNIARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6002
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6001
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6004
    [TRAINER_DIANNE] =
    {
#line 6005
        .trainerName = _("DIANNE"),
#line 6006
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6007
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 6008
F_TRAINER_FEMALE | 
#line 6009
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6010
        .doubleBattle = TRUE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6012
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6014
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6013
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6015
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 6018
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6020
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6019
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6021
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 6024
    [TRAINER_JANI] =
    {
#line 6025
        .trainerName = _("JANI"),
#line 6026
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 6027
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender = 
#line 6028
F_TRAINER_FEMALE | 
#line 6029
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6030
        .doubleBattle = TRUE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6032
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6034
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6033
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6036
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6038
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6037
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6040
    [TRAINER_LAO_1] =
    {
#line 6041
        .trainerName = _("LAO"),
#line 6042
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6043
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 6045
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6046
        .doubleBattle = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6048
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6050
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6049
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6051
                MOVE_POISON_GAS,
                MOVE_POUND,
                MOVE_YAWN,
                MOVE_PROTECT,
            },
            },
            {
#line 6056
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6058
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6057
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6059
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SMOG,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 6064
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6066
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6065
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6067
                MOVE_DISABLE,
                MOVE_POUND,
                MOVE_SLUDGE,
                MOVE_PROTECT,
            },
            },
            {
#line 6072
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6074
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6073
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6075
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
        },
    },
#line 6080
    [TRAINER_LUNG] =
    {
#line 6081
        .trainerName = _("LUNG"),
#line 6082
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6083
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 6085
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6086
        .doubleBattle = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6088
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6090
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6089
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6092
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6094
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6093
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6096
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6098
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6097
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6100
    [TRAINER_JOCELYN] =
    {
#line 6101
        .trainerName = _("JOCELYN"),
#line 6102
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6103
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 6104
F_TRAINER_FEMALE | 
#line 6105
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6106
        .doubleBattle = TRUE,
#line 6107
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6109
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6111
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 6110
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6113
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6115
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 6114
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6117
    [TRAINER_LAURA] =
    {
#line 6118
        .trainerName = _("LAURA"),
#line 6119
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6120
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 6121
F_TRAINER_FEMALE | 
#line 6122
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6123
        .doubleBattle = TRUE,
#line 6124
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6126
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6128
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6127
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6130
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6132
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6131
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6134
    [TRAINER_CYNDY_1] =
    {
#line 6135
        .trainerName = _("CYNDY"),
#line 6136
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6137
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 6138
F_TRAINER_FEMALE | 
#line 6139
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6140
        .doubleBattle = TRUE,
#line 6141
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6143
            .species = SPECIES_MIENFOO_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6145
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 6144
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6147
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6149
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 6148
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6151
    [TRAINER_CORA] =
    {
#line 6152
        .trainerName = _("CORA"),
#line 6153
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6154
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 6155
F_TRAINER_FEMALE | 
#line 6156
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6157
        .doubleBattle = TRUE,
#line 6158
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6160
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6162
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6161
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6164
    [TRAINER_PAULA] =
    {
#line 6165
        .trainerName = _("PAULA"),
#line 6166
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6167
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 6168
F_TRAINER_FEMALE | 
#line 6169
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6170
        .doubleBattle = TRUE,
#line 6171
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6173
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6175
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6174
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6177
    [TRAINER_MADELINE_1] =
    {
#line 6178
        .trainerName = _("MADELINE"),
#line 6179
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 6180
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 6181
F_TRAINER_FEMALE | 
#line 6182
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6183
        .doubleBattle = TRUE,
#line 6184
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6186
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6188
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6187
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6189
                MOVE_EMBER,
                MOVE_TACKLE,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 6194
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6196
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6195
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6197
                MOVE_FIRE_SPIN,
                MOVE_TACKLE,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 6202
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6204
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6203
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6205
                MOVE_FLAME_BURST,
                MOVE_TACKLE,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 6210
    [TRAINER_CLARISSA] =
    {
#line 6211
        .trainerName = _("CLARISSA"),
#line 6212
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 6213
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 6214
F_TRAINER_FEMALE | 
#line 6215
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6216
        .doubleBattle = TRUE,
#line 6217
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6219
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6221
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6220
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6223
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6225
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6224
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6227
    [TRAINER_ANGELICA] =
    {
#line 6228
        .trainerName = _("ANGELICA"),
#line 6229
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 6230
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 6231
F_TRAINER_FEMALE | 
#line 6232
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6233
        .doubleBattle = TRUE,
#line 6234
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6236
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6238
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6237
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6239
                MOVE_SUNNY_DAY,
                MOVE_WEATHER_BALL,
                MOVE_SOLAR_BEAM,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 6244
            .species = SPECIES_SUNFLORA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6247
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6246
            .ability = ABILITY_SOLAR_POWER,
#line 6245
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6248
                MOVE_SLEEP_POWDER,
                MOVE_WEATHER_BALL,
                MOVE_GIGA_DRAIN,
                MOVE_SYNTHESIS,
            },
            },
        },
    },
#line 6253
    [TRAINER_BEVERLY] =
    {
#line 6254
        .trainerName = _("BEVERLY"),
#line 6255
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6256
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6257
F_TRAINER_FEMALE | 
#line 6258
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6259
        .doubleBattle = TRUE,
#line 6260
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6262
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6264
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6263
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6266
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6268
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6267
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6270
    [TRAINER_IMANI] =
    {
#line 6271
        .trainerName = _("IMANI"),
#line 6272
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6273
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6274
F_TRAINER_FEMALE | 
#line 6275
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6276
        .doubleBattle = TRUE,
#line 6277
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6279
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6281
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6280
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6283
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6285
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6284
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6287
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6289
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6288
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6291
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6293
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6292
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6295
    [TRAINER_KYLA] =
    {
#line 6296
        .trainerName = _("KYLA"),
#line 6297
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6298
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6299
F_TRAINER_FEMALE | 
#line 6300
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6301
        .doubleBattle = TRUE,
#line 6302
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6304
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6306
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6305
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6308
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6310
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6309
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6312
    [TRAINER_DENISE] =
    {
#line 6313
        .trainerName = _("DENISE"),
#line 6314
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6315
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6316
F_TRAINER_FEMALE | 
#line 6317
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6318
        .doubleBattle = TRUE,
#line 6319
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6321
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6323
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6322
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6325
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6327
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6326
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6329
    [TRAINER_BETH] =
    {
#line 6330
        .trainerName = _("BETH"),
#line 6331
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6332
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6333
F_TRAINER_FEMALE | 
#line 6334
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6335
        .doubleBattle = TRUE,
#line 6336
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6338
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6340
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6339
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6342
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6344
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6343
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6346
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6348
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6347
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6350
    [TRAINER_TARA] =
    {
#line 6351
        .trainerName = _("TARA"),
#line 6352
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6353
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6354
F_TRAINER_FEMALE | 
#line 6355
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6356
        .doubleBattle = TRUE,
#line 6357
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6359
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6361
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6360
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6363
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6365
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6364
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6367
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6369
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6368
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6371
    [TRAINER_MISSY] =
    {
#line 6372
        .trainerName = _("MISSY"),
#line 6373
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6374
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6375
F_TRAINER_FEMALE | 
#line 6376
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6377
        .doubleBattle = TRUE,
#line 6378
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6380
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6382
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6381
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6384
            .species = SPECIES_CETODDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6386
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6385
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6388
    [TRAINER_ALICE] =
    {
#line 6389
        .trainerName = _("ALICE"),
#line 6390
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6391
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6392
F_TRAINER_FEMALE | 
#line 6393
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6394
        .doubleBattle = TRUE,
#line 6395
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6397
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6399
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6398
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6401
            .species = SPECIES_CETODDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6403
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6402
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6405
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6407
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6406
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6409
    [TRAINER_JENNY_1] =
    {
#line 6410
        .trainerName = _("JENNY"),
#line 6411
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6412
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6413
F_TRAINER_FEMALE | 
#line 6414
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6415
        .doubleBattle = TRUE,
#line 6416
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6418
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6420
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6419
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6422
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6424
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6423
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6426
    [TRAINER_GRACE] =
    {
#line 6427
        .trainerName = _("GRACE"),
#line 6428
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6429
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6430
F_TRAINER_FEMALE | 
#line 6431
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6432
        .doubleBattle = TRUE,
#line 6433
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6435
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6437
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6436
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6439
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6441
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6440
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6443
    [TRAINER_TANYA] =
    {
#line 6444
        .trainerName = _("TANYA"),
#line 6445
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6446
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6447
F_TRAINER_FEMALE | 
#line 6448
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6449
        .doubleBattle = TRUE,
#line 6450
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6452
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6454
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6453
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6456
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6458
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6457
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6460
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6462
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6461
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6464
    [TRAINER_SHARON] =
    {
#line 6465
        .trainerName = _("SHARON"),
#line 6466
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6467
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6468
F_TRAINER_FEMALE | 
#line 6469
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6470
        .doubleBattle = TRUE,
#line 6471
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6473
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6475
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6474
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6477
            .species = SPECIES_SEEL_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6479
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6478
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6481
    [TRAINER_NIKKI] =
    {
#line 6482
        .trainerName = _("NIKKI"),
#line 6483
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6484
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6485
F_TRAINER_FEMALE | 
#line 6486
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6487
        .doubleBattle = TRUE,
#line 6488
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6490
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6492
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6491
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6494
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6496
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6495
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6498
    [TRAINER_BRENDA] =
    {
#line 6499
        .trainerName = _("BRENDA"),
#line 6500
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6501
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6502
F_TRAINER_FEMALE | 
#line 6503
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6504
        .doubleBattle = TRUE,
#line 6505
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6507
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6509
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6508
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6511
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6513
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6512
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6515
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6517
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6516
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6519
            .species = SPECIES_DEWGONG_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6521
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6520
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6523
    [TRAINER_KATIE] =
    {
#line 6524
        .trainerName = _("KATIE"),
#line 6525
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6526
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6527
F_TRAINER_FEMALE | 
#line 6528
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6529
        .doubleBattle = TRUE,
#line 6530
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6532
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6534
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6533
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6536
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6538
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6537
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6540
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6542
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6541
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6544
    [TRAINER_SUSIE] =
    {
#line 6545
        .trainerName = _("SUSIE"),
#line 6546
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6547
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6548
F_TRAINER_FEMALE | 
#line 6549
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6550
        .doubleBattle = TRUE,
#line 6551
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6553
            .species = SPECIES_SEEL_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6555
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6554
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6557
            .species = SPECIES_SEEL_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6559
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6558
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6561
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6563
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6562
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6565
            .species = SPECIES_DEWGONG_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6567
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6566
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6569
    [TRAINER_KARA] =
    {
#line 6570
        .trainerName = _("KARA"),
#line 6571
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6572
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6573
F_TRAINER_FEMALE | 
#line 6574
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6575
        .doubleBattle = TRUE,
#line 6576
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6578
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6580
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6579
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6582
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6584
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6583
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6586
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6588
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6587
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6590
    [TRAINER_DANA] =
    {
#line 6591
        .trainerName = _("DANA"),
#line 6592
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6593
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6594
F_TRAINER_FEMALE | 
#line 6595
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6596
        .doubleBattle = TRUE,
#line 6597
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6599
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6601
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6600
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6603
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6605
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6604
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6607
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6609
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6608
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6611
    [TRAINER_SIENNA] =
    {
#line 6612
        .trainerName = _("SIENNA"),
#line 6613
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6614
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6615
F_TRAINER_FEMALE | 
#line 6616
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6617
        .doubleBattle = TRUE,
#line 6618
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6620
            .species = SPECIES_SEEL_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6622
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6621
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6624
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6626
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6625
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6628
    [TRAINER_DEBRA] =
    {
#line 6629
        .trainerName = _("DEBRA"),
#line 6630
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6631
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6632
F_TRAINER_FEMALE | 
#line 6633
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6634
        .doubleBattle = TRUE,
#line 6635
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6637
            .species = SPECIES_DEWGONG_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6639
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6638
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6641
            .species = SPECIES_AVALUGG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6643
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6642
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6645
    [TRAINER_LINDA] =
    {
#line 6646
        .trainerName = _("LINDA"),
#line 6647
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6648
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6649
F_TRAINER_FEMALE | 
#line 6650
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6651
        .doubleBattle = TRUE,
#line 6652
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6654
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6656
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6655
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6658
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6660
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6659
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6662
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6664
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6663
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6666
    [TRAINER_KAYLEE] =
    {
#line 6667
        .trainerName = _("KAYLEE"),
#line 6668
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6669
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6670
F_TRAINER_FEMALE | 
#line 6671
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6672
        .doubleBattle = TRUE,
#line 6673
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6675
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6677
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6676
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6679
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6681
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6680
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6683
    [TRAINER_LAUREL] =
    {
#line 6684
        .trainerName = _("LAUREL"),
#line 6685
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6686
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6687
F_TRAINER_FEMALE | 
#line 6688
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6689
        .doubleBattle = TRUE,
#line 6690
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6692
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6694
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6693
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6696
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6698
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6697
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6700
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6702
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6701
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6704
    [TRAINER_CARLEE] =
    {
#line 6705
        .trainerName = _("CARLEE"),
#line 6706
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6707
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6708
F_TRAINER_FEMALE | 
#line 6709
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6710
        .doubleBattle = TRUE,
#line 6711
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6713
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6715
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6714
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6717
            .species = SPECIES_SEEL_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6719
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6718
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6721
    [TRAINER_HEIDI] =
    {
#line 6722
        .trainerName = _("HEIDI"),
#line 6723
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6724
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 6725
F_TRAINER_FEMALE | 
#line 6726
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6727
        .doubleBattle = TRUE,
#line 6728
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6730
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6732
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6731
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6733
                MOVE_DIG,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
                MOVE_SLASH,
            },
            },
            {
#line 6738
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6740
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6739
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6741
                MOVE_RAPID_SPIN,
                MOVE_MUD_SLAP,
                MOVE_PSYBEAM,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 6746
    [TRAINER_BECKY] =
    {
#line 6747
        .trainerName = _("BECKY"),
#line 6748
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6749
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 6750
F_TRAINER_FEMALE | 
#line 6751
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6752
        .doubleBattle = TRUE,
#line 6753
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6755
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6757
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6756
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6758
                MOVE_ROLLOUT,
                MOVE_BUBBLE_BEAM,
                MOVE_TAIL_WHIP,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 6763
            .species = SPECIES_CACNEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6765
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6764
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6766
                MOVE_SAND_ATTACK,
                MOVE_NEEDLE_ARM,
                MOVE_LEER,
                MOVE_LEECH_SEED,
            },
            },
        },
    },
#line 6771
    [TRAINER_CAROL] =
    {
#line 6772
        .trainerName = _("CAROL"),
#line 6773
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6774
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 6775
F_TRAINER_FEMALE | 
#line 6776
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6777
        .doubleBattle = TRUE,
#line 6778
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6780
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6782
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6781
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6784
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6786
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6785
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6788
    [TRAINER_NANCY] =
    {
#line 6789
        .trainerName = _("NANCY"),
#line 6790
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6791
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 6792
F_TRAINER_FEMALE | 
#line 6793
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6794
        .doubleBattle = TRUE,
#line 6795
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6797
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6799
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6798
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6801
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6803
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6802
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6805
    [TRAINER_MARTHA] =
    {
#line 6806
        .trainerName = _("MARTHA"),
#line 6807
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6808
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 6809
F_TRAINER_FEMALE | 
#line 6810
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6811
        .doubleBattle = TRUE,
#line 6812
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6814
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6816
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6815
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6818
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6820
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6819
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6822
    [TRAINER_DIANA_1] =
    {
#line 6823
        .trainerName = _("DIANA"),
#line 6824
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6825
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 6826
F_TRAINER_FEMALE | 
#line 6827
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6828
        .doubleBattle = TRUE,
#line 6829
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6831
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6833
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6832
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6835
            .species = SPECIES_SUNKERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6837
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6836
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6839
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6841
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6840
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6843
    [TRAINER_CEDRIC] =
    {
#line 6844
        .trainerName = _("CEDRIC"),
#line 6845
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 6846
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 6848
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6849
        .doubleBattle = TRUE,
#line 6850
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6852
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6854
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6853
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6855
                MOVE_DESTINY_BOND,
                MOVE_SAFEGUARD,
                MOVE_COUNTER,
                MOVE_MIRROR_COAT,
            },
            },
            {
#line 6860
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6862
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6861
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6863
                MOVE_DESTINY_BOND,
                MOVE_SAFEGUARD,
                MOVE_COUNTER,
                MOVE_MIRROR_COAT,
            },
            },
        },
    },
#line 6868
    [TRAINER_IRENE] =
    {
#line 6869
        .trainerName = _("IRENE"),
#line 6870
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6871
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 6872
F_TRAINER_FEMALE | 
#line 6873
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6874
        .doubleBattle = TRUE,
#line 6875
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6877
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6879
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6878
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6881
            .species = SPECIES_TINKATINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6883
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6882
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6885
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6887
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6886
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6889
    [TRAINER_AMY_AND_LIV_1] =
    {
#line 6890
        .trainerName = _("AMY & LIV"),
#line 6891
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6892
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 6893
F_TRAINER_FEMALE | 
#line 6894
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6895
        .doubleBattle = TRUE,
#line 6896
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6898
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6900
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6899
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6902
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6904
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6903
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6906
    [TRAINER_GINA_AND_MIA_1] =
    {
#line 6907
        .trainerName = _("GINA & MIA"),
#line 6908
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6909
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 6911
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6912
        .doubleBattle = TRUE,
#line 6913
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6915
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6917
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6916
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6919
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6921
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6920
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6923
    [TRAINER_MIU_AND_YUKI] =
    {
#line 6924
        .trainerName = _("MIU & YUKI"),
#line 6925
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6926
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 6928
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6929
        .doubleBattle = TRUE,
#line 6930
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6932
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6934
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6933
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6936
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6938
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6937
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6940
    [TRAINER_HUEY] =
    {
#line 6941
        .trainerName = _("HUEY"),
#line 6942
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6943
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 6945
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6946
        .doubleBattle = TRUE,
#line 6947
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6949
            .species = SPECIES_WIMPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6951
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6950
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6953
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6955
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6954
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6957
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6959
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6958
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6961
    [TRAINER_EDMOND] =
    {
#line 6962
        .trainerName = _("EDMOND"),
#line 6963
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6964
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 6966
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6967
        .doubleBattle = TRUE,
#line 6968
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6970
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6972
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6971
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6974
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6976
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6975
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6978
    [TRAINER_ERNEST_1] =
    {
#line 6979
        .trainerName = _("ERNEST"),
#line 6980
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6981
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 6983
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6984
        .doubleBattle = TRUE,
#line 6985
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6987
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6989
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6988
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6991
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6993
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6992
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6995
            .species = SPECIES_GRAPPLOCT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6997
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6996
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6999
    [TRAINER_DWAYNE] =
    {
#line 7000
        .trainerName = _("DWAYNE"),
#line 7001
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7002
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 7004
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7005
        .doubleBattle = TRUE,
#line 7006
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7008
            .species = SPECIES_WIMPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7010
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7009
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7012
            .species = SPECIES_CRABRAWLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7014
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7013
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7016
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7018
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7017
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7020
    [TRAINER_PHILLIP] =
    {
#line 7021
        .trainerName = _("PHILLIP"),
#line 7022
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7023
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 7025
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7026
        .doubleBattle = TRUE,
#line 7027
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7029
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7031
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7030
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7033
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7035
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7034
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7037
    [TRAINER_LEONARD] =
    {
#line 7038
        .trainerName = _("LEONARD"),
#line 7039
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7040
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 7042
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7043
        .doubleBattle = TRUE,
#line 7044
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7046
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7048
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7047
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7050
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7052
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7051
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7054
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7056
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7055
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7058
    [TRAINER_DUNCAN] =
    {
#line 7059
        .trainerName = _("DUNCAN"),
#line 7060
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7061
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 7063
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7064
        .doubleBattle = TRUE,
#line 7065
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7067
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7069
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7068
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7071
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7073
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7072
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7075
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7077
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7076
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7079
    [TRAINER_ELI] =
    {
#line 7080
        .trainerName = _("ELI"),
#line 7081
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7082
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 7084
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7085
        .doubleBattle = TRUE,
#line 7086
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7088
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7090
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7089
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7092
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7094
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7093
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7096
    [TRAINER_ANNIKA] =
    {
#line 7097
        .trainerName = _("ANNIKA"),
#line 7098
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 7099
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender = 
#line 7100
F_TRAINER_FEMALE | 
#line 7101
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 7102
        .doubleBattle = TRUE,
#line 7103
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7105
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7107
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7106
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7109
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7111
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7110
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7113
    [TRAINER_JAZMYN] =
    {
#line 7114
        .trainerName = _("JAZMYN"),
#line 7115
        .trainerClass = TRAINER_CLASS_COOLTRAINER_2,
#line 7116
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 7117
F_TRAINER_FEMALE | 
#line 7118
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7119
        .doubleBattle = TRUE,
#line 7120
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7122
            .species = SPECIES_PAWNIARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7124
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7123
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7126
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7128
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7127
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7130
    [TRAINER_JONAS] =
    {
#line 7131
        .trainerName = _("JONAS"),
#line 7132
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 7133
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 7135
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7136
        .doubleBattle = TRUE,
#line 7137
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7139
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7141
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7140
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7143
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7145
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7144
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7147
            .species = SPECIES_PAWNIARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7149
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7148
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7151
    [TRAINER_KAYLEY] =
    {
#line 7152
        .trainerName = _("KAYLEY"),
#line 7153
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 7154
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 7155
F_TRAINER_FEMALE | 
#line 7156
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7157
        .doubleBattle = TRUE,
#line 7158
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7160
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7162
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7161
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7163
                MOVE_SNOWSCAPE,
                MOVE_WEATHER_BALL,
                MOVE_BLIZZARD,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 7168
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7170
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7169
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7171
                MOVE_SNOWSCAPE,
                MOVE_WEATHER_BALL,
                MOVE_BLIZZARD,
                MOVE_ENERGY_BALL,
            },
            },
        },
    },
#line 7176
    [TRAINER_AURON] =
    {
#line 7177
        .trainerName = _("AURON"),
#line 7178
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 7179
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender = 
#line 7181
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7182
        .doubleBattle = TRUE,
#line 7183
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7185
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7187
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7186
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7189
            .species = SPECIES_DRAMPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7191
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7190
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7193
    [TRAINER_KELVIN] =
    {
#line 7194
        .trainerName = _("KELVIN"),
#line 7195
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7196
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 7198
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7199
        .doubleBattle = TRUE,
#line 7200
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7202
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7204
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7203
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7206
            .species = SPECIES_HUNTAIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7208
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7207
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7210
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7212
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7211
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7214
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7216
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7215
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7218
    [TRAINER_MARLEY] =
    {
#line 7219
        .trainerName = _("MARLEY"),
#line 7220
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7221
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 7222
F_TRAINER_FEMALE | 
#line 7223
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7224
        .doubleBattle = TRUE,
#line 7225
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7227
            .species = SPECIES_MINIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7229
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7228
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7231
            .species = SPECIES_MAWILE_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7233
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7232
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7235
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7237
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7236
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7239
            .species = SPECIES_WEAVILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7241
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7240
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7243
    [TRAINER_REYNA] =
    {
#line 7244
        .trainerName = _("REYNA"),
#line 7245
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 7246
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 7247
F_TRAINER_FEMALE | 
#line 7248
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7249
        .doubleBattle = TRUE,
#line 7250
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7252
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7254
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7253
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7256
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7258
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7257
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7260
            .species = SPECIES_MIENSHAO_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7262
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7261
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7264
    [TRAINER_HUDSON] =
    {
#line 7265
        .trainerName = _("HUDSON"),
#line 7266
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7267
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 7269
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7270
        .doubleBattle = TRUE,
#line 7271
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7273
            .species = SPECIES_CRABOMINABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7275
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7274
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7277
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7279
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7278
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7281
            .species = SPECIES_SQUAWKABILLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7283
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7282
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7285
            .species = SPECIES_GOLISOPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7287
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7286
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7289
    [TRAINER_CONOR] =
    {
#line 7290
        .trainerName = _("CONOR"),
#line 7291
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 7292
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender = 
#line 7294
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7295
        .doubleBattle = TRUE,
#line 7296
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7298
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7300
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7299
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7302
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7304
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7303
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7306
    [TRAINER_EDWIN_1] =
    {
#line 7307
        .trainerName = _("EDWIN"),
#line 7308
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 7309
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender = 
#line 7311
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7312
        .doubleBattle = TRUE,
#line 7313
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7315
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7317
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7316
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7319
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7321
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7320
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7323
    [TRAINER_HECTOR] =
    {
#line 7324
        .trainerName = _("HECTOR"),
#line 7325
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 7326
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender = 
#line 7328
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7329
        .doubleBattle = TRUE,
#line 7330
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7332
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7334
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7333
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7336
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7338
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7337
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7340
    [TRAINER_TABITHA_MOSSDEEP] =
    {
#line 7341
        .trainerName = _("TABITHA"),
#line 7342
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 7343
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN_M,
        .encounterMusic_gender = 
#line 7345
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7346
        .doubleBattle = TRUE,
#line 7347
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7349
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7351
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7350
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7353
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7355
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7354
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7357
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7359
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7358
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7361
    [TRAINER_WALLY_VR_1] =
    {
#line 7362
        .trainerName = _("WALLY"),
#line 7363
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7364
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 7366
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7367
        .doubleBattle = TRUE,
#line 7368
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7370
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7372
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7371
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7373
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 7378
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7380
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7379
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7381
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 7386
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7388
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7387
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7389
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 7394
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7396
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7395
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7397
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 7402
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7404
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 7403
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7405
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 7410
    [TRAINER_BRENDAN_ROUTE_103_MUDKIP] =
    {
#line 7411
        .trainerName = _("BRENDAN"),
#line 7412
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7413
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 7415
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7416
        .doubleBattle = TRUE,
#line 7417
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7419
            .species = SPECIES_TREECKO,
#line 7419
            .gender = TRAINER_MON_MALE,
#line 7421
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7420
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7422
                MOVE_POUND,
                MOVE_LEER,
            },
            },
            {
#line 7425
            .species = SPECIES_EEVEE,
#line 7425
            .gender = TRAINER_MON_MALE,
#line 7427
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7426
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7428
                MOVE_GROWL,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 7431
    [TRAINER_BRENDAN_ROUTE_110_MUDKIP] =
    {
#line 7432
        .trainerName = _("BRENDAN"),
#line 7433
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7434
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 7436
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7437
        .doubleBattle = TRUE,
#line 7438
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7440
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7442
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7441
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7444
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7446
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7445
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7448
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7450
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7449
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7452
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7454
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7453
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7456
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7458
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7457
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7460
    [TRAINER_BRENDAN_ROUTE_119_MUDKIP] =
    {
#line 7461
        .trainerName = _("BRENDAN"),
#line 7462
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7463
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 7465
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7466
        .doubleBattle = TRUE,
#line 7467
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7469
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7472
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7471
            .ability = ABILITY_INNER_FOCUS,
#line 7470
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7473
                MOVE_SNARL,
                MOVE_FOUL_PLAY,
                MOVE_THUNDER_WAVE,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 7478
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7478
            .heldItem = ITEM_SCOPE_LENS,
#line 7481
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7480
            .ability = ABILITY_SAND_VEIL,
#line 7479
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7482
                MOVE_GYRO_BALL,
                MOVE_SLASH,
                MOVE_SWORDS_DANCE,
                MOVE_DRILL_RUN,
            },
            },
            {
#line 7487
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7490
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7489
            .ability = ABILITY_WATER_BUBBLE,
#line 7488
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7491
                MOVE_HYDRO_PUMP,
                MOVE_ICE_BEAM,
                MOVE_AQUA_RING,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 7496
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7499
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7498
            .ability = ABILITY_FLASH_FIRE,
#line 7497
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7500
                MOVE_SHADOW_BALL,
                MOVE_FLAMETHROWER,
                MOVE_WILL_O_WISP,
                MOVE_SPITE,
            },
            },
            {
#line 7505
            .species = SPECIES_SCEPTILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7505
            .heldItem = ITEM_OCCA_BERRY,
#line 7508
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 7507
            .ability = ABILITY_OVERGROW,
#line 7506
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7509
                MOVE_LEAF_BLADE,
                MOVE_NIGHT_SLASH,
                MOVE_DETECT,
                MOVE_PURSUIT,
            },
            },
        },
    },
#line 7514
    [TRAINER_BRENDAN_ROUTE_103_TREECKO] =
    {
#line 7515
        .trainerName = _("BRENDAN"),
#line 7516
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7517
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 7519
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7520
        .doubleBattle = TRUE,
#line 7521
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7523
            .species = SPECIES_TORCHIC,
#line 7523
            .gender = TRAINER_MON_MALE,
#line 7525
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7524
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7526
                MOVE_SCRATCH,
                MOVE_GROWL,
            },
            },
            {
#line 7529
            .species = SPECIES_EEVEE,
#line 7529
            .gender = TRAINER_MON_MALE,
#line 7531
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7530
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7532
                MOVE_GROWL,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 7535
    [TRAINER_BRENDAN_ROUTE_110_TREECKO] =
    {
#line 7536
        .trainerName = _("BRENDAN"),
#line 7537
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7538
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 7540
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7541
        .doubleBattle = TRUE,
#line 7542
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7544
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7546
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7545
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7548
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7550
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7549
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7552
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7554
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7553
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7556
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7558
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7557
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7560
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7562
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7561
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7564
    [TRAINER_BRENDAN_ROUTE_119_TREECKO] =
    {
#line 7565
        .trainerName = _("BRENDAN"),
#line 7566
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7567
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 7569
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7570
        .doubleBattle = TRUE,
#line 7571
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7573
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7576
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7575
            .ability = ABILITY_INNER_FOCUS,
#line 7574
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7577
                MOVE_SNARL,
                MOVE_FOUL_PLAY,
                MOVE_THUNDER_WAVE,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 7582
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7582
            .heldItem = ITEM_SCOPE_LENS,
#line 7585
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7584
            .ability = ABILITY_SAND_VEIL,
#line 7583
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7586
                MOVE_GYRO_BALL,
                MOVE_SLASH,
                MOVE_SWORDS_DANCE,
                MOVE_DRILL_RUN,
            },
            },
            {
#line 7591
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7594
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7593
            .ability = ABILITY_TECHNICIAN,
#line 7592
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7595
                MOVE_MACH_PUNCH,
                MOVE_BULLET_SEED,
                MOVE_SPORE,
                MOVE_COUNTER,
            },
            },
            {
#line 7600
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7603
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7602
            .ability = ABILITY_ANALYTIC,
#line 7601
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7604
                MOVE_BRINE,
                MOVE_ICY_WIND,
                MOVE_MINIMIZE,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 7609
            .species = SPECIES_BLAZIKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7609
            .heldItem = ITEM_PASSHO_BERRY,
#line 7612
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 7611
            .ability = ABILITY_BLAZE,
#line 7610
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7613
                MOVE_BLAZE_KICK,
                MOVE_JUMP_KICK,
                MOVE_DETECT,
                MOVE_SLASH,
            },
            },
        },
    },
#line 7618
    [TRAINER_BRENDAN_ROUTE_103_TORCHIC] =
    {
#line 7619
        .trainerName = _("BRENDAN"),
#line 7620
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7621
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 7623
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7624
        .doubleBattle = TRUE,
#line 7625
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7627
            .species = SPECIES_MUDKIP,
#line 7627
            .gender = TRAINER_MON_MALE,
#line 7629
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7628
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7630
                MOVE_TACKLE,
                MOVE_GROWL,
            },
            },
            {
#line 7633
            .species = SPECIES_EEVEE,
#line 7633
            .gender = TRAINER_MON_MALE,
#line 7635
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7634
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7636
                MOVE_GROWL,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 7639
    [TRAINER_BRENDAN_ROUTE_110_TORCHIC] =
    {
#line 7640
        .trainerName = _("BRENDAN"),
#line 7641
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7642
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 7644
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7645
        .doubleBattle = TRUE,
#line 7646
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7648
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7650
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7649
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7652
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7654
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7653
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7656
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7658
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7657
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7660
            .species = SPECIES_SKIDDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7662
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7661
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7664
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7666
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7665
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7668
    [TRAINER_BRENDAN_ROUTE_119_TORCHIC] =
    {
#line 7669
        .trainerName = _("BRENDAN"),
#line 7670
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7671
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 7673
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7674
        .doubleBattle = TRUE,
#line 7675
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7677
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7680
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7679
            .ability = ABILITY_INNER_FOCUS,
#line 7678
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7681
                MOVE_SNARL,
                MOVE_FOUL_PLAY,
                MOVE_THUNDER_WAVE,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 7686
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7686
            .heldItem = ITEM_SCOPE_LENS,
#line 7689
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7688
            .ability = ABILITY_SAND_VEIL,
#line 7687
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7690
                MOVE_GYRO_BALL,
                MOVE_SLASH,
                MOVE_SWORDS_DANCE,
                MOVE_DRILL_RUN,
            },
            },
            {
#line 7695
            .species = SPECIES_CARBINK_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7698
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7697
            .ability = ABILITY_LEVITATE,
#line 7696
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7699
                MOVE_TAR_SHOT,
                MOVE_FLAME_WHEEL,
                MOVE_SCORCHING_SANDS,
                MOVE_SMACK_DOWN,
            },
            },
            {
#line 7704
            .species = SPECIES_GOGOAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7707
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7706
            .ability = ABILITY_GRASS_PELT,
#line 7705
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7708
                MOVE_HORN_LEECH,
                MOVE_HIGH_HORSEPOWER,
                MOVE_BULK_UP,
                MOVE_GRASSY_TERRAIN,
            },
            },
            {
#line 7713
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7713
            .heldItem = ITEM_RINDO_BERRY,
#line 7716
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 7715
            .ability = ABILITY_TORRENT,
#line 7714
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7717
                MOVE_MUDDY_WATER,
                MOVE_ROCK_SLIDE,
                MOVE_PROTECT,
                MOVE_MUD_BOMB,
            },
            },
        },
    },
#line 7722
    [TRAINER_MAY_ROUTE_103_MUDKIP] =
    {
#line 7723
        .trainerName = _("MAY"),
#line 7724
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7725
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 7726
F_TRAINER_FEMALE | 
#line 7727
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7728
        .doubleBattle = TRUE,
#line 7729
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7731
            .species = SPECIES_TREECKO,
#line 7731
            .gender = TRAINER_MON_FEMALE,
#line 7733
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7732
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7734
                MOVE_POUND,
                MOVE_LEER,
            },
            },
            {
#line 7737
            .species = SPECIES_EEVEE,
#line 7737
            .gender = TRAINER_MON_FEMALE,
#line 7739
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7738
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7740
                MOVE_GROWL,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 7743
    [TRAINER_MAY_ROUTE_110_MUDKIP] =
    {
#line 7744
        .trainerName = _("MAY"),
#line 7745
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7746
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 7747
F_TRAINER_FEMALE | 
#line 7748
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7749
        .doubleBattle = TRUE,
#line 7750
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7752
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7754
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7753
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7756
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7758
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7757
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7760
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7762
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7761
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7764
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7766
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7765
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7768
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7770
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7769
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7772
    [TRAINER_MAY_ROUTE_119_MUDKIP] =
    {
#line 7773
        .trainerName = _("MAY"),
#line 7774
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7775
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 7776
F_TRAINER_FEMALE | 
#line 7777
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7778
        .doubleBattle = TRUE,
#line 7779
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7781
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7784
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7783
            .ability = ABILITY_MAGIC_BOUNCE,
#line 7782
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7785
                MOVE_PSYSHOCK,
                MOVE_FUTURE_SIGHT,
                MOVE_REFLECT,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 7790
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7790
            .heldItem = ITEM_SOFT_SAND,
#line 7793
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7792
            .ability = ABILITY_SAP_SIPPER,
#line 7791
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7794
                MOVE_ICE_SHARD,
                MOVE_BODY_SLAM,
                MOVE_MIST,
                MOVE_STOMPING_TANTRUM,
            },
            },
            {
#line 7799
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7802
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7801
            .ability = ABILITY_WATER_BUBBLE,
#line 7800
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7803
                MOVE_HYDRO_PUMP,
                MOVE_ICE_BEAM,
                MOVE_AQUA_RING,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 7808
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7811
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7810
            .ability = ABILITY_FLASH_FIRE,
#line 7809
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7812
                MOVE_SHADOW_BALL,
                MOVE_FLAMETHROWER,
                MOVE_WILL_O_WISP,
                MOVE_SPITE,
            },
            },
            {
#line 7817
            .species = SPECIES_SCEPTILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7817
            .heldItem = ITEM_OCCA_BERRY,
#line 7820
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 7819
            .ability = ABILITY_OVERGROW,
#line 7818
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7821
                MOVE_LEAF_BLADE,
                MOVE_NIGHT_SLASH,
                MOVE_DETECT,
                MOVE_PURSUIT,
            },
            },
        },
    },
#line 7826
    [TRAINER_MAY_ROUTE_103_TREECKO] =
    {
#line 7827
        .trainerName = _("MAY"),
#line 7828
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7829
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 7830
F_TRAINER_FEMALE | 
#line 7831
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7832
        .doubleBattle = TRUE,
#line 7833
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7835
            .species = SPECIES_TORCHIC,
#line 7835
            .gender = TRAINER_MON_FEMALE,
#line 7837
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7836
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7838
                MOVE_SCRATCH,
                MOVE_GROWL,
            },
            },
            {
#line 7841
            .species = SPECIES_EEVEE,
#line 7841
            .gender = TRAINER_MON_FEMALE,
#line 7843
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7842
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7844
                MOVE_GROWL,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 7847
    [TRAINER_MAY_ROUTE_110_TREECKO] =
    {
#line 7848
        .trainerName = _("MAY"),
#line 7849
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7850
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 7851
F_TRAINER_FEMALE | 
#line 7852
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7853
        .doubleBattle = TRUE,
#line 7854
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7856
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7858
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7857
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7860
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7862
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7861
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7864
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7866
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7865
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7868
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7870
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7869
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7872
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7874
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7873
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7876
    [TRAINER_MAY_ROUTE_119_TREECKO] =
    {
#line 7877
        .trainerName = _("MAY"),
#line 7878
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7879
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 7880
F_TRAINER_FEMALE | 
#line 7881
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7882
        .doubleBattle = TRUE,
#line 7883
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7885
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7888
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7887
            .ability = ABILITY_MAGIC_BOUNCE,
#line 7886
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7889
                MOVE_PSYSHOCK,
                MOVE_FUTURE_SIGHT,
                MOVE_REFLECT,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 7894
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7894
            .heldItem = ITEM_SOFT_SAND,
#line 7897
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7896
            .ability = ABILITY_SAP_SIPPER,
#line 7895
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7898
                MOVE_ICE_SHARD,
                MOVE_BODY_SLAM,
                MOVE_MIST,
                MOVE_STOMPING_TANTRUM,
            },
            },
            {
#line 7903
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7906
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7905
            .ability = ABILITY_TECHNICIAN,
#line 7904
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7907
                MOVE_MACH_PUNCH,
                MOVE_BULLET_SEED,
                MOVE_SPORE,
                MOVE_COUNTER,
            },
            },
            {
#line 7912
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7915
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7914
            .ability = ABILITY_ANALYTIC,
#line 7913
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7916
                MOVE_BRINE,
                MOVE_ICY_WIND,
                MOVE_MINIMIZE,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 7921
            .species = SPECIES_BLAZIKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7921
            .heldItem = ITEM_PASSHO_BERRY,
#line 7924
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 7923
            .ability = ABILITY_BLAZE,
#line 7922
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7925
                MOVE_BLAZE_KICK,
                MOVE_JUMP_KICK,
                MOVE_DETECT,
                MOVE_SLASH,
            },
            },
        },
    },
#line 7930
    [TRAINER_MAY_ROUTE_103_TORCHIC] =
    {
#line 7931
        .trainerName = _("MAY"),
#line 7932
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7933
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 7934
F_TRAINER_FEMALE | 
#line 7935
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7936
        .doubleBattle = TRUE,
#line 7937
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7939
            .species = SPECIES_MUDKIP,
#line 7939
            .gender = TRAINER_MON_FEMALE,
#line 7941
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7940
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7942
                MOVE_TACKLE,
                MOVE_GROWL,
            },
            },
            {
#line 7945
            .species = SPECIES_EEVEE,
#line 7945
            .gender = TRAINER_MON_FEMALE,
#line 7947
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7946
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7948
                MOVE_GROWL,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 7951
    [TRAINER_MAY_ROUTE_110_TORCHIC] =
    {
#line 7952
        .trainerName = _("MAY"),
#line 7953
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7954
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 7955
F_TRAINER_FEMALE | 
#line 7956
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7957
        .doubleBattle = TRUE,
#line 7958
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7960
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7962
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7961
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7964
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7966
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7965
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7968
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7970
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7969
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7972
            .species = SPECIES_SKIDDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7974
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7973
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7976
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7978
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7977
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7980
    [TRAINER_MAY_ROUTE_119_TORCHIC] =
    {
#line 7981
        .trainerName = _("MAY"),
#line 7982
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7983
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 7984
F_TRAINER_FEMALE | 
#line 7985
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7986
        .doubleBattle = TRUE,
#line 7987
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7989
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7992
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7991
            .ability = ABILITY_MAGIC_BOUNCE,
#line 7990
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7993
                MOVE_PSYSHOCK,
                MOVE_FUTURE_SIGHT,
                MOVE_REFLECT,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 7998
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7998
            .heldItem = ITEM_SOFT_SAND,
#line 8001
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 8000
            .ability = ABILITY_SAP_SIPPER,
#line 7999
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8002
                MOVE_ICE_SHARD,
                MOVE_BODY_SLAM,
                MOVE_MIST,
                MOVE_STOMPING_TANTRUM,
            },
            },
            {
#line 8007
            .species = SPECIES_CARBINK_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8010
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 8009
            .ability = ABILITY_LEVITATE,
#line 8008
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8011
                MOVE_TAR_SHOT,
                MOVE_FLAME_WHEEL,
                MOVE_SCORCHING_SANDS,
                MOVE_SMACK_DOWN,
            },
            },
            {
#line 8016
            .species = SPECIES_GOGOAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8019
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 8018
            .ability = ABILITY_GRASS_PELT,
#line 8017
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8020
                MOVE_HORN_LEECH,
                MOVE_HIGH_HORSEPOWER,
                MOVE_BULK_UP,
                MOVE_GRASSY_TERRAIN,
            },
            },
            {
#line 8025
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8025
            .heldItem = ITEM_RINDO_BERRY,
#line 8028
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 8027
            .ability = ABILITY_TORRENT,
#line 8026
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8029
                MOVE_MUDDY_WATER,
                MOVE_ROCK_SLIDE,
                MOVE_PROTECT,
                MOVE_MUD_BOMB,
            },
            },
        },
    },
#line 8034
    [TRAINER_ISAAC_1] =
    {
#line 8035
        .trainerName = _("ISAAC"),
#line 8036
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 8037
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender = 
#line 8039
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8040
        .doubleBattle = TRUE,
#line 8041
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8043
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8045
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8044
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8047
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8049
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8048
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8051
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8053
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8052
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8055
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8057
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8056
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8059
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8061
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8060
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8063
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8065
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8064
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8067
    [TRAINER_DAVIS] =
    {
#line 8068
        .trainerName = _("DAVIS"),
#line 8069
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8070
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 8072
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8073
        .doubleBattle = TRUE,
#line 8074
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8076
            .species = SPECIES_WIMPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8078
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8077
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8080
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8082
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8081
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8084
    [TRAINER_MITCHELL] =
    {
#line 8085
        .trainerName = _("MITCHELL"),
#line 8086
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8087
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 8089
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8090
        .doubleBattle = TRUE,
#line 8091
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8093
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8095
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8094
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8096
                MOVE_EXPLOSION,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
            },
            },
            {
#line 8101
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8103
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8102
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8104
                MOVE_EXPLOSION,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 8109
    [TRAINER_LYDIA_1] =
    {
#line 8110
        .trainerName = _("LYDIA"),
#line 8111
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 8112
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 8113
F_TRAINER_FEMALE | 
#line 8114
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8115
        .doubleBattle = TRUE,
#line 8116
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8118
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8120
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8119
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8122
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8124
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8123
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8126
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8128
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8127
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8130
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8132
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8131
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8134
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8136
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8135
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8138
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8140
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8139
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8142
    [TRAINER_HALLE] =
    {
#line 8143
        .trainerName = _("HALLE"),
#line 8144
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8145
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 8146
F_TRAINER_FEMALE | 
#line 8147
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8148
        .doubleBattle = TRUE,
#line 8149
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8151
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8153
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8152
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8155
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8157
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8156
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8159
    [TRAINER_GARRISON] =
    {
#line 8160
        .trainerName = _("GARRISON"),
#line 8161
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 8162
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 8164
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8165
        .doubleBattle = TRUE,
#line 8166
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8168
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8170
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8169
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8172
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8174
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8173
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8176
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8178
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8177
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8180
    [TRAINER_JACKSON_1] =
    {
#line 8181
        .trainerName = _("JACKSON"),
#line 8182
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 8183
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 8185
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8186
        .doubleBattle = TRUE,
#line 8187
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8189
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8191
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8190
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8193
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8195
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8194
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8197
    [TRAINER_LORENZO] =
    {
#line 8198
        .trainerName = _("LORENZO"),
#line 8199
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 8200
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 8202
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8203
        .doubleBattle = TRUE,
#line 8204
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8206
            .species = SPECIES_GOLISOPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8208
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8207
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8210
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8212
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8211
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8214
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8216
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8215
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8218
    [TRAINER_SEBASTIAN] =
    {
#line 8219
        .trainerName = _("SEBASTIAN"),
#line 8220
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 8221
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 8223
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8224
        .doubleBattle = TRUE,
#line 8225
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8227
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8229
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8228
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8231
    [TRAINER_CATHERINE_1] =
    {
#line 8232
        .trainerName = _("CATHERINE"),
#line 8233
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 8234
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 8235
F_TRAINER_FEMALE | 
#line 8236
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8237
        .doubleBattle = TRUE,
#line 8238
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8240
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8242
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8241
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8244
            .species = SPECIES_ROSERADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8246
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8245
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8248
    [TRAINER_JENNA] =
    {
#line 8249
        .trainerName = _("JENNA"),
#line 8250
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 8251
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 8252
F_TRAINER_FEMALE | 
#line 8253
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8254
        .doubleBattle = TRUE,
#line 8255
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8257
            .species = SPECIES_GALVANTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8259
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8258
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8261
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8263
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8262
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8265
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8267
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8266
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8269
    [TRAINER_SOPHIA] =
    {
#line 8270
        .trainerName = _("SOPHIA"),
#line 8271
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 8272
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 8273
F_TRAINER_FEMALE | 
#line 8274
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8275
        .doubleBattle = TRUE,
#line 8276
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8278
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8280
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8279
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8282
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8284
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8283
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8286
    [TRAINER_JULIO] =
    {
#line 8287
        .trainerName = _("JULIO"),
#line 8288
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 8289
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 8291
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8292
        .doubleBattle = TRUE,
#line 8293
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8295
            .species = SPECIES_VAROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8297
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8296
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8299
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8301
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8300
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8303
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8305
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8304
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8307
    [TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
#line 8308
        .trainerName = _("GRUNT"),
#line 8309
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 8310
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 8312
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 8313
        .doubleBattle = TRUE,
#line 8314
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8316
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8318
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8317
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8320
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8322
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8321
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8324
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8326
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8325
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8328
    [TRAINER_GRUNT_MT_PYRE_4] =
    {
#line 8329
        .trainerName = _("GRUNT"),
#line 8330
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 8331
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 8332
F_TRAINER_FEMALE | 
#line 8333
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 8334
        .doubleBattle = TRUE,
#line 8335
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8337
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8339
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8338
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8341
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8343
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8342
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8345
            .species = SPECIES_KILOWATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8347
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8346
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8349
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8351
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8350
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8353
    [TRAINER_GRUNT_JAGGED_PASS] =
    {
#line 8354
        .trainerName = _("GRUNT"),
#line 8355
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8356
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8358
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8359
        .doubleBattle = TRUE,
#line 8360
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8362
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8364
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8363
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8366
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8368
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8367
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8370
    [TRAINER_MARC] =
    {
#line 8371
        .trainerName = _("MARC"),
#line 8372
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8373
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 8375
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8376
        .doubleBattle = TRUE,
#line 8377
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8379
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8381
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 8380
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8383
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8385
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 8384
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8387
    [TRAINER_BRENDEN] =
    {
#line 8388
        .trainerName = _("BRENDEN"),
#line 8389
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 8390
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 8392
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8393
        .doubleBattle = TRUE,
#line 8394
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8396
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8398
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8397
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8400
            .species = SPECIES_CRABRAWLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8402
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8401
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8404
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8406
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8405
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8408
    [TRAINER_LILITH] =
    {
#line 8409
        .trainerName = _("LILITH"),
#line 8410
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8411
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 8412
F_TRAINER_FEMALE | 
#line 8413
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8414
        .doubleBattle = TRUE,
#line 8415
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8417
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8419
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8418
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8421
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8423
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8422
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8425
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8427
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8426
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8429
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8431
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8430
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8433
    [TRAINER_CRISTIAN] =
    {
#line 8434
        .trainerName = _("CRISTIAN"),
#line 8435
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8436
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 8438
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8439
        .doubleBattle = TRUE,
#line 8440
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8442
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8444
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8443
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8446
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8448
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8447
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8450
    [TRAINER_SYLVIA] =
    {
#line 8451
        .trainerName = _("SYLVIA"),
#line 8452
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 8453
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 8454
F_TRAINER_FEMALE | 
#line 8455
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8456
        .doubleBattle = TRUE,
#line 8457
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8459
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8461
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8460
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8463
            .species = SPECIES_ORICORIO_SENSU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8465
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8464
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8467
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8469
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8468
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8471
    [TRAINER_LEONARDO] =
    {
#line 8472
        .trainerName = _("LEONARDO"),
#line 8473
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 8474
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 8476
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8477
        .doubleBattle = TRUE,
#line 8478
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8480
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8482
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8481
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8484
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8486
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8485
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8488
    [TRAINER_ATHENA] =
    {
#line 8489
        .trainerName = _("ATHENA"),
#line 8490
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8491
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 8492
F_TRAINER_FEMALE | 
#line 8493
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8494
        .doubleBattle = TRUE,
#line 8495
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8497
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8499
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8498
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8501
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8503
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8502
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8505
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8507
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8506
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8509
    [TRAINER_HARRISON] =
    {
#line 8510
        .trainerName = _("HARRISON"),
#line 8511
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 8512
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 8514
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8515
        .doubleBattle = TRUE,
#line 8516
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8518
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8520
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8519
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8522
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8524
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8523
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8526
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8528
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8527
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8530
    [TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
#line 8531
        .trainerName = _("GRUNT"),
#line 8532
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8533
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8535
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8536
        .doubleBattle = TRUE,
#line 8537
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8539
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8541
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8540
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8543
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8545
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8544
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8547
    [TRAINER_CLARENCE] =
    {
#line 8548
        .trainerName = _("CLARENCE"),
#line 8549
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 8550
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 8552
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8553
        .doubleBattle = TRUE,
#line 8554
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8556
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8558
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8557
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8560
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8562
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8561
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8564
    [TRAINER_TERRY] =
    {
#line 8565
        .trainerName = _("TERRY"),
#line 8566
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 8567
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 8568
F_TRAINER_FEMALE | 
#line 8569
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8570
        .doubleBattle = TRUE,
#line 8571
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8573
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8575
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8574
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8577
    [TRAINER_NATE] =
    {
#line 8578
        .trainerName = _("NATE"),
#line 8579
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 8580
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 8582
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 8583
        .doubleBattle = TRUE,
#line 8584
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8586
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8588
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8587
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8590
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8592
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8591
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8594
    [TRAINER_KATHLEEN] =
    {
#line 8595
        .trainerName = _("KATHLEEN"),
#line 8596
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 8597
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 8598
F_TRAINER_FEMALE | 
#line 8599
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8600
        .doubleBattle = TRUE,
#line 8601
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8603
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8605
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8604
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8607
            .species = SPECIES_ORICORIO_PAU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8609
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8608
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8611
    [TRAINER_CLIFFORD] =
    {
#line 8612
        .trainerName = _("CLIFFORD"),
#line 8613
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 8614
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 8616
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 8617
        .doubleBattle = TRUE,
#line 8618
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8620
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8622
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8621
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8624
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8626
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8625
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8628
    [TRAINER_NICHOLAS] =
    {
#line 8629
        .trainerName = _("NICHOLAS"),
#line 8630
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 8631
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 8633
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8634
        .doubleBattle = TRUE,
#line 8635
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8637
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8639
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8638
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8641
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8643
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8642
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8645
    [TRAINER_GRUNT_SPACE_CENTER_3] =
    {
#line 8646
        .trainerName = _("GRUNT"),
#line 8647
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8648
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender = 
#line 8649
F_TRAINER_FEMALE | 
#line 8650
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8651
        .doubleBattle = TRUE,
#line 8652
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8654
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8656
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8655
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8658
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8660
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8659
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8662
    [TRAINER_GRUNT_SPACE_CENTER_4] =
    {
#line 8663
        .trainerName = _("GRUNT"),
#line 8664
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8665
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8667
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8668
        .doubleBattle = TRUE,
#line 8669
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8671
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8673
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8672
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8675
    [TRAINER_GRUNT_SPACE_CENTER_5] =
    {
#line 8676
        .trainerName = _("GRUNT"),
#line 8677
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8678
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8680
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8681
        .doubleBattle = TRUE,
#line 8682
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8684
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8686
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8685
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8688
    [TRAINER_GRUNT_SPACE_CENTER_6] =
    {
#line 8689
        .trainerName = _("GRUNT"),
#line 8690
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8691
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8693
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8694
        .doubleBattle = TRUE,
#line 8695
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8697
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8699
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8698
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8701
    [TRAINER_GRUNT_SPACE_CENTER_7] =
    {
#line 8702
        .trainerName = _("GRUNT"),
#line 8703
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8704
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8706
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8707
        .doubleBattle = TRUE,
#line 8708
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8710
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8712
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8711
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8714
    [TRAINER_MACEY] =
    {
#line 8715
        .trainerName = _("MACEY"),
#line 8716
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 8717
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 8718
F_TRAINER_FEMALE | 
#line 8719
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8720
        .doubleBattle = TRUE,
#line 8721
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8723
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8725
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8724
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8727
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8729
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8728
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8731
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8733
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8732
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8735
    [TRAINER_BRENDAN_RUSTBORO_TREECKO] =
    {
#line 8736
        .trainerName = _("BRENDAN"),
#line 8737
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8738
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8740
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8741
        .doubleBattle = TRUE,
#line 8742
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8744
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8746
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8745
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8748
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8750
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8749
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8752
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8754
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8753
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8756
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8758
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8757
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8760
    [TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
    {
#line 8761
        .trainerName = _("BRENDAN"),
#line 8762
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8763
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8765
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8766
        .doubleBattle = TRUE,
#line 8767
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8769
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8771
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8770
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8773
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8775
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8774
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8777
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8779
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8778
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8781
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8783
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8782
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8785
    [TRAINER_PAXTON] =
    {
#line 8786
        .trainerName = _("PAXTON"),
#line 8787
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 8788
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender = 
#line 8790
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8791
        .doubleBattle = TRUE,
#line 8792
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8794
            .species = SPECIES_VIBRAVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8796
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8795
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8798
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8800
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8799
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8802
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8804
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8803
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8806
    [TRAINER_ISABELLA] =
    {
#line 8807
        .trainerName = _("ISABELLA"),
#line 8808
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 8809
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 8810
F_TRAINER_FEMALE | 
#line 8811
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8812
        .doubleBattle = TRUE,
#line 8813
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8815
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8817
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8816
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8819
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8821
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8820
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8823
    [TRAINER_GRUNT_WEATHER_INST_5] =
    {
#line 8824
        .trainerName = _("GRUNT"),
#line 8825
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 8826
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 8827
F_TRAINER_FEMALE | 
#line 8828
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 8829
        .doubleBattle = TRUE,
#line 8830
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8832
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8834
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8833
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8836
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8838
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8837
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8840
    [TRAINER_TABITHA_MT_CHIMNEY] =
    {
#line 8841
        .trainerName = _("TABITHA"),
#line 8842
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 8843
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN_M,
        .encounterMusic_gender = 
#line 8845
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8846
        .doubleBattle = TRUE,
#line 8847
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8849
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8852
            .iv = TRAINER_PARTY_IVS(16, 16, 16, 16, 16, 16),
#line 8851
            .ability = ABILITY_INTIMIDATE,
#line 8850
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8853
                MOVE_FLAME_WHEEL,
                MOVE_FLAME_CHARGE,
                MOVE_BITE,
                MOVE_HOWL,
            },
            },
            {
#line 8858
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8861
            .iv = TRAINER_PARTY_IVS(16, 16, 16, 16, 16, 16),
#line 8860
            .ability = ABILITY_PRANKSTER,
#line 8859
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8862
                MOVE_FAKE_OUT,
                MOVE_ENCORE,
                MOVE_NIGHT_SHADE,
                MOVE_DISABLE,
            },
            },
            {
#line 8867
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8870
            .iv = TRAINER_PARTY_IVS(16, 16, 16, 16, 16, 16),
#line 8869
            .ability = ABILITY_INNER_FOCUS,
#line 8868
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8871
                MOVE_POISON_FANG,
                MOVE_AIR_CUTTER,
                MOVE_BITE,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 8876
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8876
            .heldItem = ITEM_FOCUS_SASH,
#line 8879
            .iv = TRAINER_PARTY_IVS(20, 16, 16, 20, 16, 16),
#line 8878
            .ability = ABILITY_LIGHTNING_ROD,
#line 8877
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8880
                MOVE_ROCK_BLAST,
                MOVE_BULLDOZE,
                MOVE_STOMP,
                MOVE_SMACK_DOWN,
            },
            },
        },
    },
#line 8885
    [TRAINER_JONATHAN] =
    {
#line 8886
        .trainerName = _("JONATHAN"),
#line 8887
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8888
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 8890
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8891
        .doubleBattle = TRUE,
#line 8892
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8894
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8896
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8895
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8898
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8900
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8899
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8902
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8904
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8903
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8906
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8908
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8907
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8910
    [TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
    {
#line 8911
        .trainerName = _("BRENDAN"),
#line 8912
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8913
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8915
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8916
        .doubleBattle = TRUE,
#line 8917
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8919
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8921
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8920
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8923
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8925
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8924
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8927
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8929
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8928
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8931
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8933
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8932
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8935
    [TRAINER_MAY_RUSTBORO_MUDKIP] =
    {
#line 8936
        .trainerName = _("MAY"),
#line 8937
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8938
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8939
F_TRAINER_FEMALE | 
#line 8940
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8941
        .doubleBattle = TRUE,
#line 8942
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8944
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8946
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8945
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8948
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8950
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8949
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8952
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8954
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8953
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8956
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8958
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8957
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8960
    [TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
#line 8961
        .trainerName = _("MAXIE"),
#line 8962
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 8963
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender = 
#line 8965
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8966
        .doubleBattle = TRUE,
#line 8967
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8969
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8969
            .heldItem = ITEM_HEAT_ROCK,
#line 8972
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8971
            .ability = ABILITY_DROUGHT,
#line 8970
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8973
                MOVE_SOLAR_BEAM,
                MOVE_BURNING_JEALOUSY,
                MOVE_EARTH_POWER,
                MOVE_PROTECT,
            },
            },
            {
#line 8978
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8981
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8980
            .ability = ABILITY_INTIMIDATE,
#line 8979
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8982
                MOVE_SNARL,
                MOVE_GLARE,
                MOVE_TAUNT,
                MOVE_DOUBLE_EDGE,
            },
            },
            {
#line 8987
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8990
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 8989
            .ability = ABILITY_MOLD_BREAKER,
#line 8988
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8991
                MOVE_BODY_PRESS,
                MOVE_IRON_TAIL,
                MOVE_HIGH_HORSEPOWER,
                MOVE_BULLDOZE,
            },
            },
            {
#line 8996
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8996
            .heldItem = ITEM_LEFTOVERS,
#line 8999
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 8998
            .ability = ABILITY_LEVITATE,
#line 8997
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9000
                MOVE_SUNNY_DAY,
                MOVE_HEAT_WAVE,
                MOVE_WILL_O_WISP,
                MOVE_EXPLOSION,
            },
            },
            {
#line 9005
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9005
            .heldItem = ITEM_LIFE_ORB,
#line 9008
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 9007
            .ability = ABILITY_HYPER_CUTTER,
#line 9006
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9009
                MOVE_SWORDS_DANCE,
                MOVE_THUNDER_FANG,
                MOVE_ROCK_SLIDE,
                MOVE_PROTECT,
            },
            },
            {
#line 9014
            .species = SPECIES_CAMERUPT_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9014
            .heldItem = ITEM_ASSAULT_VEST,
#line 9017
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9016
            .ability = ABILITY_SOLID_ROCK,
#line 9015
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9018
                MOVE_EARTHQUAKE,
                MOVE_OVERHEAT,
                MOVE_HYPER_BEAM,
                MOVE_ERUPTION,
            },
            },
        },
    },
#line 9023
    [TRAINER_MAXIE_MT_CHIMNEY] =
    {
#line 9024
        .trainerName = _("MAXIE"),
#line 9025
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 9026
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender = 
#line 9028
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9029
        .doubleBattle = TRUE,
#line 9030
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9032
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9035
            .iv = TRAINER_PARTY_IVS(20, 25, 20, 31, 15, 25),
#line 9034
            .ability = ABILITY_MOXIE,
#line 9033
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9036
                MOVE_SNARL,
                MOVE_CRUNCH,
                MOVE_FIRE_FANG,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 9041
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9041
            .heldItem = ITEM_HEAT_ROCK,
#line 9044
            .iv = TRAINER_PARTY_IVS(31, 25, 20, 15, 15, 20),
#line 9043
            .ability = ABILITY_DROUGHT,
#line 9042
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9045
                MOVE_YAWN,
                MOVE_HELPING_HAND,
                MOVE_FLAME_WHEEL,
                MOVE_PROTECT,
            },
            },
            {
#line 9050
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9050
            .heldItem = ITEM_EVIOLITE,
#line 9053
            .iv = TRAINER_PARTY_IVS(20, 20, 15, 31, 15, 25),
#line 9052
            .ability = ABILITY_MOLD_BREAKER,
#line 9051
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9054
                MOVE_ROCK_POLISH,
                MOVE_ROCK_SLIDE,
                MOVE_TAKE_DOWN,
                MOVE_DRAGON_TAIL,
            },
            },
            {
#line 9059
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9062
            .iv = TRAINER_PARTY_IVS(20, 31, 15, 20, 25, 15),
#line 9061
            .ability = ABILITY_HYPER_CUTTER,
#line 9060
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9063
                MOVE_AERIAL_ACE,
                MOVE_TAILWIND,
                MOVE_SWORDS_DANCE,
                MOVE_DRILL_RUN,
            },
            },
            {
#line 9068
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9068
            .heldItem = ITEM_ASSAULT_VEST,
#line 9071
            .iv = TRAINER_PARTY_IVS(31, 15, 20, 25, 20, 15),
#line 9070
            .ability = ABILITY_SOLID_ROCK,
#line 9069
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9072
                MOVE_LAVA_PLUME,
                MOVE_ROCK_SLIDE,
                MOVE_MAGNITUDE,
                MOVE_TAKE_DOWN,
            },
            },
        },
    },
#line 9077
    [TRAINER_TIANA] =
    {
#line 9078
        .trainerName = _("TIANA"),
#line 9079
        .trainerClass = TRAINER_CLASS_LASS,
#line 9080
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 9081
F_TRAINER_FEMALE | 
#line 9082
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9083
        .doubleBattle = TRUE,
#line 9084
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9086
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9088
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9087
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9090
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9092
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9091
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9094
    [TRAINER_HALEY_1] =
    {
#line 9095
        .trainerName = _("HALEY"),
#line 9096
        .trainerClass = TRAINER_CLASS_LASS,
#line 9097
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 9098
F_TRAINER_FEMALE | 
#line 9099
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9100
        .doubleBattle = TRUE,
#line 9101
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9103
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9105
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9104
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9107
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9109
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9108
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9111
    [TRAINER_JANICE] =
    {
#line 9112
        .trainerName = _("JANICE"),
#line 9113
        .trainerClass = TRAINER_CLASS_LASS,
#line 9114
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 9115
F_TRAINER_FEMALE | 
#line 9116
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9117
        .doubleBattle = TRUE,
#line 9118
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9120
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9122
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9121
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9124
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9126
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9125
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9128
    [TRAINER_VIVI] =
    {
#line 9129
        .trainerName = _("VIVI"),
#line 9130
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 9131
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 9132
F_TRAINER_FEMALE | 
#line 9133
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9134
        .doubleBattle = TRUE,
#line 9135
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9137
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9139
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9138
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9141
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9143
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9142
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9145
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9147
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9146
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9149
    [TRAINER_SALLY] =
    {
#line 9150
        .trainerName = _("SALLY"),
#line 9151
        .trainerClass = TRAINER_CLASS_LASS,
#line 9152
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 9153
F_TRAINER_FEMALE | 
#line 9154
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9155
        .doubleBattle = TRUE,
#line 9156
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9158
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9160
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9159
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9162
    [TRAINER_ROBIN] =
    {
#line 9163
        .trainerName = _("ROBIN"),
#line 9164
        .trainerClass = TRAINER_CLASS_LASS,
#line 9165
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 9166
F_TRAINER_FEMALE | 
#line 9167
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9168
        .doubleBattle = TRUE,
#line 9169
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9171
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9173
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9172
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9175
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9177
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9176
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9179
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9181
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9180
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9183
    [TRAINER_ANDREA] =
    {
#line 9184
        .trainerName = _("ANDREA"),
#line 9185
        .trainerClass = TRAINER_CLASS_LASS,
#line 9186
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 9187
F_TRAINER_FEMALE | 
#line 9188
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9189
        .doubleBattle = TRUE,
#line 9190
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9192
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9194
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9193
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9196
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9198
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9197
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9200
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9202
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9201
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9204
    [TRAINER_CRISSY] =
    {
#line 9205
        .trainerName = _("CRISSY"),
#line 9206
        .trainerClass = TRAINER_CLASS_LASS,
#line 9207
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 9208
F_TRAINER_FEMALE | 
#line 9209
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9210
        .doubleBattle = TRUE,
#line 9211
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9213
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9215
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9214
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9217
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9219
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9218
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9221
            .species = SPECIES_DEWGONG_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9223
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9222
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9225
    [TRAINER_RICK] =
    {
#line 9226
        .trainerName = _("RICK"),
#line 9227
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 9228
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 9230
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9231
        .doubleBattle = TRUE,
#line 9232
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9234
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9236
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9235
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9238
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9240
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9239
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9242
    [TRAINER_LYLE] =
    {
#line 9243
        .trainerName = _("LYLE"),
#line 9244
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 9245
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 9247
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9248
        .doubleBattle = TRUE,
#line 9249
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9251
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9253
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9252
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9255
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9257
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9256
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9259
            .species = SPECIES_CASCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9261
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9260
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9263
    [TRAINER_JOSE] =
    {
#line 9264
        .trainerName = _("JOSE"),
#line 9265
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 9266
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 9268
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9269
        .doubleBattle = TRUE,
#line 9270
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9272
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9274
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9273
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9276
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9278
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9277
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9280
    [TRAINER_DOUG] =
    {
#line 9281
        .trainerName = _("DOUG"),
#line 9282
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 9283
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 9285
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9286
        .doubleBattle = TRUE,
#line 9287
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9289
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9291
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9290
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9293
            .species = SPECIES_CASCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9295
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9294
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9297
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9299
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9298
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9301
    [TRAINER_GREG] =
    {
#line 9302
        .trainerName = _("GREG"),
#line 9303
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 9304
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 9306
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9307
        .doubleBattle = TRUE,
#line 9308
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9310
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9312
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9311
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9314
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9316
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9315
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9318
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9320
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9319
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9322
    [TRAINER_KENT] =
    {
#line 9323
        .trainerName = _("KENT"),
#line 9324
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 9325
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 9327
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9328
        .doubleBattle = TRUE,
#line 9329
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9331
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9333
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9332
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9335
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9337
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9336
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9339
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9341
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9340
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9343
    [TRAINER_JAMES_1] =
    {
#line 9344
        .trainerName = _("JAMES"),
#line 9345
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 9346
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 9348
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9349
        .doubleBattle = TRUE,
#line 9350
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9352
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9354
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9353
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9356
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9358
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9357
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9360
    [TRAINER_BRICE] =
    {
#line 9361
        .trainerName = _("BRICE"),
#line 9362
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9363
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 9365
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9366
        .doubleBattle = TRUE,
#line 9367
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9369
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9371
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9370
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9373
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9375
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9374
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9377
    [TRAINER_TRENT_1] =
    {
#line 9378
        .trainerName = _("TRENT"),
#line 9379
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9380
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 9382
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9383
        .doubleBattle = TRUE,
#line 9384
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9386
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9388
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9387
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9390
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9392
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9391
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9394
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9396
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9395
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9398
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9400
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9399
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9402
    [TRAINER_LENNY] =
    {
#line 9403
        .trainerName = _("LENNY"),
#line 9404
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9405
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 9407
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9408
        .doubleBattle = TRUE,
#line 9409
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9411
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9413
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9412
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9415
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9417
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9416
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9419
    [TRAINER_LUCAS_1] =
    {
#line 9420
        .trainerName = _("LUCAS"),
#line 9421
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9422
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 9424
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9425
        .doubleBattle = TRUE,
#line 9426
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9428
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9430
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9429
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9432
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9434
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9433
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9436
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9438
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9437
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9440
    [TRAINER_ALAN] =
    {
#line 9441
        .trainerName = _("ALAN"),
#line 9442
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9443
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 9445
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9446
        .doubleBattle = TRUE,
#line 9447
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9449
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9451
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9450
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9453
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9455
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9454
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9457
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9459
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9458
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9461
    [TRAINER_CLARK] =
    {
#line 9462
        .trainerName = _("CLARK"),
#line 9463
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9464
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 9466
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9467
        .doubleBattle = TRUE,
#line 9468
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9470
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9472
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9471
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9474
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9476
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9475
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9478
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9480
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9479
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9482
    [TRAINER_ERIC] =
    {
#line 9483
        .trainerName = _("ERIC"),
#line 9484
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9485
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 9487
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9488
        .doubleBattle = TRUE,
#line 9489
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9491
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9493
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9492
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9495
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9497
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9496
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9499
    [TRAINER_MIKE_1] =
    {
#line 9500
        .trainerName = _("MIKE"),
#line 9501
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9502
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 9504
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9505
        .doubleBattle = TRUE,
#line 9506
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9508
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9510
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9509
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9511
                MOVE_GUST,
                MOVE_GROWL,
            },
            },
            {
#line 9514
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9516
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9515
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9517
                MOVE_BITE,
                MOVE_SCARY_FACE,
            },
            },
        },
    },
#line 9520
    [TRAINER_DEZ_AND_LUKE] =
    {
#line 9521
        .trainerName = _("DEZ & LUKE"),
#line 9522
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 9523
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 9525
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9526
        .doubleBattle = TRUE,
#line 9527
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9529
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9531
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9530
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9533
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9535
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9534
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9537
    [TRAINER_LEA_AND_JED] =
    {
#line 9538
        .trainerName = _("LEA & JED"),
#line 9539
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 9540
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 9542
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9543
        .doubleBattle = TRUE,
#line 9544
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9546
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9548
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9547
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9550
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9552
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9551
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9554
    [TRAINER_KIRA_AND_DAN_1] =
    {
#line 9555
        .trainerName = _("KIRA & DAN"),
#line 9556
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 9557
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 9559
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9560
        .doubleBattle = TRUE,
#line 9561
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9563
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9565
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9564
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9567
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9569
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9568
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9571
    [TRAINER_JOHANNA] =
    {
#line 9572
        .trainerName = _("JOHANNA"),
#line 9573
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 9574
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 9575
F_TRAINER_FEMALE | 
#line 9576
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9577
        .doubleBattle = TRUE,
#line 9578
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9580
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9582
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9581
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9584
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9586
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9585
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9588
    [TRAINER_GERALD] =
    {
#line 9589
        .trainerName = _("GERALD"),
#line 9590
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9591
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 9593
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9594
        .doubleBattle = TRUE,
#line 9595
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9597
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9599
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9598
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9600
                MOVE_FLAMETHROWER,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
                MOVE_BIND,
            },
            },
            {
#line 9605
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9607
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9606
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9608
                MOVE_FLAMETHROWER,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
                MOVE_BIND,
            },
            },
        },
    },
#line 9613
    [TRAINER_VIVIAN] =
    {
#line 9614
        .trainerName = _("VIVIAN"),
#line 9615
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9616
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 9617
F_TRAINER_FEMALE | 
#line 9618
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9619
        .doubleBattle = TRUE,
#line 9620
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9622
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9624
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9623
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9625
                MOVE_BIDE,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 9630
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9632
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9631
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9633
                MOVE_THUNDER_PUNCH,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_MEDITATE,
            },
            },
        },
    },
#line 9638
    [TRAINER_DANIELLE] =
    {
#line 9639
        .trainerName = _("DANIELLE"),
#line 9640
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9641
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 9642
F_TRAINER_FEMALE | 
#line 9643
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9644
        .doubleBattle = TRUE,
#line 9645
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9647
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9649
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9648
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9650
                MOVE_BIDE,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_FIRE_PUNCH,
            },
            },
            {
#line 9655
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9657
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9656
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9658
                MOVE_BIDE,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 9663
    [TRAINER_HIDEO] =
    {
#line 9664
        .trainerName = _("HIDEO"),
#line 9665
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9666
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 9668
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9669
        .doubleBattle = TRUE,
#line 9670
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9672
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9674
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9673
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9675
                MOVE_TACKLE,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 9680
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9682
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9681
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9683
                MOVE_SHADOW_SNEAK,
                MOVE_SCREECH,
                MOVE_HEX,
                MOVE_CURSE,
            },
            },
        },
    },
#line 9688
    [TRAINER_KEIGO] =
    {
#line 9689
        .trainerName = _("KEIGO"),
#line 9690
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9691
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 9693
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9694
        .doubleBattle = TRUE,
#line 9695
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9697
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9699
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9698
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9701
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9703
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9702
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9705
    [TRAINER_RILEY] =
    {
#line 9706
        .trainerName = _("RILEY"),
#line 9707
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9708
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 9710
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9711
        .doubleBattle = TRUE,
#line 9712
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9714
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9716
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9715
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9718
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9720
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9719
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9722
    [TRAINER_FLINT] =
    {
#line 9723
        .trainerName = _("FLINT"),
#line 9724
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9725
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 9727
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9728
        .doubleBattle = TRUE,
#line 9729
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9731
            .species = SPECIES_NOIBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9733
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9732
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9735
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9737
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9736
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9739
    [TRAINER_ASHLEY] =
    {
#line 9740
        .trainerName = _("ASHLEY"),
#line 9741
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9742
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 9743
F_TRAINER_FEMALE | 
#line 9744
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9745
        .doubleBattle = TRUE,
#line 9746
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9748
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9750
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9749
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9752
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9754
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9753
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9756
            .species = SPECIES_ORICORIO_PAU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9758
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9757
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9760
    [TRAINER_WALLY_MAUVILLE] =
    {
#line 9761
        .trainerName = _("WALLY"),
#line 9762
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9763
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 9765
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9766
        .doubleBattle = TRUE,
#line 9767
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9769
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9771
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9770
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9773
            .species = SPECIES_TINKATINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9775
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9774
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9777
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9779
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9778
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9781
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9783
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 9782
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9785
    [TRAINER_WALLY_VR_2] =
    {
#line 9786
        .trainerName = _("WALLY"),
#line 9787
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9788
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 9790
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9791
        .doubleBattle = TRUE,
#line 9792
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9794
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9796
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9795
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9797
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 9802
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9804
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9803
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9805
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 9810
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9812
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9811
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9813
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 9818
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9820
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9819
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9821
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 9826
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9828
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 9827
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9829
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 9834
    [TRAINER_WALLY_VR_3] =
    {
#line 9835
        .trainerName = _("WALLY"),
#line 9836
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9837
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 9839
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9840
        .doubleBattle = TRUE,
#line 9841
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9843
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9845
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9844
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9846
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 9851
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9853
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9852
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9854
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 9859
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9861
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9860
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9862
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 9867
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9869
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9868
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9870
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 9875
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9877
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 9876
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9878
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 9883
    [TRAINER_WALLY_VR_4] =
    {
#line 9884
        .trainerName = _("WALLY"),
#line 9885
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9886
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 9888
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9889
        .doubleBattle = TRUE,
#line 9890
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9892
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9894
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9893
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9895
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 9900
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9902
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9901
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9903
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 9908
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9910
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9909
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9911
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 9916
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9918
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9917
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9919
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 9924
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9926
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 9925
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9927
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 9932
    [TRAINER_WALLY_VR_5] =
    {
#line 9933
        .trainerName = _("WALLY"),
#line 9934
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9935
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 9937
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9938
        .doubleBattle = TRUE,
#line 9939
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9941
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9943
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9942
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9944
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 9949
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9951
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9950
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9952
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 9957
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9959
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9958
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9960
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 9965
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9967
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9966
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9968
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 9973
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9975
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 9974
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9976
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 9981
    [TRAINER_BRENDAN_LILYCOVE_MUDKIP] =
    {
#line 9982
        .trainerName = _("BRENDAN"),
#line 9983
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9984
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 9986
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9987
        .doubleBattle = TRUE,
#line 9988
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9990
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9992
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9991
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9994
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9996
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9995
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9998
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10000
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9999
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10002
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10004
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 10003
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10006
    [TRAINER_BRENDAN_LILYCOVE_TREECKO] =
    {
#line 10007
        .trainerName = _("BRENDAN"),
#line 10008
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10009
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 10011
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10012
        .doubleBattle = TRUE,
#line 10013
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10015
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10017
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10016
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10019
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10021
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10020
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10023
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10025
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10024
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10027
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10029
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 10028
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10031
    [TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
    {
#line 10032
        .trainerName = _("BRENDAN"),
#line 10033
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10034
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 10036
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10037
        .doubleBattle = TRUE,
#line 10038
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10040
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10042
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10041
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10044
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10046
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10045
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10048
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10050
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10049
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10052
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10054
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 10053
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10056
    [TRAINER_MAY_LILYCOVE_MUDKIP] =
    {
#line 10057
        .trainerName = _("MAY"),
#line 10058
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10059
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 10060
F_TRAINER_FEMALE | 
#line 10061
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10062
        .doubleBattle = TRUE,
#line 10063
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10065
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10067
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10066
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10069
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10071
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10070
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10073
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10075
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10074
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10077
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10079
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 10078
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10081
    [TRAINER_MAY_LILYCOVE_TREECKO] =
    {
#line 10082
        .trainerName = _("MAY"),
#line 10083
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10084
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 10085
F_TRAINER_FEMALE | 
#line 10086
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10087
        .doubleBattle = TRUE,
#line 10088
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10090
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10092
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10091
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10094
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10096
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10095
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10098
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10100
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10099
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10102
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10104
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 10103
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10106
    [TRAINER_MAY_LILYCOVE_TORCHIC] =
    {
#line 10107
        .trainerName = _("MAY"),
#line 10108
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10109
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 10110
F_TRAINER_FEMALE | 
#line 10111
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10112
        .doubleBattle = TRUE,
#line 10113
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10115
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10117
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10116
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10119
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10121
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10120
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10123
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10125
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10124
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10127
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10129
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 10128
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10131
    [TRAINER_JONAH] =
    {
#line 10132
        .trainerName = _("JONAH"),
#line 10133
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 10134
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 10136
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10137
        .doubleBattle = TRUE,
#line 10138
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10140
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10142
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10141
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10144
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10146
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10145
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10148
    [TRAINER_HENRY] =
    {
#line 10149
        .trainerName = _("HENRY"),
#line 10150
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 10151
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 10153
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10154
        .doubleBattle = TRUE,
#line 10155
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10157
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10159
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10158
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10161
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10163
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10162
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10165
            .species = SPECIES_HUNTAIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10167
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10166
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10169
    [TRAINER_ROGER] =
    {
#line 10170
        .trainerName = _("ROGER"),
#line 10171
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 10172
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 10174
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10175
        .doubleBattle = TRUE,
#line 10176
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10178
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10180
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10179
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10182
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10184
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10183
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10186
    [TRAINER_ALEXA] =
    {
#line 10187
        .trainerName = _("ALEXA"),
#line 10188
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 10189
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 10190
F_TRAINER_FEMALE | 
#line 10191
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10192
        .doubleBattle = TRUE,
#line 10193
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10195
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10197
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10196
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10199
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10201
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10200
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10203
            .species = SPECIES_GRAPPLOCT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10205
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10204
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10207
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10209
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10208
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10211
    [TRAINER_RUBEN] =
    {
#line 10212
        .trainerName = _("RUBEN"),
#line 10213
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 10214
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 10216
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10217
        .doubleBattle = TRUE,
#line 10218
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10220
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10222
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10221
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10224
            .species = SPECIES_BISHARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10226
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10225
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10228
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10230
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10229
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10232
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10234
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10233
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10236
    [TRAINER_KOJI_1] =
    {
#line 10237
        .trainerName = _("KOJI"),
#line 10238
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 10239
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 10241
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10242
        .doubleBattle = TRUE,
#line 10243
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10245
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10247
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10246
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10249
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10251
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10250
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10253
    [TRAINER_WAYNE] =
    {
#line 10254
        .trainerName = _("WAYNE"),
#line 10255
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 10256
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 10258
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10259
        .doubleBattle = TRUE,
#line 10260
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10262
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10264
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10263
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10266
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10268
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10267
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10270
    [TRAINER_AIDAN] =
    {
#line 10271
        .trainerName = _("AIDAN"),
#line 10272
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 10273
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 10275
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10276
        .doubleBattle = TRUE,
#line 10277
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10279
            .species = SPECIES_ORICORIO_BAILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10281
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10280
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10283
            .species = SPECIES_ORICORIO_POM_POM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10285
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10284
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10287
            .species = SPECIES_ORICORIO_PAU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10289
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10288
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10291
            .species = SPECIES_ORICORIO_SENSU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10293
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10292
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10295
    [TRAINER_REED] =
    {
#line 10296
        .trainerName = _("REED"),
#line 10297
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 10298
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 10300
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 10301
        .doubleBattle = TRUE,
#line 10302
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10304
            .species = SPECIES_MIENFOO_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10306
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10305
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10308
            .species = SPECIES_CRABRAWLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10310
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10309
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10312
    [TRAINER_TISHA] =
    {
#line 10313
        .trainerName = _("TISHA"),
#line 10314
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 10315
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 10316
F_TRAINER_FEMALE | 
#line 10317
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 10318
        .doubleBattle = TRUE,
#line 10319
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10321
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10323
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10322
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10325
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10327
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10326
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10329
    [TRAINER_TORI_AND_TIA] =
    {
#line 10330
        .trainerName = _("TORI & TIA"),
#line 10331
        .trainerClass = TRAINER_CLASS_TWINS,
#line 10332
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 10334
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 10335
        .doubleBattle = TRUE,
#line 10336
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10338
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10341
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10340
            .ability = ABILITY_PSYCH_OUT,
#line 10339
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10342
                MOVE_HYPNOSIS,
                MOVE_COPYCAT,
                MOVE_SKILL_SWAP,
                MOVE_DIZZY_PUNCH,
            },
            },
            {
#line 10347
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10350
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10349
            .ability = ABILITY_CONTRARY,
#line 10348
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10351
                MOVE_FAKE_TEARS,
                MOVE_DREAM_EATER,
                MOVE_HYPNOSIS,
                MOVE_UPROAR,
            },
            },
        },
    },
#line 10356
    [TRAINER_KIM_AND_IRIS] =
    {
#line 10357
        .trainerName = _("KIM & IRIS"),
#line 10358
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 10359
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender = 
#line 10361
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 10362
        .doubleBattle = TRUE,
#line 10363
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10365
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10368
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10367
            .ability = ABILITY_DROUGHT,
#line 10366
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10370
            .species = SPECIES_CHERRIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10373
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10372
            .ability = ABILITY_FLOWER_GIFT,
#line 10371
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10375
    [TRAINER_TYRA_AND_IVY] =
    {
#line 10376
        .trainerName = _("TYRA & IVY"),
#line 10377
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 10378
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender = 
#line 10380
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 10381
        .doubleBattle = TRUE,
#line 10382
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10384
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10386
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10385
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10387
                MOVE_GROWTH,
                MOVE_STUN_SPORE,
                MOVE_MEGA_DRAIN,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 10392
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10394
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10393
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10395
                MOVE_DEFENSE_CURL,
                MOVE_ROLLOUT,
                MOVE_SELFDESTRUCT,
                MOVE_ROCK_THROW,
            },
            },
        },
    },
#line 10400
    [TRAINER_MEL_AND_PAUL] =
    {
#line 10401
        .trainerName = _("MEL & PAUL"),
#line 10402
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 10403
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 10405
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10406
        .doubleBattle = TRUE,
#line 10407
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10409
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10411
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10410
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10412
                MOVE_LIGHT_SCREEN,
                MOVE_PSYBEAM,
                MOVE_TOXIC,
                MOVE_PROTECT,
            },
            },
            {
#line 10417
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10419
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10418
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10420
                MOVE_SILVER_WIND,
                MOVE_GIGA_DRAIN,
                MOVE_ATTRACT,
                MOVE_STUN_SPORE,
            },
            },
        },
    },
#line 10425
    [TRAINER_JOHN_AND_JAY_1] =
    {
#line 10426
        .trainerName = _("JOHN & JAY"),
#line 10427
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 10428
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender = 
#line 10430
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10431
        .doubleBattle = TRUE,
#line 10432
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10434
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10436
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 10435
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10437
                MOVE_PSYCHIC,
                MOVE_FIRE_PUNCH,
                MOVE_PSYCH_UP,
                MOVE_PROTECT,
            },
            },
            {
#line 10442
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10444
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 10443
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10445
                MOVE_FOCUS_PUNCH,
                MOVE_ROCK_TOMB,
                MOVE_REST,
                MOVE_BELLY_DRUM,
            },
            },
        },
    },
#line 10450
    [TRAINER_RELI_AND_IAN] =
    {
#line 10451
        .trainerName = _("RELI & IAN"),
#line 10452
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 10453
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 10455
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 10456
        .doubleBattle = TRUE,
#line 10457
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10459
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10461
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10460
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10463
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10465
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10464
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10467
    [TRAINER_LILA_AND_ROY_1] =
    {
#line 10468
        .trainerName = _("LILA & ROY"),
#line 10469
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 10470
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 10472
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 10473
        .doubleBattle = TRUE,
#line 10474
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10476
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10478
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10477
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10480
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10482
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10481
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10484
    [TRAINER_LISA_AND_RAY] =
    {
#line 10485
        .trainerName = _("LISA & RAY"),
#line 10486
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 10487
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 10489
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 10490
        .doubleBattle = TRUE,
#line 10491
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10493
            .species = SPECIES_CRABRAWLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10495
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10494
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10497
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10499
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10498
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10501
    [TRAINER_CHRIS] =
    {
#line 10502
        .trainerName = _("CHRIS"),
#line 10503
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 10504
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 10506
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10507
        .doubleBattle = TRUE,
#line 10508
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10510
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10512
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10511
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10514
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10516
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10515
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10518
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10520
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10519
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10522
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10524
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10523
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10526
    [TRAINER_DAWSON] =
    {
#line 10527
        .trainerName = _("DAWSON"),
#line 10528
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 10529
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender = 
#line 10531
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10532
        .doubleBattle = TRUE,
#line 10533
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10535
            .species = SPECIES_CHINGLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10535
            .heldItem = ITEM_NUGGET,
#line 10537
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10536
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10539
            .species = SPECIES_SKIDDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10541
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10540
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10543
    [TRAINER_SARAH] =
    {
#line 10544
        .trainerName = _("SARAH"),
#line 10545
        .trainerClass = TRAINER_CLASS_LADY,
#line 10546
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 10547
F_TRAINER_FEMALE | 
#line 10548
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10549
        .doubleBattle = TRUE,
#line 10550
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10552
            .species = SPECIES_BUDEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10552
            .heldItem = ITEM_NUGGET,
#line 10554
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10553
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10556
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10558
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10557
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10560
    [TRAINER_DARIAN] =
    {
#line 10561
        .trainerName = _("DARIAN"),
#line 10562
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 10563
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 10565
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10566
        .doubleBattle = TRUE,
#line 10567
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10569
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10571
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10570
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10573
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10575
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10574
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10577
    [TRAINER_HAILEY] =
    {
#line 10578
        .trainerName = _("HAILEY"),
#line 10579
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 10580
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender = 
#line 10581
F_TRAINER_FEMALE | 
#line 10582
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10583
        .doubleBattle = TRUE,
#line 10584
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10586
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10588
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10587
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10590
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10592
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10591
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10594
    [TRAINER_CHANDLER] =
    {
#line 10595
        .trainerName = _("CHANDLER"),
#line 10596
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 10597
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender = 
#line 10599
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10600
        .doubleBattle = TRUE,
#line 10601
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10603
            .species = SPECIES_SANDYGAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10605
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10604
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10607
            .species = SPECIES_SANDYGAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10609
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10608
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10611
    [TRAINER_KALEB] =
    {
#line 10612
        .trainerName = _("KALEB"),
#line 10613
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 10614
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender = 
#line 10616
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 10617
        .doubleBattle = TRUE,
#line 10618
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10620
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10620
            .heldItem = ITEM_ORAN_BERRY,
#line 10622
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10621
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10624
            .species = SPECIES_PICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10624
            .heldItem = ITEM_ORAN_BERRY,
#line 10626
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10625
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10628
    [TRAINER_JOSEPH] =
    {
#line 10629
        .trainerName = _("JOSEPH"),
#line 10630
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 10631
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 10633
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10634
        .doubleBattle = TRUE,
#line 10635
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10637
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10639
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10638
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10641
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10643
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10642
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10645
    [TRAINER_ALYSSA] =
    {
#line 10646
        .trainerName = _("ALYSSA"),
#line 10647
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 10648
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 10649
F_TRAINER_FEMALE | 
#line 10650
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10651
        .doubleBattle = TRUE,
#line 10652
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10654
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10656
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10655
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10658
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10660
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10659
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10662
    [TRAINER_MARCOS] =
    {
#line 10663
        .trainerName = _("MARCOS"),
#line 10664
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 10665
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 10667
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10668
        .doubleBattle = TRUE,
#line 10669
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10671
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10673
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10672
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10675
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10677
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10676
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10679
    [TRAINER_RHETT] =
    {
#line 10680
        .trainerName = _("RHETT"),
#line 10681
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 10682
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 10684
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10685
        .doubleBattle = TRUE,
#line 10686
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10688
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10690
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10689
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10692
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10694
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10693
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10696
    [TRAINER_TYRON] =
    {
#line 10697
        .trainerName = _("TYRON"),
#line 10698
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 10699
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 10701
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10702
        .doubleBattle = TRUE,
#line 10703
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10705
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10707
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10706
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10709
            .species = SPECIES_CUFANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10711
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10710
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10713
    [TRAINER_CELINA] =
    {
#line 10714
        .trainerName = _("CELINA"),
#line 10715
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 10716
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender = 
#line 10717
F_TRAINER_FEMALE | 
#line 10718
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10719
        .doubleBattle = TRUE,
#line 10720
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10722
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10724
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10723
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10726
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10728
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10727
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10730
    [TRAINER_BIANCA] =
    {
#line 10731
        .trainerName = _("BIANCA"),
#line 10732
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 10733
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 10734
F_TRAINER_FEMALE | 
#line 10735
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10736
        .doubleBattle = TRUE,
#line 10737
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10739
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10741
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10740
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10743
            .species = SPECIES_TINKATINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10745
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10744
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10747
            .species = SPECIES_SUNKERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10749
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10748
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10751
    [TRAINER_HAYDEN] =
    {
#line 10752
        .trainerName = _("HAYDEN"),
#line 10753
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 10754
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 10756
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10757
        .doubleBattle = TRUE,
#line 10758
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10760
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10762
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10761
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10764
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10766
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10765
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10768
    [TRAINER_SOPHIE] =
    {
#line 10769
        .trainerName = _("SOPHIE"),
#line 10770
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 10771
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 10772
F_TRAINER_FEMALE | 
#line 10773
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10774
        .doubleBattle = TRUE,
#line 10775
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10777
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10779
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10778
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10781
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10783
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10782
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10785
    [TRAINER_COBY] =
    {
#line 10786
        .trainerName = _("COBY"),
#line 10787
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 10788
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 10790
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10791
        .doubleBattle = TRUE,
#line 10792
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10794
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10796
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10795
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10798
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10800
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10799
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10802
    [TRAINER_LAWRENCE] =
    {
#line 10803
        .trainerName = _("LAWRENCE"),
#line 10804
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 10805
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 10807
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10808
        .doubleBattle = TRUE,
#line 10809
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10811
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10813
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10812
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10815
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10817
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10816
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10819
    [TRAINER_WYATT] =
    {
#line 10820
        .trainerName = _("WYATT"),
#line 10821
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 10822
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender = 
#line 10824
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10825
        .doubleBattle = TRUE,
#line 10826
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10828
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10830
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10829
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10832
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10834
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10833
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10836
    [TRAINER_ANGELINA] =
    {
#line 10837
        .trainerName = _("ANGELINA"),
#line 10838
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 10839
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 10840
F_TRAINER_FEMALE | 
#line 10841
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10842
        .doubleBattle = TRUE,
#line 10843
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10845
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10848
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10847
            .ability = ABILITY_CHEERLEADER,
#line 10846
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10850
            .species = SPECIES_TINKATUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10853
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10852
            .ability = ABILITY_PICKPOCKET,
#line 10851
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10855
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10858
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10857
            .ability = ABILITY_MINUS,
#line 10856
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10860
    [TRAINER_KAI] =
    {
#line 10861
        .trainerName = _("KAI"),
#line 10862
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 10863
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 10865
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10866
        .doubleBattle = TRUE,
#line 10867
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10869
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10871
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10870
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10873
            .species = SPECIES_SKRELP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10875
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10874
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10877
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10879
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10878
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10881
    [TRAINER_CHARLOTTE] =
    {
#line 10882
        .trainerName = _("CHARLOTTE"),
#line 10883
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 10884
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 10885
F_TRAINER_FEMALE | 
#line 10886
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10887
        .doubleBattle = TRUE,
#line 10888
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10890
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10892
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10891
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10894
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10896
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10895
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10898
    [TRAINER_DEANDRE] =
    {
#line 10899
        .trainerName = _("DEANDRE"),
#line 10900
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 10901
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 10903
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10904
        .doubleBattle = TRUE,
#line 10905
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10907
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10909
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10908
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10911
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10913
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10912
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10915
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10917
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10916
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10919
    [TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
#line 10920
        .trainerName = _("GRUNT"),
#line 10921
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10922
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 10924
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10925
        .doubleBattle = TRUE,
#line 10926
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10928
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10930
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10929
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10932
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10934
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10933
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10936
    [TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
#line 10937
        .trainerName = _("GRUNT"),
#line 10938
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10939
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 10941
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10942
        .doubleBattle = TRUE,
#line 10943
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10945
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10947
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10946
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10949
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10951
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10950
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10953
    [TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
#line 10954
        .trainerName = _("GRUNT"),
#line 10955
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10956
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 10958
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10959
        .doubleBattle = TRUE,
#line 10960
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10962
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10964
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10963
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10966
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10968
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10967
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10970
    [TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
#line 10971
        .trainerName = _("GRUNT"),
#line 10972
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10973
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 10975
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10976
        .doubleBattle = TRUE,
#line 10977
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10979
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10981
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10980
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10983
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10985
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10984
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10987
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10989
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10988
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10991
    [TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
    {
#line 10992
        .trainerName = _("GRUNT"),
#line 10993
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10994
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 10996
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10997
        .doubleBattle = TRUE,
#line 10998
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11000
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11002
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11001
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11004
            .species = SPECIES_CARBINK_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11006
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11005
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11008
    [TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
#line 11009
        .trainerName = _("GRUNT"),
#line 11010
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11011
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11013
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11014
        .doubleBattle = TRUE,
#line 11015
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11017
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11019
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11018
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11021
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11023
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11022
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11025
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11027
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11026
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11029
    [TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
#line 11030
        .trainerName = _("GRUNT"),
#line 11031
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11032
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11034
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11035
        .doubleBattle = TRUE,
#line 11036
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11038
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11040
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11039
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11042
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11044
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11043
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11046
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11048
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11047
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11050
    [TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
#line 11051
        .trainerName = _("GRUNT"),
#line 11052
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11053
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11055
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11056
        .doubleBattle = TRUE,
#line 11057
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11059
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11061
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11060
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11063
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11065
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11064
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11067
    [TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
#line 11068
        .trainerName = _("GRUNT"),
#line 11069
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11070
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11072
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11073
        .doubleBattle = TRUE,
#line 11074
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11076
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11078
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11077
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11080
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11082
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11081
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11084
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11086
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11085
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11088
    [TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
#line 11089
        .trainerName = _("GRUNT"),
#line 11090
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11091
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11093
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11094
        .doubleBattle = TRUE,
#line 11095
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11097
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11099
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11098
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11101
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11103
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11102
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11105
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11107
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11106
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11109
    [TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
#line 11110
        .trainerName = _("GRUNT"),
#line 11111
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11112
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11114
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11115
        .doubleBattle = TRUE,
#line 11116
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 11118
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11120
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11119
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11122
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11124
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11123
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11126
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11128
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11127
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11130
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11132
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11131
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11134
    [TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
#line 11135
        .trainerName = _("GRUNT"),
#line 11136
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11137
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11139
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11140
        .doubleBattle = TRUE,
#line 11141
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11143
            .species = SPECIES_CARBINK_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11145
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11144
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11147
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11149
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11148
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11151
    [TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
#line 11152
        .trainerName = _("GRUNT"),
#line 11153
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11154
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11156
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11157
        .doubleBattle = TRUE,
#line 11158
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11160
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11162
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11161
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11164
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11166
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11165
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11168
    [TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
#line 11169
        .trainerName = _("GRUNT"),
#line 11170
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11171
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender = 
#line 11172
F_TRAINER_FEMALE | 
#line 11173
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11174
        .doubleBattle = TRUE,
#line 11175
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11177
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11179
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11178
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11181
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11183
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11182
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11185
    [TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
#line 11186
        .trainerName = _("GRUNT"),
#line 11187
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11188
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender = 
#line 11189
F_TRAINER_FEMALE | 
#line 11190
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11191
        .doubleBattle = TRUE,
#line 11192
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11194
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11196
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11195
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11198
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11200
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11199
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11202
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11204
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11203
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11206
    [TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
#line 11207
        .trainerName = _("GRUNT"),
#line 11208
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11209
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender = 
#line 11210
F_TRAINER_FEMALE | 
#line 11211
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11212
        .doubleBattle = TRUE,
#line 11213
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11215
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11217
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11216
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11219
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11221
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11220
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11223
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11225
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11224
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11227
    [TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
#line 11228
        .trainerName = _("TABITHA"),
#line 11229
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 11230
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN_M,
        .encounterMusic_gender = 
#line 11232
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11233
        .doubleBattle = TRUE,
#line 11234
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11236
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11239
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 11238
            .ability = ABILITY_INNER_FOCUS,
#line 11237
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11240
                MOVE_BRAVE_BIRD,
                MOVE_CROSS_POISON,
                MOVE_STEEL_WING,
                MOVE_ROOST,
            },
            },
            {
#line 11245
            .species = SPECIES_SABLEYE_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11248
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 11247
            .ability = ABILITY_PRANKSTER,
#line 11246
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11249
                MOVE_QUASH,
                MOVE_FOUL_PLAY,
                MOVE_RECOVER,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 11254
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11257
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 11256
            .ability = ABILITY_MOXIE,
#line 11255
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11258
                MOVE_SUBMISSION,
                MOVE_X_SCISSOR,
                MOVE_THROAT_CHOP,
                MOVE_BULLDOZE,
            },
            },
            {
#line 11263
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11263
            .heldItem = ITEM_BIG_ROOT,
#line 11266
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 11265
            .ability = ABILITY_STORM_DRAIN,
#line 11264
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11267
                MOVE_SPIKY_SHIELD,
                MOVE_DRAIN_PUNCH,
                MOVE_SUCKER_PUNCH,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 11272
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11272
            .heldItem = ITEM_ASSAULT_VEST,
#line 11275
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 11274
            .ability = ABILITY_SOLID_ROCK,
#line 11273
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11276
                MOVE_ROCK_WRECKER,
                MOVE_DRILL_RUN,
                MOVE_MEGAHORN,
                MOVE_HEAT_CRASH,
            },
            },
            {
#line 11281
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11281
            .heldItem = ITEM_SITRUS_BERRY,
#line 11284
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 11283
            .ability = ABILITY_INTIMIDATE,
#line 11282
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11285
                MOVE_WILD_CHARGE,
                MOVE_FLARE_BLITZ,
                MOVE_EXTREME_SPEED,
                MOVE_PLAY_ROUGH,
            },
            },
        },
    },
#line 11290
    [TRAINER_DARCY] =
    {
#line 11291
        .trainerName = _("DARCY"),
#line 11292
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 11293
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 11294
F_TRAINER_FEMALE | 
#line 11295
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11296
        .doubleBattle = TRUE,
#line 11297
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 11299
            .species = SPECIES_SABLEYE_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11301
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11300
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11303
            .species = SPECIES_ROSERADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11305
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11304
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11307
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11309
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11308
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11311
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11313
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11312
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11315
    [TRAINER_MAXIE_MOSSDEEP] =
    {
#line 11316
        .trainerName = _("MAXIE"),
#line 11317
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 11318
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender = 
#line 11320
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11321
        .doubleBattle = TRUE,
#line 11322
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11324
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11326
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 11325
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11328
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11330
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 11329
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11332
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11334
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 11333
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11336
    [TRAINER_PETE] =
    {
#line 11337
        .trainerName = _("PETE"),
#line 11338
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 11339
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 11341
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 11342
        .doubleBattle = TRUE,
#line 11343
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11345
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11347
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11346
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11349
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11351
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11350
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11353
    [TRAINER_ISABELLE] =
    {
#line 11354
        .trainerName = _("ISABELLE"),
#line 11355
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 11356
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 11357
F_TRAINER_FEMALE | 
#line 11358
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 11359
        .doubleBattle = TRUE,
#line 11360
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11362
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11364
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11363
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11366
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11368
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11367
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11370
    [TRAINER_ANDRES_1] =
    {
#line 11371
        .trainerName = _("ANDRES"),
#line 11372
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 11373
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 11375
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11376
        .doubleBattle = TRUE,
#line 11377
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11379
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11381
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 11380
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11383
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11385
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 11384
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11387
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11389
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 11388
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11391
    [TRAINER_JOSUE] =
    {
#line 11392
        .trainerName = _("JOSUE"),
#line 11393
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 11394
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 11396
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11397
        .doubleBattle = TRUE,
#line 11398
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11400
            .species = SPECIES_SQUAWKABILLY_BLUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11402
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 11401
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11404
            .species = SPECIES_SQUAWKABILLY_YELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11406
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 11405
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11408
    [TRAINER_CAMRON] =
    {
#line 11409
        .trainerName = _("CAMRON"),
#line 11410
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 11411
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 11413
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 11414
        .doubleBattle = TRUE,
#line 11415
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11417
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11419
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11418
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11421
            .species = SPECIES_MIENFOO_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11423
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11422
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11425
    [TRAINER_CORY_1] =
    {
#line 11426
        .trainerName = _("CORY"),
#line 11427
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 11428
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 11430
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11431
        .doubleBattle = TRUE,
#line 11432
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 11434
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11436
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11435
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11438
            .species = SPECIES_SQUAWKABILLY_WHITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11440
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11439
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11442
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11444
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11443
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11446
            .species = SPECIES_CRABRAWLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11448
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11447
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11450
    [TRAINER_CAROLINA] =
    {
#line 11451
        .trainerName = _("CAROLINA"),
#line 11452
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 11453
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 11454
F_TRAINER_FEMALE | 
#line 11455
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11456
        .doubleBattle = TRUE,
#line 11457
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11459
            .species = SPECIES_MINIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11461
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 11460
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11463
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11465
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 11464
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11467
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11469
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 11468
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11471
    [TRAINER_ELIJAH] =
    {
#line 11472
        .trainerName = _("ELIJAH"),
#line 11473
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 11474
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 11476
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11477
        .doubleBattle = TRUE,
#line 11478
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11480
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11482
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11481
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11484
            .species = SPECIES_RUFFLET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11486
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11485
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11488
    [TRAINER_CELIA] =
    {
#line 11489
        .trainerName = _("CELIA"),
#line 11490
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 11491
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 11492
F_TRAINER_FEMALE | 
#line 11493
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 11494
        .doubleBattle = TRUE,
#line 11495
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11497
            .species = SPECIES_TINKATUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11499
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11498
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11501
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11504
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11503
            .ability = ABILITY_OVERCOAT,
#line 11502
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11506
    [TRAINER_BRYAN] =
    {
#line 11507
        .trainerName = _("BRYAN"),
#line 11508
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 11509
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 11511
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11512
        .doubleBattle = TRUE,
#line 11513
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11515
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11517
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11516
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11519
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11521
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11520
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11523
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11525
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11524
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11527
    [TRAINER_BRANDEN] =
    {
#line 11528
        .trainerName = _("BRANDEN"),
#line 11529
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 11530
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 11532
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11533
        .doubleBattle = TRUE,
#line 11534
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11536
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11538
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11537
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11540
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11542
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11541
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11544
    [TRAINER_BRYANT] =
    {
#line 11545
        .trainerName = _("BRYANT"),
#line 11546
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 11547
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 11549
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11550
        .doubleBattle = TRUE,
#line 11551
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11553
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11555
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11554
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11557
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11559
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11558
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11561
    [TRAINER_SHAYLA] =
    {
#line 11562
        .trainerName = _("SHAYLA"),
#line 11563
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 11564
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender = 
#line 11565
F_TRAINER_FEMALE | 
#line 11566
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11567
        .doubleBattle = TRUE,
#line 11568
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11570
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11572
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11571
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11574
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11576
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11575
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11578
    [TRAINER_KYRA] =
    {
#line 11579
        .trainerName = _("KYRA"),
#line 11580
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 11581
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 11582
F_TRAINER_FEMALE | 
#line 11583
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11584
        .doubleBattle = TRUE,
#line 11585
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11587
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11589
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11588
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11591
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11593
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11592
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11595
    [TRAINER_JAIDEN] =
    {
#line 11596
        .trainerName = _("JAIDEN"),
#line 11597
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 11598
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 11600
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 11601
        .doubleBattle = TRUE,
#line 11602
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11604
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11606
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11605
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11608
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11610
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11609
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11612
    [TRAINER_ALIX] =
    {
#line 11613
        .trainerName = _("ALIX"),
#line 11614
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 11615
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 11616
F_TRAINER_FEMALE | 
#line 11617
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11618
        .doubleBattle = TRUE,
#line 11619
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11621
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11623
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11622
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11625
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11627
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11626
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11629
    [TRAINER_HELENE] =
    {
#line 11630
        .trainerName = _("HELENE"),
#line 11631
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 11632
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 11633
F_TRAINER_FEMALE | 
#line 11634
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11635
        .doubleBattle = TRUE,
#line 11636
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11638
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11640
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11639
            .lvl = 230,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11642
            .species = SPECIES_MIENFOO_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11644
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11643
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11646
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11648
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11647
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11650
    [TRAINER_MARLENE] =
    {
#line 11651
        .trainerName = _("MARLENE"),
#line 11652
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 11653
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 11654
F_TRAINER_FEMALE | 
#line 11655
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11656
        .doubleBattle = TRUE,
#line 11657
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11659
            .species = SPECIES_ORICORIO_PAU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11661
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11660
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11663
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11665
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11664
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11667
    [TRAINER_DEVAN] =
    {
#line 11668
        .trainerName = _("DEVAN"),
#line 11669
        .trainerClass = TRAINER_CLASS_HIKER,
#line 11670
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 11672
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11673
        .doubleBattle = TRUE,
#line 11674
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11676
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11678
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11677
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11680
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11682
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11681
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11684
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11686
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11685
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11688
    [TRAINER_JOHNSON] =
    {
#line 11689
        .trainerName = _("JOHNSON"),
#line 11690
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 11691
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 11693
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11694
        .doubleBattle = TRUE,
#line 11695
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11697
            .species = SPECIES_CHINGLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11699
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11698
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11701
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11703
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11702
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11705
    [TRAINER_MELINA] =
    {
#line 11706
        .trainerName = _("MELINA"),
#line 11707
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 11708
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 11709
F_TRAINER_FEMALE | 
#line 11710
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11711
        .doubleBattle = TRUE,
#line 11712
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11714
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11716
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11715
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11718
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11720
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11719
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11722
    [TRAINER_BRANDI] =
    {
#line 11723
        .trainerName = _("BRANDI"),
#line 11724
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 11725
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 11726
F_TRAINER_FEMALE | 
#line 11727
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11728
        .doubleBattle = TRUE,
#line 11729
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11731
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11733
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11732
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11735
            .species = SPECIES_CHINGLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11737
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11736
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11739
    [TRAINER_AISHA] =
    {
#line 11740
        .trainerName = _("AISHA"),
#line 11741
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 11742
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 11743
F_TRAINER_FEMALE | 
#line 11744
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11745
        .doubleBattle = TRUE,
#line 11746
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11748
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11750
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11749
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11752
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11754
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11753
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11756
    [TRAINER_MAKAYLA] =
    {
#line 11757
        .trainerName = _("MAKAYLA"),
#line 11758
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 11759
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 11760
F_TRAINER_FEMALE | 
#line 11761
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11762
        .doubleBattle = TRUE,
#line 11763
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11765
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11767
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11766
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11769
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11771
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11770
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11773
    [TRAINER_FABIAN] =
    {
#line 11774
        .trainerName = _("FABIAN"),
#line 11775
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 11776
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 11778
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11779
        .doubleBattle = TRUE,
#line 11780
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11782
            .species = SPECIES_VAROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11784
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11783
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11786
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11788
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11787
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11790
    [TRAINER_DAYTON] =
    {
#line 11791
        .trainerName = _("DAYTON"),
#line 11792
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 11793
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 11795
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11796
        .doubleBattle = TRUE,
#line 11797
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11799
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11801
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11800
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11803
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11805
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11804
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11807
    [TRAINER_RACHEL] =
    {
#line 11808
        .trainerName = _("RACHEL"),
#line 11809
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 11810
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 11811
F_TRAINER_FEMALE | 
#line 11812
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11813
        .doubleBattle = TRUE,
#line 11814
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11816
            .species = SPECIES_GOOMY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11818
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11817
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11820
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11822
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11821
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11824
    [TRAINER_LEONEL] =
    {
#line 11825
        .trainerName = _("LEONEL"),
#line 11826
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 11827
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 11829
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11830
        .doubleBattle = TRUE,
#line 11831
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11833
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11835
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11834
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11837
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11839
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11838
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11841
            .species = SPECIES_SCRAFTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11843
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11842
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11845
    [TRAINER_CALLIE] =
    {
#line 11846
        .trainerName = _("CALLIE"),
#line 11847
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 11848
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 11849
F_TRAINER_FEMALE | 
#line 11850
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11851
        .doubleBattle = TRUE,
#line 11852
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11854
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11856
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11855
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11858
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11860
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11859
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11862
    [TRAINER_CALE] =
    {
#line 11863
        .trainerName = _("CALE"),
#line 11864
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 11865
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 11867
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 11868
        .doubleBattle = TRUE,
#line 11869
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11871
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11873
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11872
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11875
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11877
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11876
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11879
    [TRAINER_MYLES] =
    {
#line 11880
        .trainerName = _("MYLES"),
#line 11881
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 11882
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender = 
#line 11884
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11885
        .doubleBattle = TRUE,
#line 11886
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_ACE_POKEMON,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11888
            .species = SPECIES_BERGMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11890
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11889
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11892
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11894
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11893
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11896
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11898
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11897
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11900
            .species = SPECIES_SKIDDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11902
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11901
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11904
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11906
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11905
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11908
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11910
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11909
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11912
    [TRAINER_PAT] =
    {
#line 11913
        .trainerName = _("PAT"),
#line 11914
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 11915
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 11916
F_TRAINER_FEMALE | 
#line 11917
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11918
        .doubleBattle = TRUE,
#line 11919
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_ACE_POKEMON,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 11921
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11923
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11922
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11925
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11927
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11926
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11929
            .species = SPECIES_TINKATUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11931
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11930
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11933
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11935
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11934
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11937
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11939
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11938
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11941
    [TRAINER_CRISTIN_1] =
    {
#line 11942
        .trainerName = _("CRISTIN"),
#line 11943
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 11944
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 11945
F_TRAINER_FEMALE | 
#line 11946
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11947
        .doubleBattle = TRUE,
#line 11948
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11950
            .species = SPECIES_BELLIBOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11952
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11951
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11954
            .species = SPECIES_DRAGALGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11956
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11955
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11958
            .species = SPECIES_ROTOM_FAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11960
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11959
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11962
    [TRAINER_MAY_RUSTBORO_TREECKO] =
    {
#line 11963
        .trainerName = _("MAY"),
#line 11964
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11965
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 11966
F_TRAINER_FEMALE | 
#line 11967
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11968
        .doubleBattle = TRUE,
#line 11969
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 11971
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11973
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 11972
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11975
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11977
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 11976
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11979
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11981
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 11980
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11983
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11985
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11984
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11987
    [TRAINER_MAY_RUSTBORO_TORCHIC] =
    {
#line 11988
        .trainerName = _("MAY"),
#line 11989
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11990
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 11991
F_TRAINER_FEMALE | 
#line 11992
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11993
        .doubleBattle = TRUE,
#line 11994
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 11996
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11998
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 11997
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12000
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12002
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 12001
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12004
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12006
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 12005
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12008
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12010
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 12009
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12012
    [TRAINER_ANGELO] =
    {
#line 12013
        .trainerName = _("ANGELO"),
#line 12014
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 12015
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 12017
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 12018
        .doubleBattle = TRUE,
#line 12019
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12021
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12023
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 12022
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12024
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
                MOVE_CHARM,
            },
            },
            {
#line 12028
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12030
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 12029
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12031
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
                MOVE_CONFUSE_RAY,
            },
            },
        },
    },
#line 12035
    [TRAINER_DARIUS] =
    {
#line 12036
        .trainerName = _("DARIUS"),
#line 12037
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 12038
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 12040
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12041
        .doubleBattle = TRUE,
#line 12042
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12044
            .species = SPECIES_KILOWATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12046
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 12045
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12048
            .species = SPECIES_ORICORIO_POM_POM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12050
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 12049
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12052
    [TRAINER_STEVEN] =
    {
#line 12053
        .trainerName = _("STEVEN"),
#line 12054
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 12055
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 12057
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12058
        .doubleBattle = TRUE,
#line 12059
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 12061
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12063
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12062
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12064
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
            },
            },
            {
#line 12069
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12071
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12070
            .lvl = 75,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12072
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_ANCIENT_POWER,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 12077
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12079
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12078
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12080
                MOVE_THUNDER,
                MOVE_EARTHQUAKE,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 12085
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12087
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12086
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12088
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_INGRAIN,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 12093
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12095
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12094
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12096
                MOVE_WATER_PULSE,
                MOVE_ANCIENT_POWER,
                MOVE_AERIAL_ACE,
                MOVE_SLASH,
            },
            },
            {
#line 12101
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12101
            .heldItem = ITEM_SITRUS_BERRY,
#line 12103
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12102
            .lvl = 78,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12104
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_METEOR_MASH,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 12109
    [TRAINER_ANABEL] =
    {
#line 12110
        .trainerName = _("ANABEL"),
#line 12111
        .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
#line 12112
        .trainerPic = TRAINER_PIC_SALON_MAIDEN_ANABEL,
        .encounterMusic_gender = 
#line 12113
F_TRAINER_FEMALE | 
#line 12114
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12115
        .doubleBattle = TRUE,
#line 12116
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12118
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12120
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12119
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12122
    [TRAINER_TUCKER] =
    {
#line 12123
        .trainerName = _("TUCKER"),
#line 12124
        .trainerClass = TRAINER_CLASS_DOME_ACE,
#line 12125
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender = 
#line 12127
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12128
        .doubleBattle = TRUE,
#line 12129
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12131
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12133
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12132
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12135
    [TRAINER_SPENSER] =
    {
#line 12136
        .trainerName = _("SPENSER"),
#line 12137
        .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
#line 12138
        .trainerPic = TRAINER_PIC_PALACE_MAVEN_SPENSER,
        .encounterMusic_gender = 
#line 12140
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12141
        .doubleBattle = TRUE,
#line 12142
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12144
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12146
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12145
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12148
    [TRAINER_GRETA] =
    {
#line 12149
        .trainerName = _("GRETA"),
#line 12150
        .trainerClass = TRAINER_CLASS_ARENA_TYCOON,
#line 12151
        .trainerPic = TRAINER_PIC_ARENA_TYCOON_GRETA,
        .encounterMusic_gender = 
#line 12152
F_TRAINER_FEMALE | 
#line 12153
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12154
        .doubleBattle = TRUE,
#line 12155
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12157
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12159
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12158
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12161
    [TRAINER_NOLAND] =
    {
#line 12162
        .trainerName = _("NOLAND"),
#line 12163
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 12164
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender = 
#line 12166
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12167
        .doubleBattle = TRUE,
#line 12168
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12170
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12172
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12171
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12174
    [TRAINER_LUCY] =
    {
#line 12175
        .trainerName = _("LUCY"),
#line 12176
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 12177
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender = 
#line 12178
F_TRAINER_FEMALE | 
#line 12179
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12180
        .doubleBattle = TRUE,
#line 12181
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12183
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12185
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12184
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12187
    [TRAINER_BRANDON] =
    {
#line 12188
        .trainerName = _("BRANDON"),
#line 12189
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 12190
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender = 
#line 12192
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12193
        .doubleBattle = TRUE,
#line 12194
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12196
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12198
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12197
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12200
    [TRAINER_MARIELA] =
    {
#line 12201
        .trainerName = _("MARIELA"),
#line 12202
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 12203
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 12204
F_TRAINER_FEMALE | 
#line 12205
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12206
        .doubleBattle = TRUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12208
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12210
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12209
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12212
    [TRAINER_ALVARO] =
    {
#line 12213
        .trainerName = _("ALVARO"),
#line 12214
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 12215
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 12217
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12218
        .doubleBattle = TRUE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12220
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12222
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12221
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12224
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12226
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12225
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12228
    [TRAINER_EVERETT] =
    {
#line 12229
        .trainerName = _("EVERETT"),
#line 12230
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 12231
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 12233
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 12234
        .doubleBattle = TRUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12236
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12238
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12237
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12240
    [TRAINER_RED] =
    {
#line 12241
        .trainerName = _("RED"),
#line 12242
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 12243
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender = 
#line 12245
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12246
        .doubleBattle = TRUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12248
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12250
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12249
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12252
    [TRAINER_LEAF] =
    {
#line 12253
        .trainerName = _("LEAF"),
#line 12254
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 12255
        .trainerPic = TRAINER_PIC_LEAF,
        .encounterMusic_gender = 
#line 12256
F_TRAINER_FEMALE | 
#line 12257
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12258
        .doubleBattle = TRUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12260
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12262
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12261
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12264
    [TRAINER_BRENDAN_PLACEHOLDER] =
    {
#line 12265
        .trainerName = _("BRENDAN"),
#line 12266
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 12267
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .encounterMusic_gender = 
#line 12269
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12270
        .doubleBattle = TRUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12272
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12274
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12273
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12276
    [TRAINER_MAY_PLACEHOLDER] =
    {
#line 12277
        .trainerName = _("MAY"),
#line 12278
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 12279
        .trainerPic = TRAINER_PIC_RS_MAY,
        .encounterMusic_gender = 
#line 12280
F_TRAINER_FEMALE | 
#line 12281
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12282
        .doubleBattle = TRUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12284
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12286
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12285
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12288
    [TRAINER_LUCA] =
    {
#line 12289
        .trainerName = _("LUCA"),
#line 12290
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 12291
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender = 
#line 12293
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 12294
        .doubleBattle = TRUE,
#line 12295
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12297
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12299
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12298
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12301
            .species = SPECIES_VIBRAVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12303
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12302
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12305
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12307
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12306
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12309
    [TRAINER_ADRIAN] =
    {
#line 12310
        .trainerName = _("ADRIAN"),
#line 12311
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 12312
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 12314
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12315
        .doubleBattle = TRUE,
#line 12316
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12318
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12320
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12319
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12322
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12324
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12323
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12326
    [TRAINER_KRISTI] =
    {
#line 12327
        .trainerName = _("KRISTI"),
#line 12328
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 12329
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 12330
F_TRAINER_FEMALE | 
#line 12331
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 12332
        .doubleBattle = TRUE,
#line 12333
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12335
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12337
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12336
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12339
            .species = SPECIES_SEEL_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12341
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12340
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12343
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12345
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12344
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12347
    [TRAINER_SMITH] =
    {
#line 12348
        .trainerName = _("SMITH"),
#line 12349
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 12350
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 12352
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12353
        .doubleBattle = TRUE,
#line 12354
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12356
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12358
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 12357
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12360
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12362
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 12361
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12364
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12366
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 12365
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12368
    [TRAINER_IZZY] =
    {
#line 12369
        .trainerName = _("IZZY"),
#line 12370
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 12371
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 12372
F_TRAINER_FEMALE | 
#line 12373
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 12374
        .doubleBattle = TRUE,
#line 12375
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12377
            .species = SPECIES_CHERRIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12379
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12378
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12381
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12383
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12382
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12385
    [TRAINER_JEREMIAH] =
    {
#line 12386
        .trainerName = _("JEREMIAH"),
#line 12387
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 12388
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 12390
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12391
        .doubleBattle = TRUE,
#line 12392
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12394
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12396
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12395
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12398
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12400
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12399
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12402
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12404
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12403
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12406
    [TRAINER_WALLY_LILYCOVE] =
    {
#line 12407
        .trainerName = _("WALLY"),
#line 12408
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 12409
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 12411
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12412
        .doubleBattle = TRUE,
#line 12413
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 12415
            .species = SPECIES_SYLVEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12418
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 12417
            .ability = ABILITY_CUTE_CHARM,
#line 12416
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12419
                MOVE_DRAINING_KISS,
                MOVE_COPYCAT,
                MOVE_SWIFT,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 12424
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12424
            .heldItem = ITEM_LIGHT_BALL,
#line 12427
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 12426
            .ability = ABILITY_STATIC,
#line 12425
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12428
                MOVE_SPARK,
                MOVE_IRON_TAIL,
                MOVE_NUZZLE,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 12433
            .species = SPECIES_TINKATUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12436
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 12435
            .ability = ABILITY_MOLD_BREAKER,
#line 12434
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12437
                MOVE_FAKE_OUT,
                MOVE_FLASH_CANNON,
                MOVE_PLAY_ROUGH,
                MOVE_COVET,
            },
            },
            {
#line 12442
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12445
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 12444
            .ability = ABILITY_POISON_POINT,
#line 12443
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12446
                MOVE_GIGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_VENOSHOCK,
                MOVE_POISON_POWDER,
            },
            },
            {
#line 12451
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12451
            .heldItem = ITEM_TWISTED_SPOON,
#line 12453
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12452
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12454
                MOVE_PSYSHOCK,
                MOVE_DRAINING_KISS,
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
            },
            },
        },
    },
#line 12459
    [TRAINER_KINGSTON] =
    {
#line 12460
        .trainerName = _("KINGSTON"),
#line 12461
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 12462
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 12464
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12465
        .doubleBattle = TRUE,
#line 12466
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12468
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12470
            .iv = TRAINER_PARTY_IVS(20, 31, 20, 20, 20, 20),
#line 12469
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12472
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12474
            .iv = TRAINER_PARTY_IVS(20, 31, 20, 20, 20, 20),
#line 12473
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12476
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12478
            .iv = TRAINER_PARTY_IVS(20, 31, 20, 20, 20, 20),
#line 12477
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12480
    [TRAINER_OPAL] =
    {
#line 12481
        .trainerName = _("OPAL"),
#line 12482
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 12483
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 12484
F_TRAINER_FEMALE | 
#line 12485
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12486
        .doubleBattle = TRUE,
#line 12487
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12489
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12491
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12490
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12493
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12495
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12494
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12497
            .species = SPECIES_DRAGALGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12499
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12498
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12501
    [TRAINER_DONOVAN] =
    {
#line 12502
        .trainerName = _("DONOVAN"),
#line 12503
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 12504
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 12506
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12507
        .doubleBattle = TRUE,
#line 12508
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 12510
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12512
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12511
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12514
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12516
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12515
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12518
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12520
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12519
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12522
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12524
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12523
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12526
    [TRAINER_VANYA] =
    {
#line 12527
        .trainerName = _("VANYA"),
#line 12528
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 12529
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 12530
F_TRAINER_FEMALE | 
#line 12531
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12532
        .doubleBattle = TRUE,
#line 12533
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12535
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12537
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12536
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12539
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12541
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12540
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12543
    [TRAINER_AJAX] =
    {
#line 12544
        .trainerName = _("AJAX"),
#line 12545
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 12546
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 12548
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12549
        .doubleBattle = TRUE,
#line 12550
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12552
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12554
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 31, 20),
#line 12553
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12556
            .species = SPECIES_GRAFAIAI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12558
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 12557
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12560
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12562
            .iv = TRAINER_PARTY_IVS(20, 31, 20, 20, 20, 20),
#line 12561
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12564
    [TRAINER_ROSS] =
    {
#line 12565
        .trainerName = _("ROSS"),
#line 12566
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 12567
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 12569
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12570
        .doubleBattle = TRUE,
#line 12571
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 12573
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12575
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12574
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12577
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12579
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12578
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12581
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12583
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12582
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12585
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12587
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12586
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12589
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12591
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12590
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12593
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12595
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12594
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12597
    [TRAINER_AUSTIN] =
    {
#line 12598
        .trainerName = _("AUSTIN"),
#line 12599
        .trainerClass = TRAINER_CLASS_HIKER,
#line 12600
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 12602
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12603
        .doubleBattle = TRUE,
#line 12604
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12606
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12608
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 12607
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12610
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12612
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 12611
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12614
    [TRAINER_NOAH] =
    {
#line 12615
        .trainerName = _("NOAH"),
#line 12616
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 12617
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 12619
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12620
        .doubleBattle = TRUE,
#line 12621
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12623
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12625
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12624
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12627
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12629
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12628
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12631
    [TRAINER_HARPER] =
    {
#line 12632
        .trainerName = _("HARPER"),
#line 12633
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 12634
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 12635
F_TRAINER_FEMALE | 
#line 12636
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12637
        .doubleBattle = TRUE,
#line 12638
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12640
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12642
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12641
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12644
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12646
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12645
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12648
    [TRAINER_LANDON] =
    {
#line 12649
        .trainerName = _("LANDON"),
#line 12650
        .trainerClass = TRAINER_CLASS_HIKER,
#line 12651
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 12653
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12654
        .doubleBattle = TRUE,
#line 12655
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12657
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12659
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 12658
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12661
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12663
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 12662
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12665
            .species = SPECIES_MAROWAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12667
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 12666
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12669
    [TRAINER_MILES] =
    {
#line 12670
        .trainerName = _("MILES"),
#line 12671
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 12672
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 12674
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12675
        .doubleBattle = TRUE,
#line 12676
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12678
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12680
            .iv = TRAINER_PARTY_IVS(25, 31, 25, 20, 20, 25),
#line 12679
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12682
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12684
            .iv = TRAINER_PARTY_IVS(25, 20, 25, 31, 31, 20),
#line 12683
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12686
    [TRAINER_LUNA] =
    {
#line 12687
        .trainerName = _("LUNA"),
#line 12688
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 12689
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 12690
F_TRAINER_FEMALE | 
#line 12691
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12692
        .doubleBattle = TRUE,
#line 12693
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 12695
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12697
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12696
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12699
            .species = SPECIES_SLIGGOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12701
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12700
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12703
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12705
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12704
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12707
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12709
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12708
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12711
    [TRAINER_VINNIE] =
    {
#line 12712
        .trainerName = _("VINNIE"),
#line 12713
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 12714
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 12716
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12717
        .doubleBattle = TRUE,
#line 12718
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12720
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12722
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 31, 25),
#line 12721
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12724
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12726
            .iv = TRAINER_PARTY_IVS(25, 31, 25, 35, 25, 20),
#line 12725
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12728
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12730
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 35, 35, 25),
#line 12729
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12732
    [TRAINER_MIRA] =
    {
#line 12733
        .trainerName = _("MIRA"),
#line 12734
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 12735
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 12736
F_TRAINER_FEMALE | 
#line 12737
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12738
        .doubleBattle = TRUE,
#line 12739
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12741
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12744
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12743
            .ability = ABILITY_INTIMIDATE,
#line 12742
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12746
            .species = SPECIES_NINETALES_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12749
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12748
            .ability = ABILITY_SNOW_WARNING,
#line 12747
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12751
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12754
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12753
            .ability = ABILITY_SLUSH_RUSH,
#line 12752
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12756
    [TRAINER_ELIAS] =
    {
#line 12757
        .trainerName = _("ELIAS"),
#line 12758
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 12759
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 12761
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12762
        .doubleBattle = TRUE,
#line 12763
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12765
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12767
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12766
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12769
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12771
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12770
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12773
    [TRAINER_EVELYN] =
    {
#line 12774
        .trainerName = _("EVELYN"),
#line 12775
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 12776
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 12777
F_TRAINER_FEMALE | 
#line 12778
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12779
        .doubleBattle = TRUE,
#line 12780
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12782
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12784
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12783
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12786
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12788
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12787
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12790
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12792
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12791
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12794
    [TRAINER_COURTNEY_CRATERCREST] =
    {
#line 12795
        .trainerName = _("COURTNEY"),
#line 12796
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 12797
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN_F,
        .encounterMusic_gender = 
#line 12798
F_TRAINER_FEMALE | 
#line 12799
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 12800
        .doubleBattle = TRUE,
#line 12801
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 12803
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12806
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12805
            .ability = ABILITY_DROUGHT,
#line 12804
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12807
                MOVE_WILL_O_WISP,
                MOVE_FLAMETHROWER,
                MOVE_EXTRASENSORY,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 12812
            .species = SPECIES_CHERRIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12815
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12814
            .ability = ABILITY_FLOWER_GIFT,
#line 12813
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12816
                MOVE_GRASSY_TERRAIN,
                MOVE_SOLAR_BEAM,
                MOVE_WEATHER_BALL,
                MOVE_SLEEP_POWDER,
            },
            },
            {
#line 12821
            .species = SPECIES_GOGOAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12821
            .heldItem = ITEM_SCOPE_LENS,
#line 12824
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12823
            .ability = ABILITY_GRASS_PELT,
#line 12822
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12825
                MOVE_HORN_LEECH,
                MOVE_HIGH_HORSEPOWER,
                MOVE_WILD_CHARGE,
                MOVE_SYNTHESIS,
            },
            },
            {
#line 12830
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12830
            .heldItem = ITEM_FLAME_ORB,
#line 12833
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12832
            .ability = ABILITY_GUTS,
#line 12831
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12834
                MOVE_MEGAHORN,
                MOVE_SUBMISSION,
                MOVE_SMART_STRIKE,
                MOVE_BULK_UP,
            },
            },
            {
#line 12839
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12842
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12841
            .ability = ABILITY_CHLOROPHYLL,
#line 12840
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12843
                MOVE_POLLEN_PUFF,
                MOVE_ENERGY_BALL,
                MOVE_MOONBLAST,
                MOVE_AFTER_YOU,
            },
            },
            {
#line 12848
            .species = SPECIES_VOLCARONA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12848
            .heldItem = ITEM_SITRUS_BERRY,
#line 12851
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 12850
            .ability = ABILITY_OVERCOAT,
#line 12849
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12852
                MOVE_HEAT_WAVE,
                MOVE_STRUGGLE_BUG,
                MOVE_RAGE_POWDER,
                MOVE_QUIVER_DANCE,
            },
            },
        },
    },
#line 12857
    [TRAINER_LEO] =
    {
#line 12858
        .trainerName = _("LEO"),
#line 12859
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 12860
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 12862
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12863
        .doubleBattle = TRUE,
#line 12864
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12866
            .species = SPECIES_SNORUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12868
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12867
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12870
            .species = SPECIES_NINETALES_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12872
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12871
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12874
            .species = SPECIES_GOGOAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12876
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12875
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12878
    [TRAINER_SASHA] =
    {
#line 12879
        .trainerName = _("SASHA"),
#line 12880
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 12881
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 12882
F_TRAINER_FEMALE | 
#line 12883
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12884
        .doubleBattle = TRUE,
#line 12885
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12887
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12889
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12888
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12891
            .species = SPECIES_MINIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12893
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12892
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12895
            .species = SPECIES_BRAVIARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12897
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12896
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12899
    [TRAINER_VLAD] =
    {
#line 12900
        .trainerName = _("VLAD"),
#line 12901
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 12902
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 12904
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12905
        .doubleBattle = TRUE,
#line 12906
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12908
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12910
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12909
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12912
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12914
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12913
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12916
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12918
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12917
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12920
    [TRAINER_SHAE] =
    {
#line 12921
        .trainerName = _("SHAE"),
#line 12922
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 12923
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 12924
F_TRAINER_FEMALE | 
#line 12925
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12926
        .doubleBattle = TRUE,
#line 12927
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12929
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12931
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12930
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12933
            .species = SPECIES_SNORUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12935
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12934
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12937
            .species = SPECIES_DRAMPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12939
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12938
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12941
    [TRAINER_PEARL] =
    {
#line 12942
        .trainerName = _("PEARL"),
#line 12943
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 12944
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 12945
F_TRAINER_FEMALE | 
#line 12946
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12947
        .doubleBattle = TRUE,
#line 12948
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12950
            .species = SPECIES_MANDIBUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12952
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12951
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12954
            .species = SPECIES_GOGOAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12956
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12955
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12958
    [TRAINER_MATEO] =
    {
#line 12959
        .trainerName = _("MATEO"),
#line 12960
        .trainerClass = TRAINER_CLASS_HIKER,
#line 12961
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 12963
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12964
        .doubleBattle = TRUE,
#line 12965
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 12967
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12969
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12968
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12971
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12973
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12972
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12975
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12977
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12976
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12979
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12981
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12980
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12983
    [TRAINER_ERIK] =
    {
#line 12984
        .trainerName = _("ERIK"),
#line 12985
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 12986
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 12988
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12989
        .doubleBattle = TRUE,
#line 12990
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12992
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12994
            .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
#line 12993
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12996
            .species = SPECIES_SANDSLASH_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12998
            .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
#line 12997
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 13000
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13002
            .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
#line 13001
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
