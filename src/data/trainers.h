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
            .species = SPECIES_MANKEY,
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
            .species = SPECIES_MEOWSTIC_FEMALE,
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
            .species = SPECIES_WHISCASH,
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
            .species = SPECIES_DRAMPA,
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
            .species = SPECIES_ORICORIO_SENSU,
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
            .species = SPECIES_CLOBBOPUS,
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
            .species = SPECIES_ZUBAT,
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
            .species = SPECIES_GOLBAT,
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
            .species = SPECIES_ZUBAT,
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
            .species = SPECIES_MILCERY,
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
#line 961
            .species = SPECIES_BUDEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 963
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 962
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 965
            .species = SPECIES_MILCERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 967
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 966
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 969
            .species = SPECIES_BUDEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 971
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 970
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 973
    [TRAINER_FELIX] =
    {
#line 974
        .trainerName = _("FELIX"),
#line 975
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 976
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 978
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 979
        .doubleBattle = TRUE,
#line 980
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 982
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 984
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 983
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 985
                MOVE_PSYCHIC,
            },
            },
            {
#line 987
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 989
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 988
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 990
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 993
    [TRAINER_VIOLET] =
    {
#line 994
        .trainerName = _("VIOLET"),
#line 995
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 996
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender = 
#line 997
F_TRAINER_FEMALE | 
#line 998
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 999
        .doubleBattle = TRUE,
#line 1000
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1002
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1004
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1003
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1006
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1008
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1007
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1010
    [TRAINER_DUSTY_1] =
    {
#line 1011
        .trainerName = _("DUSTY"),
#line 1012
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 1013
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 1015
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1016
        .doubleBattle = TRUE,
#line 1017
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1019
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1021
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 1020
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1022
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
            {
#line 1027
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1029
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 1028
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1030
                MOVE_BONE_CLUB,
                MOVE_HEADBUTT,
                MOVE_DIG,
                MOVE_TAIL_WHIP,
            },
            },
            {
#line 1035
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1037
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 1036
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1038
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 1043
    [TRAINER_CHIP] =
    {
#line 1044
        .trainerName = _("CHIP"),
#line 1045
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 1046
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 1048
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1049
        .doubleBattle = TRUE,
#line 1050
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1052
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1054
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 1053
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1056
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1058
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 1057
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1060
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1062
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 1061
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1064
    [TRAINER_FOSTER] =
    {
#line 1065
        .trainerName = _("FOSTER"),
#line 1066
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 1067
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 1069
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1070
        .doubleBattle = TRUE,
#line 1071
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1073
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1075
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1074
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1077
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1079
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1078
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1081
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1083
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1082
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1084
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 1089
    [TRAINER_GABBY_AND_TY_1] =
    {
#line 1090
        .trainerName = _("GABBY & TY"),
#line 1091
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 1092
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender = 
#line 1094
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 1095
        .doubleBattle = TRUE,
#line 1096
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1098
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1100
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 1099
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1102
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1104
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 1103
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1106
    [TRAINER_GABBY_AND_TY_2] =
    {
#line 1107
        .trainerName = _("GABBY & TY"),
#line 1108
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 1109
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender = 
#line 1111
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 1112
        .doubleBattle = TRUE,
#line 1113
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1115
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1117
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1116
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1119
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1121
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1120
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1123
    [TRAINER_GABBY_AND_TY_3] =
    {
#line 1124
        .trainerName = _("GABBY & TY"),
#line 1125
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 1126
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender = 
#line 1128
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 1129
        .doubleBattle = TRUE,
#line 1130
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1132
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1134
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 1133
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1136
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1138
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 1137
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1140
    [TRAINER_GABBY_AND_TY_4] =
    {
#line 1141
        .trainerName = _("GABBY & TY"),
#line 1142
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 1143
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender = 
#line 1145
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 1146
        .doubleBattle = TRUE,
#line 1147
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1149
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1151
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 1150
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1153
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1155
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 1154
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1157
    [TRAINER_GABBY_AND_TY_5] =
    {
#line 1158
        .trainerName = _("GABBY & TY"),
#line 1159
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 1160
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender = 
#line 1162
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 1163
        .doubleBattle = TRUE,
#line 1164
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1166
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1168
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 1167
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1170
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1172
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 1171
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1174
    [TRAINER_GABBY_AND_TY_6] =
    {
#line 1175
        .trainerName = _("GABBY & TY"),
#line 1176
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 1177
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender = 
#line 1179
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 1180
        .doubleBattle = TRUE,
#line 1181
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1183
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1185
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 1184
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1186
                MOVE_SONIC_BOOM,
                MOVE_THUNDER_WAVE,
                MOVE_METAL_SOUND,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 1191
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1193
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 1192
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1194
                MOVE_ASTONISH,
                MOVE_STOMP,
                MOVE_SUPERSONIC,
                MOVE_HYPER_VOICE,
            },
            },
        },
    },
#line 1199
    [TRAINER_LOLA_1] =
    {
#line 1200
        .trainerName = _("LOLA"),
#line 1201
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 1202
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender = 
#line 1203
F_TRAINER_FEMALE | 
#line 1204
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1205
        .doubleBattle = TRUE,
#line 1206
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1208
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1210
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1209
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1212
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1214
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1213
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1216
    [TRAINER_AUSTINA] =
    {
#line 1217
        .trainerName = _("AUSTINA"),
#line 1218
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 1219
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender = 
#line 1220
F_TRAINER_FEMALE | 
#line 1221
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1222
        .doubleBattle = TRUE,
#line 1223
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1225
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1227
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1226
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1229
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1231
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1230
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1233
    [TRAINER_GWEN] =
    {
#line 1234
        .trainerName = _("GWEN"),
#line 1235
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 1236
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender = 
#line 1237
F_TRAINER_FEMALE | 
#line 1238
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1239
        .doubleBattle = TRUE,
#line 1240
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1242
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1244
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1243
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1246
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1248
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1247
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1250
    [TRAINER_RICKY_1] =
    {
#line 1251
        .trainerName = _("RICKY"),
#line 1252
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 1253
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender = 
#line 1255
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1256
        .doubleBattle = TRUE,
#line 1257
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1259
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1261
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1260
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1262
                MOVE_SAND_ATTACK,
                MOVE_HEADBUTT,
                MOVE_TAIL_WHIP,
                MOVE_SURF,
            },
            },
            {
#line 1267
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1269
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1268
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1271
    [TRAINER_SIMON] =
    {
#line 1272
        .trainerName = _("SIMON"),
#line 1273
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 1274
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender = 
#line 1276
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1277
        .doubleBattle = TRUE,
#line 1278
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1280
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1282
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1281
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1284
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1286
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1285
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1288
    [TRAINER_CHARLIE] =
    {
#line 1289
        .trainerName = _("CHARLIE"),
#line 1290
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 1291
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender = 
#line 1293
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1294
        .doubleBattle = TRUE,
#line 1295
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1297
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1299
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1298
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1301
            .species = SPECIES_SEEL_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1303
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1302
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1305
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1307
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 1306
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1308
                MOVE_SAND_ATTACK,
                MOVE_PIN_MISSILE,
                MOVE_TAIL_WHIP,
                MOVE_SURF,
            },
            },
        },
    },
#line 1313
    [TRAINER_RANDALL] =
    {
#line 1314
        .trainerName = _("RANDALL"),
#line 1315
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1316
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1318
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1319
        .doubleBattle = TRUE,
#line 1320
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1322
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1322
            .heldItem = ITEM_AGUAV_BERRY,
#line 1326
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1324
            .ability = ABILITY_GLUTTONY,
#line 1323
            .lvl = 29,
#line 1325
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1327
                MOVE_BELLY_DRUM,
                MOVE_EXTREME_SPEED,
                MOVE_SHADOW_CLAW,
            },
            },
            {
#line 1331
            .species = SPECIES_GRAFAIAI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1331
            .heldItem = ITEM_WIKI_BERRY,
#line 1335
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1333
            .ability = ABILITY_UNBURDEN,
#line 1332
            .lvl = 29,
#line 1334
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1336
                MOVE_FLING,
                MOVE_SLASH,
                MOVE_FOUL_PLAY,
            },
            },
        },
    },
#line 1340
    [TRAINER_PARKER] =
    {
#line 1341
        .trainerName = _("PARKER"),
#line 1342
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1343
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1345
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1346
        .doubleBattle = TRUE,
#line 1347
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1349
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1352
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1351
            .ability = ABILITY_NORMALIZE,
#line 1350
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1353
                MOVE_HYPER_VOICE,
                MOVE_FAKE_OUT,
                MOVE_THUNDER_WAVE,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 1358
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1361
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1360
            .ability = ABILITY_SCRAPPY,
#line 1359
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1362
                MOVE_HYPER_VOICE,
                MOVE_BRICK_BREAK,
                MOVE_WORK_UP,
            },
            },
        },
    },
#line 1366
    [TRAINER_GEORGE] =
    {
#line 1367
        .trainerName = _("GEORGE"),
#line 1368
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1369
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1371
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1372
        .doubleBattle = TRUE,
#line 1373
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1375
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1378
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1377
            .ability = ABILITY_VITAL_SPIRIT,
#line 1376
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1379
                MOVE_COUNTER,
                MOVE_SLACK_OFF,
                MOVE_SLASH,
                MOVE_SHADOW_CLAW,
            },
            },
            {
#line 1384
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1387
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1386
            .ability = ABILITY_INNER_FOCUS,
#line 1385
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1388
                MOVE_MIRROR_COAT,
                MOVE_MILK_DRINK,
                MOVE_PSYBEAM,
            },
            },
        },
    },
#line 1392
    [TRAINER_BERKE] =
    {
#line 1393
        .trainerName = _("BERKE"),
#line 1394
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1395
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1397
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1398
        .doubleBattle = TRUE,
#line 1399
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1401
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1404
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1403
            .ability = ABILITY_CHEERLEADER,
#line 1402
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1405
                MOVE_RETURN,
                MOVE_ROUND,
                MOVE_HYPER_VOICE,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 1410
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1413
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1412
            .ability = ABILITY_FRIEND_GUARD,
#line 1411
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1414
                MOVE_RETURN,
                MOVE_ROUND,
                MOVE_DAZZLING_GLEAM,
                MOVE_HEAL_PULSE,
            },
            },
        },
    },
#line 1419
    [TRAINER_BRAXTON] =
    {
#line 1420
        .trainerName = _("BRAXTON"),
#line 1421
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1422
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1424
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1425
        .doubleBattle = TRUE,
#line 1426
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1428
            .species = SPECIES_GRAFAIAI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1431
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1430
            .ability = ABILITY_PRANKSTER,
#line 1429
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1432
                MOVE_ACID_SPRAY,
                MOVE_SWAGGER,
                MOVE_PARTING_SHOT,
                MOVE_METRONOME,
            },
            },
            {
#line 1437
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1437
            .heldItem = ITEM_THROAT_SPRAY,
#line 1440
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1439
            .ability = ABILITY_SCRAPPY,
#line 1438
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1441
                MOVE_HYPER_VOICE,
                MOVE_ROAR,
                MOVE_REST,
                MOVE_SLEEP_TALK,
            },
            },
            {
#line 1446
            .species = SPECIES_ALCREMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1449
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1448
            .ability = ABILITY_AROMA_VEIL,
#line 1447
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1450
                MOVE_DECORATE,
                MOVE_DRAINING_KISS,
                MOVE_CHARM,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 1455
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1455
            .heldItem = ITEM_MAGNET,
#line 1458
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1457
            .ability = ABILITY_STATIC,
#line 1456
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1459
                MOVE_SHOCK_WAVE,
                MOVE_THUNDER_WAVE,
                MOVE_DISCHARGE,
                MOVE_SELFDESTRUCT,
            },
            },
            {
#line 1464
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1464
            .heldItem = ITEM_FOCUS_SASH,
#line 1467
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1466
            .ability = ABILITY_WIND_RIDER,
#line 1465
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1468
                MOVE_TAILWIND,
                MOVE_AIR_CUTTER,
                MOVE_RAZOR_LEAF,
                MOVE_KNOCK_OFF,
            },
            },
        },
    },
#line 1473
    [TRAINER_VINCENT] =
    {
#line 1474
        .trainerName = _("VINCENT"),
#line 1475
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1476
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1478
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1479
        .doubleBattle = TRUE,
#line 1480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1482
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1484
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1483
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1486
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1488
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1487
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1490
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1492
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1491
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1494
    [TRAINER_LEROY] =
    {
#line 1495
        .trainerName = _("LEROY"),
#line 1496
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1497
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1499
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1500
        .doubleBattle = TRUE,
#line 1501
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1503
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1505
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1504
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1507
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1509
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1508
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1511
    [TRAINER_WILTON_1] =
    {
#line 1512
        .trainerName = _("WILTON"),
#line 1513
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1514
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1516
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1517
        .doubleBattle = TRUE,
#line 1518
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1520
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1523
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 1522
            .ability = ABILITY_GUTS,
#line 1521
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1524
                MOVE_BULLDOZE,
                MOVE_FAKE_OUT,
                MOVE_BULLET_PUNCH,
                MOVE_FORCE_PALM,
            },
            },
            {
#line 1529
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1532
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 1531
            .ability = ABILITY_LEVITATE,
#line 1530
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1533
                MOVE_TAILWIND,
                MOVE_PSYBEAM,
                MOVE_YAWN,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 1538
            .species = SPECIES_SNUBBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1541
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 1540
            .ability = ABILITY_INTIMIDATE,
#line 1539
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1542
                MOVE_SWAGGER,
                MOVE_HEADBUTT,
                MOVE_SPIRIT_BREAK,
                MOVE_REVERSAL,
            },
            },
        },
    },
#line 1547
    [TRAINER_EDGAR] =
    {
#line 1548
        .trainerName = _("EDGAR"),
#line 1549
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1550
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1552
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1553
        .doubleBattle = TRUE,
#line 1554
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1556
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1558
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1557
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1560
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1562
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1561
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1564
    [TRAINER_ALBERT] =
    {
#line 1565
        .trainerName = _("ALBERT"),
#line 1566
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1567
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1569
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1570
        .doubleBattle = TRUE,
#line 1571
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1573
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1575
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1574
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1577
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1579
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1578
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1581
    [TRAINER_SAMUEL] =
    {
#line 1582
        .trainerName = _("SAMUEL"),
#line 1583
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1584
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1586
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1587
        .doubleBattle = TRUE,
#line 1588
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1590
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1592
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1591
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1594
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1596
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1595
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1598
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1600
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1599
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1602
    [TRAINER_VITO] =
    {
#line 1603
        .trainerName = _("VITO"),
#line 1604
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1605
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1607
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1608
        .doubleBattle = TRUE,
#line 1609
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1611
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1613
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1612
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1615
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1617
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1616
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1619
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1621
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1620
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1623
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1625
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1624
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1627
    [TRAINER_OWEN] =
    {
#line 1628
        .trainerName = _("OWEN"),
#line 1629
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1630
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1632
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1633
        .doubleBattle = TRUE,
#line 1634
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1636
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1638
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1637
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1640
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1642
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1641
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1644
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1646
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1645
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1648
    [TRAINER_WARREN] =
    {
#line 1649
        .trainerName = _("WARREN"),
#line 1650
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1651
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1653
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1654
        .doubleBattle = TRUE,
#line 1655
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1657
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1659
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1658
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1661
            .species = SPECIES_FARIGIRAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1663
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1662
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1665
            .species = SPECIES_GOGOAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1667
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1666
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1669
    [TRAINER_MARY] =
    {
#line 1670
        .trainerName = _("MARY"),
#line 1671
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1672
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1673
F_TRAINER_FEMALE | 
#line 1674
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1675
        .doubleBattle = TRUE,
#line 1676
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1678
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1681
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1680
            .ability = ABILITY_TANGLED_FEET,
#line 1679
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1682
                MOVE_METRONOME,
            },
            },
            {
#line 1684
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1687
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1686
            .ability = ABILITY_TANGLED_FEET,
#line 1685
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1688
                MOVE_METRONOME,
            },
            },
            {
#line 1690
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1693
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1692
            .ability = ABILITY_TANGLED_FEET,
#line 1691
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1694
                MOVE_METRONOME,
            },
            },
            {
#line 1696
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1699
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1698
            .ability = ABILITY_TANGLED_FEET,
#line 1697
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1700
                MOVE_METRONOME,
            },
            },
            {
#line 1702
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1705
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1704
            .ability = ABILITY_TANGLED_FEET,
#line 1703
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1706
                MOVE_METRONOME,
            },
            },
            {
#line 1708
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1711
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1710
            .ability = ABILITY_TANGLED_FEET,
#line 1709
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1712
                MOVE_METRONOME,
            },
            },
        },
    },
#line 1714
    [TRAINER_ALEXIA] =
    {
#line 1715
        .trainerName = _("ALEXIA"),
#line 1716
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1717
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1718
F_TRAINER_FEMALE | 
#line 1719
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1720
        .doubleBattle = TRUE,
#line 1721
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1723
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1726
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1725
            .ability = ABILITY_VITAL_SPIRIT,
#line 1724
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1727
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_DRAIN_PUNCH,
            },
            },
            {
#line 1732
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1735
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1734
            .ability = ABILITY_SOUNDPROOF,
#line 1733
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1736
                MOVE_WATER_PULSE,
                MOVE_SHOCK_WAVE,
                MOVE_EXTRASENSORY,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 1741
    [TRAINER_JODY] =
    {
#line 1742
        .trainerName = _("JODY"),
#line 1743
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1744
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1745
F_TRAINER_FEMALE | 
#line 1746
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1747
        .doubleBattle = TRUE,
#line 1748
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN | AI_FLAG_PREFER_BATON_PASS,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1750
            .species = SPECIES_CHATOT_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1750
            .heldItem = ITEM_LOADED_DICE,
#line 1753
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1752
            .ability = ABILITY_PRANKSTER,
#line 1751
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1754
                MOVE_PARTING_SHOT,
                MOVE_WING_ATTACK,
                MOVE_FURY_ATTACK,
                MOVE_BATON_PASS,
            },
            },
            {
#line 1759
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1762
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1761
            .ability = ABILITY_CONTRARY,
#line 1760
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1763
                MOVE_DIZZY_PUNCH,
                MOVE_ICY_WIND,
                MOVE_PSYBEAM,
                MOVE_BATON_PASS,
            },
            },
            {
#line 1768
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1771
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1770
            .ability = ABILITY_PSYCH_OUT,
#line 1769
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1772
                MOVE_SKILL_SWAP,
                MOVE_CALM_MIND,
                MOVE_STOMP,
                MOVE_BATON_PASS,
            },
            },
            {
#line 1777
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1780
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1779
            .ability = ABILITY_COMPETITIVE,
#line 1778
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1781
                MOVE_CHARM,
                MOVE_HYPER_VOICE,
                MOVE_CALM_MIND,
                MOVE_BATON_PASS,
            },
            },
        },
    },
#line 1786
    [TRAINER_WENDY] =
    {
#line 1787
        .trainerName = _("WENDY"),
#line 1788
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1789
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1790
F_TRAINER_FEMALE | 
#line 1791
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1792
        .doubleBattle = TRUE,
#line 1793
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1795
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1798
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1797
            .ability = ABILITY_INTIMIDATE,
#line 1796
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1799
                MOVE_ATTRACT,
                MOVE_TAUNT,
                MOVE_METAL_CLAW,
                MOVE_ASSURANCE,
            },
            },
            {
#line 1804
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1804
            .heldItem = ITEM_FLAME_ORB,
#line 1807
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1806
            .ability = ABILITY_GUTS,
#line 1805
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1808
                MOVE_FACADE,
                MOVE_AERIAL_ACE,
                MOVE_AGILITY,
                MOVE_REVERSAL,
            },
            },
            {
#line 1813
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1813
            .heldItem = ITEM_NEVERMELTICE,
#line 1816
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1815
            .ability = ABILITY_ICE_FACE,
#line 1814
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1817
                MOVE_SNOWSCAPE,
                MOVE_AVALANCHE,
                MOVE_BODY_SLAM,
                MOVE_REST,
            },
            },
            {
#line 1822
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1825
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1824
            .ability = ABILITY_LIQUID_OOZE,
#line 1823
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1826
                MOVE_ACID_SPRAY,
                MOVE_DRAINING_KISS,
                MOVE_POISON_GAS,
                MOVE_ENCORE,
            },
            },
            {
#line 1831
            .species = SPECIES_ROSERADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1831
            .heldItem = ITEM_BLACK_SLUDGE,
#line 1834
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1833
            .ability = ABILITY_POISON_POINT,
#line 1832
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1835
                MOVE_VENOSHOCK,
                MOVE_MAGICAL_LEAF,
                MOVE_WEATHER_BALL,
                MOVE_INGRAIN,
            },
            },
        },
    },
#line 1840
    [TRAINER_KEIRA] =
    {
#line 1841
        .trainerName = _("KEIRA"),
#line 1842
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1843
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1844
F_TRAINER_FEMALE | 
#line 1845
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1846
        .doubleBattle = TRUE,
#line 1847
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1849
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1851
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1850
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1853
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1855
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1854
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1857
    [TRAINER_BROOKE_1] =
    {
#line 1858
        .trainerName = _("BROOKE"),
#line 1859
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1860
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1861
F_TRAINER_FEMALE | 
#line 1862
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1863
        .doubleBattle = TRUE,
#line 1864
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1866
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1869
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 1868
            .ability = ABILITY_INTIMIDATE,
#line 1867
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1870
                MOVE_FLAME_CHARGE,
                MOVE_BITE,
                MOVE_HOWL,
                MOVE_MORNING_SUN,
            },
            },
            {
#line 1875
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1878
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 1877
            .ability = ABILITY_PSYCH_OUT,
#line 1876
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1879
                MOVE_STOMP,
                MOVE_GUARD_SWAP,
                MOVE_CONFUSION,
                MOVE_REFLECT,
            },
            },
            {
#line 1884
            .species = SPECIES_ORICORIO_POM_POM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1887
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 1886
            .ability = ABILITY_DANCER,
#line 1885
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1888
                MOVE_FEATHER_DANCE,
                MOVE_HELPING_HAND,
                MOVE_AIR_CUTTER,
                MOVE_REHEARSAL,
            },
            },
        },
    },
#line 1893
    [TRAINER_JENNIFER] =
    {
#line 1894
        .trainerName = _("JENNIFER"),
#line 1895
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1896
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1897
F_TRAINER_FEMALE | 
#line 1898
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1899
        .doubleBattle = TRUE,
#line 1900
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1902
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1904
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 1903
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1906
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1908
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 1907
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1910
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1912
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 1911
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1914
    [TRAINER_HOPE] =
    {
#line 1915
        .trainerName = _("HOPE"),
#line 1916
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1917
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1918
F_TRAINER_FEMALE | 
#line 1919
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1920
        .doubleBattle = TRUE,
#line 1921
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1923
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1925
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1924
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1927
    [TRAINER_SHANNON] =
    {
#line 1928
        .trainerName = _("SHANNON"),
#line 1929
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1930
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1931
F_TRAINER_FEMALE | 
#line 1932
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1933
        .doubleBattle = TRUE,
#line 1934
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1936
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1938
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1937
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1940
    [TRAINER_MICHELLE] =
    {
#line 1941
        .trainerName = _("MICHELLE"),
#line 1942
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1943
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1944
F_TRAINER_FEMALE | 
#line 1945
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1946
        .doubleBattle = TRUE,
#line 1947
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1949
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1951
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1950
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1953
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1955
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1954
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1957
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1959
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1958
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1961
    [TRAINER_CAROLINE] =
    {
#line 1962
        .trainerName = _("CAROLINE"),
#line 1963
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1964
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1965
F_TRAINER_FEMALE | 
#line 1966
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1967
        .doubleBattle = TRUE,
#line 1968
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1970
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1972
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1971
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1974
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1976
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1975
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1978
    [TRAINER_JULIE] =
    {
#line 1979
        .trainerName = _("JULIE"),
#line 1980
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1981
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1982
F_TRAINER_FEMALE | 
#line 1983
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1984
        .doubleBattle = TRUE,
#line 1985
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1987
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1989
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1988
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1991
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1993
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1992
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1995
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1997
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1996
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1999
    [TRAINER_PATRICIA] =
    {
#line 2000
        .trainerName = _("PATRICIA"),
#line 2001
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 2002
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 2003
F_TRAINER_FEMALE | 
#line 2004
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2005
        .doubleBattle = TRUE,
#line 2006
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2008
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2010
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2009
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2012
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2014
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2013
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2016
    [TRAINER_KINDRA] =
    {
#line 2017
        .trainerName = _("KINDRA"),
#line 2018
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 2019
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 2020
F_TRAINER_FEMALE | 
#line 2021
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2022
        .doubleBattle = TRUE,
#line 2023
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2025
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2027
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2026
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2029
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2031
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2030
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2033
    [TRAINER_TAMMY] =
    {
#line 2034
        .trainerName = _("TAMMY"),
#line 2035
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 2036
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 2037
F_TRAINER_FEMALE | 
#line 2038
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2039
        .doubleBattle = TRUE,
#line 2040
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2042
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2044
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2043
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2046
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2048
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2047
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2050
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2052
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2051
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2054
    [TRAINER_VALERIE_1] =
    {
#line 2055
        .trainerName = _("VALERIE"),
#line 2056
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 2057
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 2058
F_TRAINER_FEMALE | 
#line 2059
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2060
        .doubleBattle = TRUE,
#line 2061
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2063
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2065
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2064
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2067
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2069
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2068
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2071
    [TRAINER_TASHA] =
    {
#line 2072
        .trainerName = _("TASHA"),
#line 2073
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 2074
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 2075
F_TRAINER_FEMALE | 
#line 2076
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2077
        .doubleBattle = TRUE,
#line 2078
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2080
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2082
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 2081
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2084
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2086
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 2085
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2088
    [TRAINER_CINDY_1] =
    {
#line 2089
        .trainerName = _("CINDY"),
#line 2090
        .trainerClass = TRAINER_CLASS_LADY,
#line 2091
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 2092
F_TRAINER_FEMALE | 
#line 2093
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2094
        .doubleBattle = TRUE,
#line 2095
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2097
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2097
            .heldItem = ITEM_NUGGET,
#line 2100
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2099
            .ability = ABILITY_WATER_BUBBLE,
#line 2098
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2102
            .species = SPECIES_BUDEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2102
            .heldItem = ITEM_NUGGET,
#line 2105
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2104
            .ability = ABILITY_NATURAL_CURE,
#line 2103
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2107
    [TRAINER_DAPHNE] =
    {
#line 2108
        .trainerName = _("DAPHNE"),
#line 2109
        .trainerClass = TRAINER_CLASS_LADY,
#line 2110
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 2111
F_TRAINER_FEMALE | 
#line 2112
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2113
        .doubleBattle = TRUE,
#line 2114
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2116
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2116
            .heldItem = ITEM_NUGGET,
#line 2118
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2117
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2120
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2120
            .heldItem = ITEM_NUGGET,
#line 2122
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2121
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2124
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2124
            .heldItem = ITEM_NUGGET,
#line 2126
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2125
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2128
    [TRAINER_GRUNT_SPACE_CENTER_2] =
    {
#line 2129
        .trainerName = _("GRUNT"),
#line 2130
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 2131
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 2133
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 2134
        .doubleBattle = TRUE,
#line 2135
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2137
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2139
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2138
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2141
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2143
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2142
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2145
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2147
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2146
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2149
    [TRAINER_BRIANNA] =
    {
#line 2150
        .trainerName = _("BRIANNA"),
#line 2151
        .trainerClass = TRAINER_CLASS_LADY,
#line 2152
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 2153
F_TRAINER_FEMALE | 
#line 2154
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2155
        .doubleBattle = TRUE,
#line 2156
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2158
            .species = SPECIES_DEWGONG_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2158
            .heldItem = ITEM_NUGGET,
#line 2160
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2159
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2162
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2162
            .heldItem = ITEM_NUGGET,
#line 2164
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2163
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2166
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2166
            .heldItem = ITEM_NUGGET,
#line 2168
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2167
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2170
    [TRAINER_NAOMI] =
    {
#line 2171
        .trainerName = _("NAOMI"),
#line 2172
        .trainerClass = TRAINER_CLASS_LADY,
#line 2173
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 2174
F_TRAINER_FEMALE | 
#line 2175
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2176
        .doubleBattle = TRUE,
#line 2177
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2179
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2179
            .heldItem = ITEM_NUGGET,
#line 2181
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2180
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2183
    [TRAINER_MELISSA] =
    {
#line 2184
        .trainerName = _("MELISSA"),
#line 2185
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2186
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2187
F_TRAINER_FEMALE | 
#line 2188
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2189
        .doubleBattle = TRUE,
#line 2190
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2192
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2194
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2193
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2196
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2198
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2197
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2200
    [TRAINER_SHEILA] =
    {
#line 2201
        .trainerName = _("SHEILA"),
#line 2202
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2203
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2204
F_TRAINER_FEMALE | 
#line 2205
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2206
        .doubleBattle = TRUE,
#line 2207
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2209
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2211
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2210
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2213
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2215
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2214
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2217
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2219
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2218
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2221
    [TRAINER_SHIRLEY] =
    {
#line 2222
        .trainerName = _("SHIRLEY"),
#line 2223
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2224
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2225
F_TRAINER_FEMALE | 
#line 2226
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2227
        .doubleBattle = TRUE,
#line 2228
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2230
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2232
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2231
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2234
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2236
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2235
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2238
    [TRAINER_JESSICA_1] =
    {
#line 2239
        .trainerName = _("JESSICA"),
#line 2240
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2241
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2242
F_TRAINER_FEMALE | 
#line 2243
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2244
        .doubleBattle = TRUE,
#line 2245
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2247
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2249
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2248
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2251
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2253
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2252
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2255
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2257
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2256
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2259
    [TRAINER_CONNIE] =
    {
#line 2260
        .trainerName = _("CONNIE"),
#line 2261
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2262
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2263
F_TRAINER_FEMALE | 
#line 2264
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2265
        .doubleBattle = TRUE,
#line 2266
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2268
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2270
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2269
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2272
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2274
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2273
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2276
    [TRAINER_BRIDGET] =
    {
#line 2277
        .trainerName = _("BRIDGET"),
#line 2278
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2279
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2280
F_TRAINER_FEMALE | 
#line 2281
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2282
        .doubleBattle = TRUE,
#line 2283
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2285
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2287
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2286
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2289
            .species = SPECIES_GOLISOPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2291
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2290
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2293
    [TRAINER_OLIVIA] =
    {
#line 2294
        .trainerName = _("OLIVIA"),
#line 2295
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2296
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2297
F_TRAINER_FEMALE | 
#line 2298
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2299
        .doubleBattle = TRUE,
#line 2300
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2302
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2304
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2303
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2306
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2308
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2307
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2310
    [TRAINER_TIFFANY] =
    {
#line 2311
        .trainerName = _("TIFFANY"),
#line 2312
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2313
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2314
F_TRAINER_FEMALE | 
#line 2315
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2316
        .doubleBattle = TRUE,
#line 2317
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2319
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2321
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2320
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2323
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2325
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2324
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2327
    [TRAINER_WINSTON_1] =
    {
#line 2328
        .trainerName = _("WINSTON"),
#line 2329
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 2330
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender = 
#line 2332
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2333
        .doubleBattle = TRUE,
#line 2334
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2336
            .species = SPECIES_SHROODLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2336
            .heldItem = ITEM_NUGGET,
#line 2338
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2337
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2340
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2340
            .heldItem = ITEM_NUGGET,
#line 2342
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2341
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2344
    [TRAINER_MOLLIE] =
    {
#line 2345
        .trainerName = _("MOLLIE"),
#line 2346
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 2347
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 2348
F_TRAINER_FEMALE | 
#line 2349
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2350
        .doubleBattle = TRUE,
#line 2351
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2353
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2355
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2354
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2357
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2359
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 2358
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2361
    [TRAINER_GARRET] =
    {
#line 2362
        .trainerName = _("GARRET"),
#line 2363
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 2364
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender = 
#line 2366
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2367
        .doubleBattle = TRUE,
#line 2368
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2370
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2370
            .heldItem = ITEM_NUGGET,
#line 2372
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2371
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2374
    [TRAINER_STEVE_1] =
    {
#line 2375
        .trainerName = _("STEVE"),
#line 2376
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2377
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender = 
#line 2379
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2380
        .doubleBattle = TRUE,
#line 2381
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2383
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2385
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2384
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2387
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2389
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2388
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2391
    [TRAINER_THALIA_1] =
    {
#line 2392
        .trainerName = _("THALIA"),
#line 2393
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2394
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2395
F_TRAINER_FEMALE | 
#line 2396
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2397
        .doubleBattle = TRUE,
#line 2398
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2400
            .species = SPECIES_SNUBBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2402
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2401
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2404
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2406
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2405
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2408
    [TRAINER_MARK] =
    {
#line 2409
        .trainerName = _("MARK"),
#line 2410
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2411
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender = 
#line 2413
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2414
        .doubleBattle = TRUE,
#line 2415
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2417
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2419
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2418
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2421
            .species = SPECIES_MAROWAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2423
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2422
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2425
    [TRAINER_GRUNT_MT_CHIMNEY_1] =
    {
#line 2426
        .trainerName = _("GRUNT"),
#line 2427
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 2428
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender = 
#line 2429
F_TRAINER_FEMALE | 
#line 2430
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 2431
        .doubleBattle = TRUE,
#line 2432
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2434
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2436
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2435
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2438
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2440
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2439
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2442
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2444
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2443
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2446
    [TRAINER_LUIS] =
    {
#line 2447
        .trainerName = _("LUIS"),
#line 2448
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2449
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2451
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2452
        .doubleBattle = TRUE,
#line 2453
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2455
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2457
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2456
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2459
            .species = SPECIES_CRABRAWLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2461
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2460
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2463
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2465
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2464
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2467
    [TRAINER_DOMINIK] =
    {
#line 2468
        .trainerName = _("DOMINIK"),
#line 2469
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2470
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2472
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2473
        .doubleBattle = TRUE,
#line 2474
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2476
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2478
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2477
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2480
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2482
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2481
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2484
    [TRAINER_DOUGLAS] =
    {
#line 2485
        .trainerName = _("DOUGLAS"),
#line 2486
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2487
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2489
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2490
        .doubleBattle = TRUE,
#line 2491
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2493
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2495
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2494
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2497
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2499
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2498
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2501
    [TRAINER_DARRIN] =
    {
#line 2502
        .trainerName = _("DARRIN"),
#line 2503
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2504
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2506
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2507
        .doubleBattle = TRUE,
#line 2508
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2510
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2512
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2511
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2514
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2516
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2515
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2518
    [TRAINER_TONY_1] =
    {
#line 2519
        .trainerName = _("TONY"),
#line 2520
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2521
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2523
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2524
        .doubleBattle = TRUE,
#line 2525
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2527
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2529
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2528
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2531
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2533
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2532
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2535
    [TRAINER_JEROME] =
    {
#line 2536
        .trainerName = _("JEROME"),
#line 2537
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2538
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2540
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2541
        .doubleBattle = TRUE,
#line 2542
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2544
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2546
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2545
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2548
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2550
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2549
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2552
    [TRAINER_MATTHEW] =
    {
#line 2553
        .trainerName = _("MATTHEW"),
#line 2554
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2555
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2557
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2558
        .doubleBattle = TRUE,
#line 2559
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2561
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2563
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2562
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2565
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2567
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2566
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2569
    [TRAINER_DAVID] =
    {
#line 2570
        .trainerName = _("DAVID"),
#line 2571
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2572
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2574
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2575
        .doubleBattle = TRUE,
#line 2576
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2578
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2580
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2579
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2582
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2584
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2583
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2586
    [TRAINER_SPENCER] =
    {
#line 2587
        .trainerName = _("SPENCER"),
#line 2588
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2589
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2591
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2592
        .doubleBattle = TRUE,
#line 2593
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2595
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2597
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2596
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2599
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2601
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2600
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2603
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2605
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2604
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2607
    [TRAINER_ROLAND] =
    {
#line 2608
        .trainerName = _("ROLAND"),
#line 2609
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2610
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2612
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2613
        .doubleBattle = TRUE,
#line 2614
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2616
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2618
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2617
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2620
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2622
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2621
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2624
    [TRAINER_NOLEN] =
    {
#line 2625
        .trainerName = _("NOLEN"),
#line 2626
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2627
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2629
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2630
        .doubleBattle = TRUE,
#line 2631
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2633
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2635
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2634
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2637
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2639
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2638
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2641
    [TRAINER_STAN] =
    {
#line 2642
        .trainerName = _("STAN"),
#line 2643
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2644
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2646
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2647
        .doubleBattle = TRUE,
#line 2648
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2650
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2652
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2651
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2654
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2656
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2655
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2658
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2660
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2659
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2662
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2664
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2663
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2666
    [TRAINER_BARRY] =
    {
#line 2667
        .trainerName = _("BARRY"),
#line 2668
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2669
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2671
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2672
        .doubleBattle = TRUE,
#line 2673
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2675
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2677
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2676
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2679
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2681
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2680
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2683
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2685
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2684
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2687
    [TRAINER_DEAN] =
    {
#line 2688
        .trainerName = _("DEAN"),
#line 2689
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2690
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2692
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2693
        .doubleBattle = TRUE,
#line 2694
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2696
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2698
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2697
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2700
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2702
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2701
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2704
    [TRAINER_RODNEY] =
    {
#line 2705
        .trainerName = _("RODNEY"),
#line 2706
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2707
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2709
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2710
        .doubleBattle = TRUE,
#line 2711
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2713
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2715
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2714
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2717
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2719
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2718
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2721
    [TRAINER_RICHARD] =
    {
#line 2722
        .trainerName = _("RICHARD"),
#line 2723
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2724
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2726
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2727
        .doubleBattle = TRUE,
#line 2728
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2730
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2732
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2731
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2734
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2736
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2735
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2738
    [TRAINER_HERMAN] =
    {
#line 2739
        .trainerName = _("HERMAN"),
#line 2740
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2741
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2743
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2744
        .doubleBattle = TRUE,
#line 2745
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2747
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2749
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2748
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2751
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2753
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2752
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2755
    [TRAINER_SANTIAGO] =
    {
#line 2756
        .trainerName = _("SANTIAGO"),
#line 2757
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2758
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2760
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2761
        .doubleBattle = TRUE,
#line 2762
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2764
            .species = SPECIES_MIENFOO_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2766
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2765
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2768
            .species = SPECIES_GRAPPLOCT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2770
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2769
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2772
    [TRAINER_GILBERT] =
    {
#line 2773
        .trainerName = _("GILBERT"),
#line 2774
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2775
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2777
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2778
        .doubleBattle = TRUE,
#line 2779
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2781
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2783
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2782
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2785
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2787
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2786
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2789
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2791
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2790
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2793
            .species = SPECIES_GRAPPLOCT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2795
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2794
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2797
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2799
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2798
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2801
    [TRAINER_FRANKLIN] =
    {
#line 2802
        .trainerName = _("FRANKLIN"),
#line 2803
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2804
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2806
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2807
        .doubleBattle = TRUE,
#line 2808
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2810
            .species = SPECIES_HUNTAIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2812
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2811
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2814
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2816
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2815
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2818
    [TRAINER_KEVIN] =
    {
#line 2819
        .trainerName = _("KEVIN"),
#line 2820
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2821
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2823
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2824
        .doubleBattle = TRUE,
#line 2825
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2827
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2829
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2828
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2831
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2833
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2832
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2835
    [TRAINER_JACK] =
    {
#line 2836
        .trainerName = _("JACK"),
#line 2837
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2838
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2840
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2841
        .doubleBattle = TRUE,
#line 2842
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2844
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2846
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2845
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2848
            .species = SPECIES_KILOWATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2850
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2849
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2852
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2854
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2853
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2856
    [TRAINER_DUDLEY] =
    {
#line 2857
        .trainerName = _("DUDLEY"),
#line 2858
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2859
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2861
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2862
        .doubleBattle = TRUE,
#line 2863
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2865
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2867
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2866
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2869
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2871
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2870
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2873
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2875
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2874
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2877
    [TRAINER_CHAD] =
    {
#line 2878
        .trainerName = _("CHAD"),
#line 2879
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2880
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2882
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2883
        .doubleBattle = TRUE,
#line 2884
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2886
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2888
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2887
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2890
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2892
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2891
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2894
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2896
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2895
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2898
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2900
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2899
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2902
    [TRAINER_TAKAO] =
    {
#line 2903
        .trainerName = _("TAKAO"),
#line 2904
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2905
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 2907
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2908
        .doubleBattle = TRUE,
#line 2909
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2911
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2913
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 2912
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2915
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2917
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 2916
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2919
    [TRAINER_HITOSHI] =
    {
#line 2920
        .trainerName = _("HITOSHI"),
#line 2921
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2922
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 2924
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2925
        .doubleBattle = TRUE,
#line 2926
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2928
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2930
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 2929
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2932
            .species = SPECIES_GRAPPLOCT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2934
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 2933
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2936
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2938
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 2937
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2940
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2942
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 2941
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2944
    [TRAINER_KIYO] =
    {
#line 2945
        .trainerName = _("KIYO"),
#line 2946
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2947
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 2949
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2950
        .doubleBattle = TRUE,
#line 2951
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2953
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2955
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2954
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2957
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2959
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2958
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2961
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2963
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2962
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2965
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2967
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2966
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2969
    [TRAINER_KOICHI] =
    {
#line 2970
        .trainerName = _("KOICHI"),
#line 2971
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2972
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 2974
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2975
        .doubleBattle = TRUE,
#line 2976
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2978
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2980
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2979
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2982
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2984
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2983
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2986
            .species = SPECIES_GRAPPLOCT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2988
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2987
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2990
    [TRAINER_NOB_1] =
    {
#line 2991
        .trainerName = _("NOB"),
#line 2992
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2993
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 2995
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2996
        .doubleBattle = TRUE,
#line 2997
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2999
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3001
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 3000
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3003
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3005
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 3004
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3007
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3009
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 3008
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3011
    [TRAINER_YUJI] =
    {
#line 3012
        .trainerName = _("YUJI"),
#line 3013
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 3014
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 3016
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3017
        .doubleBattle = TRUE,
#line 3018
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3020
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3022
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3021
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3024
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3026
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3025
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3028
    [TRAINER_DAISUKE] =
    {
#line 3029
        .trainerName = _("DAISUKE"),
#line 3030
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 3031
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 3033
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3034
        .doubleBattle = TRUE,
#line 3035
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3037
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3039
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3038
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3041
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3043
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3042
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3045
    [TRAINER_ATSUSHI] =
    {
#line 3046
        .trainerName = _("ATSUSHI"),
#line 3047
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 3048
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 3050
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3051
        .doubleBattle = TRUE,
#line 3052
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3054
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3056
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3055
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3058
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3060
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3059
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3062
    [TRAINER_KIRK] =
    {
#line 3063
        .trainerName = _("KIRK"),
#line 3064
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 3065
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 3067
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3068
        .doubleBattle = TRUE,
#line 3069
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3071
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3073
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3072
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3075
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3077
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3076
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3079
    [TRAINER_GRUNT_AQUA_HIDEOUT_7] =
    {
#line 3080
        .trainerName = _("GRUNT"),
#line 3081
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 3082
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 3083
F_TRAINER_FEMALE | 
#line 3084
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 3085
        .doubleBattle = TRUE,
#line 3086
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3088
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3090
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3089
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3092
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3094
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3093
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3096
    [TRAINER_GRUNT_AQUA_HIDEOUT_8] =
    {
#line 3097
        .trainerName = _("GRUNT"),
#line 3098
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 3099
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 3101
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 3102
        .doubleBattle = TRUE,
#line 3103
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3105
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3107
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3106
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3109
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3111
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3110
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3113
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3115
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3114
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3117
    [TRAINER_SHAWN] =
    {
#line 3118
        .trainerName = _("SHAWN"),
#line 3119
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 3120
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 3122
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3123
        .doubleBattle = TRUE,
#line 3124
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3126
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3128
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3127
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3130
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3132
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3131
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3134
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3136
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3135
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3138
    [TRAINER_FERNANDO_1] =
    {
#line 3139
        .trainerName = _("FERNANDO"),
#line 3140
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 3141
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 3143
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3144
        .doubleBattle = TRUE,
#line 3145
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3147
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3149
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3148
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3151
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3153
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3152
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3155
    [TRAINER_DALTON_1] =
    {
#line 3156
        .trainerName = _("DALTON"),
#line 3157
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 3158
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 3160
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3161
        .doubleBattle = TRUE,
#line 3162
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3164
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3166
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3165
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3168
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3170
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3169
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3172
    [TRAINER_COLE] =
    {
#line 3173
        .trainerName = _("COLE"),
#line 3174
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 3175
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 3177
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3178
        .doubleBattle = TRUE,
#line 3179
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3181
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3183
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3182
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3185
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3187
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3186
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3189
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3191
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3190
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3193
    [TRAINER_JEFF] =
    {
#line 3194
        .trainerName = _("JEFF"),
#line 3195
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 3196
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 3198
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3199
        .doubleBattle = TRUE,
#line 3200
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3202
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3204
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3203
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3206
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3208
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3207
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3210
    [TRAINER_AXLE] =
    {
#line 3211
        .trainerName = _("AXLE"),
#line 3212
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 3213
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 3215
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3216
        .doubleBattle = TRUE,
#line 3217
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3219
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3221
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3220
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3223
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3225
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3224
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3227
    [TRAINER_JACE] =
    {
#line 3228
        .trainerName = _("JACE"),
#line 3229
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 3230
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 3232
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3233
        .doubleBattle = TRUE,
#line 3234
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3236
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3238
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3237
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3240
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3242
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3241
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3244
    [TRAINER_KEEGAN] =
    {
#line 3245
        .trainerName = _("KEEGAN"),
#line 3246
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 3247
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 3249
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3250
        .doubleBattle = TRUE,
#line 3251
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3253
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3255
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3254
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3257
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3259
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3258
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3261
    [TRAINER_BERNIE_1] =
    {
#line 3262
        .trainerName = _("BERNIE"),
#line 3263
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 3264
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 3266
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3267
        .doubleBattle = TRUE,
#line 3268
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3270
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3272
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3271
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3274
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3276
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3275
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3278
    [TRAINER_DREW] =
    {
#line 3279
        .trainerName = _("DREW"),
#line 3280
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3281
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 3283
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3284
        .doubleBattle = TRUE,
#line 3285
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3287
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3289
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3288
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3290
                MOVE_DIG,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
                MOVE_SLASH,
            },
            },
            {
#line 3295
            .species = SPECIES_CACNEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3297
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3296
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3298
                MOVE_PIN_MISSILE,
                MOVE_LEER,
                MOVE_INGRAIN,
                MOVE_BULLET_SEED,
            },
            },
            {
#line 3303
            .species = SPECIES_SKIDDO_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3303
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 3305
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3304
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3306
                MOVE_TAKE_DOWN,
                MOVE_POWDER_SNOW,
                MOVE_ICE_SHARD,
                MOVE_BULLDOZE,
            },
            },
        },
    },
#line 3311
    [TRAINER_BEAU] =
    {
#line 3312
        .trainerName = _("BEAU"),
#line 3313
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3314
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 3316
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3317
        .doubleBattle = TRUE,
#line 3318
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3320
            .species = SPECIES_SKIDDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3320
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 3322
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3321
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3324
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3326
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3325
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3328
    [TRAINER_LARRY] =
    {
#line 3329
        .trainerName = _("LARRY"),
#line 3330
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3331
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 3333
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3334
        .doubleBattle = TRUE,
#line 3335
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3337
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3339
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3338
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3341
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3343
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3342
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3345
    [TRAINER_SHANE] =
    {
#line 3346
        .trainerName = _("SHANE"),
#line 3347
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3348
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 3350
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3351
        .doubleBattle = TRUE,
#line 3352
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3354
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3356
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3355
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3358
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3360
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3359
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3362
    [TRAINER_JUSTIN] =
    {
#line 3363
        .trainerName = _("JUSTIN"),
#line 3364
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3365
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 3367
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3368
        .doubleBattle = TRUE,
#line 3369
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3371
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3373
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3372
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3375
    [TRAINER_ETHAN_1] =
    {
#line 3376
        .trainerName = _("ETHAN"),
#line 3377
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3378
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 3380
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3381
        .doubleBattle = TRUE,
#line 3382
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3384
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3386
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3385
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3388
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3390
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3389
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3392
            .species = SPECIES_SKIDDO_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3394
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3393
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3396
    [TRAINER_AUTUMN] =
    {
#line 3397
        .trainerName = _("AUTUMN"),
#line 3398
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 3399
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 3400
F_TRAINER_FEMALE | 
#line 3401
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3402
        .doubleBattle = TRUE,
#line 3403
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3405
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3407
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3406
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3409
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3411
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3410
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3413
    [TRAINER_TRAVIS] =
    {
#line 3414
        .trainerName = _("TRAVIS"),
#line 3415
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3416
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 3418
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3419
        .doubleBattle = TRUE,
#line 3420
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3422
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3424
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3423
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3426
            .species = SPECIES_SKIDDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3428
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3427
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3430
    [TRAINER_BRENT] =
    {
#line 3431
        .trainerName = _("BRENT"),
#line 3432
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3433
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 3435
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3436
        .doubleBattle = TRUE,
#line 3437
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3439
            .species = SPECIES_LARVESTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3441
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3440
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3443
            .species = SPECIES_SNOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3445
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3444
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3447
    [TRAINER_DONALD] =
    {
#line 3448
        .trainerName = _("DONALD"),
#line 3449
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3450
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 3452
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3453
        .doubleBattle = TRUE,
#line 3454
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3456
            .species = SPECIES_GOLISOPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3458
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3457
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3460
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3462
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3461
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3464
    [TRAINER_TAYLOR] =
    {
#line 3465
        .trainerName = _("TAYLOR"),
#line 3466
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3467
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 3469
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3470
        .doubleBattle = TRUE,
#line 3471
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3473
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3475
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3474
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3477
            .species = SPECIES_GALVANTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3479
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3478
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3481
    [TRAINER_JEFFREY_1] =
    {
#line 3482
        .trainerName = _("JEFFREY"),
#line 3483
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3484
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 3486
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3487
        .doubleBattle = TRUE,
#line 3488
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3490
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3492
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3491
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3494
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3496
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3495
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3498
    [TRAINER_DEREK] =
    {
#line 3499
        .trainerName = _("DEREK"),
#line 3500
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3501
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 3503
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3504
        .doubleBattle = TRUE,
#line 3505
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3507
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3509
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 3508
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3511
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3513
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 3512
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3515
    [TRAINER_EDWARD] =
    {
#line 3516
        .trainerName = _("EDWARD"),
#line 3517
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3518
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 3520
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3521
        .doubleBattle = TRUE,
#line 3522
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3524
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3526
            .iv = TRAINER_PARTY_IVS(3, 18, 4, 2, 2, 4),
#line 3525
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3527
                MOVE_HIDDEN_POWER,
            },
            },
            {
#line 3529
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3531
            .iv = TRAINER_PARTY_IVS(3, 17, 4, 2, 2, 4),
#line 3530
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3532
                MOVE_HIDDEN_POWER,
            },
            },
        },
    },
#line 3534
    [TRAINER_PRESTON] =
    {
#line 3535
        .trainerName = _("PRESTON"),
#line 3536
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3537
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 3539
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3540
        .doubleBattle = TRUE,
#line 3541
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3543
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3545
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3544
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3547
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3549
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3548
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3551
    [TRAINER_VIRGIL] =
    {
#line 3552
        .trainerName = _("VIRGIL"),
#line 3553
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3554
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 3556
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3557
        .doubleBattle = TRUE,
#line 3558
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3560
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3562
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3561
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3564
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3566
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3565
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3568
    [TRAINER_BLAKE] =
    {
#line 3569
        .trainerName = _("BLAKE"),
#line 3570
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3571
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 3573
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3574
        .doubleBattle = TRUE,
#line 3575
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3577
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3579
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3578
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3581
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3583
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3582
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3585
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3587
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3586
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3589
    [TRAINER_WILLIAM] =
    {
#line 3590
        .trainerName = _("WILLIAM"),
#line 3591
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3592
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 3594
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3595
        .doubleBattle = TRUE,
#line 3596
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3598
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3600
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3599
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3602
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3604
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3603
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3606
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3608
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3607
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3610
    [TRAINER_JOSHUA] =
    {
#line 3611
        .trainerName = _("JOSHUA"),
#line 3612
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3613
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 3615
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3616
        .doubleBattle = TRUE,
#line 3617
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3619
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3621
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3620
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3623
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3625
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3624
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3627
    [TRAINER_CAMERON_1] =
    {
#line 3628
        .trainerName = _("CAMERON"),
#line 3629
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3630
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 3632
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3633
        .doubleBattle = TRUE,
#line 3634
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3636
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3638
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3637
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3640
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3642
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3641
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3644
    [TRAINER_JACLYN] =
    {
#line 3645
        .trainerName = _("JACLYN"),
#line 3646
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3647
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 3648
F_TRAINER_FEMALE | 
#line 3649
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3650
        .doubleBattle = TRUE,
#line 3651
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3653
            .species = SPECIES_ESPURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3655
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3654
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3657
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3659
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3658
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3661
    [TRAINER_HANNAH] =
    {
#line 3662
        .trainerName = _("HANNAH"),
#line 3663
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3664
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 3665
F_TRAINER_FEMALE | 
#line 3666
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3667
        .doubleBattle = TRUE,
#line 3668
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3670
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3672
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3671
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3674
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3676
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3675
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3678
    [TRAINER_SAMANTHA] =
    {
#line 3679
        .trainerName = _("SAMANTHA"),
#line 3680
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3681
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 3682
F_TRAINER_FEMALE | 
#line 3683
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3684
        .doubleBattle = TRUE,
#line 3685
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3687
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3689
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3688
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3691
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3693
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3692
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3695
    [TRAINER_MAURA] =
    {
#line 3696
        .trainerName = _("MAURA"),
#line 3697
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3698
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 3699
F_TRAINER_FEMALE | 
#line 3700
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3701
        .doubleBattle = TRUE,
#line 3702
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3704
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3706
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3705
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3708
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3710
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3709
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3712
            .species = SPECIES_ORICORIO_PAU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3714
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3713
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3716
    [TRAINER_KAYLA] =
    {
#line 3717
        .trainerName = _("KAYLA"),
#line 3718
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3719
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 3720
F_TRAINER_FEMALE | 
#line 3721
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3722
        .doubleBattle = TRUE,
#line 3723
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3725
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3727
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3726
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3729
            .species = SPECIES_ESPURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3731
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3730
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3733
    [TRAINER_ALEXIS] =
    {
#line 3734
        .trainerName = _("ALEXIS"),
#line 3735
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3736
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 3737
F_TRAINER_FEMALE | 
#line 3738
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3739
        .doubleBattle = TRUE,
#line 3740
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3742
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3744
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3743
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3746
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3748
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3747
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3750
    [TRAINER_JACKI_1] =
    {
#line 3751
        .trainerName = _("JACKI"),
#line 3752
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3753
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 3754
F_TRAINER_FEMALE | 
#line 3755
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3756
        .doubleBattle = TRUE,
#line 3757
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3759
            .species = SPECIES_ESPURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3761
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3760
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3763
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3765
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3764
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3767
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3769
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3768
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3771
    [TRAINER_WALTER_1] =
    {
#line 3772
        .trainerName = _("WALTER"),
#line 3773
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3774
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 3776
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3777
        .doubleBattle = TRUE,
#line 3778
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3780
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3782
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3781
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3784
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3786
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3785
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3788
    [TRAINER_MICAH] =
    {
#line 3789
        .trainerName = _("MICAH"),
#line 3790
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3791
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 3793
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3794
        .doubleBattle = TRUE,
#line 3795
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3797
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3799
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3798
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3801
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3803
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3802
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3805
    [TRAINER_THOMAS] =
    {
#line 3806
        .trainerName = _("THOMAS"),
#line 3807
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3808
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 3810
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3811
        .doubleBattle = TRUE,
#line 3812
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3814
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3816
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3815
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3818
    [TRAINER_SIDNEY] =
    {
#line 3819
        .trainerName = _("SIDNEY"),
#line 3820
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3821
        .trainerPic = TRAINER_PIC_ELITE_FOUR_SIDNEY,
        .encounterMusic_gender = 
#line 3823
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3824
        .doubleBattle = TRUE,
#line 3825
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SETUP_FIRST_TURN,
#line 3826
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3828
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3830
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3829
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3831
                MOVE_ROAR,
                MOVE_DOUBLE_EDGE,
                MOVE_SAND_ATTACK,
                MOVE_CRUNCH,
            },
            },
            {
#line 3836
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3838
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3837
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3839
                MOVE_TORMENT,
                MOVE_DOUBLE_TEAM,
                MOVE_SWAGGER,
                MOVE_EXTRASENSORY,
            },
            },
            {
#line 3844
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3846
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3845
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3847
                MOVE_LEECH_SEED,
                MOVE_FEINT_ATTACK,
                MOVE_NEEDLE_ARM,
                MOVE_COTTON_SPORE,
            },
            },
            {
#line 3852
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3854
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3853
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3855
                MOVE_SURF,
                MOVE_SWORDS_DANCE,
                MOVE_STRENGTH,
                MOVE_FACADE,
            },
            },
            {
#line 3860
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3860
            .heldItem = ITEM_SITRUS_BERRY,
#line 3862
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3861
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3863
                MOVE_AERIAL_ACE,
                MOVE_ROCK_SLIDE,
                MOVE_SWORDS_DANCE,
                MOVE_SLASH,
            },
            },
        },
    },
#line 3868
    [TRAINER_PHOEBE] =
    {
#line 3869
        .trainerName = _("PHOEBE"),
#line 3870
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3871
        .trainerPic = TRAINER_PIC_ELITE_FOUR_PHOEBE,
        .encounterMusic_gender = 
#line 3872
F_TRAINER_FEMALE | 
#line 3873
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3874
        .doubleBattle = TRUE,
#line 3875
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 3876
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_GREEN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3878
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3880
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3879
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3881
                MOVE_SHADOW_PUNCH,
                MOVE_CONFUSE_RAY,
                MOVE_CURSE,
                MOVE_PROTECT,
            },
            },
            {
#line 3886
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3888
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3887
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3889
                MOVE_SHADOW_BALL,
                MOVE_GRUDGE,
                MOVE_WILL_O_WISP,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 3894
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3896
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3895
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3897
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_TEAM,
                MOVE_NIGHT_SHADE,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 3902
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3904
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3903
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3905
                MOVE_SHADOW_BALL,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_FACADE,
            },
            },
            {
#line 3910
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3910
            .heldItem = ITEM_SITRUS_BERRY,
#line 3912
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3911
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3913
                MOVE_SHADOW_BALL,
                MOVE_ICE_BEAM,
                MOVE_ROCK_SLIDE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 3918
    [TRAINER_GLACIA] =
    {
#line 3919
        .trainerName = _("GLACIA"),
#line 3920
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3921
        .trainerPic = TRAINER_PIC_ELITE_FOUR_GLACIA,
        .encounterMusic_gender = 
#line 3922
F_TRAINER_FEMALE | 
#line 3923
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3924
        .doubleBattle = TRUE,
#line 3925
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 3926
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PINK,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3928
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3930
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3929
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3931
                MOVE_ENCORE,
                MOVE_BODY_SLAM,
                MOVE_HAIL,
                MOVE_ICE_BALL,
            },
            },
            {
#line 3936
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3938
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3937
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3939
                MOVE_LIGHT_SCREEN,
                MOVE_CRUNCH,
                MOVE_ICY_WIND,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 3944
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3946
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3945
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3947
                MOVE_ATTRACT,
                MOVE_DOUBLE_EDGE,
                MOVE_HAIL,
                MOVE_BLIZZARD,
            },
            },
            {
#line 3952
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3954
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3953
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3955
                MOVE_SHADOW_BALL,
                MOVE_EXPLOSION,
                MOVE_HAIL,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 3960
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3960
            .heldItem = ITEM_SITRUS_BERRY,
#line 3962
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3961
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3963
                MOVE_SURF,
                MOVE_BODY_SLAM,
                MOVE_ICE_BEAM,
                MOVE_SHEER_COLD,
            },
            },
        },
    },
#line 3968
    [TRAINER_DRAKE] =
    {
#line 3969
        .trainerName = _("DRAKE"),
#line 3970
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3971
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .encounterMusic_gender = 
#line 3973
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3974
        .doubleBattle = TRUE,
#line 3975
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 3976
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3978
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3980
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3979
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3981
                MOVE_ROCK_TOMB,
                MOVE_DRAGON_CLAW,
                MOVE_PROTECT,
                MOVE_DOUBLE_EDGE,
            },
            },
            {
#line 3986
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3988
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3987
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3989
                MOVE_DOUBLE_EDGE,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 3994
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3996
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3995
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3997
                MOVE_SMOKESCREEN,
                MOVE_DRAGON_DANCE,
                MOVE_SURF,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 4002
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4004
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4003
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4005
                MOVE_FLAMETHROWER,
                MOVE_CRUNCH,
                MOVE_DRAGON_BREATH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 4010
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4010
            .heldItem = ITEM_SITRUS_BERRY,
#line 4012
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4011
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4013
                MOVE_FLAMETHROWER,
                MOVE_DRAGON_CLAW,
                MOVE_ROCK_SLIDE,
                MOVE_CRUNCH,
            },
            },
        },
    },
#line 4018
    [TRAINER_ROXANNE] =
    {
#line 4019
        .trainerName = _("ROXANNE"),
#line 4020
        .trainerClass = TRAINER_CLASS_LEADER,
#line 4021
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender = 
#line 4022
F_TRAINER_FEMALE | 
#line 4023
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4024
        .doubleBattle = TRUE,
#line 4025
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4027
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4031
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4029
            .ability = ABILITY_STORM_DRAIN,
#line 4028
            .lvl = 12,
#line 4030
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4032
                MOVE_STEALTH_ROCK,
                MOVE_LEECH_SEED,
                MOVE_ACID,
                MOVE_ABSORB,
            },
            },
            {
#line 4037
            .species = SPECIES_ANORITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4041
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4039
            .ability = ABILITY_BATTLE_ARMOR,
#line 4038
            .lvl = 12,
#line 4040
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4042
                MOVE_HONE_CLAWS,
                MOVE_FURY_CUTTER,
                MOVE_CUT,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 4047
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4047
            .heldItem = ITEM_CLEAR_AMULET,
#line 4051
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4049
            .ability = ABILITY_STURDY,
#line 4048
            .lvl = 12,
#line 4050
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4052
                MOVE_ROCK_TOMB,
                MOVE_SANDSTORM,
                MOVE_THUNDER_WAVE,
                MOVE_TORMENT,
            },
            },
            {
#line 4057
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4057
            .heldItem = ITEM_METRONOME,
#line 4060
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4058
            .lvl = 13,
#line 4059
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4061
                MOVE_DEFENSE_CURL,
                MOVE_ROLLOUT,
                MOVE_TRAILBLAZE,
                MOVE_FLAIL,
            },
            },
        },
    },
#line 4066
    [TRAINER_BRAWLY] =
    {
#line 4067
        .trainerName = _("BRAWLY"),
#line 4068
        .trainerClass = TRAINER_CLASS_LEADER,
#line 4069
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender = 
#line 4071
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4072
        .doubleBattle = TRUE,
#line 4073
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4075
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4075
            .heldItem = ITEM_ROOM_SERVICE,
#line 4079
            .iv = TRAINER_PARTY_IVS(30, 15, 30, 15, 15, 30),
#line 4077
            .ability = ABILITY_DRY_SKIN,
#line 4076
            .lvl = 16,
#line 4078
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4080
                MOVE_FAKE_OUT,
                MOVE_VENOSHOCK,
                MOVE_KARATE_CHOP,
                MOVE_BULK_UP,
            },
            },
            {
#line 4085
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4089
            .iv = TRAINER_PARTY_IVS(30, 15, 30, 0, 15, 30),
#line 4087
            .ability = ABILITY_PURE_POWER,
#line 4086
            .lvl = 16,
#line 4088
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4090
                MOVE_TRICK_ROOM,
                MOVE_COACHING,
                MOVE_VACUUM_WAVE,
                MOVE_CONFUSION,
            },
            },
            {
#line 4095
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4095
            .heldItem = ITEM_MYSTIC_WATER,
#line 4099
            .iv = TRAINER_PARTY_IVS(30, 15, 30, 0, 15, 30),
#line 4097
            .ability = ABILITY_HYPER_CUTTER,
#line 4096
            .lvl = 17,
#line 4098
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4100
                MOVE_PROTECT,
                MOVE_AQUA_JET,
                MOVE_KNOCK_OFF,
                MOVE_BRICK_BREAK,
            },
            },
            {
#line 4105
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4105
            .heldItem = ITEM_FLAME_ORB,
#line 4109
            .iv = TRAINER_PARTY_IVS(30, 15, 30, 0, 15, 30),
#line 4107
            .ability = ABILITY_GUTS,
#line 4106
            .lvl = 17,
#line 4108
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4110
                MOVE_BULLET_PUNCH,
                MOVE_FAKE_OUT,
                MOVE_PROTECT,
                MOVE_FORCE_PALM,
            },
            },
        },
    },
#line 4115
    [TRAINER_WATTSON] =
    {
#line 4116
        .trainerName = _("WATTSON"),
#line 4117
        .trainerClass = TRAINER_CLASS_LEADER,
#line 4118
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender = 
#line 4120
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4121
        .doubleBattle = TRUE,
#line 4122
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4124
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4128
            .iv = TRAINER_PARTY_IVS(30, 15, 15, 25, 25, 15),
#line 4126
            .ability = ABILITY_PLUS,
#line 4125
            .lvl = 21,
#line 4127
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4129
                MOVE_DISARMING_VOICE,
                MOVE_ENCORE,
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 4134
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4138
            .iv = TRAINER_PARTY_IVS(20, 15, 25, 25, 15, 25),
#line 4136
            .ability = ABILITY_MINUS,
#line 4135
            .lvl = 21,
#line 4137
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4139
                MOVE_NUZZLE,
                MOVE_HELPING_HAND,
                MOVE_TEARFUL_LOOK,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 4144
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4144
            .heldItem = ITEM_EVIOLITE,
#line 4148
            .iv = TRAINER_PARTY_IVS(30, 15, 30, 30, 20, 30),
#line 4146
            .ability = ABILITY_COMPOUND_EYES,
#line 4145
            .lvl = 22,
#line 4147
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4149
                MOVE_ELECTROWEB,
                MOVE_STRUGGLE_BUG,
                MOVE_DOUBLE_TEAM,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 4154
            .species = SPECIES_BELLIBOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4154
            .heldItem = ITEM_RED_CARD,
#line 4158
            .iv = TRAINER_PARTY_IVS(0, 0, 10, 0, 15, 10),
#line 4156
            .ability = ABILITY_ELECTROMORPHOSIS,
#line 4155
            .lvl = 22,
#line 4157
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4159
                MOVE_SHOCK_WAVE,
                MOVE_SLACK_OFF,
                MOVE_WATER_PULSE,
                MOVE_SOAK,
            },
            },
            {
#line 4164
            .species = SPECIES_ROTOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4164
            .heldItem = ITEM_LEFTOVERS,
#line 4168
            .iv = TRAINER_PARTY_IVS(30, 15, 15, 30, 15, 15),
#line 4166
            .ability = ABILITY_LEVITATE,
#line 4165
            .lvl = 23,
#line 4167
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4169
                MOVE_SHOCK_WAVE,
                MOVE_OMINOUS_WIND,
                MOVE_PROTECT,
                MOVE_SUBSTITUTE,
            },
            },
        },
    },
#line 4174
    [TRAINER_FLANNERY] =
    {
#line 4175
        .trainerName = _("FLANNERY"),
#line 4176
        .trainerClass = TRAINER_CLASS_LEADER,
#line 4177
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender = 
#line 4178
F_TRAINER_FEMALE | 
#line 4179
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4180
        .doubleBattle = TRUE,
#line 4181
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4183
            .species = SPECIES_SUNFLORA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4186
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4185
            .ability = ABILITY_DROUGHT,
#line 4184
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4187
                MOVE_PETAL_DANCE,
                MOVE_WEATHER_BALL,
                MOVE_SYNTHESIS,
                MOVE_GROWTH,
            },
            },
            {
#line 4192
            .species = SPECIES_ORICORIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4194
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4193
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4195
                MOVE_REHEARSAL,
                MOVE_AIR_CUTTER,
                MOVE_ICY_WIND,
                MOVE_FEATHER_DANCE,
            },
            },
            {
#line 4200
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4202
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4201
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4203
                MOVE_FLAME_CHARGE,
                MOVE_TAKE_DOWN,
                MOVE_MORNING_SUN,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 4208
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4208
            .heldItem = ITEM_WHITE_HERB,
#line 4211
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 4210
            .ability = ABILITY_WHITE_SMOKE,
#line 4209
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4212
                MOVE_OVERHEAT,
                MOVE_FIRE_SPIN,
                MOVE_BODY_SLAM,
                MOVE_ATTRACT,
            },
            },
            {
#line 4217
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4217
            .heldItem = ITEM_AIR_BALLOON,
#line 4220
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 4219
            .ability = ABILITY_EVAPORATE,
#line 4218
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4221
                MOVE_LAVA_PLUME,
                MOVE_YAWN,
                MOVE_ANCIENT_POWER,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 4226
            .species = SPECIES_DEWGONG_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4226
            .heldItem = ITEM_SITRUS_BERRY,
#line 4229
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4228
            .ability = ABILITY_STEAM_SHOWER,
#line 4227
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4230
                MOVE_SCALD,
                MOVE_FLAMETHROWER,
                MOVE_LIFE_DEW,
                MOVE_ENCORE,
            },
            },
        },
    },
#line 4235
    [TRAINER_NORMAN] =
    {
#line 4236
        .trainerName = _("NORMAN"),
#line 4237
        .trainerClass = TRAINER_CLASS_LEADER,
#line 4238
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender = 
#line 4240
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4241
        .doubleBattle = TRUE,
#line 4242
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4244
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4247
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 4246
            .ability = ABILITY_TRUANT,
#line 4245
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4248
                MOVE_FACADE,
                MOVE_SLACK_OFF,
                MOVE_FEINT,
                MOVE_SHADOW_CLAW,
            },
            },
            {
#line 4253
            .species = SPECIES_GRAFAIAI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4256
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 4255
            .ability = ABILITY_PRANKSTER,
#line 4254
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4257
                MOVE_DOODLE,
                MOVE_KNOCK_OFF,
                MOVE_GUNK_SHOT,
                MOVE_PARTING_SHOT,
            },
            },
            {
#line 4262
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4265
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4264
            .ability = ABILITY_FRIEND_GUARD,
#line 4263
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4266
                MOVE_DAZZLING_GLEAM,
                MOVE_SNARL,
                MOVE_ICY_WIND,
                MOVE_CHARM,
            },
            },
            {
#line 4271
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4274
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4273
            .ability = ABILITY_SCRAPPY,
#line 4272
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4275
                MOVE_HYPER_VOICE,
                MOVE_FLAMETHROWER,
                MOVE_ICE_BEAM,
                MOVE_STOMP,
            },
            },
            {
#line 4280
            .species = SPECIES_DRAMPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4280
            .heldItem = ITEM_CHESTO_BERRY,
#line 4282
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 4281
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4283
                MOVE_DRAGON_BREATH,
                MOVE_HEAT_WAVE,
                MOVE_REST,
                MOVE_SNORE,
            },
            },
            {
#line 4288
            .species = SPECIES_OBSTAGOON_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4288
            .heldItem = ITEM_FLAME_ORB,
#line 4291
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4290
            .ability = ABILITY_GUTS,
#line 4289
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4292
                MOVE_DOUBLE_EDGE,
                MOVE_SUBMISSION,
                MOVE_MAT_BLOCK,
                MOVE_HIGH_HORSEPOWER,
            },
            },
        },
    },
#line 4297
    [TRAINER_WINONA] =
    {
#line 4298
        .trainerName = _("WINONA"),
#line 4299
        .trainerClass = TRAINER_CLASS_LEADER,
#line 4300
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender = 
#line 4301
F_TRAINER_FEMALE | 
#line 4302
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4303
        .doubleBattle = TRUE,
#line 4304
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4306
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4306
            .heldItem = ITEM_FOCUS_SASH,
#line 4309
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 4308
            .ability = ABILITY_SCRAPPY,
#line 4307
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4310
                MOVE_ENDEAVOR,
                MOVE_FEATHER_DANCE,
                MOVE_AERIAL_ACE,
                MOVE_BOOMBURST,
            },
            },
            {
#line 4315
            .species = SPECIES_NOIVERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4318
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 4317
            .ability = ABILITY_TELEPATHY,
#line 4316
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4319
                MOVE_DRAGON_PULSE,
                MOVE_HEAT_WAVE,
                MOVE_WATER_PULSE,
                MOVE_TAILWIND,
            },
            },
            {
#line 4324
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4324
            .heldItem = ITEM_WIDE_LENS,
#line 4326
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 4325
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4327
                MOVE_BRAVE_BIRD,
                MOVE_JUMP_KICK,
                MOVE_DOUBLE_EDGE,
                MOVE_MIRROR_MOVE,
            },
            },
            {
#line 4332
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4332
            .heldItem = ITEM_ASSAULT_VEST,
#line 4335
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 4334
            .ability = ABILITY_THICK_FAT,
#line 4333
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4336
                MOVE_GIGA_DRAIN,
                MOVE_AIR_CUTTER,
                MOVE_BULLDOZE,
                MOVE_BREAKING_SWIPE,
            },
            },
            {
#line 4341
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4341
            .heldItem = ITEM_ORAN_BERRY,
#line 4344
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 4343
            .ability = ABILITY_SKY_SONATA,
#line 4342
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4345
                MOVE_COTTON_GUARD,
                MOVE_AIR_SLASH,
                MOVE_DAZZLING_GLEAM,
                MOVE_ROOST,
            },
            },
            {
#line 4350
            .species = SPECIES_PHIONE_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4350
            .heldItem = ITEM_LEFTOVERS,
#line 4353
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4352
            .ability = ABILITY_FREE_SPIRIT,
#line 4351
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4354
                MOVE_TAIL_GLOW,
                MOVE_HURRICANE,
                MOVE_MOONBLAST,
                MOVE_MOONLIGHT,
            },
            },
        },
    },
#line 4359
    [TRAINER_TATE_AND_LIZA] =
    {
#line 4360
        .trainerName = _("TATE&LIZA"),
#line 4361
        .trainerClass = TRAINER_CLASS_LEADER,
#line 4362
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender = 
#line 4364
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4365
        .doubleBattle = TRUE,
#line 4366
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4368
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4370
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4369
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4371
                MOVE_EARTHQUAKE,
                MOVE_ANCIENT_POWER,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 4376
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4378
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4377
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4379
                MOVE_PSYCHIC,
                MOVE_SUNNY_DAY,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 4384
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4384
            .heldItem = ITEM_SITRUS_BERRY,
#line 4386
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4385
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4387
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_HYPNOSIS,
                MOVE_CALM_MIND,
            },
            },
            {
#line 4392
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4392
            .heldItem = ITEM_SITRUS_BERRY,
#line 4394
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4393
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4395
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 4400
    [TRAINER_JUAN] =
    {
#line 4401
        .trainerName = _("JUAN"),
#line 4402
        .trainerClass = TRAINER_CLASS_LEADER,
#line 4403
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender = 
#line 4405
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4406
        .doubleBattle = TRUE,
#line 4407
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4409
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4411
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4410
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4412
                MOVE_WATER_PULSE,
                MOVE_ATTRACT,
                MOVE_SWEET_KISS,
                MOVE_FLAIL,
            },
            },
            {
#line 4417
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4419
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4418
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4420
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_AMNESIA,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 4425
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4427
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4426
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4428
                MOVE_ENCORE,
                MOVE_BODY_SLAM,
                MOVE_AURORA_BEAM,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 4433
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4435
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4434
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4436
                MOVE_WATER_PULSE,
                MOVE_CRABHAMMER,
                MOVE_TAUNT,
                MOVE_LEER,
            },
            },
            {
#line 4441
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4441
            .heldItem = ITEM_CHESTO_BERRY,
#line 4443
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4442
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4444
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 4449
    [TRAINER_JERRY_1] =
    {
#line 4450
        .trainerName = _("JERRY"),
#line 4451
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4452
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender = 
#line 4454
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4455
        .doubleBattle = TRUE,
#line 4456
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4458
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4460
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4459
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4462
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4464
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4463
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4466
    [TRAINER_TED] =
    {
#line 4467
        .trainerName = _("TED"),
#line 4468
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4469
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender = 
#line 4471
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4472
        .doubleBattle = TRUE,
#line 4473
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4475
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4477
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4476
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4479
    [TRAINER_PAUL] =
    {
#line 4480
        .trainerName = _("PAUL"),
#line 4481
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4482
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender = 
#line 4484
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4485
        .doubleBattle = TRUE,
#line 4486
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4488
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4490
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4489
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4492
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4494
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4493
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4496
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4498
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4497
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4500
    [TRAINER_KAREN_1] =
    {
#line 4501
        .trainerName = _("KAREN"),
#line 4502
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4503
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender = 
#line 4504
F_TRAINER_FEMALE | 
#line 4505
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4506
        .doubleBattle = TRUE,
#line 4507
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4509
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4511
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4510
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4513
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4515
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4514
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4517
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4519
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4518
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4521
    [TRAINER_GEORGIA] =
    {
#line 4522
        .trainerName = _("GEORGIA"),
#line 4523
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4524
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender = 
#line 4525
F_TRAINER_FEMALE | 
#line 4526
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4527
        .doubleBattle = TRUE,
#line 4528
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4530
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4532
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4531
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4534
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4536
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4535
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4538
    [TRAINER_KATE_AND_JOY] =
    {
#line 4539
        .trainerName = _("KATE & JOY"),
#line 4540
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 4541
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender = 
#line 4543
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4544
        .doubleBattle = TRUE,
#line 4545
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4547
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4547
            .heldItem = ITEM_COVERT_CLOAK,
#line 4550
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4549
            .ability = ABILITY_PURE_POWER,
#line 4548
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4551
                MOVE_HYPNOSIS,
                MOVE_SKILL_SWAP,
                MOVE_FEINT,
                MOVE_HIGH_JUMP_KICK,
            },
            },
            {
#line 4556
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4559
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4558
            .ability = ABILITY_TRUANT,
#line 4557
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4560
                MOVE_HAMMER_ARM,
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_FEINT_ATTACK,
            },
            },
        },
    },
#line 4565
    [TRAINER_ANNA_AND_MEG_1] =
    {
#line 4566
        .trainerName = _("ANNA & MEG"),
#line 4567
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 4568
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender = 
#line 4569
F_TRAINER_FEMALE | 
#line 4570
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4571
        .doubleBattle = TRUE,
#line 4572
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4574
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4576
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4575
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4577
                MOVE_GROWL,
                MOVE_TAIL_WHIP,
                MOVE_HEADBUTT,
                MOVE_ODOR_SLEUTH,
            },
            },
            {
#line 4582
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4584
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4583
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4585
                MOVE_TACKLE,
                MOVE_FOCUS_ENERGY,
                MOVE_ARM_THRUST,
            },
            },
        },
    },
#line 4589
    [TRAINER_VICTOR] =
    {
#line 4590
        .trainerName = _("VICTOR"),
#line 4591
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 4592
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender = 
#line 4594
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4595
        .doubleBattle = TRUE,
#line 4596
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4598
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4598
            .heldItem = ITEM_ORAN_BERRY,
#line 4600
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 4599
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4602
            .species = SPECIES_RUFFLET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4602
            .heldItem = ITEM_ORAN_BERRY,
#line 4604
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 4603
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4606
    [TRAINER_MIGUEL_1] =
    {
#line 4607
        .trainerName = _("MIGUEL"),
#line 4608
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4609
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender = 
#line 4611
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4612
        .doubleBattle = TRUE,
#line 4613
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4615
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4615
            .heldItem = ITEM_ORAN_BERRY,
#line 4617
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4616
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4619
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4619
            .heldItem = ITEM_ORAN_BERRY,
#line 4621
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4620
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4623
    [TRAINER_COLTON] =
    {
#line 4624
        .trainerName = _("COLTON"),
#line 4625
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4626
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender = 
#line 4628
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4629
        .doubleBattle = TRUE,
#line 4630
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4632
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4632
            .heldItem = ITEM_ORAN_BERRY,
#line 4634
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4633
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4635
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4640
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4640
            .heldItem = ITEM_ORAN_BERRY,
#line 4642
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4641
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4643
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4648
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4648
            .heldItem = ITEM_ORAN_BERRY,
#line 4650
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4649
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4651
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4656
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4656
            .heldItem = ITEM_ORAN_BERRY,
#line 4658
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4657
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4659
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4664
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4664
            .heldItem = ITEM_ORAN_BERRY,
#line 4666
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4665
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4667
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4672
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4672
            .heldItem = ITEM_ORAN_BERRY,
#line 4674
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4673
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4675
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
        },
    },
#line 4680
    [TRAINER_VICTORIA] =
    {
#line 4681
        .trainerName = _("VICTORIA"),
#line 4682
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 4683
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender = 
#line 4684
F_TRAINER_FEMALE | 
#line 4685
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4686
        .doubleBattle = TRUE,
#line 4687
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4689
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4691
            .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
#line 4690
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4693
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4695
            .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
#line 4694
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4697
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4697
            .heldItem = ITEM_ORAN_BERRY,
#line 4699
            .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
#line 4698
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4701
    [TRAINER_VANESSA] =
    {
#line 4702
        .trainerName = _("VANESSA"),
#line 4703
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4704
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender = 
#line 4705
F_TRAINER_FEMALE | 
#line 4706
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4707
        .doubleBattle = TRUE,
#line 4708
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4710
            .species = SPECIES_VULPIX_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4712
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4711
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4714
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4716
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4715
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4718
    [TRAINER_BETHANY] =
    {
#line 4719
        .trainerName = _("BETHANY"),
#line 4720
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4721
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender = 
#line 4722
F_TRAINER_FEMALE | 
#line 4723
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4724
        .doubleBattle = TRUE,
#line 4725
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4727
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4727
            .heldItem = ITEM_ORAN_BERRY,
#line 4729
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4728
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4731
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4731
            .heldItem = ITEM_ORAN_BERRY,
#line 4733
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4732
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4735
    [TRAINER_ISABEL_1] =
    {
#line 4736
        .trainerName = _("ISABEL"),
#line 4737
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4738
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender = 
#line 4739
F_TRAINER_FEMALE | 
#line 4740
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4741
        .doubleBattle = TRUE,
#line 4742
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4744
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4744
            .heldItem = ITEM_ORAN_BERRY,
#line 4746
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4745
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4748
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4748
            .heldItem = ITEM_ORAN_BERRY,
#line 4750
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4749
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4752
    [TRAINER_TIMOTHY_1] =
    {
#line 4753
        .trainerName = _("TIMOTHY"),
#line 4754
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4755
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender = 
#line 4757
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4758
        .doubleBattle = TRUE,
#line 4759
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4761
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4763
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4762
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4765
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4767
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4766
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4769
    [TRAINER_VICKY] =
    {
#line 4770
        .trainerName = _("VICKY"),
#line 4771
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 4772
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 4773
F_TRAINER_FEMALE | 
#line 4774
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4775
        .doubleBattle = TRUE,
#line 4776
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4778
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4780
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4779
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4781
                MOVE_HIGH_JUMP_KICK,
                MOVE_MEDITATE,
                MOVE_CONFUSION,
                MOVE_DETECT,
            },
            },
            {
#line 4786
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4788
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4787
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4789
                MOVE_CALM_MIND,
                MOVE_YAWN,
                MOVE_CONFUSION,
                MOVE_ICY_WIND,
            },
            },
        },
    },
#line 4794
    [TRAINER_SHELBY_1] =
    {
#line 4795
        .trainerName = _("SHELBY"),
#line 4796
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4797
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 4798
F_TRAINER_FEMALE | 
#line 4799
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4800
        .doubleBattle = TRUE,
#line 4801
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4803
            .species = SPECIES_ESPURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4805
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4804
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4807
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4809
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4808
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4811
    [TRAINER_CALVIN_1] =
    {
#line 4812
        .trainerName = _("CALVIN"),
#line 4813
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4814
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4816
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4817
        .doubleBattle = TRUE,
#line 4818
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4820
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4822
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4821
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4824
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4826
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4825
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4828
    [TRAINER_BILLY] =
    {
#line 4829
        .trainerName = _("BILLY"),
#line 4830
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4831
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4833
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4834
        .doubleBattle = TRUE,
#line 4835
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4837
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4839
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4838
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4841
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4843
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4842
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4845
    [TRAINER_JOSH] =
    {
#line 4846
        .trainerName = _("JOSH"),
#line 4847
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4848
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4850
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4851
        .doubleBattle = TRUE,
#line 4852
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4854
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4856
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4855
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4857
                MOVE_TACKLE,
                MOVE_DEFENSE_CURL,
                MOVE_ROLLOUT,
            },
            },
            {
#line 4861
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4863
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4862
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4864
                MOVE_DEFENSE_CURL,
                MOVE_SCRATCH,
                MOVE_ROLLOUT,
            },
            },
        },
    },
#line 4868
    [TRAINER_TOMMY] =
    {
#line 4869
        .trainerName = _("TOMMY"),
#line 4870
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4871
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4873
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4874
        .doubleBattle = TRUE,
#line 4875
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4877
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4879
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 4878
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4881
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4883
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4882
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4885
    [TRAINER_JOEY] =
    {
#line 4886
        .trainerName = _("JOEY"),
#line 4887
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4888
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4890
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4891
        .doubleBattle = TRUE,
#line 4892
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4894
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4896
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4895
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4898
            .species = SPECIES_SHROODLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4900
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4899
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4902
    [TRAINER_BEN] =
    {
#line 4903
        .trainerName = _("BEN"),
#line 4904
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4905
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4907
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4908
        .doubleBattle = TRUE,
#line 4909
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4911
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4913
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4912
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4914
                MOVE_HEADBUTT,
                MOVE_SAND_ATTACK,
                MOVE_GROWL,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 4919
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4921
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4920
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4923
    [TRAINER_QUINCY] =
    {
#line 4924
        .trainerName = _("QUINCY"),
#line 4925
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4926
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 4928
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4929
        .doubleBattle = TRUE,
#line 4930
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4932
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4934
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4933
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4935
                MOVE_ATTRACT,
                MOVE_ICE_BEAM,
                MOVE_THUNDERBOLT,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 4940
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4942
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4941
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4943
                MOVE_SKILL_SWAP,
                MOVE_PROTECT,
                MOVE_WILL_O_WISP,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 4948
    [TRAINER_KATELYNN] =
    {
#line 4949
        .trainerName = _("KATELYNN"),
#line 4950
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4951
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 4952
F_TRAINER_FEMALE | 
#line 4953
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4954
        .doubleBattle = TRUE,
#line 4955
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4957
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4959
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4958
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4960
                MOVE_SKILL_SWAP,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_CALM_MIND,
            },
            },
            {
#line 4965
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4967
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4966
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4968
                MOVE_EARTHQUAKE,
                MOVE_SHADOW_BALL,
                MOVE_AERIAL_ACE,
                MOVE_BRICK_BREAK,
            },
            },
        },
    },
#line 4973
    [TRAINER_JAYLEN] =
    {
#line 4974
        .trainerName = _("JAYLEN"),
#line 4975
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4976
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4978
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4979
        .doubleBattle = TRUE,
#line 4980
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4982
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4984
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4983
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4986
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4988
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4987
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4990
    [TRAINER_DILLON] =
    {
#line 4991
        .trainerName = _("DILLON"),
#line 4992
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4993
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4995
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4996
        .doubleBattle = TRUE,
#line 4997
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4999
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5001
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5000
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5003
            .species = SPECIES_SKIDDO_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5005
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5004
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5007
    [TRAINER_EDDIE] =
    {
#line 5008
        .trainerName = _("EDDIE"),
#line 5009
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5010
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 5012
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5013
        .doubleBattle = TRUE,
#line 5014
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5016
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5018
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5017
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5020
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5022
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5021
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5024
    [TRAINER_ALLEN] =
    {
#line 5025
        .trainerName = _("ALLEN"),
#line 5026
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5027
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 5029
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5030
        .doubleBattle = TRUE,
#line 5031
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5033
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5035
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5034
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5037
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5039
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5038
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5041
    [TRAINER_TIMMY] =
    {
#line 5042
        .trainerName = _("TIMMY"),
#line 5043
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5044
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 5046
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5047
        .doubleBattle = TRUE,
#line 5048
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5050
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5052
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5051
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5054
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5056
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5055
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5058
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5060
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5059
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5062
    [TRAINER_WALLACE] =
    {
#line 5063
        .trainerName = _("WALLACE"),
#line 5064
        .trainerClass = TRAINER_CLASS_CHAMPION,
#line 5065
        .trainerPic = TRAINER_PIC_CHAMPION_WALLACE,
        .encounterMusic_gender = 
#line 5067
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5068
        .doubleBattle = TRUE,
#line 5069
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 5070
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 5072
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5074
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5073
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5075
                MOVE_RAIN_DANCE,
                MOVE_WATER_SPOUT,
                MOVE_DOUBLE_EDGE,
                MOVE_BLIZZARD,
            },
            },
            {
#line 5080
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5082
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5081
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5083
                MOVE_TOXIC,
                MOVE_HYDRO_PUMP,
                MOVE_SLUDGE_BOMB,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 5088
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5090
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5089
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5091
                MOVE_GIGA_DRAIN,
                MOVE_SURF,
                MOVE_LEECH_SEED,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 5096
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5098
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5097
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5099
                MOVE_EARTHQUAKE,
                MOVE_SURF,
                MOVE_AMNESIA,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 5104
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5106
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5105
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5107
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
                MOVE_HYPER_BEAM,
                MOVE_SURF,
            },
            },
            {
#line 5112
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5112
            .heldItem = ITEM_SITRUS_BERRY,
#line 5114
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5113
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5115
                MOVE_RECOVER,
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 5120
    [TRAINER_ANDREW] =
    {
#line 5121
        .trainerName = _("ANDREW"),
#line 5122
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5123
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5125
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5126
        .doubleBattle = TRUE,
#line 5127
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5129
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5131
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5130
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5133
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5135
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5134
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5137
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5139
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5138
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5141
    [TRAINER_IVAN] =
    {
#line 5142
        .trainerName = _("IVAN"),
#line 5143
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5144
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5146
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5147
        .doubleBattle = TRUE,
#line 5148
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5150
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5152
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5151
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5154
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5156
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5155
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5158
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5160
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5159
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5162
    [TRAINER_CLAUDE] =
    {
#line 5163
        .trainerName = _("CLAUDE"),
#line 5164
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5165
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5167
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5168
        .doubleBattle = TRUE,
#line 5169
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5171
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5173
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5172
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5175
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5177
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5176
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5179
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5181
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5180
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5183
    [TRAINER_ELLIOT_1] =
    {
#line 5184
        .trainerName = _("ELLIOT"),
#line 5185
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5186
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5188
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5189
        .doubleBattle = TRUE,
#line 5190
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5192
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5194
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5193
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5196
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5198
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5197
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5200
    [TRAINER_NED] =
    {
#line 5201
        .trainerName = _("NED"),
#line 5202
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5203
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5205
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5206
        .doubleBattle = TRUE,
#line 5207
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5209
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5211
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5210
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5213
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5215
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5214
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5217
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5219
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5218
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5221
    [TRAINER_DALE] =
    {
#line 5222
        .trainerName = _("DALE"),
#line 5223
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5224
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5226
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5227
        .doubleBattle = TRUE,
#line 5228
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5230
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5232
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5231
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5234
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5236
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5235
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5238
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5240
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5239
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5242
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5244
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5243
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5246
    [TRAINER_NOLAN] =
    {
#line 5247
        .trainerName = _("NOLAN"),
#line 5248
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5249
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5251
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5252
        .doubleBattle = TRUE,
#line 5253
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5255
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5257
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5256
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5259
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5261
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5260
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5263
    [TRAINER_BARNY] =
    {
#line 5264
        .trainerName = _("BARNY"),
#line 5265
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5266
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5268
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5269
        .doubleBattle = TRUE,
#line 5270
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5272
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5274
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5273
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5276
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5278
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5277
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5280
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5282
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5281
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5284
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5286
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5285
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5288
    [TRAINER_WADE] =
    {
#line 5289
        .trainerName = _("WADE"),
#line 5290
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5291
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5293
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5294
        .doubleBattle = TRUE,
#line 5295
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5297
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5299
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5298
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5301
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5303
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5302
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5305
    [TRAINER_CARTER] =
    {
#line 5306
        .trainerName = _("CARTER"),
#line 5307
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5308
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5310
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5311
        .doubleBattle = TRUE,
#line 5312
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5314
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5316
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5315
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5318
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5320
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5319
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5322
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5324
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5323
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5326
    [TRAINER_RONALD] =
    {
#line 5327
        .trainerName = _("RONALD"),
#line 5328
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5329
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5331
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5332
        .doubleBattle = TRUE,
#line 5333
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 5335
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5337
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5336
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5339
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5341
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5340
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5343
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5345
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5344
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5347
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5349
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5348
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5351
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5353
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5352
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5355
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5357
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5356
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5359
    [TRAINER_JACOB] =
    {
#line 5360
        .trainerName = _("JACOB"),
#line 5361
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5362
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5364
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5365
        .doubleBattle = TRUE,
#line 5366
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5368
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5370
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 5369
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5372
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5374
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 5373
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5376
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5378
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 5377
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5380
    [TRAINER_ANTHONY] =
    {
#line 5381
        .trainerName = _("ANTHONY"),
#line 5382
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5383
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5385
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5386
        .doubleBattle = TRUE,
#line 5387
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5389
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5391
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5390
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5393
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5395
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5394
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5397
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5399
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5398
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5401
    [TRAINER_BENJAMIN_1] =
    {
#line 5402
        .trainerName = _("BENJAMIN"),
#line 5403
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5404
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5406
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5407
        .doubleBattle = TRUE,
#line 5408
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5410
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5412
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5411
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5414
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5416
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5415
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5418
    [TRAINER_ABIGAIL_1] =
    {
#line 5419
        .trainerName = _("ABIGAIL"),
#line 5420
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5421
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5422
F_TRAINER_FEMALE | 
#line 5423
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5424
        .doubleBattle = TRUE,
#line 5425
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5427
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5429
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5428
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5431
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5433
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5432
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5435
    [TRAINER_JASMINE] =
    {
#line 5436
        .trainerName = _("JASMINE"),
#line 5437
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5438
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5439
F_TRAINER_FEMALE | 
#line 5440
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5441
        .doubleBattle = TRUE,
#line 5442
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5444
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5446
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 5445
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5448
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5450
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 5449
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5452
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5454
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5453
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5456
    [TRAINER_DYLAN_1] =
    {
#line 5457
        .trainerName = _("DYLAN"),
#line 5458
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5459
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5461
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5462
        .doubleBattle = TRUE,
#line 5463
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5465
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5467
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5466
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5469
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5471
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5470
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5473
    [TRAINER_MARIA_1] =
    {
#line 5474
        .trainerName = _("MARIA"),
#line 5475
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5476
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5477
F_TRAINER_FEMALE | 
#line 5478
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5479
        .doubleBattle = TRUE,
#line 5480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5482
            .species = SPECIES_VULPIX_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5484
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5483
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5486
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5488
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5487
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5490
    [TRAINER_CAMDEN] =
    {
#line 5491
        .trainerName = _("CAMDEN"),
#line 5492
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5493
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5495
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5496
        .doubleBattle = TRUE,
#line 5497
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5499
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5501
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5500
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5503
            .species = SPECIES_RAICHU_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5505
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5504
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5507
    [TRAINER_DEMETRIUS] =
    {
#line 5508
        .trainerName = _("DEMETRIUS"),
#line 5509
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5510
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 5512
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5513
        .doubleBattle = TRUE,
#line 5514
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5516
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5518
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5517
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5520
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5522
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5521
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5524
    [TRAINER_ISAIAH_1] =
    {
#line 5525
        .trainerName = _("ISAIAH"),
#line 5526
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5527
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5529
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5530
        .doubleBattle = TRUE,
#line 5531
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5533
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5535
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5534
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5537
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5539
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5538
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5541
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5543
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5542
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5545
    [TRAINER_PABLO_1] =
    {
#line 5546
        .trainerName = _("PABLO"),
#line 5547
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5548
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5550
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5551
        .doubleBattle = TRUE,
#line 5552
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5554
            .species = SPECIES_KILOWATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5556
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5555
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5558
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5560
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5559
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5562
    [TRAINER_CHASE] =
    {
#line 5563
        .trainerName = _("CHASE"),
#line 5564
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5565
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5567
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5568
        .doubleBattle = TRUE,
#line 5569
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5571
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5573
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5572
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5575
            .species = SPECIES_KILOWATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5577
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 5576
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5579
    [TRAINER_ISOBEL] =
    {
#line 5580
        .trainerName = _("ISOBEL"),
#line 5581
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5582
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5583
F_TRAINER_FEMALE | 
#line 5584
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5585
        .doubleBattle = TRUE,
#line 5586
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5588
            .species = SPECIES_RAICHU_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5590
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5589
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5592
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5594
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5593
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5596
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5598
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5597
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5600
    [TRAINER_DONNY] =
    {
#line 5601
        .trainerName = _("DONNY"),
#line 5602
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5603
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5604
F_TRAINER_FEMALE | 
#line 5605
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5606
        .doubleBattle = TRUE,
#line 5607
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5609
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5611
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5610
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5613
            .species = SPECIES_MIENFOO_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5615
            .iv = TRAINER_PARTY_IVS(19, 19, 19, 19, 19, 19),
#line 5614
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5617
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5619
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5618
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5621
    [TRAINER_TALIA] =
    {
#line 5622
        .trainerName = _("TALIA"),
#line 5623
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5624
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5625
F_TRAINER_FEMALE | 
#line 5626
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5627
        .doubleBattle = TRUE,
#line 5628
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5630
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5632
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5631
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5634
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5636
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5635
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5638
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5640
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5639
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5642
            .species = SPECIES_GALVANTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5644
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5643
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5646
    [TRAINER_KATELYN_1] =
    {
#line 5647
        .trainerName = _("KATELYN"),
#line 5648
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5649
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5650
F_TRAINER_FEMALE | 
#line 5651
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5652
        .doubleBattle = TRUE,
#line 5653
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5655
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5657
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5656
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5659
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5661
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5660
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5663
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5665
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5664
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5667
    [TRAINER_ALLISON] =
    {
#line 5668
        .trainerName = _("ALLISON"),
#line 5669
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5670
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5671
F_TRAINER_FEMALE | 
#line 5672
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5673
        .doubleBattle = TRUE,
#line 5674
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5676
            .species = SPECIES_GALVANTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5678
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5677
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5680
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5682
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 5681
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5684
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5686
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5685
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5688
    [TRAINER_NICOLAS_1] =
    {
#line 5689
        .trainerName = _("NICOLAS"),
#line 5690
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 5691
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender = 
#line 5693
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5694
        .doubleBattle = TRUE,
#line 5695
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5697
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5699
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5698
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5701
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5703
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5702
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5705
    [TRAINER_AARON] =
    {
#line 5706
        .trainerName = _("AARON"),
#line 5707
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 5708
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender = 
#line 5710
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5711
        .doubleBattle = TRUE,
#line 5712
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5714
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5716
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5715
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5718
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5720
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5719
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5722
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5724
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5723
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5726
            .species = SPECIES_DRAKLOAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5728
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5727
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5730
    [TRAINER_PERRY] =
    {
#line 5731
        .trainerName = _("PERRY"),
#line 5732
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5733
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5735
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5736
        .doubleBattle = TRUE,
#line 5737
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5739
            .species = SPECIES_ORICORIO_PAU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5741
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5740
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5743
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5745
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5744
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5747
    [TRAINER_HUGH] =
    {
#line 5748
        .trainerName = _("HUGH"),
#line 5749
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5750
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5752
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5753
        .doubleBattle = TRUE,
#line 5754
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5756
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5758
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5757
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5760
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5762
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5761
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5764
    [TRAINER_PHIL] =
    {
#line 5765
        .trainerName = _("PHIL"),
#line 5766
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5767
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5769
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5770
        .doubleBattle = TRUE,
#line 5771
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5773
            .species = SPECIES_RUFFLET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5775
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5774
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5777
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5779
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5778
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5781
    [TRAINER_JARED] =
    {
#line 5782
        .trainerName = _("JARED"),
#line 5783
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5784
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5786
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5787
        .doubleBattle = TRUE,
#line 5788
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5790
            .species = SPECIES_ORICORIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5792
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5791
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5794
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5796
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5795
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5798
    [TRAINER_HUMBERTO] =
    {
#line 5799
        .trainerName = _("HUMBERTO"),
#line 5800
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5801
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5803
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5804
        .doubleBattle = TRUE,
#line 5805
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5807
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5809
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 5808
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5811
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5813
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 5812
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5815
    [TRAINER_PRESLEY] =
    {
#line 5816
        .trainerName = _("PRESLEY"),
#line 5817
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5818
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5820
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5821
        .doubleBattle = TRUE,
#line 5822
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5824
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5826
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5825
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5828
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5830
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5829
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5832
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5834
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5833
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5836
    [TRAINER_EDWARDO] =
    {
#line 5837
        .trainerName = _("EDWARDO"),
#line 5838
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5839
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5841
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5842
        .doubleBattle = TRUE,
#line 5843
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5845
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5847
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5846
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5849
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5851
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5850
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5853
    [TRAINER_COLIN] =
    {
#line 5854
        .trainerName = _("COLIN"),
#line 5855
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5856
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5858
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5859
        .doubleBattle = TRUE,
#line 5860
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5862
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5864
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5863
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5866
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5868
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5867
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5870
    [TRAINER_ROBERT_1] =
    {
#line 5871
        .trainerName = _("ROBERT"),
#line 5872
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5873
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5875
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5876
        .doubleBattle = TRUE,
#line 5877
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5879
            .species = SPECIES_ORICORIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5881
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5880
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5883
            .species = SPECIES_ORICORIO_SENSU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5885
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5884
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5887
    [TRAINER_BENNY] =
    {
#line 5888
        .trainerName = _("BENNY"),
#line 5889
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5890
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5892
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5893
        .doubleBattle = TRUE,
#line 5894
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5896
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5898
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5897
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5900
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5902
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5901
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5904
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5906
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5905
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5908
    [TRAINER_CHESTER] =
    {
#line 5909
        .trainerName = _("CHESTER"),
#line 5910
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5911
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5913
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5914
        .doubleBattle = TRUE,
#line 5915
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5917
            .species = SPECIES_ORICORIO_BAILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5919
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5918
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5921
            .species = SPECIES_CHATOT_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5923
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5922
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5925
    [TRAINER_ALEX] =
    {
#line 5926
        .trainerName = _("ALEX"),
#line 5927
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5928
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5930
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5931
        .doubleBattle = TRUE,
#line 5932
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5934
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5936
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5935
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5938
            .species = SPECIES_ORICORIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5940
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5939
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5942
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5944
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5943
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5946
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5948
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5947
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5950
    [TRAINER_BECK] =
    {
#line 5951
        .trainerName = _("BECK"),
#line 5952
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5953
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5955
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5956
        .doubleBattle = TRUE,
#line 5957
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5959
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5961
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5960
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5963
            .species = SPECIES_CHATOT_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5965
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5964
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5967
            .species = SPECIES_ORICORIO_SENSU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5969
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5968
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5971
    [TRAINER_YASU] =
    {
#line 5972
        .trainerName = _("YASU"),
#line 5973
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5974
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 5976
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5977
        .doubleBattle = TRUE,
#line 5978
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5980
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5982
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5981
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5984
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5986
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5985
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5988
    [TRAINER_TAKASHI] =
    {
#line 5989
        .trainerName = _("TAKASHI"),
#line 5990
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5991
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 5993
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5994
        .doubleBattle = TRUE,
#line 5995
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5997
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5999
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5998
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6001
            .species = SPECIES_PAWNIARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6003
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6002
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6005
    [TRAINER_DIANNE] =
    {
#line 6006
        .trainerName = _("DIANNE"),
#line 6007
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6008
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 6009
F_TRAINER_FEMALE | 
#line 6010
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6011
        .doubleBattle = TRUE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6013
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6015
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6014
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6016
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 6019
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6021
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6020
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6022
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 6025
    [TRAINER_JANI] =
    {
#line 6026
        .trainerName = _("JANI"),
#line 6027
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 6028
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender = 
#line 6029
F_TRAINER_FEMALE | 
#line 6030
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6031
        .doubleBattle = TRUE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6033
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6035
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6034
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6037
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6039
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6038
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6041
    [TRAINER_LAO_1] =
    {
#line 6042
        .trainerName = _("LAO"),
#line 6043
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6044
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 6046
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6047
        .doubleBattle = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6049
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6051
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6050
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6052
                MOVE_POISON_GAS,
                MOVE_POUND,
                MOVE_YAWN,
                MOVE_PROTECT,
            },
            },
            {
#line 6057
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6059
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6058
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6060
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SMOG,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 6065
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6067
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6066
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6068
                MOVE_DISABLE,
                MOVE_POUND,
                MOVE_SLUDGE,
                MOVE_PROTECT,
            },
            },
            {
#line 6073
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6075
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6074
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6076
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
        },
    },
#line 6081
    [TRAINER_LUNG] =
    {
#line 6082
        .trainerName = _("LUNG"),
#line 6083
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6084
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 6086
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6087
        .doubleBattle = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6089
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6091
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6090
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6093
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6095
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6094
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6097
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6099
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6098
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6101
    [TRAINER_JOCELYN] =
    {
#line 6102
        .trainerName = _("JOCELYN"),
#line 6103
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6104
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 6105
F_TRAINER_FEMALE | 
#line 6106
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6107
        .doubleBattle = TRUE,
#line 6108
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6110
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6112
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 6111
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6114
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6116
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 6115
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6118
    [TRAINER_LAURA] =
    {
#line 6119
        .trainerName = _("LAURA"),
#line 6120
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6121
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 6122
F_TRAINER_FEMALE | 
#line 6123
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6124
        .doubleBattle = TRUE,
#line 6125
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6127
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6129
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6128
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6131
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6133
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6132
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6135
    [TRAINER_CYNDY_1] =
    {
#line 6136
        .trainerName = _("CYNDY"),
#line 6137
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6138
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 6139
F_TRAINER_FEMALE | 
#line 6140
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6141
        .doubleBattle = TRUE,
#line 6142
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6144
            .species = SPECIES_MIENFOO_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6146
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 6145
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6148
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6150
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 6149
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6152
    [TRAINER_CORA] =
    {
#line 6153
        .trainerName = _("CORA"),
#line 6154
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6155
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 6156
F_TRAINER_FEMALE | 
#line 6157
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6158
        .doubleBattle = TRUE,
#line 6159
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6161
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6163
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6162
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6165
    [TRAINER_PAULA] =
    {
#line 6166
        .trainerName = _("PAULA"),
#line 6167
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6168
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 6169
F_TRAINER_FEMALE | 
#line 6170
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6171
        .doubleBattle = TRUE,
#line 6172
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6174
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6176
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6175
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6178
    [TRAINER_MADELINE_1] =
    {
#line 6179
        .trainerName = _("MADELINE"),
#line 6180
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 6181
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 6182
F_TRAINER_FEMALE | 
#line 6183
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6184
        .doubleBattle = TRUE,
#line 6185
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6187
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6189
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6188
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6190
                MOVE_EMBER,
                MOVE_TACKLE,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 6195
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6197
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6196
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6198
                MOVE_FIRE_SPIN,
                MOVE_TACKLE,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 6203
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6205
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6204
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6206
                MOVE_FLAME_BURST,
                MOVE_TACKLE,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 6211
    [TRAINER_CLARISSA] =
    {
#line 6212
        .trainerName = _("CLARISSA"),
#line 6213
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 6214
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 6215
F_TRAINER_FEMALE | 
#line 6216
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6217
        .doubleBattle = TRUE,
#line 6218
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6220
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6222
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6221
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6224
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6226
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6225
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6228
    [TRAINER_ANGELICA] =
    {
#line 6229
        .trainerName = _("ANGELICA"),
#line 6230
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 6231
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 6232
F_TRAINER_FEMALE | 
#line 6233
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6234
        .doubleBattle = TRUE,
#line 6235
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6237
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6239
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6238
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6240
                MOVE_SUNNY_DAY,
                MOVE_WEATHER_BALL,
                MOVE_SOLAR_BEAM,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 6245
            .species = SPECIES_LEAFEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6248
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6247
            .ability = ABILITY_LEAF_GUARD,
#line 6246
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6249
                MOVE_DETECT,
                MOVE_LEECH_SEED,
                MOVE_LEAF_BLADE,
                MOVE_SYNTHESIS,
            },
            },
        },
    },
#line 6254
    [TRAINER_BEVERLY] =
    {
#line 6255
        .trainerName = _("BEVERLY"),
#line 6256
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6257
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6258
F_TRAINER_FEMALE | 
#line 6259
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6260
        .doubleBattle = TRUE,
#line 6261
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6263
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6265
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6264
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6267
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6269
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6268
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6271
    [TRAINER_IMANI] =
    {
#line 6272
        .trainerName = _("IMANI"),
#line 6273
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6274
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6275
F_TRAINER_FEMALE | 
#line 6276
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6277
        .doubleBattle = TRUE,
#line 6278
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6280
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6282
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6281
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6284
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6286
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6285
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6288
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6290
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6289
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6292
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6294
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6293
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6296
    [TRAINER_KYLA] =
    {
#line 6297
        .trainerName = _("KYLA"),
#line 6298
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6299
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6300
F_TRAINER_FEMALE | 
#line 6301
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6302
        .doubleBattle = TRUE,
#line 6303
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6305
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6307
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6306
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6309
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6311
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6310
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6313
    [TRAINER_DENISE] =
    {
#line 6314
        .trainerName = _("DENISE"),
#line 6315
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6316
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6317
F_TRAINER_FEMALE | 
#line 6318
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6319
        .doubleBattle = TRUE,
#line 6320
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6322
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6324
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6323
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6326
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6328
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6327
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6330
    [TRAINER_BETH] =
    {
#line 6331
        .trainerName = _("BETH"),
#line 6332
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6333
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6334
F_TRAINER_FEMALE | 
#line 6335
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6336
        .doubleBattle = TRUE,
#line 6337
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6339
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6341
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6340
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6343
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6345
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6344
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6347
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6349
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6348
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6351
    [TRAINER_TARA] =
    {
#line 6352
        .trainerName = _("TARA"),
#line 6353
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6354
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6355
F_TRAINER_FEMALE | 
#line 6356
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6357
        .doubleBattle = TRUE,
#line 6358
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6360
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6362
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6361
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6364
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6366
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6365
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6368
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6370
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6369
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6372
    [TRAINER_MISSY] =
    {
#line 6373
        .trainerName = _("MISSY"),
#line 6374
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6375
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6376
F_TRAINER_FEMALE | 
#line 6377
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6378
        .doubleBattle = TRUE,
#line 6379
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6381
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6383
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6382
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6385
            .species = SPECIES_BERGMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6387
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6386
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6389
    [TRAINER_ALICE] =
    {
#line 6390
        .trainerName = _("ALICE"),
#line 6391
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6392
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6393
F_TRAINER_FEMALE | 
#line 6394
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6395
        .doubleBattle = TRUE,
#line 6396
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6398
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6400
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6399
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6402
            .species = SPECIES_BERGMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6404
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6403
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6406
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6408
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6407
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6410
    [TRAINER_JENNY_1] =
    {
#line 6411
        .trainerName = _("JENNY"),
#line 6412
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6413
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6414
F_TRAINER_FEMALE | 
#line 6415
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6416
        .doubleBattle = TRUE,
#line 6417
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6419
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6421
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6420
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6423
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6425
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6424
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6427
    [TRAINER_GRACE] =
    {
#line 6428
        .trainerName = _("GRACE"),
#line 6429
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6430
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6431
F_TRAINER_FEMALE | 
#line 6432
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6433
        .doubleBattle = TRUE,
#line 6434
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6436
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6438
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6437
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6440
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6442
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6441
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6444
    [TRAINER_TANYA] =
    {
#line 6445
        .trainerName = _("TANYA"),
#line 6446
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6447
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6448
F_TRAINER_FEMALE | 
#line 6449
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6450
        .doubleBattle = TRUE,
#line 6451
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6453
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6455
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6454
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6457
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6459
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6458
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6461
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6463
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6462
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6465
    [TRAINER_SHARON] =
    {
#line 6466
        .trainerName = _("SHARON"),
#line 6467
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6468
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6469
F_TRAINER_FEMALE | 
#line 6470
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6471
        .doubleBattle = TRUE,
#line 6472
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6474
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6476
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6475
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6478
            .species = SPECIES_SEEL_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6480
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6479
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6482
    [TRAINER_NIKKI] =
    {
#line 6483
        .trainerName = _("NIKKI"),
#line 6484
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6485
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6486
F_TRAINER_FEMALE | 
#line 6487
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6488
        .doubleBattle = TRUE,
#line 6489
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6491
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6493
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6492
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6495
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6497
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6496
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6499
    [TRAINER_BRENDA] =
    {
#line 6500
        .trainerName = _("BRENDA"),
#line 6501
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6502
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6503
F_TRAINER_FEMALE | 
#line 6504
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6505
        .doubleBattle = TRUE,
#line 6506
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6508
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6510
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6509
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6512
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6514
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6513
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6516
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6518
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6517
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6520
            .species = SPECIES_DEWGONG_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6522
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6521
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6524
    [TRAINER_KATIE] =
    {
#line 6525
        .trainerName = _("KATIE"),
#line 6526
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6527
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6528
F_TRAINER_FEMALE | 
#line 6529
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6530
        .doubleBattle = TRUE,
#line 6531
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6533
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6535
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6534
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6537
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6539
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6538
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6541
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6543
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6542
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6545
    [TRAINER_SUSIE] =
    {
#line 6546
        .trainerName = _("SUSIE"),
#line 6547
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6548
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6549
F_TRAINER_FEMALE | 
#line 6550
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6551
        .doubleBattle = TRUE,
#line 6552
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6554
            .species = SPECIES_SEEL_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6556
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6555
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6558
            .species = SPECIES_SEEL_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6560
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6559
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6562
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6564
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6563
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6566
            .species = SPECIES_DEWGONG_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6568
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6567
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6570
    [TRAINER_KARA] =
    {
#line 6571
        .trainerName = _("KARA"),
#line 6572
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6573
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6574
F_TRAINER_FEMALE | 
#line 6575
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6576
        .doubleBattle = TRUE,
#line 6577
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6579
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6581
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6580
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6583
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6585
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6584
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6587
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6589
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6588
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6591
    [TRAINER_DANA] =
    {
#line 6592
        .trainerName = _("DANA"),
#line 6593
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6594
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6595
F_TRAINER_FEMALE | 
#line 6596
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6597
        .doubleBattle = TRUE,
#line 6598
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6600
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6602
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6601
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6604
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6606
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6605
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6608
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6610
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6609
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6612
    [TRAINER_SIENNA] =
    {
#line 6613
        .trainerName = _("SIENNA"),
#line 6614
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6615
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6616
F_TRAINER_FEMALE | 
#line 6617
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6618
        .doubleBattle = TRUE,
#line 6619
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6621
            .species = SPECIES_SEEL_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6623
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6622
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6625
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6627
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6626
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6629
    [TRAINER_DEBRA] =
    {
#line 6630
        .trainerName = _("DEBRA"),
#line 6631
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6632
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6633
F_TRAINER_FEMALE | 
#line 6634
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6635
        .doubleBattle = TRUE,
#line 6636
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6638
            .species = SPECIES_DEWGONG_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6640
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6639
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6642
            .species = SPECIES_AVALUGG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6644
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6643
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6646
    [TRAINER_LINDA] =
    {
#line 6647
        .trainerName = _("LINDA"),
#line 6648
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6649
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6650
F_TRAINER_FEMALE | 
#line 6651
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6652
        .doubleBattle = TRUE,
#line 6653
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6655
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6657
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6656
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6659
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6661
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6660
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6663
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6665
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6664
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6667
    [TRAINER_KAYLEE] =
    {
#line 6668
        .trainerName = _("KAYLEE"),
#line 6669
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6670
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6671
F_TRAINER_FEMALE | 
#line 6672
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6673
        .doubleBattle = TRUE,
#line 6674
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6676
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6678
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6677
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6680
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6682
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6681
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6684
    [TRAINER_LAUREL] =
    {
#line 6685
        .trainerName = _("LAUREL"),
#line 6686
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6687
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6688
F_TRAINER_FEMALE | 
#line 6689
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6690
        .doubleBattle = TRUE,
#line 6691
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6693
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6695
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6694
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6697
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6699
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6698
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6701
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6703
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6702
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6705
    [TRAINER_CARLEE] =
    {
#line 6706
        .trainerName = _("CARLEE"),
#line 6707
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6708
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6709
F_TRAINER_FEMALE | 
#line 6710
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6711
        .doubleBattle = TRUE,
#line 6712
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6714
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6716
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6715
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6718
            .species = SPECIES_SEEL_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6720
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6719
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6722
    [TRAINER_HEIDI] =
    {
#line 6723
        .trainerName = _("HEIDI"),
#line 6724
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6725
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 6726
F_TRAINER_FEMALE | 
#line 6727
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6728
        .doubleBattle = TRUE,
#line 6729
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6731
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6733
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6732
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6734
                MOVE_DIG,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
                MOVE_SLASH,
            },
            },
            {
#line 6739
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6741
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6740
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6742
                MOVE_RAPID_SPIN,
                MOVE_MUD_SLAP,
                MOVE_PSYBEAM,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 6747
    [TRAINER_BECKY] =
    {
#line 6748
        .trainerName = _("BECKY"),
#line 6749
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6750
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 6751
F_TRAINER_FEMALE | 
#line 6752
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6753
        .doubleBattle = TRUE,
#line 6754
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6756
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6756
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 6758
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6757
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6759
                MOVE_ROLLOUT,
                MOVE_BUBBLE_BEAM,
                MOVE_TAIL_WHIP,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 6764
            .species = SPECIES_CACNEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6766
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6765
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6767
                MOVE_SAND_ATTACK,
                MOVE_NEEDLE_ARM,
                MOVE_LEER,
                MOVE_LEECH_SEED,
            },
            },
        },
    },
#line 6772
    [TRAINER_CAROL] =
    {
#line 6773
        .trainerName = _("CAROL"),
#line 6774
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6775
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 6776
F_TRAINER_FEMALE | 
#line 6777
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6778
        .doubleBattle = TRUE,
#line 6779
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6781
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6783
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6782
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6785
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6787
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6786
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6789
    [TRAINER_NANCY] =
    {
#line 6790
        .trainerName = _("NANCY"),
#line 6791
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6792
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 6793
F_TRAINER_FEMALE | 
#line 6794
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6795
        .doubleBattle = TRUE,
#line 6796
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6798
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6800
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6799
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6802
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6804
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6803
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6806
    [TRAINER_MARTHA] =
    {
#line 6807
        .trainerName = _("MARTHA"),
#line 6808
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6809
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 6810
F_TRAINER_FEMALE | 
#line 6811
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6812
        .doubleBattle = TRUE,
#line 6813
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6815
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6817
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6816
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6819
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6821
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6820
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6823
    [TRAINER_DIANA_1] =
    {
#line 6824
        .trainerName = _("DIANA"),
#line 6825
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6826
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 6827
F_TRAINER_FEMALE | 
#line 6828
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6829
        .doubleBattle = TRUE,
#line 6830
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6832
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6834
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6833
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6836
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6838
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6837
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6840
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6842
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6841
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6844
    [TRAINER_CEDRIC] =
    {
#line 6845
        .trainerName = _("CEDRIC"),
#line 6846
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 6847
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 6849
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6850
        .doubleBattle = TRUE,
#line 6851
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6853
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6855
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6854
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6856
                MOVE_DESTINY_BOND,
                MOVE_SAFEGUARD,
                MOVE_COUNTER,
                MOVE_MIRROR_COAT,
            },
            },
            {
#line 6861
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6863
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6862
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6864
                MOVE_DESTINY_BOND,
                MOVE_SAFEGUARD,
                MOVE_COUNTER,
                MOVE_MIRROR_COAT,
            },
            },
        },
    },
#line 6869
    [TRAINER_IRENE] =
    {
#line 6870
        .trainerName = _("IRENE"),
#line 6871
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6872
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 6873
F_TRAINER_FEMALE | 
#line 6874
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6875
        .doubleBattle = TRUE,
#line 6876
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6878
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6880
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6879
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6882
            .species = SPECIES_TINKATINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6884
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6883
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6886
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6888
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6887
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6890
    [TRAINER_AMY_AND_LIV_1] =
    {
#line 6891
        .trainerName = _("AMY & LIV"),
#line 6892
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6893
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 6894
F_TRAINER_FEMALE | 
#line 6895
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6896
        .doubleBattle = TRUE,
#line 6897
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6899
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6901
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6900
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6903
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6905
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6904
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6907
    [TRAINER_GINA_AND_MIA_1] =
    {
#line 6908
        .trainerName = _("GINA & MIA"),
#line 6909
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6910
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 6912
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6913
        .doubleBattle = TRUE,
#line 6914
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6916
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6918
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6917
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6920
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6922
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6921
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6924
    [TRAINER_MIU_AND_YUKI] =
    {
#line 6925
        .trainerName = _("MIU & YUKI"),
#line 6926
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6927
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 6929
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6930
        .doubleBattle = TRUE,
#line 6931
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6933
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6935
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6934
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6937
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6939
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6938
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6941
    [TRAINER_HUEY] =
    {
#line 6942
        .trainerName = _("HUEY"),
#line 6943
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6944
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 6946
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6947
        .doubleBattle = TRUE,
#line 6948
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6950
            .species = SPECIES_WIMPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6952
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6951
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6954
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6956
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6955
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6958
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6960
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6959
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6962
    [TRAINER_EDMOND] =
    {
#line 6963
        .trainerName = _("EDMOND"),
#line 6964
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6965
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 6967
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6968
        .doubleBattle = TRUE,
#line 6969
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6971
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6973
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6972
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6975
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6977
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6976
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6979
    [TRAINER_ERNEST_1] =
    {
#line 6980
        .trainerName = _("ERNEST"),
#line 6981
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6982
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 6984
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6985
        .doubleBattle = TRUE,
#line 6986
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6988
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6990
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6989
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6992
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6994
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6993
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6996
            .species = SPECIES_GRAPPLOCT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6998
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6997
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7000
    [TRAINER_DWAYNE] =
    {
#line 7001
        .trainerName = _("DWAYNE"),
#line 7002
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7003
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 7005
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7006
        .doubleBattle = TRUE,
#line 7007
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7009
            .species = SPECIES_WIMPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7011
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7010
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7013
            .species = SPECIES_CRABRAWLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7015
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7014
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7017
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7019
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7018
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7021
    [TRAINER_PHILLIP] =
    {
#line 7022
        .trainerName = _("PHILLIP"),
#line 7023
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7024
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 7026
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7027
        .doubleBattle = TRUE,
#line 7028
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7030
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7032
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7031
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7034
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7036
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7035
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7038
    [TRAINER_LEONARD] =
    {
#line 7039
        .trainerName = _("LEONARD"),
#line 7040
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7041
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 7043
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7044
        .doubleBattle = TRUE,
#line 7045
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7047
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7049
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7048
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7051
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7053
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7052
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7055
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7057
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7056
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7059
    [TRAINER_DUNCAN] =
    {
#line 7060
        .trainerName = _("DUNCAN"),
#line 7061
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7062
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 7064
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7065
        .doubleBattle = TRUE,
#line 7066
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7068
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7070
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7069
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7072
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7074
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7073
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7076
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7078
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7077
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7080
    [TRAINER_ELI] =
    {
#line 7081
        .trainerName = _("ELI"),
#line 7082
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7083
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 7085
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7086
        .doubleBattle = TRUE,
#line 7087
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7089
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7091
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7090
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7093
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7095
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7094
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7097
    [TRAINER_ANNIKA] =
    {
#line 7098
        .trainerName = _("ANNIKA"),
#line 7099
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 7100
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender = 
#line 7101
F_TRAINER_FEMALE | 
#line 7102
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 7103
        .doubleBattle = TRUE,
#line 7104
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7106
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7108
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7107
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7110
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7112
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7111
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7114
    [TRAINER_JAZMYN] =
    {
#line 7115
        .trainerName = _("JAZMYN"),
#line 7116
        .trainerClass = TRAINER_CLASS_COOLTRAINER_2,
#line 7117
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 7118
F_TRAINER_FEMALE | 
#line 7119
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7120
        .doubleBattle = TRUE,
#line 7121
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7123
            .species = SPECIES_PAWNIARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7125
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7124
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7127
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7129
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7128
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7131
    [TRAINER_JONAS] =
    {
#line 7132
        .trainerName = _("JONAS"),
#line 7133
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 7134
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 7136
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7137
        .doubleBattle = TRUE,
#line 7138
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7140
            .species = SPECIES_PAWNIARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7142
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7141
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7144
            .species = SPECIES_PAWNIARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7146
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7145
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7148
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7150
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7149
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7152
    [TRAINER_KAYLEY] =
    {
#line 7153
        .trainerName = _("KAYLEY"),
#line 7154
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 7155
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 7156
F_TRAINER_FEMALE | 
#line 7157
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7158
        .doubleBattle = TRUE,
#line 7159
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7161
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7163
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7162
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7164
                MOVE_SNOWSCAPE,
                MOVE_WEATHER_BALL,
                MOVE_BLIZZARD,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 7169
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7171
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7170
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7172
                MOVE_SNOWSCAPE,
                MOVE_WEATHER_BALL,
                MOVE_BLIZZARD,
                MOVE_ENERGY_BALL,
            },
            },
        },
    },
#line 7177
    [TRAINER_AURON] =
    {
#line 7178
        .trainerName = _("AURON"),
#line 7179
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 7180
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender = 
#line 7182
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7183
        .doubleBattle = TRUE,
#line 7184
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7186
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7188
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7187
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7190
            .species = SPECIES_DRAMPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7192
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7191
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7194
    [TRAINER_KELVIN] =
    {
#line 7195
        .trainerName = _("KELVIN"),
#line 7196
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7197
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 7199
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7200
        .doubleBattle = TRUE,
#line 7201
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7203
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7205
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7204
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7207
            .species = SPECIES_HUNTAIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7209
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7208
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7211
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7213
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7212
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7215
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7217
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7216
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7219
    [TRAINER_MARLEY] =
    {
#line 7220
        .trainerName = _("MARLEY"),
#line 7221
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7222
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 7223
F_TRAINER_FEMALE | 
#line 7224
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7225
        .doubleBattle = TRUE,
#line 7226
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7228
            .species = SPECIES_ALCREMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7230
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7229
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7232
            .species = SPECIES_MAWILE_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7234
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7233
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7236
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7238
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7237
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7240
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7242
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7241
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7244
    [TRAINER_REYNA] =
    {
#line 7245
        .trainerName = _("REYNA"),
#line 7246
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 7247
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 7248
F_TRAINER_FEMALE | 
#line 7249
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7250
        .doubleBattle = TRUE,
#line 7251
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7253
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7255
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7254
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7257
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7259
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7258
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7261
            .species = SPECIES_MIENSHAO_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7263
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7262
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7265
    [TRAINER_HUDSON] =
    {
#line 7266
        .trainerName = _("HUDSON"),
#line 7267
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7268
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 7270
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7271
        .doubleBattle = TRUE,
#line 7272
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7274
            .species = SPECIES_CRABOMINABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7276
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7275
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7278
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7280
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7279
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7282
            .species = SPECIES_CHATOT_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7284
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7283
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7286
            .species = SPECIES_GOLISOPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7288
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7287
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7290
    [TRAINER_CONOR] =
    {
#line 7291
        .trainerName = _("CONOR"),
#line 7292
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 7293
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender = 
#line 7295
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7296
        .doubleBattle = TRUE,
#line 7297
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7299
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7301
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7300
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7303
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7305
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7304
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7307
    [TRAINER_EDWIN_1] =
    {
#line 7308
        .trainerName = _("EDWIN"),
#line 7309
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 7310
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender = 
#line 7312
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7313
        .doubleBattle = TRUE,
#line 7314
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7316
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7318
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7317
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7320
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7322
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7321
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7324
    [TRAINER_HECTOR] =
    {
#line 7325
        .trainerName = _("HECTOR"),
#line 7326
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 7327
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender = 
#line 7329
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7330
        .doubleBattle = TRUE,
#line 7331
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7333
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7335
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7334
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7337
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7339
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7338
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7341
    [TRAINER_TABITHA_MOSSDEEP] =
    {
#line 7342
        .trainerName = _("TABITHA"),
#line 7343
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 7344
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN_M,
        .encounterMusic_gender = 
#line 7346
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7347
        .doubleBattle = TRUE,
#line 7348
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7350
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7352
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7351
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7354
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7356
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7355
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7358
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7360
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7359
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7362
    [TRAINER_WALLY_VR_1] =
    {
#line 7363
        .trainerName = _("WALLY"),
#line 7364
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7365
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 7367
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7368
        .doubleBattle = TRUE,
#line 7369
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7371
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7373
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7372
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7374
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 7379
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7381
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7380
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7382
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 7387
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7389
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7388
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7390
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 7395
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7397
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7396
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7398
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 7403
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7405
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 7404
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7406
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 7411
    [TRAINER_BRENDAN_ROUTE_103_MUDKIP] =
    {
#line 7412
        .trainerName = _("BRENDAN"),
#line 7413
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7414
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 7416
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7417
        .doubleBattle = TRUE,
#line 7418
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7420
            .species = SPECIES_TREECKO,
#line 7420
            .gender = TRAINER_MON_MALE,
#line 7422
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7421
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7423
                MOVE_POUND,
                MOVE_LEER,
            },
            },
            {
#line 7426
            .species = SPECIES_EEVEE,
#line 7426
            .gender = TRAINER_MON_MALE,
#line 7428
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7427
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7429
                MOVE_GROWL,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 7432
    [TRAINER_BRENDAN_ROUTE_110_MUDKIP] =
    {
#line 7433
        .trainerName = _("BRENDAN"),
#line 7434
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7435
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 7437
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7438
        .doubleBattle = TRUE,
#line 7439
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7441
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7443
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7442
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7445
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7447
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7446
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7449
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7451
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7450
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7453
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7455
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7454
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7457
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7459
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7458
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7461
    [TRAINER_BRENDAN_ROUTE_119_MUDKIP] =
    {
#line 7462
        .trainerName = _("BRENDAN"),
#line 7463
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7464
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 7466
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7467
        .doubleBattle = TRUE,
#line 7468
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7470
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7473
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7472
            .ability = ABILITY_INNER_FOCUS,
#line 7471
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7474
                MOVE_SNARL,
                MOVE_FOUL_PLAY,
                MOVE_THUNDER_WAVE,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 7479
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7479
            .heldItem = ITEM_SCOPE_LENS,
#line 7482
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7481
            .ability = ABILITY_SAND_VEIL,
#line 7480
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7483
                MOVE_GYRO_BALL,
                MOVE_SLASH,
                MOVE_SWORDS_DANCE,
                MOVE_DRILL_RUN,
            },
            },
            {
#line 7488
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7491
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7490
            .ability = ABILITY_WATER_BUBBLE,
#line 7489
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7492
                MOVE_HYDRO_PUMP,
                MOVE_ICE_BEAM,
                MOVE_AQUA_RING,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 7497
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7500
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7499
            .ability = ABILITY_FLASH_FIRE,
#line 7498
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7501
                MOVE_SHADOW_BALL,
                MOVE_FLAMETHROWER,
                MOVE_WILL_O_WISP,
                MOVE_SPITE,
            },
            },
            {
#line 7506
            .species = SPECIES_SCEPTILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7506
            .heldItem = ITEM_OCCA_BERRY,
#line 7509
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 7508
            .ability = ABILITY_OVERGROW,
#line 7507
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7510
                MOVE_LEAF_BLADE,
                MOVE_NIGHT_SLASH,
                MOVE_DETECT,
                MOVE_PURSUIT,
            },
            },
        },
    },
#line 7515
    [TRAINER_BRENDAN_ROUTE_103_TREECKO] =
    {
#line 7516
        .trainerName = _("BRENDAN"),
#line 7517
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7518
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 7520
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7521
        .doubleBattle = TRUE,
#line 7522
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7524
            .species = SPECIES_TORCHIC,
#line 7524
            .gender = TRAINER_MON_MALE,
#line 7526
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7525
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7527
                MOVE_SCRATCH,
                MOVE_GROWL,
            },
            },
            {
#line 7530
            .species = SPECIES_EEVEE,
#line 7530
            .gender = TRAINER_MON_MALE,
#line 7532
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7531
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7533
                MOVE_GROWL,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 7536
    [TRAINER_BRENDAN_ROUTE_110_TREECKO] =
    {
#line 7537
        .trainerName = _("BRENDAN"),
#line 7538
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7539
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 7541
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7542
        .doubleBattle = TRUE,
#line 7543
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7545
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7547
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7546
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7549
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7551
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7550
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7553
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7555
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7554
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7557
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7559
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7558
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7561
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7563
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7562
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7565
    [TRAINER_BRENDAN_ROUTE_119_TREECKO] =
    {
#line 7566
        .trainerName = _("BRENDAN"),
#line 7567
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7568
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 7570
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7571
        .doubleBattle = TRUE,
#line 7572
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7574
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7577
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7576
            .ability = ABILITY_INNER_FOCUS,
#line 7575
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7578
                MOVE_SNARL,
                MOVE_FOUL_PLAY,
                MOVE_THUNDER_WAVE,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 7583
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7583
            .heldItem = ITEM_SCOPE_LENS,
#line 7586
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7585
            .ability = ABILITY_SAND_VEIL,
#line 7584
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7587
                MOVE_GYRO_BALL,
                MOVE_SLASH,
                MOVE_SWORDS_DANCE,
                MOVE_DRILL_RUN,
            },
            },
            {
#line 7592
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7595
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7594
            .ability = ABILITY_TECHNICIAN,
#line 7593
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7596
                MOVE_MACH_PUNCH,
                MOVE_BULLET_SEED,
                MOVE_SPORE,
                MOVE_COUNTER,
            },
            },
            {
#line 7601
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7604
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7603
            .ability = ABILITY_ANALYTIC,
#line 7602
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7605
                MOVE_BRINE,
                MOVE_ICY_WIND,
                MOVE_MINIMIZE,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 7610
            .species = SPECIES_BLAZIKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7610
            .heldItem = ITEM_PASSHO_BERRY,
#line 7613
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 7612
            .ability = ABILITY_BLAZE,
#line 7611
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7614
                MOVE_BLAZE_KICK,
                MOVE_JUMP_KICK,
                MOVE_DETECT,
                MOVE_SLASH,
            },
            },
        },
    },
#line 7619
    [TRAINER_BRENDAN_ROUTE_103_TORCHIC] =
    {
#line 7620
        .trainerName = _("BRENDAN"),
#line 7621
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7622
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 7624
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7625
        .doubleBattle = TRUE,
#line 7626
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7628
            .species = SPECIES_MUDKIP,
#line 7628
            .gender = TRAINER_MON_MALE,
#line 7630
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7629
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7631
                MOVE_TACKLE,
                MOVE_GROWL,
            },
            },
            {
#line 7634
            .species = SPECIES_EEVEE,
#line 7634
            .gender = TRAINER_MON_MALE,
#line 7636
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7635
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7637
                MOVE_GROWL,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 7640
    [TRAINER_BRENDAN_ROUTE_110_TORCHIC] =
    {
#line 7641
        .trainerName = _("BRENDAN"),
#line 7642
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7643
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 7645
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7646
        .doubleBattle = TRUE,
#line 7647
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7649
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7651
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7650
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7653
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7655
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7654
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7657
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7659
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7658
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7661
            .species = SPECIES_SKIDDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7663
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7662
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7665
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7667
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7666
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7669
    [TRAINER_BRENDAN_ROUTE_119_TORCHIC] =
    {
#line 7670
        .trainerName = _("BRENDAN"),
#line 7671
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7672
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 7674
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7675
        .doubleBattle = TRUE,
#line 7676
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7678
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7681
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7680
            .ability = ABILITY_INNER_FOCUS,
#line 7679
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7682
                MOVE_SNARL,
                MOVE_FOUL_PLAY,
                MOVE_THUNDER_WAVE,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 7687
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7687
            .heldItem = ITEM_SCOPE_LENS,
#line 7690
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7689
            .ability = ABILITY_SAND_VEIL,
#line 7688
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7691
                MOVE_GYRO_BALL,
                MOVE_SLASH,
                MOVE_SWORDS_DANCE,
                MOVE_DRILL_RUN,
            },
            },
            {
#line 7696
            .species = SPECIES_CARBINK_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7699
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7698
            .ability = ABILITY_LEVITATE,
#line 7697
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7700
                MOVE_TAR_SHOT,
                MOVE_FLAME_WHEEL,
                MOVE_SCORCHING_SANDS,
                MOVE_SMACK_DOWN,
            },
            },
            {
#line 7705
            .species = SPECIES_GOGOAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7708
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7707
            .ability = ABILITY_GRASS_PELT,
#line 7706
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7709
                MOVE_HORN_LEECH,
                MOVE_HIGH_HORSEPOWER,
                MOVE_BULK_UP,
                MOVE_GRASSY_TERRAIN,
            },
            },
            {
#line 7714
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7714
            .heldItem = ITEM_RINDO_BERRY,
#line 7717
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 7716
            .ability = ABILITY_TORRENT,
#line 7715
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7718
                MOVE_MUDDY_WATER,
                MOVE_ROCK_SLIDE,
                MOVE_PROTECT,
                MOVE_MUD_BOMB,
            },
            },
        },
    },
#line 7723
    [TRAINER_MAY_ROUTE_103_MUDKIP] =
    {
#line 7724
        .trainerName = _("MAY"),
#line 7725
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7726
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 7727
F_TRAINER_FEMALE | 
#line 7728
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7729
        .doubleBattle = TRUE,
#line 7730
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7732
            .species = SPECIES_TREECKO,
#line 7732
            .gender = TRAINER_MON_FEMALE,
#line 7734
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7733
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7735
                MOVE_POUND,
                MOVE_LEER,
            },
            },
            {
#line 7738
            .species = SPECIES_EEVEE,
#line 7738
            .gender = TRAINER_MON_FEMALE,
#line 7740
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7739
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7741
                MOVE_GROWL,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 7744
    [TRAINER_MAY_ROUTE_110_MUDKIP] =
    {
#line 7745
        .trainerName = _("MAY"),
#line 7746
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7747
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 7748
F_TRAINER_FEMALE | 
#line 7749
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7750
        .doubleBattle = TRUE,
#line 7751
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7753
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7755
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7754
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7757
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7759
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7758
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7761
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7763
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7762
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7765
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7767
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7766
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7769
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7771
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7770
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7773
    [TRAINER_MAY_ROUTE_119_MUDKIP] =
    {
#line 7774
        .trainerName = _("MAY"),
#line 7775
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7776
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 7777
F_TRAINER_FEMALE | 
#line 7778
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7779
        .doubleBattle = TRUE,
#line 7780
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7782
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7785
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7784
            .ability = ABILITY_MAGIC_BOUNCE,
#line 7783
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7786
                MOVE_PSYSHOCK,
                MOVE_FUTURE_SIGHT,
                MOVE_REFLECT,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 7791
            .species = SPECIES_MAROWAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7791
            .heldItem = ITEM_THICK_CLUB,
#line 7794
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7793
            .ability = ABILITY_LIGHTNING_ROD,
#line 7792
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7795
                MOVE_FOCUS_ENERGY,
                MOVE_BONE_RUSH,
                MOVE_FLING,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 7800
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7803
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7802
            .ability = ABILITY_WATER_BUBBLE,
#line 7801
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7804
                MOVE_HYDRO_PUMP,
                MOVE_ICE_BEAM,
                MOVE_AQUA_RING,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 7809
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7812
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7811
            .ability = ABILITY_FLASH_FIRE,
#line 7810
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7813
                MOVE_SHADOW_BALL,
                MOVE_FLAMETHROWER,
                MOVE_WILL_O_WISP,
                MOVE_SPITE,
            },
            },
            {
#line 7818
            .species = SPECIES_SCEPTILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7818
            .heldItem = ITEM_OCCA_BERRY,
#line 7821
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 7820
            .ability = ABILITY_OVERGROW,
#line 7819
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7822
                MOVE_LEAF_BLADE,
                MOVE_NIGHT_SLASH,
                MOVE_DETECT,
                MOVE_PURSUIT,
            },
            },
        },
    },
#line 7827
    [TRAINER_MAY_ROUTE_103_TREECKO] =
    {
#line 7828
        .trainerName = _("MAY"),
#line 7829
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7830
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 7831
F_TRAINER_FEMALE | 
#line 7832
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7833
        .doubleBattle = TRUE,
#line 7834
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7836
            .species = SPECIES_TORCHIC,
#line 7836
            .gender = TRAINER_MON_FEMALE,
#line 7838
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7837
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7839
                MOVE_SCRATCH,
                MOVE_GROWL,
            },
            },
            {
#line 7842
            .species = SPECIES_EEVEE,
#line 7842
            .gender = TRAINER_MON_FEMALE,
#line 7844
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7843
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7845
                MOVE_GROWL,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 7848
    [TRAINER_MAY_ROUTE_110_TREECKO] =
    {
#line 7849
        .trainerName = _("MAY"),
#line 7850
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7851
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 7852
F_TRAINER_FEMALE | 
#line 7853
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7854
        .doubleBattle = TRUE,
#line 7855
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7857
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7859
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7858
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7861
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7863
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7862
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7865
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7867
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7866
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7869
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7871
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7870
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7873
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7875
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7874
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7877
    [TRAINER_MAY_ROUTE_119_TREECKO] =
    {
#line 7878
        .trainerName = _("MAY"),
#line 7879
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7880
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 7881
F_TRAINER_FEMALE | 
#line 7882
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7883
        .doubleBattle = TRUE,
#line 7884
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7886
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7889
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7888
            .ability = ABILITY_MAGIC_BOUNCE,
#line 7887
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7890
                MOVE_PSYSHOCK,
                MOVE_FUTURE_SIGHT,
                MOVE_REFLECT,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 7895
            .species = SPECIES_MAROWAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7895
            .heldItem = ITEM_THICK_CLUB,
#line 7898
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7897
            .ability = ABILITY_LIGHTNING_ROD,
#line 7896
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7899
                MOVE_FOCUS_ENERGY,
                MOVE_BONE_RUSH,
                MOVE_FLING,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 7904
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7907
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7906
            .ability = ABILITY_TECHNICIAN,
#line 7905
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7908
                MOVE_MACH_PUNCH,
                MOVE_BULLET_SEED,
                MOVE_SPORE,
                MOVE_COUNTER,
            },
            },
            {
#line 7913
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7916
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7915
            .ability = ABILITY_ANALYTIC,
#line 7914
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7917
                MOVE_BRINE,
                MOVE_ICY_WIND,
                MOVE_MINIMIZE,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 7922
            .species = SPECIES_BLAZIKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7922
            .heldItem = ITEM_PASSHO_BERRY,
#line 7925
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 7924
            .ability = ABILITY_BLAZE,
#line 7923
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7926
                MOVE_BLAZE_KICK,
                MOVE_JUMP_KICK,
                MOVE_DETECT,
                MOVE_SLASH,
            },
            },
        },
    },
#line 7931
    [TRAINER_MAY_ROUTE_103_TORCHIC] =
    {
#line 7932
        .trainerName = _("MAY"),
#line 7933
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7934
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 7935
F_TRAINER_FEMALE | 
#line 7936
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7937
        .doubleBattle = TRUE,
#line 7938
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7940
            .species = SPECIES_MUDKIP,
#line 7940
            .gender = TRAINER_MON_FEMALE,
#line 7942
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7941
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7943
                MOVE_TACKLE,
                MOVE_GROWL,
            },
            },
            {
#line 7946
            .species = SPECIES_EEVEE,
#line 7946
            .gender = TRAINER_MON_FEMALE,
#line 7948
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7947
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7949
                MOVE_GROWL,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 7952
    [TRAINER_MAY_ROUTE_110_TORCHIC] =
    {
#line 7953
        .trainerName = _("MAY"),
#line 7954
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7955
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 7956
F_TRAINER_FEMALE | 
#line 7957
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7958
        .doubleBattle = TRUE,
#line 7959
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7961
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7963
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7962
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7965
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7967
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7966
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7969
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7971
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7970
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7973
            .species = SPECIES_SKIDDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7975
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7974
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7977
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7979
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7978
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7981
    [TRAINER_MAY_ROUTE_119_TORCHIC] =
    {
#line 7982
        .trainerName = _("MAY"),
#line 7983
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7984
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 7985
F_TRAINER_FEMALE | 
#line 7986
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7987
        .doubleBattle = TRUE,
#line 7988
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7990
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7993
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7992
            .ability = ABILITY_MAGIC_BOUNCE,
#line 7991
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7994
                MOVE_PSYSHOCK,
                MOVE_FUTURE_SIGHT,
                MOVE_REFLECT,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 7999
            .species = SPECIES_MAROWAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7999
            .heldItem = ITEM_THICK_CLUB,
#line 8002
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 8001
            .ability = ABILITY_LIGHTNING_ROD,
#line 8000
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8003
                MOVE_FOCUS_ENERGY,
                MOVE_BONE_RUSH,
                MOVE_FLING,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 8008
            .species = SPECIES_CARBINK_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8011
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 8010
            .ability = ABILITY_LEVITATE,
#line 8009
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8012
                MOVE_TAR_SHOT,
                MOVE_FLAME_WHEEL,
                MOVE_SCORCHING_SANDS,
                MOVE_SMACK_DOWN,
            },
            },
            {
#line 8017
            .species = SPECIES_GOGOAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8020
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 8019
            .ability = ABILITY_GRASS_PELT,
#line 8018
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8021
                MOVE_HORN_LEECH,
                MOVE_HIGH_HORSEPOWER,
                MOVE_BULK_UP,
                MOVE_GRASSY_TERRAIN,
            },
            },
            {
#line 8026
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8026
            .heldItem = ITEM_RINDO_BERRY,
#line 8029
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 8028
            .ability = ABILITY_TORRENT,
#line 8027
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8030
                MOVE_MUDDY_WATER,
                MOVE_ROCK_SLIDE,
                MOVE_PROTECT,
                MOVE_MUD_BOMB,
            },
            },
        },
    },
#line 8035
    [TRAINER_ISAAC_1] =
    {
#line 8036
        .trainerName = _("ISAAC"),
#line 8037
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 8038
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender = 
#line 8040
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8041
        .doubleBattle = TRUE,
#line 8042
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8044
            .species = SPECIES_SNUBBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8046
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8045
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8048
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8050
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8049
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8052
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8054
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8053
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8056
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8058
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8057
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8060
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8062
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8061
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8064
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8066
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8065
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8068
    [TRAINER_DAVIS] =
    {
#line 8069
        .trainerName = _("DAVIS"),
#line 8070
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8071
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 8073
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8074
        .doubleBattle = TRUE,
#line 8075
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8077
            .species = SPECIES_WIMPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8079
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8078
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8081
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8083
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8082
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8085
    [TRAINER_MITCHELL] =
    {
#line 8086
        .trainerName = _("MITCHELL"),
#line 8087
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8088
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 8090
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8091
        .doubleBattle = TRUE,
#line 8092
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8094
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8096
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8095
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8097
                MOVE_EXPLOSION,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
            },
            },
            {
#line 8102
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8104
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8103
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8105
                MOVE_EXPLOSION,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 8110
    [TRAINER_LYDIA_1] =
    {
#line 8111
        .trainerName = _("LYDIA"),
#line 8112
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 8113
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 8114
F_TRAINER_FEMALE | 
#line 8115
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8116
        .doubleBattle = TRUE,
#line 8117
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8119
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8121
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8120
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8123
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8125
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8124
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8127
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8129
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8128
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8131
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8133
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8132
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8135
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8137
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8136
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8139
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8141
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8140
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8143
    [TRAINER_HALLE] =
    {
#line 8144
        .trainerName = _("HALLE"),
#line 8145
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8146
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 8147
F_TRAINER_FEMALE | 
#line 8148
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8149
        .doubleBattle = TRUE,
#line 8150
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8152
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8154
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8153
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8156
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8158
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8157
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8160
    [TRAINER_GARRISON] =
    {
#line 8161
        .trainerName = _("GARRISON"),
#line 8162
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 8163
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 8165
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8166
        .doubleBattle = TRUE,
#line 8167
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8169
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8171
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8170
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8173
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8175
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8174
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8177
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8179
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8178
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8181
    [TRAINER_JACKSON_1] =
    {
#line 8182
        .trainerName = _("JACKSON"),
#line 8183
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 8184
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 8186
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8187
        .doubleBattle = TRUE,
#line 8188
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8190
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8192
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8191
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8194
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8196
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8195
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8198
    [TRAINER_LORENZO] =
    {
#line 8199
        .trainerName = _("LORENZO"),
#line 8200
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 8201
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 8203
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8204
        .doubleBattle = TRUE,
#line 8205
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8207
            .species = SPECIES_GOLISOPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8209
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8208
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8211
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8213
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8212
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8215
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8217
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8216
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8219
    [TRAINER_SEBASTIAN] =
    {
#line 8220
        .trainerName = _("SEBASTIAN"),
#line 8221
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 8222
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 8224
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8225
        .doubleBattle = TRUE,
#line 8226
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8228
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8230
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8229
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8232
    [TRAINER_CATHERINE_1] =
    {
#line 8233
        .trainerName = _("CATHERINE"),
#line 8234
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 8235
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 8236
F_TRAINER_FEMALE | 
#line 8237
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8238
        .doubleBattle = TRUE,
#line 8239
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8241
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8243
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8242
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8245
            .species = SPECIES_ROSERADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8247
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8246
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8249
    [TRAINER_JENNA] =
    {
#line 8250
        .trainerName = _("JENNA"),
#line 8251
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 8252
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 8253
F_TRAINER_FEMALE | 
#line 8254
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8255
        .doubleBattle = TRUE,
#line 8256
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8258
            .species = SPECIES_GALVANTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8260
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8259
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8262
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8264
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8263
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8266
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8268
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8267
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8270
    [TRAINER_SOPHIA] =
    {
#line 8271
        .trainerName = _("SOPHIA"),
#line 8272
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 8273
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 8274
F_TRAINER_FEMALE | 
#line 8275
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8276
        .doubleBattle = TRUE,
#line 8277
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8279
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8281
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8280
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8283
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8285
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8284
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8287
    [TRAINER_JULIO] =
    {
#line 8288
        .trainerName = _("JULIO"),
#line 8289
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 8290
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 8292
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8293
        .doubleBattle = TRUE,
#line 8294
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8296
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8298
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8297
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8300
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8302
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8301
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8304
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8306
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8305
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8308
    [TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
#line 8309
        .trainerName = _("GRUNT"),
#line 8310
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 8311
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 8313
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 8314
        .doubleBattle = TRUE,
#line 8315
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8317
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8319
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8318
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8321
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8323
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8322
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8325
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8327
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8326
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8329
    [TRAINER_GRUNT_MT_PYRE_4] =
    {
#line 8330
        .trainerName = _("GRUNT"),
#line 8331
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 8332
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 8333
F_TRAINER_FEMALE | 
#line 8334
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 8335
        .doubleBattle = TRUE,
#line 8336
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8338
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8340
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8339
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8342
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8344
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8343
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8346
            .species = SPECIES_KILOWATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8348
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8347
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8350
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8352
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8351
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8354
    [TRAINER_GRUNT_JAGGED_PASS] =
    {
#line 8355
        .trainerName = _("GRUNT"),
#line 8356
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8357
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8359
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8360
        .doubleBattle = TRUE,
#line 8361
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8363
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8365
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8364
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8367
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8369
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8368
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8371
    [TRAINER_MARC] =
    {
#line 8372
        .trainerName = _("MARC"),
#line 8373
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8374
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 8376
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8377
        .doubleBattle = TRUE,
#line 8378
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8380
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8382
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 8381
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8384
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8386
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 8385
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8388
    [TRAINER_BRENDEN] =
    {
#line 8389
        .trainerName = _("BRENDEN"),
#line 8390
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 8391
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 8393
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8394
        .doubleBattle = TRUE,
#line 8395
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8397
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8399
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8398
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8401
            .species = SPECIES_CRABRAWLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8403
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8402
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8405
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8407
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8406
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8409
    [TRAINER_LILITH] =
    {
#line 8410
        .trainerName = _("LILITH"),
#line 8411
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8412
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 8413
F_TRAINER_FEMALE | 
#line 8414
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8415
        .doubleBattle = TRUE,
#line 8416
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8418
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8420
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8419
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8422
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8424
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8423
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8426
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8428
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8427
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8430
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8432
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8431
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8434
    [TRAINER_CRISTIAN] =
    {
#line 8435
        .trainerName = _("CRISTIAN"),
#line 8436
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8437
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 8439
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8440
        .doubleBattle = TRUE,
#line 8441
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8443
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8445
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8444
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8447
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8449
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8448
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8451
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8453
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8452
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8455
    [TRAINER_SYLVIA] =
    {
#line 8456
        .trainerName = _("SYLVIA"),
#line 8457
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 8458
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 8459
F_TRAINER_FEMALE | 
#line 8460
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8461
        .doubleBattle = TRUE,
#line 8462
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8464
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8466
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8465
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8468
            .species = SPECIES_ORICORIO_SENSU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8470
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8469
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8472
            .species = SPECIES_ESPURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8474
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8473
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8476
    [TRAINER_LEONARDO] =
    {
#line 8477
        .trainerName = _("LEONARDO"),
#line 8478
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 8479
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 8481
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8482
        .doubleBattle = TRUE,
#line 8483
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8485
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8487
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8486
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8489
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8491
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8490
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8493
    [TRAINER_ATHENA] =
    {
#line 8494
        .trainerName = _("ATHENA"),
#line 8495
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8496
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 8497
F_TRAINER_FEMALE | 
#line 8498
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8499
        .doubleBattle = TRUE,
#line 8500
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8502
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8504
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8503
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8506
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8508
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8507
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8510
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8512
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8511
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8514
    [TRAINER_HARRISON] =
    {
#line 8515
        .trainerName = _("HARRISON"),
#line 8516
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 8517
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 8519
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8520
        .doubleBattle = TRUE,
#line 8521
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8523
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8525
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8524
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8527
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8529
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8528
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8531
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8533
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8532
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8535
    [TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
#line 8536
        .trainerName = _("GRUNT"),
#line 8537
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8538
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8540
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8541
        .doubleBattle = TRUE,
#line 8542
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8544
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8546
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8545
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8548
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8550
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8549
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8552
    [TRAINER_CLARENCE] =
    {
#line 8553
        .trainerName = _("CLARENCE"),
#line 8554
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 8555
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 8557
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8558
        .doubleBattle = TRUE,
#line 8559
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8561
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8563
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8562
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8565
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8567
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8566
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8569
    [TRAINER_TERRY] =
    {
#line 8570
        .trainerName = _("TERRY"),
#line 8571
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 8572
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 8573
F_TRAINER_FEMALE | 
#line 8574
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8575
        .doubleBattle = TRUE,
#line 8576
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8578
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8580
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8579
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8582
    [TRAINER_NATE] =
    {
#line 8583
        .trainerName = _("NATE"),
#line 8584
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 8585
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 8587
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 8588
        .doubleBattle = TRUE,
#line 8589
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8591
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8593
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8592
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8595
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8597
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8596
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8599
    [TRAINER_KATHLEEN] =
    {
#line 8600
        .trainerName = _("KATHLEEN"),
#line 8601
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 8602
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 8603
F_TRAINER_FEMALE | 
#line 8604
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8605
        .doubleBattle = TRUE,
#line 8606
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8608
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8610
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8609
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8612
            .species = SPECIES_ORICORIO_PAU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8614
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8613
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8616
    [TRAINER_CLIFFORD] =
    {
#line 8617
        .trainerName = _("CLIFFORD"),
#line 8618
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 8619
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 8621
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 8622
        .doubleBattle = TRUE,
#line 8623
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8625
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8627
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8626
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8629
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8631
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8630
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8633
    [TRAINER_NICHOLAS] =
    {
#line 8634
        .trainerName = _("NICHOLAS"),
#line 8635
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 8636
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 8638
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8639
        .doubleBattle = TRUE,
#line 8640
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8642
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8644
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8643
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8646
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8648
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8647
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8650
    [TRAINER_GRUNT_SPACE_CENTER_3] =
    {
#line 8651
        .trainerName = _("GRUNT"),
#line 8652
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8653
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender = 
#line 8654
F_TRAINER_FEMALE | 
#line 8655
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8656
        .doubleBattle = TRUE,
#line 8657
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8659
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8661
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8660
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8663
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8665
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8664
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8667
    [TRAINER_GRUNT_SPACE_CENTER_4] =
    {
#line 8668
        .trainerName = _("GRUNT"),
#line 8669
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8670
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8672
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8673
        .doubleBattle = TRUE,
#line 8674
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8676
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8678
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8677
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8680
    [TRAINER_GRUNT_SPACE_CENTER_5] =
    {
#line 8681
        .trainerName = _("GRUNT"),
#line 8682
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8683
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8685
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8686
        .doubleBattle = TRUE,
#line 8687
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8689
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8691
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8690
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8693
    [TRAINER_GRUNT_SPACE_CENTER_6] =
    {
#line 8694
        .trainerName = _("GRUNT"),
#line 8695
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8696
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8698
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8699
        .doubleBattle = TRUE,
#line 8700
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8702
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8704
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8703
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8706
    [TRAINER_GRUNT_SPACE_CENTER_7] =
    {
#line 8707
        .trainerName = _("GRUNT"),
#line 8708
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8709
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8711
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8712
        .doubleBattle = TRUE,
#line 8713
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8715
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8717
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8716
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8719
    [TRAINER_MACEY] =
    {
#line 8720
        .trainerName = _("MACEY"),
#line 8721
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 8722
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 8723
F_TRAINER_FEMALE | 
#line 8724
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8725
        .doubleBattle = TRUE,
#line 8726
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8728
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8730
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8729
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8732
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8734
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8733
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8736
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8738
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8737
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8740
    [TRAINER_BRENDAN_RUSTBORO_TREECKO] =
    {
#line 8741
        .trainerName = _("BRENDAN"),
#line 8742
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8743
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8745
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8746
        .doubleBattle = TRUE,
#line 8747
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8749
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8751
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8750
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8753
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8755
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8754
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8757
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8759
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8758
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8761
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8763
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8762
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8765
    [TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
    {
#line 8766
        .trainerName = _("BRENDAN"),
#line 8767
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8768
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8770
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8771
        .doubleBattle = TRUE,
#line 8772
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8774
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8776
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8775
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8778
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8780
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8779
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8782
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8784
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8783
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8786
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8788
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8787
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8790
    [TRAINER_PAXTON] =
    {
#line 8791
        .trainerName = _("PAXTON"),
#line 8792
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 8793
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender = 
#line 8795
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8796
        .doubleBattle = TRUE,
#line 8797
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8799
            .species = SPECIES_VIBRAVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8801
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8800
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8803
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8805
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8804
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8807
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8809
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8808
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8811
    [TRAINER_ISABELLA] =
    {
#line 8812
        .trainerName = _("ISABELLA"),
#line 8813
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 8814
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 8815
F_TRAINER_FEMALE | 
#line 8816
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8817
        .doubleBattle = TRUE,
#line 8818
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8820
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8822
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8821
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8824
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8826
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8825
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8828
    [TRAINER_GRUNT_WEATHER_INST_5] =
    {
#line 8829
        .trainerName = _("GRUNT"),
#line 8830
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 8831
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 8832
F_TRAINER_FEMALE | 
#line 8833
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 8834
        .doubleBattle = TRUE,
#line 8835
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8837
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8839
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8838
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8841
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8843
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8842
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8845
    [TRAINER_TABITHA_MT_CHIMNEY] =
    {
#line 8846
        .trainerName = _("TABITHA"),
#line 8847
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 8848
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN_M,
        .encounterMusic_gender = 
#line 8850
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8851
        .doubleBattle = TRUE,
#line 8852
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8854
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8857
            .iv = TRAINER_PARTY_IVS(16, 16, 16, 16, 16, 16),
#line 8856
            .ability = ABILITY_INTIMIDATE,
#line 8855
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8858
                MOVE_FLAME_WHEEL,
                MOVE_FLAME_CHARGE,
                MOVE_BITE,
                MOVE_HOWL,
            },
            },
            {
#line 8863
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8866
            .iv = TRAINER_PARTY_IVS(16, 16, 16, 16, 16, 16),
#line 8865
            .ability = ABILITY_PRANKSTER,
#line 8864
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8867
                MOVE_FAKE_OUT,
                MOVE_ENCORE,
                MOVE_NIGHT_SHADE,
                MOVE_DISABLE,
            },
            },
            {
#line 8872
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8875
            .iv = TRAINER_PARTY_IVS(16, 16, 16, 16, 16, 16),
#line 8874
            .ability = ABILITY_INNER_FOCUS,
#line 8873
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8876
                MOVE_POISON_FANG,
                MOVE_AIR_CUTTER,
                MOVE_BITE,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 8881
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8881
            .heldItem = ITEM_FOCUS_SASH,
#line 8884
            .iv = TRAINER_PARTY_IVS(20, 16, 16, 20, 16, 16),
#line 8883
            .ability = ABILITY_LIGHTNING_ROD,
#line 8882
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8885
                MOVE_ROCK_BLAST,
                MOVE_BULLDOZE,
                MOVE_STOMP,
                MOVE_SMACK_DOWN,
            },
            },
        },
    },
#line 8890
    [TRAINER_JONATHAN] =
    {
#line 8891
        .trainerName = _("JONATHAN"),
#line 8892
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8893
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 8895
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8896
        .doubleBattle = TRUE,
#line 8897
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8899
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8901
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8900
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8903
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8905
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8904
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8907
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8909
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8908
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8911
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8913
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8912
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8915
    [TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
    {
#line 8916
        .trainerName = _("BRENDAN"),
#line 8917
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8918
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8920
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8921
        .doubleBattle = TRUE,
#line 8922
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8924
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8926
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8925
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8928
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8930
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8929
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8932
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8934
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8933
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8936
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8938
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8937
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8940
    [TRAINER_MAY_RUSTBORO_MUDKIP] =
    {
#line 8941
        .trainerName = _("MAY"),
#line 8942
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8943
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8944
F_TRAINER_FEMALE | 
#line 8945
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8946
        .doubleBattle = TRUE,
#line 8947
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8949
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8951
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8950
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8953
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8955
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8954
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8957
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8959
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8958
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8961
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8963
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8962
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8965
    [TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
#line 8966
        .trainerName = _("MAXIE"),
#line 8967
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 8968
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender = 
#line 8970
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8971
        .doubleBattle = TRUE,
#line 8972
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8974
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8974
            .heldItem = ITEM_HEAT_ROCK,
#line 8977
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8976
            .ability = ABILITY_DROUGHT,
#line 8975
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8978
                MOVE_SOLAR_BEAM,
                MOVE_BURNING_JEALOUSY,
                MOVE_EARTH_POWER,
                MOVE_PROTECT,
            },
            },
            {
#line 8983
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8986
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 8985
            .ability = ABILITY_INTIMIDATE,
#line 8984
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8987
                MOVE_SNARL,
                MOVE_GLARE,
                MOVE_TAUNT,
                MOVE_DOUBLE_EDGE,
            },
            },
            {
#line 8992
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8995
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 8994
            .ability = ABILITY_MOLD_BREAKER,
#line 8993
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8996
                MOVE_BODY_PRESS,
                MOVE_IRON_TAIL,
                MOVE_HIGH_HORSEPOWER,
                MOVE_BULLDOZE,
            },
            },
            {
#line 9001
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9001
            .heldItem = ITEM_LEFTOVERS,
#line 9004
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 9003
            .ability = ABILITY_LEVITATE,
#line 9002
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9005
                MOVE_SUNNY_DAY,
                MOVE_HEAT_WAVE,
                MOVE_WILL_O_WISP,
                MOVE_EXPLOSION,
            },
            },
            {
#line 9010
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9010
            .heldItem = ITEM_LIFE_ORB,
#line 9013
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 9012
            .ability = ABILITY_HYPER_CUTTER,
#line 9011
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9014
                MOVE_SWORDS_DANCE,
                MOVE_THUNDER_FANG,
                MOVE_ROCK_SLIDE,
                MOVE_PROTECT,
            },
            },
            {
#line 9019
            .species = SPECIES_CAMERUPT_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9019
            .heldItem = ITEM_ASSAULT_VEST,
#line 9022
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9021
            .ability = ABILITY_SOLID_ROCK,
#line 9020
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9023
                MOVE_EARTHQUAKE,
                MOVE_OVERHEAT,
                MOVE_HYPER_BEAM,
                MOVE_ERUPTION,
            },
            },
        },
    },
#line 9028
    [TRAINER_MAXIE_MT_CHIMNEY] =
    {
#line 9029
        .trainerName = _("MAXIE"),
#line 9030
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 9031
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender = 
#line 9033
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9034
        .doubleBattle = TRUE,
#line 9035
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9037
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9040
            .iv = TRAINER_PARTY_IVS(20, 25, 20, 31, 15, 25),
#line 9039
            .ability = ABILITY_MOXIE,
#line 9038
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9041
                MOVE_SNARL,
                MOVE_CRUNCH,
                MOVE_FIRE_FANG,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 9046
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9046
            .heldItem = ITEM_HEAT_ROCK,
#line 9049
            .iv = TRAINER_PARTY_IVS(31, 25, 20, 15, 15, 20),
#line 9048
            .ability = ABILITY_DROUGHT,
#line 9047
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9050
                MOVE_YAWN,
                MOVE_HELPING_HAND,
                MOVE_FLAME_WHEEL,
                MOVE_PROTECT,
            },
            },
            {
#line 9055
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9055
            .heldItem = ITEM_EVIOLITE,
#line 9058
            .iv = TRAINER_PARTY_IVS(20, 20, 15, 31, 15, 25),
#line 9057
            .ability = ABILITY_MOLD_BREAKER,
#line 9056
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9059
                MOVE_ROCK_POLISH,
                MOVE_ROCK_SLIDE,
                MOVE_TAKE_DOWN,
                MOVE_DRAGON_TAIL,
            },
            },
            {
#line 9064
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9067
            .iv = TRAINER_PARTY_IVS(20, 31, 15, 20, 25, 15),
#line 9066
            .ability = ABILITY_HYPER_CUTTER,
#line 9065
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9068
                MOVE_AERIAL_ACE,
                MOVE_TAILWIND,
                MOVE_SWORDS_DANCE,
                MOVE_DRILL_RUN,
            },
            },
            {
#line 9073
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9073
            .heldItem = ITEM_ASSAULT_VEST,
#line 9076
            .iv = TRAINER_PARTY_IVS(31, 15, 20, 25, 20, 15),
#line 9075
            .ability = ABILITY_SOLID_ROCK,
#line 9074
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9077
                MOVE_LAVA_PLUME,
                MOVE_ROCK_SLIDE,
                MOVE_MAGNITUDE,
                MOVE_TAKE_DOWN,
            },
            },
        },
    },
#line 9082
    [TRAINER_TIANA] =
    {
#line 9083
        .trainerName = _("TIANA"),
#line 9084
        .trainerClass = TRAINER_CLASS_LASS,
#line 9085
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 9086
F_TRAINER_FEMALE | 
#line 9087
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9088
        .doubleBattle = TRUE,
#line 9089
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9091
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9093
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9092
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9095
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9097
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9096
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9099
    [TRAINER_HALEY_1] =
    {
#line 9100
        .trainerName = _("HALEY"),
#line 9101
        .trainerClass = TRAINER_CLASS_LASS,
#line 9102
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 9103
F_TRAINER_FEMALE | 
#line 9104
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9105
        .doubleBattle = TRUE,
#line 9106
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9108
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9110
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9109
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9112
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9114
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9113
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9116
    [TRAINER_JANICE] =
    {
#line 9117
        .trainerName = _("JANICE"),
#line 9118
        .trainerClass = TRAINER_CLASS_LASS,
#line 9119
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 9120
F_TRAINER_FEMALE | 
#line 9121
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9122
        .doubleBattle = TRUE,
#line 9123
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9125
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9127
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9126
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9129
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9131
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9130
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9133
    [TRAINER_VIVI] =
    {
#line 9134
        .trainerName = _("VIVI"),
#line 9135
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 9136
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 9137
F_TRAINER_FEMALE | 
#line 9138
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9139
        .doubleBattle = TRUE,
#line 9140
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9142
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9144
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9143
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9146
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9148
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9147
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9150
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9152
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9151
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9154
    [TRAINER_SALLY] =
    {
#line 9155
        .trainerName = _("SALLY"),
#line 9156
        .trainerClass = TRAINER_CLASS_LASS,
#line 9157
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 9158
F_TRAINER_FEMALE | 
#line 9159
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9160
        .doubleBattle = TRUE,
#line 9161
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9163
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9165
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9164
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9167
    [TRAINER_ROBIN] =
    {
#line 9168
        .trainerName = _("ROBIN"),
#line 9169
        .trainerClass = TRAINER_CLASS_LASS,
#line 9170
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 9171
F_TRAINER_FEMALE | 
#line 9172
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9173
        .doubleBattle = TRUE,
#line 9174
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9176
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9178
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9177
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9180
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9182
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9181
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9184
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9186
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9185
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9188
    [TRAINER_ANDREA] =
    {
#line 9189
        .trainerName = _("ANDREA"),
#line 9190
        .trainerClass = TRAINER_CLASS_LASS,
#line 9191
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 9192
F_TRAINER_FEMALE | 
#line 9193
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9194
        .doubleBattle = TRUE,
#line 9195
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9197
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9199
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9198
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9201
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9203
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9202
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9205
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9207
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9206
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9209
    [TRAINER_CRISSY] =
    {
#line 9210
        .trainerName = _("CRISSY"),
#line 9211
        .trainerClass = TRAINER_CLASS_LASS,
#line 9212
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 9213
F_TRAINER_FEMALE | 
#line 9214
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9215
        .doubleBattle = TRUE,
#line 9216
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9218
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9220
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9219
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9222
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9224
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9223
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9226
            .species = SPECIES_DEWGONG_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9228
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9227
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9230
    [TRAINER_RICK] =
    {
#line 9231
        .trainerName = _("RICK"),
#line 9232
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 9233
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 9235
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9236
        .doubleBattle = TRUE,
#line 9237
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9239
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9241
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9240
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9243
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9245
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9244
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9247
    [TRAINER_LYLE] =
    {
#line 9248
        .trainerName = _("LYLE"),
#line 9249
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 9250
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 9252
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9253
        .doubleBattle = TRUE,
#line 9254
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9256
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9258
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9257
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9260
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9262
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9261
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9264
            .species = SPECIES_CASCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9266
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9265
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9268
    [TRAINER_JOSE] =
    {
#line 9269
        .trainerName = _("JOSE"),
#line 9270
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 9271
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 9273
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9274
        .doubleBattle = TRUE,
#line 9275
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9277
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9279
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9278
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9281
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9283
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9282
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9285
    [TRAINER_DOUG] =
    {
#line 9286
        .trainerName = _("DOUG"),
#line 9287
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 9288
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 9290
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9291
        .doubleBattle = TRUE,
#line 9292
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9294
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9296
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9295
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9298
            .species = SPECIES_CASCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9300
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9299
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9302
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9304
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9303
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9306
    [TRAINER_GREG] =
    {
#line 9307
        .trainerName = _("GREG"),
#line 9308
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 9309
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 9311
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9312
        .doubleBattle = TRUE,
#line 9313
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9315
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9317
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9316
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9319
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9321
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9320
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9323
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9325
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9324
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9327
    [TRAINER_KENT] =
    {
#line 9328
        .trainerName = _("KENT"),
#line 9329
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 9330
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 9332
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9333
        .doubleBattle = TRUE,
#line 9334
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9336
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9338
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9337
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9340
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9342
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9341
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9344
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9346
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9345
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9348
    [TRAINER_JAMES_1] =
    {
#line 9349
        .trainerName = _("JAMES"),
#line 9350
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 9351
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 9353
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9354
        .doubleBattle = TRUE,
#line 9355
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9357
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9359
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9358
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9361
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9363
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9362
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9365
    [TRAINER_BRICE] =
    {
#line 9366
        .trainerName = _("BRICE"),
#line 9367
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9368
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 9370
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9371
        .doubleBattle = TRUE,
#line 9372
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9374
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9376
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9375
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9378
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9380
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9379
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9382
    [TRAINER_TRENT_1] =
    {
#line 9383
        .trainerName = _("TRENT"),
#line 9384
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9385
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 9387
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9388
        .doubleBattle = TRUE,
#line 9389
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9391
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9393
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9392
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9395
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9397
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9396
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9399
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9401
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9400
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9403
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9405
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9404
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9407
    [TRAINER_LENNY] =
    {
#line 9408
        .trainerName = _("LENNY"),
#line 9409
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9410
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 9412
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9413
        .doubleBattle = TRUE,
#line 9414
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9416
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9418
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9417
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9420
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9422
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9421
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9424
    [TRAINER_LUCAS_1] =
    {
#line 9425
        .trainerName = _("LUCAS"),
#line 9426
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9427
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 9429
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9430
        .doubleBattle = TRUE,
#line 9431
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9433
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9435
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9434
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9437
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9439
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9438
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9441
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9443
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9442
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9445
    [TRAINER_ALAN] =
    {
#line 9446
        .trainerName = _("ALAN"),
#line 9447
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9448
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 9450
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9451
        .doubleBattle = TRUE,
#line 9452
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9454
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9456
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9455
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9458
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9460
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9459
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9462
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9464
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9463
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9466
    [TRAINER_CLARK] =
    {
#line 9467
        .trainerName = _("CLARK"),
#line 9468
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9469
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 9471
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9472
        .doubleBattle = TRUE,
#line 9473
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9475
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9477
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9476
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9479
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9481
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9480
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9483
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9485
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9484
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9487
    [TRAINER_ERIC] =
    {
#line 9488
        .trainerName = _("ERIC"),
#line 9489
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9490
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 9492
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9493
        .doubleBattle = TRUE,
#line 9494
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9496
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9498
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9497
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9500
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9502
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9501
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9504
    [TRAINER_MIKE_1] =
    {
#line 9505
        .trainerName = _("MIKE"),
#line 9506
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9507
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 9509
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9510
        .doubleBattle = TRUE,
#line 9511
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9513
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9515
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9514
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9517
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9519
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9518
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9521
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9523
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9522
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9525
    [TRAINER_DEZ_AND_LUKE] =
    {
#line 9526
        .trainerName = _("DEZ & LUKE"),
#line 9527
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 9528
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 9530
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9531
        .doubleBattle = TRUE,
#line 9532
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9534
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9536
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9535
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9538
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9540
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9539
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9542
    [TRAINER_LEA_AND_JED] =
    {
#line 9543
        .trainerName = _("LEA & JED"),
#line 9544
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 9545
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 9547
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9548
        .doubleBattle = TRUE,
#line 9549
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9551
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9553
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9552
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9555
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9557
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9556
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9559
    [TRAINER_KIRA_AND_DAN_1] =
    {
#line 9560
        .trainerName = _("KIRA & DAN"),
#line 9561
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 9562
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 9564
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9565
        .doubleBattle = TRUE,
#line 9566
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9568
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9570
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9569
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9572
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9574
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9573
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9576
    [TRAINER_JOHANNA] =
    {
#line 9577
        .trainerName = _("JOHANNA"),
#line 9578
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 9579
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 9580
F_TRAINER_FEMALE | 
#line 9581
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9582
        .doubleBattle = TRUE,
#line 9583
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9585
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9587
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9586
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9589
            .species = SPECIES_SNUBBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9591
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9590
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9593
    [TRAINER_GERALD] =
    {
#line 9594
        .trainerName = _("GERALD"),
#line 9595
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9596
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 9598
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9599
        .doubleBattle = TRUE,
#line 9600
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9602
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9604
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9603
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9605
                MOVE_FLAMETHROWER,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
                MOVE_BIND,
            },
            },
            {
#line 9610
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9612
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9611
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9613
                MOVE_FLAMETHROWER,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
                MOVE_BIND,
            },
            },
        },
    },
#line 9618
    [TRAINER_VIVIAN] =
    {
#line 9619
        .trainerName = _("VIVIAN"),
#line 9620
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9621
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 9622
F_TRAINER_FEMALE | 
#line 9623
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9624
        .doubleBattle = TRUE,
#line 9625
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9627
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9629
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9628
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9630
                MOVE_BIDE,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 9635
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9637
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9636
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9638
                MOVE_THUNDER_PUNCH,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_MEDITATE,
            },
            },
        },
    },
#line 9643
    [TRAINER_DANIELLE] =
    {
#line 9644
        .trainerName = _("DANIELLE"),
#line 9645
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9646
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 9647
F_TRAINER_FEMALE | 
#line 9648
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9649
        .doubleBattle = TRUE,
#line 9650
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9652
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9654
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9653
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9655
                MOVE_BIDE,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_FIRE_PUNCH,
            },
            },
            {
#line 9660
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9662
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9661
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9663
                MOVE_BIDE,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 9668
    [TRAINER_HIDEO] =
    {
#line 9669
        .trainerName = _("HIDEO"),
#line 9670
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9671
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 9673
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9674
        .doubleBattle = TRUE,
#line 9675
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9677
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9679
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9678
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9680
                MOVE_TACKLE,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 9685
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9687
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9686
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9688
                MOVE_SHADOW_SNEAK,
                MOVE_SCREECH,
                MOVE_HEX,
                MOVE_CURSE,
            },
            },
        },
    },
#line 9693
    [TRAINER_KEIGO] =
    {
#line 9694
        .trainerName = _("KEIGO"),
#line 9695
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9696
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 9698
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9699
        .doubleBattle = TRUE,
#line 9700
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9702
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9704
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9703
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9706
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9708
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9707
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9710
    [TRAINER_RILEY] =
    {
#line 9711
        .trainerName = _("RILEY"),
#line 9712
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9713
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 9715
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9716
        .doubleBattle = TRUE,
#line 9717
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9719
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9721
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9720
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9723
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9725
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9724
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9727
    [TRAINER_FLINT] =
    {
#line 9728
        .trainerName = _("FLINT"),
#line 9729
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9730
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 9732
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9733
        .doubleBattle = TRUE,
#line 9734
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9736
            .species = SPECIES_RUFFLET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9738
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9737
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9740
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9742
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9741
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9744
    [TRAINER_ASHLEY] =
    {
#line 9745
        .trainerName = _("ASHLEY"),
#line 9746
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9747
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 9748
F_TRAINER_FEMALE | 
#line 9749
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9750
        .doubleBattle = TRUE,
#line 9751
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9753
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9755
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9754
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9757
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9759
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9758
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9761
            .species = SPECIES_ORICORIO_PAU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9763
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9762
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9765
    [TRAINER_WALLY_MAUVILLE] =
    {
#line 9766
        .trainerName = _("WALLY"),
#line 9767
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9768
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 9770
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9771
        .doubleBattle = TRUE,
#line 9772
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9774
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9776
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9775
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9778
            .species = SPECIES_TINKATINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9780
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9779
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9782
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9784
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9783
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9786
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9788
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 9787
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9790
    [TRAINER_WALLY_VR_2] =
    {
#line 9791
        .trainerName = _("WALLY"),
#line 9792
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9793
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 9795
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9796
        .doubleBattle = TRUE,
#line 9797
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9799
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9801
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9800
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9802
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 9807
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9809
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9808
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9810
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 9815
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9817
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9816
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9818
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 9823
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9825
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9824
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9826
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 9831
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9833
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 9832
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9834
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 9839
    [TRAINER_WALLY_VR_3] =
    {
#line 9840
        .trainerName = _("WALLY"),
#line 9841
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9842
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 9844
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9845
        .doubleBattle = TRUE,
#line 9846
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9848
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9850
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9849
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9851
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 9856
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9858
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9857
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9859
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 9864
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9866
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9865
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9867
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 9872
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9874
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9873
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9875
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 9880
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9882
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 9881
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9883
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 9888
    [TRAINER_WALLY_VR_4] =
    {
#line 9889
        .trainerName = _("WALLY"),
#line 9890
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9891
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 9893
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9894
        .doubleBattle = TRUE,
#line 9895
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9897
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9899
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9898
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9900
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 9905
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9907
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9906
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9908
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 9913
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9915
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9914
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9916
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 9921
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9923
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9922
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9924
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 9929
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9931
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 9930
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9932
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 9937
    [TRAINER_WALLY_VR_5] =
    {
#line 9938
        .trainerName = _("WALLY"),
#line 9939
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9940
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 9942
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9943
        .doubleBattle = TRUE,
#line 9944
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9946
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9948
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9947
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9949
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 9954
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9956
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9955
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9957
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 9962
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9964
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9963
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9965
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 9970
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9972
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9971
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9973
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 9978
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9980
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 9979
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9981
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 9986
    [TRAINER_BRENDAN_LILYCOVE_MUDKIP] =
    {
#line 9987
        .trainerName = _("BRENDAN"),
#line 9988
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9989
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 9991
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9992
        .doubleBattle = TRUE,
#line 9993
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9995
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9997
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9996
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9999
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10001
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10000
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10003
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10005
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10004
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10007
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10009
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 10008
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10011
    [TRAINER_BRENDAN_LILYCOVE_TREECKO] =
    {
#line 10012
        .trainerName = _("BRENDAN"),
#line 10013
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10014
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 10016
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10017
        .doubleBattle = TRUE,
#line 10018
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10020
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10022
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10021
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10024
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10026
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10025
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10028
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10030
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10029
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10032
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10034
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 10033
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10036
    [TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
    {
#line 10037
        .trainerName = _("BRENDAN"),
#line 10038
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10039
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 10041
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10042
        .doubleBattle = TRUE,
#line 10043
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10045
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10047
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10046
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10049
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10051
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10050
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10053
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10055
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10054
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10057
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10059
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 10058
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10061
    [TRAINER_MAY_LILYCOVE_MUDKIP] =
    {
#line 10062
        .trainerName = _("MAY"),
#line 10063
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10064
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 10065
F_TRAINER_FEMALE | 
#line 10066
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10067
        .doubleBattle = TRUE,
#line 10068
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10070
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10072
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10071
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10074
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10076
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10075
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10078
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10080
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10079
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10082
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10084
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 10083
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10086
    [TRAINER_MAY_LILYCOVE_TREECKO] =
    {
#line 10087
        .trainerName = _("MAY"),
#line 10088
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10089
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 10090
F_TRAINER_FEMALE | 
#line 10091
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10092
        .doubleBattle = TRUE,
#line 10093
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10095
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10097
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10096
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10099
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10101
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10100
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10103
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10105
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10104
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10107
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10109
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 10108
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10111
    [TRAINER_MAY_LILYCOVE_TORCHIC] =
    {
#line 10112
        .trainerName = _("MAY"),
#line 10113
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10114
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 10115
F_TRAINER_FEMALE | 
#line 10116
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10117
        .doubleBattle = TRUE,
#line 10118
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10120
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10122
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10121
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10124
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10126
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10125
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10128
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10130
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10129
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10132
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10134
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 10133
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10136
    [TRAINER_JONAH] =
    {
#line 10137
        .trainerName = _("JONAH"),
#line 10138
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 10139
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 10141
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10142
        .doubleBattle = TRUE,
#line 10143
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10145
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10147
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10146
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10149
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10151
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10150
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10153
    [TRAINER_HENRY] =
    {
#line 10154
        .trainerName = _("HENRY"),
#line 10155
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 10156
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 10158
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10159
        .doubleBattle = TRUE,
#line 10160
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10162
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10164
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10163
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10166
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10168
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10167
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10170
            .species = SPECIES_HUNTAIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10172
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10171
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10174
    [TRAINER_ROGER] =
    {
#line 10175
        .trainerName = _("ROGER"),
#line 10176
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 10177
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 10179
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10180
        .doubleBattle = TRUE,
#line 10181
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10183
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10185
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10184
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10187
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10189
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10188
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10191
    [TRAINER_ALEXA] =
    {
#line 10192
        .trainerName = _("ALEXA"),
#line 10193
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 10194
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 10195
F_TRAINER_FEMALE | 
#line 10196
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10197
        .doubleBattle = TRUE,
#line 10198
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10200
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10202
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10201
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10204
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10206
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10205
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10208
            .species = SPECIES_GRAPPLOCT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10210
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10209
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10212
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10214
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10213
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10216
    [TRAINER_RUBEN] =
    {
#line 10217
        .trainerName = _("RUBEN"),
#line 10218
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 10219
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 10221
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10222
        .doubleBattle = TRUE,
#line 10223
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10225
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10227
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10226
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10229
            .species = SPECIES_BISHARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10231
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10230
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10233
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10235
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10234
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10237
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10239
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10238
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10241
    [TRAINER_KOJI_1] =
    {
#line 10242
        .trainerName = _("KOJI"),
#line 10243
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 10244
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 10246
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10247
        .doubleBattle = TRUE,
#line 10248
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10250
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10252
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10251
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10254
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10256
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10255
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10258
    [TRAINER_WAYNE] =
    {
#line 10259
        .trainerName = _("WAYNE"),
#line 10260
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 10261
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 10263
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10264
        .doubleBattle = TRUE,
#line 10265
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10267
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10269
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10268
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10271
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10273
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10272
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10275
    [TRAINER_AIDAN] =
    {
#line 10276
        .trainerName = _("AIDAN"),
#line 10277
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 10278
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 10280
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10281
        .doubleBattle = TRUE,
#line 10282
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10284
            .species = SPECIES_ORICORIO_BAILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10286
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10285
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10288
            .species = SPECIES_ORICORIO_POM_POM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10290
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10289
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10292
            .species = SPECIES_ORICORIO_PAU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10294
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10293
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10296
            .species = SPECIES_ORICORIO_SENSU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10298
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10297
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10300
    [TRAINER_REED] =
    {
#line 10301
        .trainerName = _("REED"),
#line 10302
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 10303
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 10305
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 10306
        .doubleBattle = TRUE,
#line 10307
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10309
            .species = SPECIES_MIENFOO_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10311
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10310
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10313
            .species = SPECIES_CRABRAWLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10315
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10314
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10317
    [TRAINER_TISHA] =
    {
#line 10318
        .trainerName = _("TISHA"),
#line 10319
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 10320
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 10321
F_TRAINER_FEMALE | 
#line 10322
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 10323
        .doubleBattle = TRUE,
#line 10324
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10326
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10328
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10327
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10330
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10332
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10331
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10334
    [TRAINER_TORI_AND_TIA] =
    {
#line 10335
        .trainerName = _("TORI & TIA"),
#line 10336
        .trainerClass = TRAINER_CLASS_TWINS,
#line 10337
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 10339
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 10340
        .doubleBattle = TRUE,
#line 10341
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10343
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10346
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10345
            .ability = ABILITY_PSYCH_OUT,
#line 10344
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10347
                MOVE_HYPNOSIS,
                MOVE_COPYCAT,
                MOVE_SKILL_SWAP,
                MOVE_DIZZY_PUNCH,
            },
            },
            {
#line 10352
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10355
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10354
            .ability = ABILITY_CONTRARY,
#line 10353
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10356
                MOVE_FAKE_TEARS,
                MOVE_DREAM_EATER,
                MOVE_HYPNOSIS,
                MOVE_UPROAR,
            },
            },
        },
    },
#line 10361
    [TRAINER_KIM_AND_IRIS] =
    {
#line 10362
        .trainerName = _("KIM & IRIS"),
#line 10363
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 10364
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender = 
#line 10366
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 10367
        .doubleBattle = TRUE,
#line 10368
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10370
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10373
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10372
            .ability = ABILITY_DROUGHT,
#line 10371
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10375
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10378
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10377
            .ability = ABILITY_CHLOROPHYLL,
#line 10376
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10380
    [TRAINER_TYRA_AND_IVY] =
    {
#line 10381
        .trainerName = _("TYRA & IVY"),
#line 10382
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 10383
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender = 
#line 10385
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 10386
        .doubleBattle = TRUE,
#line 10387
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10389
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10391
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10390
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10392
                MOVE_GROWTH,
                MOVE_STUN_SPORE,
                MOVE_MEGA_DRAIN,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 10397
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10399
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10398
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10400
                MOVE_DEFENSE_CURL,
                MOVE_ROLLOUT,
                MOVE_SELFDESTRUCT,
                MOVE_ROCK_THROW,
            },
            },
        },
    },
#line 10405
    [TRAINER_MEL_AND_PAUL] =
    {
#line 10406
        .trainerName = _("MEL & PAUL"),
#line 10407
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 10408
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 10410
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10411
        .doubleBattle = TRUE,
#line 10412
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10414
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10416
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10415
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10417
                MOVE_LIGHT_SCREEN,
                MOVE_PSYBEAM,
                MOVE_TOXIC,
                MOVE_PROTECT,
            },
            },
            {
#line 10422
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10424
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10423
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10425
                MOVE_SILVER_WIND,
                MOVE_GIGA_DRAIN,
                MOVE_ATTRACT,
                MOVE_STUN_SPORE,
            },
            },
        },
    },
#line 10430
    [TRAINER_JOHN_AND_JAY_1] =
    {
#line 10431
        .trainerName = _("JOHN & JAY"),
#line 10432
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 10433
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender = 
#line 10435
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10436
        .doubleBattle = TRUE,
#line 10437
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10439
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10441
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 10440
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10442
                MOVE_PSYCHIC,
                MOVE_FIRE_PUNCH,
                MOVE_PSYCH_UP,
                MOVE_PROTECT,
            },
            },
            {
#line 10447
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10449
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 10448
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10450
                MOVE_FOCUS_PUNCH,
                MOVE_ROCK_TOMB,
                MOVE_REST,
                MOVE_BELLY_DRUM,
            },
            },
        },
    },
#line 10455
    [TRAINER_RELI_AND_IAN] =
    {
#line 10456
        .trainerName = _("RELI & IAN"),
#line 10457
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 10458
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 10460
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 10461
        .doubleBattle = TRUE,
#line 10462
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10464
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10466
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10465
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10468
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10470
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10469
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10472
    [TRAINER_LILA_AND_ROY_1] =
    {
#line 10473
        .trainerName = _("LILA & ROY"),
#line 10474
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 10475
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 10477
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 10478
        .doubleBattle = TRUE,
#line 10479
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10481
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10483
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10482
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10485
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10487
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10486
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10489
    [TRAINER_LISA_AND_RAY] =
    {
#line 10490
        .trainerName = _("LISA & RAY"),
#line 10491
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 10492
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 10494
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 10495
        .doubleBattle = TRUE,
#line 10496
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10498
            .species = SPECIES_CRABRAWLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10500
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10499
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10502
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10504
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10503
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10506
    [TRAINER_CHRIS] =
    {
#line 10507
        .trainerName = _("CHRIS"),
#line 10508
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 10509
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 10511
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10512
        .doubleBattle = TRUE,
#line 10513
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10515
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10517
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10516
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10519
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10521
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10520
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10523
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10525
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10524
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10527
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10529
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10528
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10531
    [TRAINER_DAWSON] =
    {
#line 10532
        .trainerName = _("DAWSON"),
#line 10533
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 10534
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender = 
#line 10536
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10537
        .doubleBattle = TRUE,
#line 10538
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10540
            .species = SPECIES_CHINGLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10540
            .heldItem = ITEM_NUGGET,
#line 10542
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10541
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10544
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10546
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10545
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10548
    [TRAINER_SARAH] =
    {
#line 10549
        .trainerName = _("SARAH"),
#line 10550
        .trainerClass = TRAINER_CLASS_LADY,
#line 10551
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 10552
F_TRAINER_FEMALE | 
#line 10553
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10554
        .doubleBattle = TRUE,
#line 10555
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10557
            .species = SPECIES_BUDEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10557
            .heldItem = ITEM_NUGGET,
#line 10559
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10558
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10561
            .species = SPECIES_SNUBBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10563
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10562
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10565
    [TRAINER_DARIAN] =
    {
#line 10566
        .trainerName = _("DARIAN"),
#line 10567
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 10568
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 10570
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10571
        .doubleBattle = TRUE,
#line 10572
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10574
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10576
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10575
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10578
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10580
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10579
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10582
    [TRAINER_HAILEY] =
    {
#line 10583
        .trainerName = _("HAILEY"),
#line 10584
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 10585
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender = 
#line 10586
F_TRAINER_FEMALE | 
#line 10587
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10588
        .doubleBattle = TRUE,
#line 10589
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10591
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10593
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10592
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10595
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10597
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10596
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10599
    [TRAINER_CHANDLER] =
    {
#line 10600
        .trainerName = _("CHANDLER"),
#line 10601
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 10602
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender = 
#line 10604
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10605
        .doubleBattle = TRUE,
#line 10606
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10608
            .species = SPECIES_PICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10610
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10609
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10612
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10614
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10613
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10616
    [TRAINER_KALEB] =
    {
#line 10617
        .trainerName = _("KALEB"),
#line 10618
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 10619
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender = 
#line 10621
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 10622
        .doubleBattle = TRUE,
#line 10623
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10625
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10625
            .heldItem = ITEM_ORAN_BERRY,
#line 10627
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10626
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10629
            .species = SPECIES_SNUBBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10629
            .heldItem = ITEM_ORAN_BERRY,
#line 10631
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10630
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10633
    [TRAINER_JOSEPH] =
    {
#line 10634
        .trainerName = _("JOSEPH"),
#line 10635
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 10636
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 10638
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10639
        .doubleBattle = TRUE,
#line 10640
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10642
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10644
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10643
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10646
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10648
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10647
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10650
    [TRAINER_ALYSSA] =
    {
#line 10651
        .trainerName = _("ALYSSA"),
#line 10652
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 10653
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 10654
F_TRAINER_FEMALE | 
#line 10655
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10656
        .doubleBattle = TRUE,
#line 10657
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10659
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10661
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10660
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10663
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10665
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10664
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10667
    [TRAINER_MARCOS] =
    {
#line 10668
        .trainerName = _("MARCOS"),
#line 10669
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 10670
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 10672
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10673
        .doubleBattle = TRUE,
#line 10674
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10676
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10678
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10677
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10680
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10682
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10681
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10684
    [TRAINER_RHETT] =
    {
#line 10685
        .trainerName = _("RHETT"),
#line 10686
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 10687
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 10689
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10690
        .doubleBattle = TRUE,
#line 10691
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10693
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10695
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10694
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10697
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10699
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10698
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10701
    [TRAINER_TYRON] =
    {
#line 10702
        .trainerName = _("TYRON"),
#line 10703
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 10704
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 10706
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10707
        .doubleBattle = TRUE,
#line 10708
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10710
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10712
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10711
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10714
            .species = SPECIES_SKIDDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10716
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10715
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10718
    [TRAINER_CELINA] =
    {
#line 10719
        .trainerName = _("CELINA"),
#line 10720
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 10721
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender = 
#line 10722
F_TRAINER_FEMALE | 
#line 10723
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10724
        .doubleBattle = TRUE,
#line 10725
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10727
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10729
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10728
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10731
            .species = SPECIES_MILCERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10733
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10732
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10735
    [TRAINER_BIANCA] =
    {
#line 10736
        .trainerName = _("BIANCA"),
#line 10737
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 10738
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 10739
F_TRAINER_FEMALE | 
#line 10740
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10741
        .doubleBattle = TRUE,
#line 10742
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10744
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10746
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10745
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10748
            .species = SPECIES_TINKATINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10750
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10749
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10752
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10754
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10753
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10756
    [TRAINER_HAYDEN] =
    {
#line 10757
        .trainerName = _("HAYDEN"),
#line 10758
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 10759
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 10761
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10762
        .doubleBattle = TRUE,
#line 10763
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10765
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10767
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10766
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10769
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10771
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10770
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10773
    [TRAINER_SOPHIE] =
    {
#line 10774
        .trainerName = _("SOPHIE"),
#line 10775
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 10776
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 10777
F_TRAINER_FEMALE | 
#line 10778
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10779
        .doubleBattle = TRUE,
#line 10780
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10782
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10784
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10783
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10786
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10788
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10787
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10790
    [TRAINER_COBY] =
    {
#line 10791
        .trainerName = _("COBY"),
#line 10792
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 10793
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 10795
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10796
        .doubleBattle = TRUE,
#line 10797
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10799
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10801
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10800
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10803
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10805
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10804
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10807
    [TRAINER_LAWRENCE] =
    {
#line 10808
        .trainerName = _("LAWRENCE"),
#line 10809
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 10810
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 10812
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10813
        .doubleBattle = TRUE,
#line 10814
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10816
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10818
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10817
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10820
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10822
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10821
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10824
    [TRAINER_WYATT] =
    {
#line 10825
        .trainerName = _("WYATT"),
#line 10826
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 10827
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender = 
#line 10829
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10830
        .doubleBattle = TRUE,
#line 10831
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10833
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10835
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10834
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10837
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10839
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10838
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10841
    [TRAINER_ANGELINA] =
    {
#line 10842
        .trainerName = _("ANGELINA"),
#line 10843
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 10844
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 10845
F_TRAINER_FEMALE | 
#line 10846
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10847
        .doubleBattle = TRUE,
#line 10848
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10850
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10853
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10852
            .ability = ABILITY_CHEERLEADER,
#line 10851
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10855
            .species = SPECIES_TINKATUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10858
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10857
            .ability = ABILITY_PICKPOCKET,
#line 10856
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10860
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10863
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10862
            .ability = ABILITY_MINUS,
#line 10861
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10865
    [TRAINER_KAI] =
    {
#line 10866
        .trainerName = _("KAI"),
#line 10867
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 10868
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 10870
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10871
        .doubleBattle = TRUE,
#line 10872
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10874
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10876
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10875
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10878
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10880
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10879
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10882
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10884
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10883
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10886
    [TRAINER_CHARLOTTE] =
    {
#line 10887
        .trainerName = _("CHARLOTTE"),
#line 10888
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 10889
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 10890
F_TRAINER_FEMALE | 
#line 10891
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10892
        .doubleBattle = TRUE,
#line 10893
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10895
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10897
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10896
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10899
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10901
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10900
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10903
    [TRAINER_DEANDRE] =
    {
#line 10904
        .trainerName = _("DEANDRE"),
#line 10905
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 10906
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 10908
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10909
        .doubleBattle = TRUE,
#line 10910
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10912
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10914
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10913
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10916
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10918
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10917
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10920
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10922
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10921
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10924
    [TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
#line 10925
        .trainerName = _("GRUNT"),
#line 10926
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10927
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 10929
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10930
        .doubleBattle = TRUE,
#line 10931
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10933
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10935
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10934
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10937
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10939
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10938
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10941
    [TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
#line 10942
        .trainerName = _("GRUNT"),
#line 10943
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10944
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 10946
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10947
        .doubleBattle = TRUE,
#line 10948
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10950
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10952
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10951
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10954
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10956
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10955
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10958
    [TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
#line 10959
        .trainerName = _("GRUNT"),
#line 10960
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10961
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 10963
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10964
        .doubleBattle = TRUE,
#line 10965
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10967
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10969
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10968
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10971
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10973
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10972
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10975
    [TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
#line 10976
        .trainerName = _("GRUNT"),
#line 10977
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10978
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 10980
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10981
        .doubleBattle = TRUE,
#line 10982
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10984
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10986
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10985
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10988
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10990
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10989
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10992
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10994
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10993
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10996
    [TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
    {
#line 10997
        .trainerName = _("GRUNT"),
#line 10998
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10999
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11001
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11002
        .doubleBattle = TRUE,
#line 11003
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11005
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11007
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11006
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11009
            .species = SPECIES_CARBINK_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11011
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11010
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11013
    [TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
#line 11014
        .trainerName = _("GRUNT"),
#line 11015
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11016
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11018
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11019
        .doubleBattle = TRUE,
#line 11020
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11022
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11024
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11023
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11026
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11028
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11027
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11030
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11032
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11031
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11034
    [TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
#line 11035
        .trainerName = _("GRUNT"),
#line 11036
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11037
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11039
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11040
        .doubleBattle = TRUE,
#line 11041
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11043
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11045
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11044
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11047
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11049
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11048
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11051
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11053
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11052
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11055
    [TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
#line 11056
        .trainerName = _("GRUNT"),
#line 11057
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11058
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11060
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11061
        .doubleBattle = TRUE,
#line 11062
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11064
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11066
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11065
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11068
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11070
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11069
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11072
    [TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
#line 11073
        .trainerName = _("GRUNT"),
#line 11074
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11075
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11077
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11078
        .doubleBattle = TRUE,
#line 11079
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11081
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11083
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11082
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11085
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11087
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11086
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11089
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11091
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11090
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11093
    [TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
#line 11094
        .trainerName = _("GRUNT"),
#line 11095
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11096
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11098
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11099
        .doubleBattle = TRUE,
#line 11100
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11102
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11104
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11103
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11106
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11108
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11107
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11110
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11112
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11111
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11114
    [TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
#line 11115
        .trainerName = _("GRUNT"),
#line 11116
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11117
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11119
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11120
        .doubleBattle = TRUE,
#line 11121
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 11123
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11125
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11124
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11127
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11129
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11128
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11131
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11133
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11132
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11135
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11137
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11136
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11139
    [TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
#line 11140
        .trainerName = _("GRUNT"),
#line 11141
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11142
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11144
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11145
        .doubleBattle = TRUE,
#line 11146
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11148
            .species = SPECIES_CARBINK_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11150
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11149
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11152
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11154
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11153
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11156
    [TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
#line 11157
        .trainerName = _("GRUNT"),
#line 11158
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11159
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11161
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11162
        .doubleBattle = TRUE,
#line 11163
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11165
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11167
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11166
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11169
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11171
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11170
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11173
    [TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
#line 11174
        .trainerName = _("GRUNT"),
#line 11175
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11176
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender = 
#line 11177
F_TRAINER_FEMALE | 
#line 11178
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11179
        .doubleBattle = TRUE,
#line 11180
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11182
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11184
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11183
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11186
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11188
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11187
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11190
    [TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
#line 11191
        .trainerName = _("GRUNT"),
#line 11192
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11193
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender = 
#line 11194
F_TRAINER_FEMALE | 
#line 11195
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11196
        .doubleBattle = TRUE,
#line 11197
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11199
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11201
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11200
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11203
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11205
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11204
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11207
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11209
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11208
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11211
    [TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
#line 11212
        .trainerName = _("GRUNT"),
#line 11213
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11214
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender = 
#line 11215
F_TRAINER_FEMALE | 
#line 11216
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11217
        .doubleBattle = TRUE,
#line 11218
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11220
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11222
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11221
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11224
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11226
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11225
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11228
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11230
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11229
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11232
    [TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
#line 11233
        .trainerName = _("TABITHA"),
#line 11234
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 11235
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN_M,
        .encounterMusic_gender = 
#line 11237
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11238
        .doubleBattle = TRUE,
#line 11239
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11241
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11244
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 11243
            .ability = ABILITY_INNER_FOCUS,
#line 11242
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11245
                MOVE_BRAVE_BIRD,
                MOVE_CROSS_POISON,
                MOVE_STEEL_WING,
                MOVE_ROOST,
            },
            },
            {
#line 11250
            .species = SPECIES_SABLEYE_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11253
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 11252
            .ability = ABILITY_PRANKSTER,
#line 11251
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11254
                MOVE_QUASH,
                MOVE_FOUL_PLAY,
                MOVE_RECOVER,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 11259
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11262
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 11261
            .ability = ABILITY_MOXIE,
#line 11260
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11263
                MOVE_SUBMISSION,
                MOVE_X_SCISSOR,
                MOVE_THROAT_CHOP,
                MOVE_BULLDOZE,
            },
            },
            {
#line 11268
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11268
            .heldItem = ITEM_BIG_ROOT,
#line 11271
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 11270
            .ability = ABILITY_STORM_DRAIN,
#line 11269
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11272
                MOVE_SPIKY_SHIELD,
                MOVE_DRAIN_PUNCH,
                MOVE_SUCKER_PUNCH,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 11277
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11277
            .heldItem = ITEM_ASSAULT_VEST,
#line 11280
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 11279
            .ability = ABILITY_SOLID_ROCK,
#line 11278
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11281
                MOVE_ROCK_WRECKER,
                MOVE_DRILL_RUN,
                MOVE_MEGAHORN,
                MOVE_HEAT_CRASH,
            },
            },
            {
#line 11286
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11286
            .heldItem = ITEM_SITRUS_BERRY,
#line 11289
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 11288
            .ability = ABILITY_INTIMIDATE,
#line 11287
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11290
                MOVE_WILD_CHARGE,
                MOVE_FLARE_BLITZ,
                MOVE_EXTREME_SPEED,
                MOVE_PLAY_ROUGH,
            },
            },
        },
    },
#line 11295
    [TRAINER_DARCY] =
    {
#line 11296
        .trainerName = _("DARCY"),
#line 11297
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 11298
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 11299
F_TRAINER_FEMALE | 
#line 11300
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11301
        .doubleBattle = TRUE,
#line 11302
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 11304
            .species = SPECIES_SABLEYE_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11306
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11305
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11308
            .species = SPECIES_ROSERADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11310
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11309
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11312
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11314
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11313
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11316
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11318
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11317
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11320
    [TRAINER_MAXIE_MOSSDEEP] =
    {
#line 11321
        .trainerName = _("MAXIE"),
#line 11322
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 11323
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender = 
#line 11325
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11326
        .doubleBattle = TRUE,
#line 11327
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11329
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11331
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 11330
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11333
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11335
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 11334
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11337
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11339
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 11338
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11341
    [TRAINER_PETE] =
    {
#line 11342
        .trainerName = _("PETE"),
#line 11343
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 11344
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 11346
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 11347
        .doubleBattle = TRUE,
#line 11348
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11350
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11352
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11351
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11354
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11356
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11355
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11358
    [TRAINER_ISABELLE] =
    {
#line 11359
        .trainerName = _("ISABELLE"),
#line 11360
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 11361
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 11362
F_TRAINER_FEMALE | 
#line 11363
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 11364
        .doubleBattle = TRUE,
#line 11365
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11367
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11369
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11368
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11371
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11373
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11372
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11375
    [TRAINER_ANDRES_1] =
    {
#line 11376
        .trainerName = _("ANDRES"),
#line 11377
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 11378
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 11380
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11381
        .doubleBattle = TRUE,
#line 11382
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11384
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11386
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 11385
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11388
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11390
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 11389
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11392
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11394
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 11393
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11396
    [TRAINER_JOSUE] =
    {
#line 11397
        .trainerName = _("JOSUE"),
#line 11398
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 11399
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 11401
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11402
        .doubleBattle = TRUE,
#line 11403
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11405
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11407
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 11406
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11409
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11411
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 11410
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11413
    [TRAINER_CAMRON] =
    {
#line 11414
        .trainerName = _("CAMRON"),
#line 11415
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 11416
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 11418
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 11419
        .doubleBattle = TRUE,
#line 11420
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11422
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11424
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11423
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11426
            .species = SPECIES_MIENFOO_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11428
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11427
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11430
    [TRAINER_CORY_1] =
    {
#line 11431
        .trainerName = _("CORY"),
#line 11432
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 11433
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 11435
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11436
        .doubleBattle = TRUE,
#line 11437
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 11439
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11441
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11440
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11443
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11445
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11444
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11447
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11449
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11448
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11451
            .species = SPECIES_CRABRAWLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11453
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11452
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11455
    [TRAINER_CAROLINA] =
    {
#line 11456
        .trainerName = _("CAROLINA"),
#line 11457
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 11458
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 11459
F_TRAINER_FEMALE | 
#line 11460
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11461
        .doubleBattle = TRUE,
#line 11462
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11464
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11466
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 11465
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11468
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11470
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 11469
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11472
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11474
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 11473
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11476
    [TRAINER_ELIJAH] =
    {
#line 11477
        .trainerName = _("ELIJAH"),
#line 11478
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 11479
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 11481
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11482
        .doubleBattle = TRUE,
#line 11483
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11485
            .species = SPECIES_RUFFLET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11487
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11486
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11489
            .species = SPECIES_RUFFLET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11491
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11490
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11493
    [TRAINER_CELIA] =
    {
#line 11494
        .trainerName = _("CELIA"),
#line 11495
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 11496
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 11497
F_TRAINER_FEMALE | 
#line 11498
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 11499
        .doubleBattle = TRUE,
#line 11500
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11502
            .species = SPECIES_TINKATUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11504
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11503
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11506
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11509
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11508
            .ability = ABILITY_MAGIC_GUARD,
#line 11507
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11511
    [TRAINER_BRYAN] =
    {
#line 11512
        .trainerName = _("BRYAN"),
#line 11513
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 11514
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 11516
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11517
        .doubleBattle = TRUE,
#line 11518
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11520
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11522
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11521
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11524
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11526
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11525
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11528
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11530
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11529
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11532
    [TRAINER_BRANDEN] =
    {
#line 11533
        .trainerName = _("BRANDEN"),
#line 11534
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 11535
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 11537
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11538
        .doubleBattle = TRUE,
#line 11539
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11541
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11543
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11542
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11545
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11547
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11546
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11549
    [TRAINER_BRYANT] =
    {
#line 11550
        .trainerName = _("BRYANT"),
#line 11551
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 11552
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 11554
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11555
        .doubleBattle = TRUE,
#line 11556
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11558
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11560
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11559
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11562
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11564
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11563
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11566
    [TRAINER_SHAYLA] =
    {
#line 11567
        .trainerName = _("SHAYLA"),
#line 11568
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 11569
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender = 
#line 11570
F_TRAINER_FEMALE | 
#line 11571
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11572
        .doubleBattle = TRUE,
#line 11573
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11575
            .species = SPECIES_MILCERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11577
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11576
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11579
            .species = SPECIES_MILCERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11581
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11580
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11583
    [TRAINER_KYRA] =
    {
#line 11584
        .trainerName = _("KYRA"),
#line 11585
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 11586
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 11587
F_TRAINER_FEMALE | 
#line 11588
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11589
        .doubleBattle = TRUE,
#line 11590
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11592
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11594
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11593
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11596
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11598
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11597
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11600
    [TRAINER_JAIDEN] =
    {
#line 11601
        .trainerName = _("JAIDEN"),
#line 11602
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 11603
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 11605
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 11606
        .doubleBattle = TRUE,
#line 11607
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11609
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11611
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11610
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11613
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11615
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11614
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11617
    [TRAINER_ALIX] =
    {
#line 11618
        .trainerName = _("ALIX"),
#line 11619
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 11620
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 11621
F_TRAINER_FEMALE | 
#line 11622
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11623
        .doubleBattle = TRUE,
#line 11624
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11626
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11628
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11627
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11630
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11632
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11631
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11634
    [TRAINER_HELENE] =
    {
#line 11635
        .trainerName = _("HELENE"),
#line 11636
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 11637
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 11638
F_TRAINER_FEMALE | 
#line 11639
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11640
        .doubleBattle = TRUE,
#line 11641
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11643
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11645
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11644
            .lvl = 230,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11647
            .species = SPECIES_MIENFOO_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11649
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11648
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11651
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11653
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11652
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11655
    [TRAINER_MARLENE] =
    {
#line 11656
        .trainerName = _("MARLENE"),
#line 11657
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 11658
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 11659
F_TRAINER_FEMALE | 
#line 11660
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11661
        .doubleBattle = TRUE,
#line 11662
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11664
            .species = SPECIES_ORICORIO_PAU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11666
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11665
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11668
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11670
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11669
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11672
    [TRAINER_DEVAN] =
    {
#line 11673
        .trainerName = _("DEVAN"),
#line 11674
        .trainerClass = TRAINER_CLASS_HIKER,
#line 11675
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 11677
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11678
        .doubleBattle = TRUE,
#line 11679
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11681
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11683
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11682
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11685
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11687
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11686
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11689
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11691
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11690
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11693
    [TRAINER_JOHNSON] =
    {
#line 11694
        .trainerName = _("JOHNSON"),
#line 11695
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 11696
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 11698
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11699
        .doubleBattle = TRUE,
#line 11700
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11702
            .species = SPECIES_CHINGLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11704
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11703
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11706
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11708
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11707
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11710
    [TRAINER_MELINA] =
    {
#line 11711
        .trainerName = _("MELINA"),
#line 11712
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 11713
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 11714
F_TRAINER_FEMALE | 
#line 11715
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11716
        .doubleBattle = TRUE,
#line 11717
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11719
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11721
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11720
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11723
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11725
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11724
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11727
    [TRAINER_BRANDI] =
    {
#line 11728
        .trainerName = _("BRANDI"),
#line 11729
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 11730
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 11731
F_TRAINER_FEMALE | 
#line 11732
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11733
        .doubleBattle = TRUE,
#line 11734
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11736
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11738
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11737
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11740
            .species = SPECIES_CHINGLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11742
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11741
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11744
    [TRAINER_AISHA] =
    {
#line 11745
        .trainerName = _("AISHA"),
#line 11746
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 11747
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 11748
F_TRAINER_FEMALE | 
#line 11749
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11750
        .doubleBattle = TRUE,
#line 11751
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11753
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11755
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11754
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11757
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11759
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11758
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11761
    [TRAINER_MAKAYLA] =
    {
#line 11762
        .trainerName = _("MAKAYLA"),
#line 11763
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 11764
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 11765
F_TRAINER_FEMALE | 
#line 11766
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11767
        .doubleBattle = TRUE,
#line 11768
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11770
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11772
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11771
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11774
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11776
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11775
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11778
    [TRAINER_FABIAN] =
    {
#line 11779
        .trainerName = _("FABIAN"),
#line 11780
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 11781
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 11783
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11784
        .doubleBattle = TRUE,
#line 11785
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11787
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11789
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11788
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11791
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11793
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11792
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11795
    [TRAINER_DAYTON] =
    {
#line 11796
        .trainerName = _("DAYTON"),
#line 11797
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 11798
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 11800
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11801
        .doubleBattle = TRUE,
#line 11802
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11804
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11806
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11805
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11808
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11810
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11809
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11812
    [TRAINER_RACHEL] =
    {
#line 11813
        .trainerName = _("RACHEL"),
#line 11814
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 11815
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 11816
F_TRAINER_FEMALE | 
#line 11817
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11818
        .doubleBattle = TRUE,
#line 11819
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11821
            .species = SPECIES_SKIDDO_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11823
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11822
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11825
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11827
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11826
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11829
    [TRAINER_LEONEL] =
    {
#line 11830
        .trainerName = _("LEONEL"),
#line 11831
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 11832
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 11834
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11835
        .doubleBattle = TRUE,
#line 11836
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11838
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11840
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11839
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11842
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11844
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11843
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11846
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11848
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11847
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11850
    [TRAINER_CALLIE] =
    {
#line 11851
        .trainerName = _("CALLIE"),
#line 11852
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 11853
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 11854
F_TRAINER_FEMALE | 
#line 11855
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11856
        .doubleBattle = TRUE,
#line 11857
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11859
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11861
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11860
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11863
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11865
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11864
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11867
    [TRAINER_CALE] =
    {
#line 11868
        .trainerName = _("CALE"),
#line 11869
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 11870
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 11872
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 11873
        .doubleBattle = TRUE,
#line 11874
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11876
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11878
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11877
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11880
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11882
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11881
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11884
    [TRAINER_MYLES] =
    {
#line 11885
        .trainerName = _("MYLES"),
#line 11886
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 11887
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender = 
#line 11889
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11890
        .doubleBattle = TRUE,
#line 11891
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_ACE_POKEMON,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11893
            .species = SPECIES_BERGMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11895
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11894
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11897
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11899
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11898
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11901
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11903
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11902
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11905
            .species = SPECIES_SKIDDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11907
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11906
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11909
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11911
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11910
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11913
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11915
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11914
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11917
    [TRAINER_PAT] =
    {
#line 11918
        .trainerName = _("PAT"),
#line 11919
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 11920
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 11921
F_TRAINER_FEMALE | 
#line 11922
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11923
        .doubleBattle = TRUE,
#line 11924
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_ACE_POKEMON,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 11926
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11928
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11927
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11930
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11932
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11931
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11934
            .species = SPECIES_TINKATUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11936
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11935
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11938
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11940
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11939
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11942
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11944
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11943
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11946
    [TRAINER_CRISTIN_1] =
    {
#line 11947
        .trainerName = _("CRISTIN"),
#line 11948
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 11949
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 11950
F_TRAINER_FEMALE | 
#line 11951
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11952
        .doubleBattle = TRUE,
#line 11953
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11955
            .species = SPECIES_MEOWSTIC_MALE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11957
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11956
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11959
            .species = SPECIES_ROTOM_FAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11961
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11960
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11963
            .species = SPECIES_CRABOMINABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11965
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11964
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11967
    [TRAINER_MAY_RUSTBORO_TREECKO] =
    {
#line 11968
        .trainerName = _("MAY"),
#line 11969
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11970
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 11971
F_TRAINER_FEMALE | 
#line 11972
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11973
        .doubleBattle = TRUE,
#line 11974
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 11976
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11978
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 11977
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11980
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11982
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 11981
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11984
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11986
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 11985
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11988
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11990
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11989
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11992
    [TRAINER_MAY_RUSTBORO_TORCHIC] =
    {
#line 11993
        .trainerName = _("MAY"),
#line 11994
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11995
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 11996
F_TRAINER_FEMALE | 
#line 11997
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11998
        .doubleBattle = TRUE,
#line 11999
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 12001
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12003
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 12002
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12005
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12007
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 12006
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12009
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12011
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 12010
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12013
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12015
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 12014
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12017
    [TRAINER_ANGELO] =
    {
#line 12018
        .trainerName = _("ANGELO"),
#line 12019
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 12020
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 12022
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 12023
        .doubleBattle = TRUE,
#line 12024
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12026
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12028
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 12027
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12029
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
                MOVE_CHARM,
            },
            },
            {
#line 12033
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12035
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 12034
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12036
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
                MOVE_CONFUSE_RAY,
            },
            },
        },
    },
#line 12040
    [TRAINER_DARIUS] =
    {
#line 12041
        .trainerName = _("DARIUS"),
#line 12042
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 12043
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 12045
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12046
        .doubleBattle = TRUE,
#line 12047
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12049
            .species = SPECIES_KILOWATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12051
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 12050
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12053
            .species = SPECIES_ORICORIO_POM_POM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12055
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 12054
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12057
    [TRAINER_STEVEN] =
    {
#line 12058
        .trainerName = _("STEVEN"),
#line 12059
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 12060
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 12062
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12063
        .doubleBattle = TRUE,
#line 12064
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 12066
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12068
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12067
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12069
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
            },
            },
            {
#line 12074
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12076
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12075
            .lvl = 75,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12077
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_ANCIENT_POWER,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 12082
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12084
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12083
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12085
                MOVE_THUNDER,
                MOVE_EARTHQUAKE,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 12090
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12092
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12091
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12093
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_INGRAIN,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 12098
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12100
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12099
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12101
                MOVE_WATER_PULSE,
                MOVE_ANCIENT_POWER,
                MOVE_AERIAL_ACE,
                MOVE_SLASH,
            },
            },
            {
#line 12106
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12106
            .heldItem = ITEM_SITRUS_BERRY,
#line 12108
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12107
            .lvl = 78,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12109
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_METEOR_MASH,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 12114
    [TRAINER_ANABEL] =
    {
#line 12115
        .trainerName = _("ANABEL"),
#line 12116
        .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
#line 12117
        .trainerPic = TRAINER_PIC_SALON_MAIDEN_ANABEL,
        .encounterMusic_gender = 
#line 12118
F_TRAINER_FEMALE | 
#line 12119
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12120
        .doubleBattle = TRUE,
#line 12121
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12123
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12125
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12124
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12127
    [TRAINER_TUCKER] =
    {
#line 12128
        .trainerName = _("TUCKER"),
#line 12129
        .trainerClass = TRAINER_CLASS_DOME_ACE,
#line 12130
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender = 
#line 12132
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12133
        .doubleBattle = TRUE,
#line 12134
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12136
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12138
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12137
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12140
    [TRAINER_SPENSER] =
    {
#line 12141
        .trainerName = _("SPENSER"),
#line 12142
        .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
#line 12143
        .trainerPic = TRAINER_PIC_PALACE_MAVEN_SPENSER,
        .encounterMusic_gender = 
#line 12145
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12146
        .doubleBattle = TRUE,
#line 12147
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12149
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12151
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12150
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12153
    [TRAINER_GRETA] =
    {
#line 12154
        .trainerName = _("GRETA"),
#line 12155
        .trainerClass = TRAINER_CLASS_ARENA_TYCOON,
#line 12156
        .trainerPic = TRAINER_PIC_ARENA_TYCOON_GRETA,
        .encounterMusic_gender = 
#line 12157
F_TRAINER_FEMALE | 
#line 12158
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12159
        .doubleBattle = TRUE,
#line 12160
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12162
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12164
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12163
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12166
    [TRAINER_NOLAND] =
    {
#line 12167
        .trainerName = _("NOLAND"),
#line 12168
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 12169
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender = 
#line 12171
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12172
        .doubleBattle = TRUE,
#line 12173
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12175
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12177
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12176
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12179
    [TRAINER_LUCY] =
    {
#line 12180
        .trainerName = _("LUCY"),
#line 12181
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 12182
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender = 
#line 12183
F_TRAINER_FEMALE | 
#line 12184
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12185
        .doubleBattle = TRUE,
#line 12186
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12188
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12190
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12189
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12192
    [TRAINER_BRANDON] =
    {
#line 12193
        .trainerName = _("BRANDON"),
#line 12194
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 12195
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender = 
#line 12197
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12198
        .doubleBattle = TRUE,
#line 12199
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12201
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12203
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12202
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12205
    [TRAINER_MARIELA] =
    {
#line 12206
        .trainerName = _("MARIELA"),
#line 12207
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 12208
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 12209
F_TRAINER_FEMALE | 
#line 12210
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12211
        .doubleBattle = TRUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12213
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12215
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12214
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12217
    [TRAINER_ALVARO] =
    {
#line 12218
        .trainerName = _("ALVARO"),
#line 12219
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 12220
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 12222
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12223
        .doubleBattle = TRUE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12225
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12227
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12226
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12229
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12231
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12230
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12233
    [TRAINER_EVERETT] =
    {
#line 12234
        .trainerName = _("EVERETT"),
#line 12235
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 12236
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 12238
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 12239
        .doubleBattle = TRUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12241
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12243
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12242
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12245
    [TRAINER_RED] =
    {
#line 12246
        .trainerName = _("RED"),
#line 12247
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 12248
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender = 
#line 12250
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12251
        .doubleBattle = TRUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12253
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12255
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12254
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12257
    [TRAINER_LEAF] =
    {
#line 12258
        .trainerName = _("LEAF"),
#line 12259
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 12260
        .trainerPic = TRAINER_PIC_LEAF,
        .encounterMusic_gender = 
#line 12261
F_TRAINER_FEMALE | 
#line 12262
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12263
        .doubleBattle = TRUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12265
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12267
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12266
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12269
    [TRAINER_BRENDAN_PLACEHOLDER] =
    {
#line 12270
        .trainerName = _("BRENDAN"),
#line 12271
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 12272
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .encounterMusic_gender = 
#line 12274
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12275
        .doubleBattle = TRUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12277
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12279
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12278
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12281
    [TRAINER_MAY_PLACEHOLDER] =
    {
#line 12282
        .trainerName = _("MAY"),
#line 12283
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 12284
        .trainerPic = TRAINER_PIC_RS_MAY,
        .encounterMusic_gender = 
#line 12285
F_TRAINER_FEMALE | 
#line 12286
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12287
        .doubleBattle = TRUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12289
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12291
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12290
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12293
    [TRAINER_LUCA] =
    {
#line 12294
        .trainerName = _("LUCA"),
#line 12295
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 12296
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender = 
#line 12298
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 12299
        .doubleBattle = TRUE,
#line 12300
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12302
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12304
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12303
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12306
            .species = SPECIES_VIBRAVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12308
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12307
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12310
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12312
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12311
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12314
    [TRAINER_ADRIAN] =
    {
#line 12315
        .trainerName = _("ADRIAN"),
#line 12316
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 12317
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 12319
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12320
        .doubleBattle = TRUE,
#line 12321
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12323
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12325
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12324
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12327
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12329
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12328
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12331
    [TRAINER_KRISTI] =
    {
#line 12332
        .trainerName = _("KRISTI"),
#line 12333
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 12334
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 12335
F_TRAINER_FEMALE | 
#line 12336
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 12337
        .doubleBattle = TRUE,
#line 12338
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12340
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12342
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12341
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12344
            .species = SPECIES_SEEL_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12346
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12345
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12348
            .species = SPECIES_BERGMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12350
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12349
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12352
    [TRAINER_SMITH] =
    {
#line 12353
        .trainerName = _("SMITH"),
#line 12354
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 12355
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 12357
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12358
        .doubleBattle = TRUE,
#line 12359
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12361
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12363
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 12362
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12365
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12367
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 12366
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12369
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12371
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 12370
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12373
    [TRAINER_IZZY] =
    {
#line 12374
        .trainerName = _("IZZY"),
#line 12375
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 12376
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 12377
F_TRAINER_FEMALE | 
#line 12378
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 12379
        .doubleBattle = TRUE,
#line 12380
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12382
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12384
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12383
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12386
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12388
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12387
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12390
    [TRAINER_JEREMIAH] =
    {
#line 12391
        .trainerName = _("JEREMIAH"),
#line 12392
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 12393
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 12395
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12396
        .doubleBattle = TRUE,
#line 12397
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12399
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12401
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12400
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12403
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12405
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12404
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12407
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12409
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12408
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12411
    [TRAINER_WALLY_LILYCOVE] =
    {
#line 12412
        .trainerName = _("WALLY"),
#line 12413
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 12414
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 12416
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12417
        .doubleBattle = TRUE,
#line 12418
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 12420
            .species = SPECIES_SYLVEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12423
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 12422
            .ability = ABILITY_CUTE_CHARM,
#line 12421
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12424
                MOVE_DRAINING_KISS,
                MOVE_COPYCAT,
                MOVE_SWIFT,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 12429
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12429
            .heldItem = ITEM_LIGHT_BALL,
#line 12432
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 12431
            .ability = ABILITY_STATIC,
#line 12430
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12433
                MOVE_SPARK,
                MOVE_IRON_TAIL,
                MOVE_NUZZLE,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 12438
            .species = SPECIES_TINKATUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12441
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 12440
            .ability = ABILITY_MOLD_BREAKER,
#line 12439
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12442
                MOVE_FAKE_OUT,
                MOVE_FLASH_CANNON,
                MOVE_PLAY_ROUGH,
                MOVE_COVET,
            },
            },
            {
#line 12447
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12450
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 12449
            .ability = ABILITY_POISON_POINT,
#line 12448
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12451
                MOVE_GIGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_VENOSHOCK,
                MOVE_POISON_POWDER,
            },
            },
            {
#line 12456
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12456
            .heldItem = ITEM_TWISTED_SPOON,
#line 12458
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12457
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12459
                MOVE_PSYSHOCK,
                MOVE_DRAINING_KISS,
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
            },
            },
        },
    },
#line 12464
    [TRAINER_KINGSTON] =
    {
#line 12465
        .trainerName = _("KINGSTON"),
#line 12466
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 12467
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 12469
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12470
        .doubleBattle = TRUE,
#line 12471
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12473
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12475
            .iv = TRAINER_PARTY_IVS(20, 31, 20, 20, 20, 20),
#line 12474
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12477
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12479
            .iv = TRAINER_PARTY_IVS(20, 31, 20, 20, 20, 20),
#line 12478
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12481
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12483
            .iv = TRAINER_PARTY_IVS(20, 31, 20, 20, 20, 20),
#line 12482
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12485
    [TRAINER_OPAL] =
    {
#line 12486
        .trainerName = _("OPAL"),
#line 12487
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 12488
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 12489
F_TRAINER_FEMALE | 
#line 12490
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12491
        .doubleBattle = TRUE,
#line 12492
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12494
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12496
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12495
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12498
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12500
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12499
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12502
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12504
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12503
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12506
    [TRAINER_DONOVAN] =
    {
#line 12507
        .trainerName = _("DONOVAN"),
#line 12508
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 12509
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 12511
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12512
        .doubleBattle = TRUE,
#line 12513
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 12515
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12517
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12516
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12519
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12521
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12520
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12523
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12525
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12524
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12527
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12529
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12528
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12531
    [TRAINER_VANYA] =
    {
#line 12532
        .trainerName = _("VANYA"),
#line 12533
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 12534
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 12535
F_TRAINER_FEMALE | 
#line 12536
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12537
        .doubleBattle = TRUE,
#line 12538
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12540
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12542
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12541
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12544
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12546
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12545
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12548
    [TRAINER_AJAX] =
    {
#line 12549
        .trainerName = _("AJAX"),
#line 12550
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 12551
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 12553
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12554
        .doubleBattle = TRUE,
#line 12555
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12557
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12559
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 31, 20),
#line 12558
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12561
            .species = SPECIES_GRAFAIAI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12563
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 12562
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12565
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12567
            .iv = TRAINER_PARTY_IVS(20, 31, 20, 20, 20, 20),
#line 12566
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12569
    [TRAINER_ROSS] =
    {
#line 12570
        .trainerName = _("ROSS"),
#line 12571
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 12572
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 12574
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12575
        .doubleBattle = TRUE,
#line 12576
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 12578
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12580
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12579
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12582
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12584
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12583
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12586
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12588
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12587
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12590
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12592
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12591
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12594
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12596
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12595
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12598
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12600
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12599
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12602
    [TRAINER_AUSTIN] =
    {
#line 12603
        .trainerName = _("AUSTIN"),
#line 12604
        .trainerClass = TRAINER_CLASS_HIKER,
#line 12605
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 12607
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12608
        .doubleBattle = TRUE,
#line 12609
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12611
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12613
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 12612
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12615
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12617
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 12616
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12619
    [TRAINER_NOAH] =
    {
#line 12620
        .trainerName = _("NOAH"),
#line 12621
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 12622
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 12624
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12625
        .doubleBattle = TRUE,
#line 12626
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12628
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12630
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12629
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12632
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12634
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12633
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12636
    [TRAINER_HARPER] =
    {
#line 12637
        .trainerName = _("HARPER"),
#line 12638
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 12639
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 12640
F_TRAINER_FEMALE | 
#line 12641
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12642
        .doubleBattle = TRUE,
#line 12643
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12645
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12647
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12646
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12649
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12651
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12650
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12653
    [TRAINER_LANDON] =
    {
#line 12654
        .trainerName = _("LANDON"),
#line 12655
        .trainerClass = TRAINER_CLASS_HIKER,
#line 12656
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 12658
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12659
        .doubleBattle = TRUE,
#line 12660
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12662
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12664
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 12663
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12666
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12668
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 12667
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12670
            .species = SPECIES_MAROWAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12672
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 12671
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12674
    [TRAINER_MILES] =
    {
#line 12675
        .trainerName = _("MILES"),
#line 12676
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 12677
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 12679
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12680
        .doubleBattle = TRUE,
#line 12681
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12683
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12685
            .iv = TRAINER_PARTY_IVS(25, 31, 25, 20, 20, 25),
#line 12684
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12687
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12689
            .iv = TRAINER_PARTY_IVS(25, 20, 25, 31, 31, 20),
#line 12688
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12691
    [TRAINER_LUNA] =
    {
#line 12692
        .trainerName = _("LUNA"),
#line 12693
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 12694
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 12695
F_TRAINER_FEMALE | 
#line 12696
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12697
        .doubleBattle = TRUE,
#line 12698
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 12700
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12702
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12701
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12704
            .species = SPECIES_MEOWSTIC_FEMALE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12706
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12705
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12708
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12710
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12709
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12712
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12714
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12713
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12716
    [TRAINER_VINNIE] =
    {
#line 12717
        .trainerName = _("VINNIE"),
#line 12718
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 12719
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 12721
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12722
        .doubleBattle = TRUE,
#line 12723
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12725
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12727
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 31, 25),
#line 12726
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12729
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12731
            .iv = TRAINER_PARTY_IVS(25, 31, 25, 35, 25, 20),
#line 12730
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12733
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12735
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 35, 35, 25),
#line 12734
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12737
    [TRAINER_MIRA] =
    {
#line 12738
        .trainerName = _("MIRA"),
#line 12739
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 12740
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 12741
F_TRAINER_FEMALE | 
#line 12742
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12743
        .doubleBattle = TRUE,
#line 12744
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12746
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12749
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12748
            .ability = ABILITY_INTIMIDATE,
#line 12747
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12751
            .species = SPECIES_NINETALES_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12754
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12753
            .ability = ABILITY_SNOW_WARNING,
#line 12752
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12756
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12759
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12758
            .ability = ABILITY_SLUSH_RUSH,
#line 12757
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12761
    [TRAINER_ELIAS] =
    {
#line 12762
        .trainerName = _("ELIAS"),
#line 12763
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 12764
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 12766
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12767
        .doubleBattle = TRUE,
#line 12768
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12770
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12772
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12771
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12774
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12776
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12775
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12778
    [TRAINER_EVELYN] =
    {
#line 12779
        .trainerName = _("EVELYN"),
#line 12780
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 12781
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 12782
F_TRAINER_FEMALE | 
#line 12783
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12784
        .doubleBattle = TRUE,
#line 12785
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12787
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12789
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12788
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12791
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12793
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12792
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12795
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12797
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12796
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12799
    [TRAINER_COURTNEY_CRATERCREST] =
    {
#line 12800
        .trainerName = _("COURTNEY"),
#line 12801
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 12802
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN_F,
        .encounterMusic_gender = 
#line 12803
F_TRAINER_FEMALE | 
#line 12804
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 12805
        .doubleBattle = TRUE,
#line 12806
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 12808
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12811
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12810
            .ability = ABILITY_DROUGHT,
#line 12809
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12812
                MOVE_WILL_O_WISP,
                MOVE_FLAMETHROWER,
                MOVE_EXTRASENSORY,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 12817
            .species = SPECIES_CHERRIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12820
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12819
            .ability = ABILITY_FLOWER_GIFT,
#line 12818
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12821
                MOVE_GRASSY_TERRAIN,
                MOVE_SOLAR_BEAM,
                MOVE_WEATHER_BALL,
                MOVE_SLEEP_POWDER,
            },
            },
            {
#line 12826
            .species = SPECIES_GOGOAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12826
            .heldItem = ITEM_SCOPE_LENS,
#line 12829
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12828
            .ability = ABILITY_GRASS_PELT,
#line 12827
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12830
                MOVE_HORN_LEECH,
                MOVE_HIGH_HORSEPOWER,
                MOVE_WILD_CHARGE,
                MOVE_SYNTHESIS,
            },
            },
            {
#line 12835
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12835
            .heldItem = ITEM_FLAME_ORB,
#line 12838
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12837
            .ability = ABILITY_GUTS,
#line 12836
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12839
                MOVE_MEGAHORN,
                MOVE_SUBMISSION,
                MOVE_SMART_STRIKE,
                MOVE_BULK_UP,
            },
            },
            {
#line 12844
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12847
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 12846
            .ability = ABILITY_CHLOROPHYLL,
#line 12845
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12848
                MOVE_POLLEN_PUFF,
                MOVE_ENERGY_BALL,
                MOVE_MOONBLAST,
                MOVE_AFTER_YOU,
            },
            },
            {
#line 12853
            .species = SPECIES_VOLCARONA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12853
            .heldItem = ITEM_SITRUS_BERRY,
#line 12856
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 12855
            .ability = ABILITY_OVERCOAT,
#line 12854
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12857
                MOVE_HEAT_WAVE,
                MOVE_STRUGGLE_BUG,
                MOVE_RAGE_POWDER,
                MOVE_QUIVER_DANCE,
            },
            },
        },
    },
#line 12862
    [TRAINER_LEO] =
    {
#line 12863
        .trainerName = _("LEO"),
#line 12864
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 12865
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 12867
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12868
        .doubleBattle = TRUE,
#line 12869
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12871
            .species = SPECIES_SNORUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12873
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12872
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12875
            .species = SPECIES_NINETALES_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12877
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12876
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12879
            .species = SPECIES_GOGOAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12881
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12880
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12883
    [TRAINER_SASHA] =
    {
#line 12884
        .trainerName = _("SASHA"),
#line 12885
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 12886
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 12887
F_TRAINER_FEMALE | 
#line 12888
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12889
        .doubleBattle = TRUE,
#line 12890
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12892
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12894
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12893
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12896
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12898
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12897
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12900
            .species = SPECIES_BRAVIARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12902
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12901
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12904
    [TRAINER_VLAD] =
    {
#line 12905
        .trainerName = _("VLAD"),
#line 12906
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 12907
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 12909
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12910
        .doubleBattle = TRUE,
#line 12911
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12913
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12915
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12914
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12917
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12919
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12918
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12921
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12923
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12922
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12925
    [TRAINER_SHAE] =
    {
#line 12926
        .trainerName = _("SHAE"),
#line 12927
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 12928
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 12929
F_TRAINER_FEMALE | 
#line 12930
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12931
        .doubleBattle = TRUE,
#line 12932
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12934
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12936
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12935
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12938
            .species = SPECIES_SNORUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12940
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12939
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12942
            .species = SPECIES_DRAMPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12944
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12943
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12946
    [TRAINER_PEARL] =
    {
#line 12947
        .trainerName = _("PEARL"),
#line 12948
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 12949
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 12950
F_TRAINER_FEMALE | 
#line 12951
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12952
        .doubleBattle = TRUE,
#line 12953
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12955
            .species = SPECIES_BRAVIARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12957
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12956
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12959
            .species = SPECIES_GOGOAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12961
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12960
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12963
    [TRAINER_MATEO] =
    {
#line 12964
        .trainerName = _("MATEO"),
#line 12965
        .trainerClass = TRAINER_CLASS_HIKER,
#line 12966
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 12968
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12969
        .doubleBattle = TRUE,
#line 12970
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 12972
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12974
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12973
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12976
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12978
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12977
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12980
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12982
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12981
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12984
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12986
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12985
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12988
    [TRAINER_ERIK] =
    {
#line 12989
        .trainerName = _("ERIK"),
#line 12990
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 12991
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 12993
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12994
        .doubleBattle = TRUE,
#line 12995
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12997
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12999
            .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
#line 12998
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 13001
            .species = SPECIES_SANDSLASH_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13003
            .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
#line 13002
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 13005
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13007
            .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
#line 13006
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
