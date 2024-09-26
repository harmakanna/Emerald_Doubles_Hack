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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 114
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 116
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 115
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 118
    [TRAINER_GRUNT_AQUA_HIDEOUT_2] =
    {
#line 119
        .trainerName = _("GRUNT"),
#line 120
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 121
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 123
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 124
        .doubleBattle = TRUE,
#line 125
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 127
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 129
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 128
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 131
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 133
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 132
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 135
    [TRAINER_GRUNT_AQUA_HIDEOUT_3] =
    {
#line 136
        .trainerName = _("GRUNT"),
#line 137
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 138
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 140
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 141
        .doubleBattle = TRUE,
#line 142
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 144
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 146
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 145
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 148
    [TRAINER_GRUNT_AQUA_HIDEOUT_4] =
    {
#line 149
        .trainerName = _("GRUNT"),
#line 150
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 151
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 153
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 154
        .doubleBattle = TRUE,
#line 155
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 157
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 159
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 158
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 161
    [TRAINER_GRUNT_SEAFLOOR_CAVERN_1] =
    {
#line 162
        .trainerName = _("GRUNT"),
#line 163
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 164
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 166
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 167
        .doubleBattle = TRUE,
#line 168
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 170
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 172
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 171
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 174
    [TRAINER_GRUNT_SEAFLOOR_CAVERN_2] =
    {
#line 175
        .trainerName = _("GRUNT"),
#line 176
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 177
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 179
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 180
        .doubleBattle = TRUE,
#line 181
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 183
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 185
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 184
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 187
    [TRAINER_GRUNT_SEAFLOOR_CAVERN_3] =
    {
#line 188
        .trainerName = _("GRUNT"),
#line 189
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 190
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 192
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 193
        .doubleBattle = TRUE,
#line 194
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 196
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 198
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 197
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 200
    [TRAINER_GABRIELLE_1] =
    {
#line 201
        .trainerName = _("GABRIELLE"),
#line 202
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 203
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 204
F_TRAINER_FEMALE | 
#line 205
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 206
        .doubleBattle = TRUE,
#line 207
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 209
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 211
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 210
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 213
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 215
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 214
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 217
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 219
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 218
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 221
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 223
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 222
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 225
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 227
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 226
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 229
    [TRAINER_GRUNT_PETALBURG_WOODS] =
    {
#line 230
        .trainerName = _("GRUNT"),
#line 231
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 232
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 234
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 235
        .doubleBattle = TRUE,
#line 236
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 238
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 240
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 239
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 242
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 244
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 243
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 246
    [TRAINER_MARCEL] =
    {
#line 247
        .trainerName = _("MARCEL"),
#line 248
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 249
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 251
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 252
        .doubleBattle = TRUE,
#line 253
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 255
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 257
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 256
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 259
            .species = SPECIES_DRAMPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 261
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 260
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 263
            .species = SPECIES_CRABOMINABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 265
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 264
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 267
    [TRAINER_ALBERTO] =
    {
#line 268
        .trainerName = _("ALBERTO"),
#line 269
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 270
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 272
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 273
        .doubleBattle = TRUE,
#line 274
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 276
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 278
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 277
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 280
            .species = SPECIES_SQUAWKABILLY_WHITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 282
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 281
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 284
            .species = SPECIES_CHATOT_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 286
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 285
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 288
    [TRAINER_ED] =
    {
#line 289
        .trainerName = _("ED"),
#line 290
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 291
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender = 
#line 293
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 294
        .doubleBattle = TRUE,
#line 295
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 297
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 299
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 298
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 301
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 303
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 302
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 305
    [TRAINER_GRUNT_SEAFLOOR_CAVERN_4] =
    {
#line 306
        .trainerName = _("GRUNT"),
#line 307
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 308
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 309
F_TRAINER_FEMALE | 
#line 310
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 311
        .doubleBattle = TRUE,
#line 312
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 314
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 316
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 315
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 318
    [TRAINER_DECLAN] =
    {
#line 319
        .trainerName = _("DECLAN"),
#line 320
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 321
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 323
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 324
        .doubleBattle = TRUE,
#line 325
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 327
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 329
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 328
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 331
    [TRAINER_GRUNT_RUSTURF_TUNNEL] =
    {
#line 332
        .trainerName = _("GRUNT"),
#line 333
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 334
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 336
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 337
        .doubleBattle = TRUE,
#line 338
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 340
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 342
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 341
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 344
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 346
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 345
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 348
    [TRAINER_GRUNT_WEATHER_INST_1] =
    {
#line 349
        .trainerName = _("GRUNT"),
#line 350
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 351
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 353
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 354
        .doubleBattle = TRUE,
#line 355
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 357
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 359
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 358
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 361
            .species = SPECIES_WIMPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 363
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 362
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 365
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 367
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 366
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 369
    [TRAINER_GRUNT_WEATHER_INST_2] =
    {
#line 370
        .trainerName = _("GRUNT"),
#line 371
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 372
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 374
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 375
        .doubleBattle = TRUE,
#line 376
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 378
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 380
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 379
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 382
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 384
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 383
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 386
    [TRAINER_GRUNT_WEATHER_INST_3] =
    {
#line 387
        .trainerName = _("GRUNT"),
#line 388
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 389
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 391
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 392
        .doubleBattle = TRUE,
#line 393
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 395
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 397
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 396
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 399
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 401
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 400
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 403
            .species = SPECIES_SANDYGAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 405
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 404
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 407
    [TRAINER_GRUNT_MUSEUM_1] =
    {
#line 408
        .trainerName = _("GRUNT"),
#line 409
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 410
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 412
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 413
        .doubleBattle = TRUE,
#line 414
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 416
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 418
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 417
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 420
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 422
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 421
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 424
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 426
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 425
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 428
    [TRAINER_GRUNT_MUSEUM_2] =
    {
#line 429
        .trainerName = _("GRUNT"),
#line 430
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 431
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 433
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 434
        .doubleBattle = TRUE,
#line 435
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 437
            .species = SPECIES_WIMPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 439
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 438
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 441
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 443
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 442
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 445
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 447
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 446
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 449
    [TRAINER_GRUNT_SPACE_CENTER_1] =
    {
#line 450
        .trainerName = _("GRUNT"),
#line 451
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 452
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 454
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 455
        .doubleBattle = TRUE,
#line 456
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 458
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 460
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 459
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 462
    [TRAINER_GRUNT_MT_PYRE_1] =
    {
#line 463
        .trainerName = _("GRUNT"),
#line 464
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 465
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 467
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 468
        .doubleBattle = TRUE,
#line 469
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 471
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 473
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 472
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 475
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 477
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 476
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 479
    [TRAINER_GRUNT_MT_PYRE_2] =
    {
#line 480
        .trainerName = _("GRUNT"),
#line 481
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 482
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 484
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 485
        .doubleBattle = TRUE,
#line 486
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 488
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 490
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 489
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 492
            .species = SPECIES_SANDYGAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 494
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 493
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 496
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 498
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 497
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 500
    [TRAINER_GRUNT_MT_PYRE_3] =
    {
#line 501
        .trainerName = _("GRUNT"),
#line 502
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 503
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 505
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 506
        .doubleBattle = TRUE,
#line 507
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 509
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 511
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 510
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 513
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 515
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 514
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 517
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 519
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 518
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 521
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 523
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 522
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 525
    [TRAINER_GRUNT_WEATHER_INST_4] =
    {
#line 526
        .trainerName = _("GRUNT"),
#line 527
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 528
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 529
F_TRAINER_FEMALE | 
#line 530
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 531
        .doubleBattle = TRUE,
#line 532
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 534
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 536
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 535
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 538
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 540
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 539
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 542
    [TRAINER_GRUNT_AQUA_HIDEOUT_5] =
    {
#line 543
        .trainerName = _("GRUNT"),
#line 544
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 545
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 546
F_TRAINER_FEMALE | 
#line 547
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 548
        .doubleBattle = TRUE,
#line 549
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 551
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 553
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 552
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 555
    [TRAINER_GRUNT_AQUA_HIDEOUT_6] =
    {
#line 556
        .trainerName = _("GRUNT"),
#line 557
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 558
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 559
F_TRAINER_FEMALE | 
#line 560
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 561
        .doubleBattle = TRUE,
#line 562
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 564
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 566
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 565
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 568
    [TRAINER_FREDRICK] =
    {
#line 569
        .trainerName = _("FREDRICK"),
#line 570
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 571
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender = 
#line 573
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 574
        .doubleBattle = TRUE,
#line 575
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 577
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 579
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 578
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 581
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 583
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 582
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 585
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 587
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 586
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 589
    [TRAINER_MATT] =
    {
#line 590
        .trainerName = _("MATT"),
#line 591
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 592
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_M,
        .encounterMusic_gender = 
#line 594
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 595
        .doubleBattle = TRUE,
#line 596
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 598
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 600
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 599
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 602
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 604
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 603
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 606
    [TRAINER_ZANDER] =
    {
#line 607
        .trainerName = _("ZANDER"),
#line 608
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 609
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 611
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 612
        .doubleBattle = TRUE,
#line 613
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 615
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 617
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 616
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 619
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 621
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 620
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 623
    [TRAINER_SHELLY_WEATHER_INSTITUTE] =
    {
#line 624
        .trainerName = _("SHELLY"),
#line 625
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 626
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender = 
#line 627
F_TRAINER_FEMALE | 
#line 628
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 629
        .doubleBattle = TRUE,
#line 630
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 632
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 635
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 634
            .ability = ABILITY_SHELL_ARMOR,
#line 633
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 636
                MOVE_CLAMP,
                MOVE_BLIZZARD,
                MOVE_IRON_DEFENSE,
                MOVE_SCALD,
            },
            },
            {
#line 641
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 644
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 643
            .ability = ABILITY_INTIMIDATE,
#line 642
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 645
                MOVE_ICE_FANG,
                MOVE_SUCKER_PUNCH,
                MOVE_IRON_HEAD,
                MOVE_FAKE_TEARS,
            },
            },
            {
#line 650
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 650
            .heldItem = ITEM_EVIOLITE,
#line 653
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 652
            .ability = ABILITY_SERENE_GRACE,
#line 651
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 654
                MOVE_AIR_SLASH,
                MOVE_EXTRASENSORY,
                MOVE_DAZZLING_GLEAM,
                MOVE_LIFE_DEW,
            },
            },
            {
#line 659
            .species = SPECIES_KILOWATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 662
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 661
            .ability = ABILITY_VOLT_ABSORB,
#line 660
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 663
                MOVE_AIR_CUTTER,
                MOVE_SHOCK_WAVE,
                MOVE_ROOST,
                MOVE_AGILITY,
            },
            },
            {
#line 668
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 668
            .heldItem = ITEM_CHESTO_BERRY,
#line 671
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 670
            .ability = ABILITY_ROCK_HEAD,
#line 669
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 672
                MOVE_DOUBLE_EDGE,
                MOVE_WATERFALL,
                MOVE_ROCK_SLIDE,
                MOVE_REST,
            },
            },
        },
    },
#line 677
    [TRAINER_SHELLY_SEAFLOOR_CAVERN] =
    {
#line 678
        .trainerName = _("SHELLY"),
#line 679
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 680
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender = 
#line 681
F_TRAINER_FEMALE | 
#line 682
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 683
        .doubleBattle = TRUE,
#line 684
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 686
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 688
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 687
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 690
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 692
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 691
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 694
    [TRAINER_ARCHIE] =
    {
#line 695
        .trainerName = _("ARCHIE"),
#line 696
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 697
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        .encounterMusic_gender = 
#line 699
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 700
        .doubleBattle = TRUE,
#line 701
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 703
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 705
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 704
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 707
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 709
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 708
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 711
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 713
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 712
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 715
    [TRAINER_LEAH] =
    {
#line 716
        .trainerName = _("LEAH"),
#line 717
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 718
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 719
F_TRAINER_FEMALE | 
#line 720
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 721
        .doubleBattle = TRUE,
#line 722
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 724
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 726
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 725
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 728
            .species = SPECIES_ORICORIO_SENSU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 730
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 729
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 732
    [TRAINER_DAISY] =
    {
#line 733
        .trainerName = _("DAISY"),
#line 734
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 735
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender = 
#line 736
F_TRAINER_FEMALE | 
#line 737
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 738
        .doubleBattle = TRUE,
#line 739
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 741
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 743
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 742
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 745
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 747
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 746
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 749
    [TRAINER_ROSE_1] =
    {
#line 750
        .trainerName = _("ROSE"),
#line 751
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 752
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender = 
#line 753
F_TRAINER_FEMALE | 
#line 754
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 755
        .doubleBattle = TRUE,
#line 756
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 758
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 760
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 759
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 762
            .species = SPECIES_SUNKERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 764
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 763
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 766
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 768
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 767
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 770
    [TRAINER_FELIX] =
    {
#line 771
        .trainerName = _("FELIX"),
#line 772
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 773
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 775
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 776
        .doubleBattle = TRUE,
#line 777
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 779
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 781
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 780
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 782
                MOVE_PSYCHIC,
            },
            },
            {
#line 784
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 786
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 785
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 787
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 790
    [TRAINER_VIOLET] =
    {
#line 791
        .trainerName = _("VIOLET"),
#line 792
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 793
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender = 
#line 794
F_TRAINER_FEMALE | 
#line 795
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 796
        .doubleBattle = TRUE,
#line 797
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 799
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 801
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 800
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 803
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 805
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 804
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 807
    [TRAINER_DUSTY_1] =
    {
#line 808
        .trainerName = _("DUSTY"),
#line 809
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 810
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 812
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 813
        .doubleBattle = TRUE,
#line 814
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 816
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 818
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 817
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 819
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
            {
#line 824
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 826
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 825
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 827
                MOVE_FURY_SWIPES,
                MOVE_METAL_CLAW,
                MOVE_DIG,
                MOVE_RAPID_SPIN,
            },
            },
            {
#line 832
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 834
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 833
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 835
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 840
    [TRAINER_CHIP] =
    {
#line 841
        .trainerName = _("CHIP"),
#line 842
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 843
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 845
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 846
        .doubleBattle = TRUE,
#line 847
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 849
            .species = SPECIES_GRAVELER_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 851
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 850
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 853
            .species = SPECIES_GRAVELER_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 855
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 854
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 857
            .species = SPECIES_GRAVELER_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 859
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 858
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 861
    [TRAINER_FOSTER] =
    {
#line 862
        .trainerName = _("FOSTER"),
#line 863
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 864
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 866
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 867
        .doubleBattle = TRUE,
#line 868
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 870
            .species = SPECIES_CUFANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 872
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 871
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 874
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 876
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 875
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 878
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 880
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 879
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 881
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 886
    [TRAINER_GABBY_AND_TY_1] =
    {
#line 887
        .trainerName = _("GABBY & TY"),
#line 888
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 889
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender = 
#line 891
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 892
        .doubleBattle = TRUE,
#line 893
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 895
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 897
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 896
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 899
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 901
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 900
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 903
    [TRAINER_GABBY_AND_TY_2] =
    {
#line 904
        .trainerName = _("GABBY & TY"),
#line 905
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 906
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender = 
#line 908
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 909
        .doubleBattle = TRUE,
#line 910
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 912
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 914
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 913
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 916
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 918
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 917
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 920
    [TRAINER_GABBY_AND_TY_3] =
    {
#line 921
        .trainerName = _("GABBY & TY"),
#line 922
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 923
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender = 
#line 925
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 926
        .doubleBattle = TRUE,
#line 927
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 929
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 931
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 930
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 933
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 935
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 934
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 937
    [TRAINER_GABBY_AND_TY_4] =
    {
#line 938
        .trainerName = _("GABBY & TY"),
#line 939
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 940
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender = 
#line 942
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 943
        .doubleBattle = TRUE,
#line 944
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 946
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 948
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 947
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 950
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 952
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 951
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 954
    [TRAINER_GABBY_AND_TY_5] =
    {
#line 955
        .trainerName = _("GABBY & TY"),
#line 956
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 957
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender = 
#line 959
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 960
        .doubleBattle = TRUE,
#line 961
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 963
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 965
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 964
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 967
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 969
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 968
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 971
    [TRAINER_GABBY_AND_TY_6] =
    {
#line 972
        .trainerName = _("GABBY & TY"),
#line 973
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 974
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender = 
#line 976
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 977
        .doubleBattle = TRUE,
#line 978
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 980
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 982
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 981
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 983
                MOVE_SONIC_BOOM,
                MOVE_THUNDER_WAVE,
                MOVE_METAL_SOUND,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 988
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 990
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 989
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 991
                MOVE_ASTONISH,
                MOVE_STOMP,
                MOVE_SUPERSONIC,
                MOVE_HYPER_VOICE,
            },
            },
        },
    },
#line 996
    [TRAINER_LOLA_1] =
    {
#line 997
        .trainerName = _("LOLA"),
#line 998
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 999
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender = 
#line 1000
F_TRAINER_FEMALE | 
#line 1001
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1002
        .doubleBattle = TRUE,
#line 1003
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1005
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1007
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1006
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1009
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1011
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1010
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1013
    [TRAINER_AUSTINA] =
    {
#line 1014
        .trainerName = _("AUSTINA"),
#line 1015
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 1016
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender = 
#line 1017
F_TRAINER_FEMALE | 
#line 1018
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1019
        .doubleBattle = TRUE,
#line 1020
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1022
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1024
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1023
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1026
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1028
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1027
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1030
    [TRAINER_GWEN] =
    {
#line 1031
        .trainerName = _("GWEN"),
#line 1032
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 1033
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender = 
#line 1034
F_TRAINER_FEMALE | 
#line 1035
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1036
        .doubleBattle = TRUE,
#line 1037
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1039
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1041
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1040
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1043
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1045
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1044
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1047
    [TRAINER_RICKY_1] =
    {
#line 1048
        .trainerName = _("RICKY"),
#line 1049
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 1050
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender = 
#line 1052
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1053
        .doubleBattle = TRUE,
#line 1054
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1056
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1058
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1057
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1059
                MOVE_SAND_ATTACK,
                MOVE_HEADBUTT,
                MOVE_TAIL_WHIP,
                MOVE_SURF,
            },
            },
            {
#line 1064
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1066
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1065
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1068
    [TRAINER_SIMON] =
    {
#line 1069
        .trainerName = _("SIMON"),
#line 1070
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 1071
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender = 
#line 1073
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1074
        .doubleBattle = TRUE,
#line 1075
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1077
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1079
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1078
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1081
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1083
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1082
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1085
    [TRAINER_CHARLIE] =
    {
#line 1086
        .trainerName = _("CHARLIE"),
#line 1087
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 1088
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender = 
#line 1090
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1091
        .doubleBattle = TRUE,
#line 1092
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1094
            .species = SPECIES_TADBULB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1096
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1095
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1098
            .species = SPECIES_SEEL_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1100
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1099
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1102
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1104
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 1103
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1105
                MOVE_SAND_ATTACK,
                MOVE_PIN_MISSILE,
                MOVE_TAIL_WHIP,
                MOVE_SURF,
            },
            },
        },
    },
#line 1110
    [TRAINER_RANDALL] =
    {
#line 1111
        .trainerName = _("RANDALL"),
#line 1112
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1113
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1115
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1116
        .doubleBattle = TRUE,
#line 1117
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1119
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1119
            .heldItem = ITEM_AGUAV_BERRY,
#line 1123
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1121
            .ability = ABILITY_GLUTTONY,
#line 1120
            .lvl = 29,
#line 1122
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1124
                MOVE_BELLY_DRUM,
                MOVE_EXTREME_SPEED,
                MOVE_SHADOW_CLAW,
            },
            },
            {
#line 1128
            .species = SPECIES_GRAFAIAI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1128
            .heldItem = ITEM_WIKI_BERRY,
#line 1132
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1130
            .ability = ABILITY_UNBURDEN,
#line 1129
            .lvl = 29,
#line 1131
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1133
                MOVE_FLING,
                MOVE_SLASH,
                MOVE_FOUL_PLAY,
            },
            },
        },
    },
#line 1137
    [TRAINER_PARKER] =
    {
#line 1138
        .trainerName = _("PARKER"),
#line 1139
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1140
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1142
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1143
        .doubleBattle = TRUE,
#line 1144
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1146
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1149
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1148
            .ability = ABILITY_NORMALIZE,
#line 1147
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1150
                MOVE_HYPER_VOICE,
                MOVE_FAKE_OUT,
                MOVE_THUNDER_WAVE,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 1155
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1158
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1157
            .ability = ABILITY_SCRAPPY,
#line 1156
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1159
                MOVE_HYPER_VOICE,
                MOVE_BRICK_BREAK,
                MOVE_WORK_UP,
            },
            },
        },
    },
#line 1163
    [TRAINER_GEORGE] =
    {
#line 1164
        .trainerName = _("GEORGE"),
#line 1165
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1166
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1168
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1169
        .doubleBattle = TRUE,
#line 1170
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1172
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1175
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1174
            .ability = ABILITY_VITAL_SPIRIT,
#line 1173
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1176
                MOVE_COUNTER,
                MOVE_SLACK_OFF,
                MOVE_SLASH,
                MOVE_SHADOW_CLAW,
            },
            },
            {
#line 1181
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1184
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1183
            .ability = ABILITY_INNER_FOCUS,
#line 1182
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1185
                MOVE_MIRROR_COAT,
                MOVE_MILK_DRINK,
                MOVE_PSYBEAM,
            },
            },
        },
    },
#line 1189
    [TRAINER_BERKE] =
    {
#line 1190
        .trainerName = _("BERKE"),
#line 1191
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1192
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1194
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1195
        .doubleBattle = TRUE,
#line 1196
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1198
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1201
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1200
            .ability = ABILITY_CHEERLEADER,
#line 1199
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1202
                MOVE_RETURN,
                MOVE_ROUND,
                MOVE_HYPER_VOICE,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 1207
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1210
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1209
            .ability = ABILITY_FRIEND_GUARD,
#line 1208
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1211
                MOVE_RETURN,
                MOVE_ROUND,
                MOVE_DAZZLING_GLEAM,
                MOVE_HEAL_PULSE,
            },
            },
        },
    },
#line 1216
    [TRAINER_BRAXTON] =
    {
#line 1217
        .trainerName = _("BRAXTON"),
#line 1218
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1219
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1221
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1222
        .doubleBattle = TRUE,
#line 1223
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1225
            .species = SPECIES_GRAFAIAI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1228
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1227
            .ability = ABILITY_PRANKSTER,
#line 1226
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1229
                MOVE_ACID_SPRAY,
                MOVE_SWAGGER,
                MOVE_PARTING_SHOT,
                MOVE_METRONOME,
            },
            },
            {
#line 1234
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1234
            .heldItem = ITEM_THROAT_SPRAY,
#line 1237
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1236
            .ability = ABILITY_SCRAPPY,
#line 1235
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1238
                MOVE_HYPER_VOICE,
                MOVE_ROAR,
                MOVE_REST,
                MOVE_SLEEP_TALK,
            },
            },
            {
#line 1243
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1246
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1245
            .ability = ABILITY_WIND_RIDER,
#line 1244
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1247
                MOVE_TAILWIND,
                MOVE_AIR_CUTTER,
                MOVE_RAZOR_LEAF,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 1252
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1252
            .heldItem = ITEM_MAGNET,
#line 1255
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1254
            .ability = ABILITY_STATIC,
#line 1253
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1256
                MOVE_SHOCK_WAVE,
                MOVE_THUNDER_WAVE,
                MOVE_DISCHARGE,
                MOVE_SELFDESTRUCT,
            },
            },
            {
#line 1261
            .species = SPECIES_COPPERAJAH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1261
            .heldItem = ITEM_ASSAULT_VEST,
#line 1264
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1263
            .ability = ABILITY_SHEER_FORCE,
#line 1262
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1265
                MOVE_ROLLOUT,
                MOVE_STOMP,
                MOVE_BULLDOZE,
                MOVE_HARD_PRESS,
            },
            },
        },
    },
#line 1270
    [TRAINER_VINCENT] =
    {
#line 1271
        .trainerName = _("VINCENT"),
#line 1272
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1273
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1275
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1276
        .doubleBattle = TRUE,
#line 1277
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1279
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1281
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1280
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1283
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1285
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1284
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1287
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1289
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1288
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1291
    [TRAINER_LEROY] =
    {
#line 1292
        .trainerName = _("LEROY"),
#line 1293
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1294
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1296
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1297
        .doubleBattle = TRUE,
#line 1298
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1300
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1302
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1301
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1304
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1306
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1305
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1308
    [TRAINER_WILTON_1] =
    {
#line 1309
        .trainerName = _("WILTON"),
#line 1310
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1311
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1313
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1314
        .doubleBattle = TRUE,
#line 1315
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1317
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1320
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 1319
            .ability = ABILITY_GUTS,
#line 1318
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1321
                MOVE_BULLDOZE,
                MOVE_FAKE_OUT,
                MOVE_BULLET_PUNCH,
                MOVE_FORCE_PALM,
            },
            },
            {
#line 1326
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1329
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 1328
            .ability = ABILITY_LEVITATE,
#line 1327
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1330
                MOVE_TAILWIND,
                MOVE_PSYBEAM,
                MOVE_YAWN,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 1335
            .species = SPECIES_SCYTHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1338
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 1337
            .ability = ABILITY_SWARM,
#line 1336
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1339
                MOVE_POUNCE,
                MOVE_WING_ATTACK,
                MOVE_QUICK_ATTACK,
                MOVE_QUICK_GUARD,
            },
            },
        },
    },
#line 1344
    [TRAINER_EDGAR] =
    {
#line 1345
        .trainerName = _("EDGAR"),
#line 1346
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1347
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1349
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1350
        .doubleBattle = TRUE,
#line 1351
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1353
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1355
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1354
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1357
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1359
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1358
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1361
    [TRAINER_ALBERT] =
    {
#line 1362
        .trainerName = _("ALBERT"),
#line 1363
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1364
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1366
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1367
        .doubleBattle = TRUE,
#line 1368
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1370
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1372
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1371
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1374
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1376
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1375
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1378
    [TRAINER_SAMUEL] =
    {
#line 1379
        .trainerName = _("SAMUEL"),
#line 1380
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1381
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1383
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1384
        .doubleBattle = TRUE,
#line 1385
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1387
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1389
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1388
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1391
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1393
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1392
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1395
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1397
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1396
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1399
    [TRAINER_VITO] =
    {
#line 1400
        .trainerName = _("VITO"),
#line 1401
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1402
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1404
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1405
        .doubleBattle = TRUE,
#line 1406
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1408
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1410
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1409
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1412
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1414
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1413
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1416
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1418
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1417
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1420
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1422
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1421
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1424
    [TRAINER_OWEN] =
    {
#line 1425
        .trainerName = _("OWEN"),
#line 1426
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1427
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1429
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1430
        .doubleBattle = TRUE,
#line 1431
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1433
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1435
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1434
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1437
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1439
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1438
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1441
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1443
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1442
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1445
    [TRAINER_WARREN] =
    {
#line 1446
        .trainerName = _("WARREN"),
#line 1447
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1448
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1450
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1451
        .doubleBattle = TRUE,
#line 1452
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1454
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1456
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1455
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1458
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1460
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1459
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1462
    [TRAINER_MARY] =
    {
#line 1463
        .trainerName = _("MARY"),
#line 1464
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1465
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1466
F_TRAINER_FEMALE | 
#line 1467
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1468
        .doubleBattle = TRUE,
#line 1469
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1471
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1474
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1473
            .ability = ABILITY_TANGLED_FEET,
#line 1472
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1475
                MOVE_METRONOME,
            },
            },
            {
#line 1477
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1480
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1479
            .ability = ABILITY_TANGLED_FEET,
#line 1478
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1481
                MOVE_METRONOME,
            },
            },
            {
#line 1483
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1486
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1485
            .ability = ABILITY_TANGLED_FEET,
#line 1484
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1487
                MOVE_METRONOME,
            },
            },
            {
#line 1489
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1492
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1491
            .ability = ABILITY_TANGLED_FEET,
#line 1490
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1493
                MOVE_METRONOME,
            },
            },
            {
#line 1495
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1498
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1497
            .ability = ABILITY_TANGLED_FEET,
#line 1496
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1499
                MOVE_METRONOME,
            },
            },
            {
#line 1501
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1504
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1503
            .ability = ABILITY_TANGLED_FEET,
#line 1502
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1505
                MOVE_METRONOME,
            },
            },
        },
    },
#line 1507
    [TRAINER_ALEXIA] =
    {
#line 1508
        .trainerName = _("ALEXIA"),
#line 1509
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1510
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1511
F_TRAINER_FEMALE | 
#line 1512
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1513
        .doubleBattle = TRUE,
#line 1514
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1516
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1519
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1518
            .ability = ABILITY_VITAL_SPIRIT,
#line 1517
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1520
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_DRAIN_PUNCH,
            },
            },
            {
#line 1525
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1528
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1527
            .ability = ABILITY_SOUNDPROOF,
#line 1526
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1529
                MOVE_WATER_PULSE,
                MOVE_SHOCK_WAVE,
                MOVE_EXTRASENSORY,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 1534
    [TRAINER_JODY] =
    {
#line 1535
        .trainerName = _("JODY"),
#line 1536
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1537
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1538
F_TRAINER_FEMALE | 
#line 1539
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1540
        .doubleBattle = TRUE,
#line 1541
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN | AI_FLAG_PREFER_BATON_PASS,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1543
            .species = SPECIES_SQUAWKABILLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1543
            .heldItem = ITEM_LOADED_DICE,
#line 1546
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1545
            .ability = ABILITY_INTIMIDATE,
#line 1544
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1547
                MOVE_PARTING_SHOT,
                MOVE_WING_ATTACK,
                MOVE_FURY_ATTACK,
                MOVE_BATON_PASS,
            },
            },
            {
#line 1552
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1555
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1554
            .ability = ABILITY_CONTRARY,
#line 1553
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1556
                MOVE_DIZZY_PUNCH,
                MOVE_ICY_WIND,
                MOVE_PSYBEAM,
                MOVE_BATON_PASS,
            },
            },
            {
#line 1561
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1564
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1563
            .ability = ABILITY_PSYCH_OUT,
#line 1562
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1565
                MOVE_SKILL_SWAP,
                MOVE_CALM_MIND,
                MOVE_STOMP,
                MOVE_BATON_PASS,
            },
            },
            {
#line 1570
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1573
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1572
            .ability = ABILITY_COMPETITIVE,
#line 1571
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1574
                MOVE_CHARM,
                MOVE_HYPER_VOICE,
                MOVE_CALM_MIND,
                MOVE_BATON_PASS,
            },
            },
        },
    },
#line 1579
    [TRAINER_WENDY] =
    {
#line 1580
        .trainerName = _("WENDY"),
#line 1581
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1582
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1583
F_TRAINER_FEMALE | 
#line 1584
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1585
        .doubleBattle = TRUE,
#line 1586
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1588
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1591
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1590
            .ability = ABILITY_INTIMIDATE,
#line 1589
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1592
                MOVE_ATTRACT,
                MOVE_TAUNT,
                MOVE_METAL_CLAW,
                MOVE_ASSURANCE,
            },
            },
            {
#line 1597
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1597
            .heldItem = ITEM_FLAME_ORB,
#line 1600
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1599
            .ability = ABILITY_GUTS,
#line 1598
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1601
                MOVE_FACADE,
                MOVE_AERIAL_ACE,
                MOVE_AGILITY,
                MOVE_REVERSAL,
            },
            },
            {
#line 1606
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1606
            .heldItem = ITEM_NEVERMELTICE,
#line 1609
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1608
            .ability = ABILITY_ICE_FACE,
#line 1607
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1610
                MOVE_SNOWSCAPE,
                MOVE_AVALANCHE,
                MOVE_BODY_SLAM,
                MOVE_REST,
            },
            },
            {
#line 1615
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1618
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1617
            .ability = ABILITY_LIQUID_OOZE,
#line 1616
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1619
                MOVE_ACID_SPRAY,
                MOVE_DRAINING_KISS,
                MOVE_POISON_GAS,
                MOVE_ENCORE,
            },
            },
            {
#line 1624
            .species = SPECIES_ROSERADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1624
            .heldItem = ITEM_BLACK_SLUDGE,
#line 1627
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1626
            .ability = ABILITY_POISON_POINT,
#line 1625
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1628
                MOVE_VENOSHOCK,
                MOVE_MAGICAL_LEAF,
                MOVE_WEATHER_BALL,
                MOVE_INGRAIN,
            },
            },
        },
    },
#line 1633
    [TRAINER_KEIRA] =
    {
#line 1634
        .trainerName = _("KEIRA"),
#line 1635
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1636
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1637
F_TRAINER_FEMALE | 
#line 1638
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1639
        .doubleBattle = TRUE,
#line 1640
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1642
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1644
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1643
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1646
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1648
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1647
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1650
    [TRAINER_BROOKE_1] =
    {
#line 1651
        .trainerName = _("BROOKE"),
#line 1652
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1653
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1654
F_TRAINER_FEMALE | 
#line 1655
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1656
        .doubleBattle = TRUE,
#line 1657
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1659
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1662
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 1661
            .ability = ABILITY_INTIMIDATE,
#line 1660
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1663
                MOVE_FLAME_CHARGE,
                MOVE_BITE,
                MOVE_HOWL,
                MOVE_MORNING_SUN,
            },
            },
            {
#line 1668
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1671
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 1670
            .ability = ABILITY_PSYCH_OUT,
#line 1669
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1672
                MOVE_STOMP,
                MOVE_GUARD_SWAP,
                MOVE_CONFUSION,
                MOVE_REFLECT,
            },
            },
            {
#line 1677
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1680
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 1679
            .ability = ABILITY_HEALER,
#line 1678
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1681
                MOVE_FOLLOW_ME,
                MOVE_HELPING_HAND,
                MOVE_DRAINING_KISS,
                MOVE_MAGICAL_LEAF,
            },
            },
        },
    },
#line 1686
    [TRAINER_JENNIFER] =
    {
#line 1687
        .trainerName = _("JENNIFER"),
#line 1688
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1689
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1690
F_TRAINER_FEMALE | 
#line 1691
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1692
        .doubleBattle = TRUE,
#line 1693
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1695
            .species = SPECIES_YANMEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1697
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 1696
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1699
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1701
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 1700
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1703
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1705
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 1704
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1707
    [TRAINER_HOPE] =
    {
#line 1708
        .trainerName = _("HOPE"),
#line 1709
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1710
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1711
F_TRAINER_FEMALE | 
#line 1712
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1713
        .doubleBattle = TRUE,
#line 1714
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1716
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1718
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1717
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1720
    [TRAINER_SHANNON] =
    {
#line 1721
        .trainerName = _("SHANNON"),
#line 1722
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1723
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1724
F_TRAINER_FEMALE | 
#line 1725
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1726
        .doubleBattle = TRUE,
#line 1727
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1729
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1731
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1730
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1733
    [TRAINER_MICHELLE] =
    {
#line 1734
        .trainerName = _("MICHELLE"),
#line 1735
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1736
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1737
F_TRAINER_FEMALE | 
#line 1738
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1739
        .doubleBattle = TRUE,
#line 1740
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1742
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1744
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1743
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1746
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1748
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1747
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1750
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1752
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1751
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1754
    [TRAINER_CAROLINE] =
    {
#line 1755
        .trainerName = _("CAROLINE"),
#line 1756
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1757
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1758
F_TRAINER_FEMALE | 
#line 1759
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1760
        .doubleBattle = TRUE,
#line 1761
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1763
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1765
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1764
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1767
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1769
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1768
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1771
    [TRAINER_JULIE] =
    {
#line 1772
        .trainerName = _("JULIE"),
#line 1773
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1774
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1775
F_TRAINER_FEMALE | 
#line 1776
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1777
        .doubleBattle = TRUE,
#line 1778
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1780
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1782
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1781
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1784
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1786
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1785
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1788
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1790
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1789
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1792
    [TRAINER_PATRICIA] =
    {
#line 1793
        .trainerName = _("PATRICIA"),
#line 1794
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1795
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 1796
F_TRAINER_FEMALE | 
#line 1797
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1798
        .doubleBattle = TRUE,
#line 1799
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1801
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1803
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1802
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1805
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1807
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1806
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1809
    [TRAINER_KINDRA] =
    {
#line 1810
        .trainerName = _("KINDRA"),
#line 1811
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1812
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 1813
F_TRAINER_FEMALE | 
#line 1814
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1815
        .doubleBattle = TRUE,
#line 1816
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1818
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1820
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1819
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1822
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1824
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1823
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1826
    [TRAINER_TAMMY] =
    {
#line 1827
        .trainerName = _("TAMMY"),
#line 1828
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1829
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 1830
F_TRAINER_FEMALE | 
#line 1831
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1832
        .doubleBattle = TRUE,
#line 1833
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1835
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1837
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1836
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1839
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1841
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1840
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1843
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1845
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1844
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1847
    [TRAINER_VALERIE_1] =
    {
#line 1848
        .trainerName = _("VALERIE"),
#line 1849
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1850
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 1851
F_TRAINER_FEMALE | 
#line 1852
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1853
        .doubleBattle = TRUE,
#line 1854
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1856
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1858
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1857
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1860
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1862
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1861
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1864
    [TRAINER_TASHA] =
    {
#line 1865
        .trainerName = _("TASHA"),
#line 1866
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1867
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 1868
F_TRAINER_FEMALE | 
#line 1869
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1870
        .doubleBattle = TRUE,
#line 1871
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1873
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1875
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 1874
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1877
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1879
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 1878
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1881
    [TRAINER_CINDY_1] =
    {
#line 1882
        .trainerName = _("CINDY"),
#line 1883
        .trainerClass = TRAINER_CLASS_LADY,
#line 1884
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 1885
F_TRAINER_FEMALE | 
#line 1886
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1887
        .doubleBattle = TRUE,
#line 1888
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1890
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1890
            .heldItem = ITEM_NUGGET,
#line 1893
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1892
            .ability = ABILITY_WATER_BUBBLE,
#line 1891
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1895
            .species = SPECIES_BUDEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1895
            .heldItem = ITEM_NUGGET,
#line 1898
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1897
            .ability = ABILITY_NATURAL_CURE,
#line 1896
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1900
    [TRAINER_DAPHNE] =
    {
#line 1901
        .trainerName = _("DAPHNE"),
#line 1902
        .trainerClass = TRAINER_CLASS_LADY,
#line 1903
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 1904
F_TRAINER_FEMALE | 
#line 1905
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1906
        .doubleBattle = TRUE,
#line 1907
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1909
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1909
            .heldItem = ITEM_NUGGET,
#line 1911
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1910
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1912
                MOVE_ATTRACT,
                MOVE_SWEET_KISS,
                MOVE_FLAIL,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1917
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1917
            .heldItem = ITEM_NUGGET,
#line 1919
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1918
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1920
                MOVE_ATTRACT,
                MOVE_SAFEGUARD,
                MOVE_TAKE_DOWN,
                MOVE_WATER_PULSE,
            },
            },
        },
    },
#line 1925
    [TRAINER_GRUNT_SPACE_CENTER_2] =
    {
#line 1926
        .trainerName = _("GRUNT"),
#line 1927
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1928
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 1930
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1931
        .doubleBattle = TRUE,
#line 1932
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1934
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1936
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1935
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1938
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1940
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1939
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1942
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1944
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1943
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1946
    [TRAINER_BRIANNA] =
    {
#line 1947
        .trainerName = _("BRIANNA"),
#line 1948
        .trainerClass = TRAINER_CLASS_LADY,
#line 1949
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 1950
F_TRAINER_FEMALE | 
#line 1951
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1952
        .doubleBattle = TRUE,
#line 1953
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1955
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1955
            .heldItem = ITEM_NUGGET,
#line 1957
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 1956
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1959
    [TRAINER_NAOMI] =
    {
#line 1960
        .trainerName = _("NAOMI"),
#line 1961
        .trainerClass = TRAINER_CLASS_LADY,
#line 1962
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 1963
F_TRAINER_FEMALE | 
#line 1964
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1965
        .doubleBattle = TRUE,
#line 1966
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1968
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1968
            .heldItem = ITEM_NUGGET,
#line 1970
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1969
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1972
    [TRAINER_MELISSA] =
    {
#line 1973
        .trainerName = _("MELISSA"),
#line 1974
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1975
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 1976
F_TRAINER_FEMALE | 
#line 1977
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1978
        .doubleBattle = TRUE,
#line 1979
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1981
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1983
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1982
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1985
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1987
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1986
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1989
    [TRAINER_SHEILA] =
    {
#line 1990
        .trainerName = _("SHEILA"),
#line 1991
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1992
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 1993
F_TRAINER_FEMALE | 
#line 1994
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1995
        .doubleBattle = TRUE,
#line 1996
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1998
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2000
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1999
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2002
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2004
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2003
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2006
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2008
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2007
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2010
    [TRAINER_SHIRLEY] =
    {
#line 2011
        .trainerName = _("SHIRLEY"),
#line 2012
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2013
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2014
F_TRAINER_FEMALE | 
#line 2015
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2016
        .doubleBattle = TRUE,
#line 2017
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2019
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2021
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2020
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2023
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2025
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2024
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2027
    [TRAINER_JESSICA_1] =
    {
#line 2028
        .trainerName = _("JESSICA"),
#line 2029
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2030
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2031
F_TRAINER_FEMALE | 
#line 2032
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2033
        .doubleBattle = TRUE,
#line 2034
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2036
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2038
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2037
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2040
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2042
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2041
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2044
            .species = SPECIES_CHERRIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2046
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2045
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2048
    [TRAINER_CONNIE] =
    {
#line 2049
        .trainerName = _("CONNIE"),
#line 2050
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2051
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2052
F_TRAINER_FEMALE | 
#line 2053
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2054
        .doubleBattle = TRUE,
#line 2055
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2057
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2059
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2058
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2061
    [TRAINER_BRIDGET] =
    {
#line 2062
        .trainerName = _("BRIDGET"),
#line 2063
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2064
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2065
F_TRAINER_FEMALE | 
#line 2066
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2067
        .doubleBattle = TRUE,
#line 2068
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2070
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2072
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2071
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2074
    [TRAINER_OLIVIA] =
    {
#line 2075
        .trainerName = _("OLIVIA"),
#line 2076
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2077
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2078
F_TRAINER_FEMALE | 
#line 2079
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2080
        .doubleBattle = TRUE,
#line 2081
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2083
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2085
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2084
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2086
                MOVE_IRON_DEFENSE,
                MOVE_WHIRLPOOL,
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 2091
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2093
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2092
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2094
                MOVE_TAUNT,
                MOVE_CRABHAMMER,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 2098
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2100
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2099
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2101
                MOVE_UPROAR,
                MOVE_FURY_SWIPES,
                MOVE_FAKE_OUT,
                MOVE_WATER_PULSE,
            },
            },
        },
    },
#line 2106
    [TRAINER_TIFFANY] =
    {
#line 2107
        .trainerName = _("TIFFANY"),
#line 2108
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2109
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2110
F_TRAINER_FEMALE | 
#line 2111
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2112
        .doubleBattle = TRUE,
#line 2113
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2115
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2117
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2116
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2119
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2121
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2120
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2123
    [TRAINER_WINSTON_1] =
    {
#line 2124
        .trainerName = _("WINSTON"),
#line 2125
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 2126
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender = 
#line 2128
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2129
        .doubleBattle = TRUE,
#line 2130
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2132
            .species = SPECIES_SHROODLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2132
            .heldItem = ITEM_NUGGET,
#line 2134
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2133
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2136
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2136
            .heldItem = ITEM_NUGGET,
#line 2138
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2137
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2140
    [TRAINER_MOLLIE] =
    {
#line 2141
        .trainerName = _("MOLLIE"),
#line 2142
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 2143
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 2144
F_TRAINER_FEMALE | 
#line 2145
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2146
        .doubleBattle = TRUE,
#line 2147
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2149
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2151
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2150
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2153
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2155
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 2154
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2157
    [TRAINER_GARRET] =
    {
#line 2158
        .trainerName = _("GARRET"),
#line 2159
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 2160
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender = 
#line 2162
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2163
        .doubleBattle = TRUE,
#line 2164
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2166
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2166
            .heldItem = ITEM_NUGGET,
#line 2168
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2167
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2170
    [TRAINER_STEVE_1] =
    {
#line 2171
        .trainerName = _("STEVE"),
#line 2172
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2173
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender = 
#line 2175
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2176
        .doubleBattle = TRUE,
#line 2177
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2179
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2181
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2180
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2183
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2185
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2184
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2187
    [TRAINER_THALIA_1] =
    {
#line 2188
        .trainerName = _("THALIA"),
#line 2189
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2190
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2191
F_TRAINER_FEMALE | 
#line 2192
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2193
        .doubleBattle = TRUE,
#line 2194
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2196
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2198
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2197
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2200
            .species = SPECIES_SUNFLORA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2202
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2201
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2204
    [TRAINER_MARK] =
    {
#line 2205
        .trainerName = _("MARK"),
#line 2206
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2207
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender = 
#line 2209
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2210
        .doubleBattle = TRUE,
#line 2211
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2213
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2215
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2214
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2217
            .species = SPECIES_MAROWAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2219
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2218
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2221
    [TRAINER_GRUNT_MT_CHIMNEY_1] =
    {
#line 2222
        .trainerName = _("GRUNT"),
#line 2223
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 2224
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender = 
#line 2225
F_TRAINER_FEMALE | 
#line 2226
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 2227
        .doubleBattle = TRUE,
#line 2228
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2230
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2232
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2231
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2234
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2236
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2235
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2238
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2240
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2239
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2242
    [TRAINER_LUIS] =
    {
#line 2243
        .trainerName = _("LUIS"),
#line 2244
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2245
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2247
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2248
        .doubleBattle = TRUE,
#line 2249
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2251
            .species = SPECIES_TADBULB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2253
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2252
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2255
            .species = SPECIES_CRABRAWLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2257
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2256
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2259
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2261
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2260
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2263
    [TRAINER_DOMINIK] =
    {
#line 2264
        .trainerName = _("DOMINIK"),
#line 2265
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2266
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2268
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2269
        .doubleBattle = TRUE,
#line 2270
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2272
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2274
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2273
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2276
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2278
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2277
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2280
    [TRAINER_DOUGLAS] =
    {
#line 2281
        .trainerName = _("DOUGLAS"),
#line 2282
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2283
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2285
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2286
        .doubleBattle = TRUE,
#line 2287
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2289
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2291
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2290
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2293
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2295
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2294
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2297
    [TRAINER_DARRIN] =
    {
#line 2298
        .trainerName = _("DARRIN"),
#line 2299
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2300
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2302
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2303
        .doubleBattle = TRUE,
#line 2304
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2306
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2308
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2307
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2310
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2312
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2311
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2314
    [TRAINER_TONY_1] =
    {
#line 2315
        .trainerName = _("TONY"),
#line 2316
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2317
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2319
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2320
        .doubleBattle = TRUE,
#line 2321
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2323
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2325
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2324
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2327
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2329
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2328
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2331
    [TRAINER_JEROME] =
    {
#line 2332
        .trainerName = _("JEROME"),
#line 2333
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2334
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2336
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2337
        .doubleBattle = TRUE,
#line 2338
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2340
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2342
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2341
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2344
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2346
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2345
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2348
    [TRAINER_MATTHEW] =
    {
#line 2349
        .trainerName = _("MATTHEW"),
#line 2350
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2351
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2353
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2354
        .doubleBattle = TRUE,
#line 2355
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2357
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2359
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2358
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2361
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2363
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2362
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2365
    [TRAINER_DAVID] =
    {
#line 2366
        .trainerName = _("DAVID"),
#line 2367
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2368
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2370
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2371
        .doubleBattle = TRUE,
#line 2372
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2374
            .species = SPECIES_SKRELP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2376
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2375
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2378
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2380
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2379
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2382
    [TRAINER_SPENCER] =
    {
#line 2383
        .trainerName = _("SPENCER"),
#line 2384
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2385
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2387
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2388
        .doubleBattle = TRUE,
#line 2389
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2391
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2393
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2392
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2395
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2397
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2396
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2399
    [TRAINER_ROLAND] =
    {
#line 2400
        .trainerName = _("ROLAND"),
#line 2401
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2402
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2404
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2405
        .doubleBattle = TRUE,
#line 2406
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2408
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2410
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2409
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2412
    [TRAINER_NOLEN] =
    {
#line 2413
        .trainerName = _("NOLEN"),
#line 2414
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2415
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2417
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2418
        .doubleBattle = TRUE,
#line 2419
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2421
            .species = SPECIES_TENTACRUEL,
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
    [TRAINER_STAN] =
    {
#line 2426
        .trainerName = _("STAN"),
#line 2427
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2428
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2430
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2431
        .doubleBattle = TRUE,
#line 2432
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2434
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2436
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2435
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2438
    [TRAINER_BARRY] =
    {
#line 2439
        .trainerName = _("BARRY"),
#line 2440
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2441
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2443
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2444
        .doubleBattle = TRUE,
#line 2445
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2447
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2449
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2448
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2451
    [TRAINER_DEAN] =
    {
#line 2452
        .trainerName = _("DEAN"),
#line 2453
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2454
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2456
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2457
        .doubleBattle = TRUE,
#line 2458
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2460
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2462
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2461
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2464
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2466
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2465
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2468
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2470
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2469
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2472
    [TRAINER_RODNEY] =
    {
#line 2473
        .trainerName = _("RODNEY"),
#line 2474
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2475
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2477
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2478
        .doubleBattle = TRUE,
#line 2479
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2481
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2483
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2482
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2485
    [TRAINER_RICHARD] =
    {
#line 2486
        .trainerName = _("RICHARD"),
#line 2487
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2488
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2490
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2491
        .doubleBattle = TRUE,
#line 2492
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2494
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2496
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2495
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2498
    [TRAINER_HERMAN] =
    {
#line 2499
        .trainerName = _("HERMAN"),
#line 2500
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2501
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2503
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2504
        .doubleBattle = TRUE,
#line 2505
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2507
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2509
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2508
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2511
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2513
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2512
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2515
    [TRAINER_SANTIAGO] =
    {
#line 2516
        .trainerName = _("SANTIAGO"),
#line 2517
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2518
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2520
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2521
        .doubleBattle = TRUE,
#line 2522
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2524
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2526
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2525
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2528
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2530
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2529
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2532
    [TRAINER_GILBERT] =
    {
#line 2533
        .trainerName = _("GILBERT"),
#line 2534
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2535
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2537
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2538
        .doubleBattle = TRUE,
#line 2539
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2541
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2543
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2542
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2545
    [TRAINER_FRANKLIN] =
    {
#line 2546
        .trainerName = _("FRANKLIN"),
#line 2547
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2548
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2550
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2551
        .doubleBattle = TRUE,
#line 2552
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2554
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2556
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2555
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2558
    [TRAINER_KEVIN] =
    {
#line 2559
        .trainerName = _("KEVIN"),
#line 2560
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2561
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2563
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2564
        .doubleBattle = TRUE,
#line 2565
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2567
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2569
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2568
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2571
    [TRAINER_JACK] =
    {
#line 2572
        .trainerName = _("JACK"),
#line 2573
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2574
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2576
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2577
        .doubleBattle = TRUE,
#line 2578
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2580
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2582
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2581
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2584
    [TRAINER_DUDLEY] =
    {
#line 2585
        .trainerName = _("DUDLEY"),
#line 2586
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2587
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2589
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2590
        .doubleBattle = TRUE,
#line 2591
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2593
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2595
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2594
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2597
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2599
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2598
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2601
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2603
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2602
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2605
    [TRAINER_CHAD] =
    {
#line 2606
        .trainerName = _("CHAD"),
#line 2607
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2608
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2610
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2611
        .doubleBattle = TRUE,
#line 2612
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2614
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2616
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2615
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2618
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2620
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2619
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2622
    [TRAINER_TAKAO] =
    {
#line 2623
        .trainerName = _("TAKAO"),
#line 2624
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2625
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 2627
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2628
        .doubleBattle = TRUE,
#line 2629
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2631
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2633
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 2632
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2635
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2637
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 2636
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2639
    [TRAINER_HITOSHI] =
    {
#line 2640
        .trainerName = _("HITOSHI"),
#line 2641
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2642
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 2644
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2645
        .doubleBattle = TRUE,
#line 2646
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2648
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2650
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 2649
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2652
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2654
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 2653
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2656
    [TRAINER_KIYO] =
    {
#line 2657
        .trainerName = _("KIYO"),
#line 2658
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2659
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 2661
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2662
        .doubleBattle = TRUE,
#line 2663
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2665
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2667
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2666
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2669
    [TRAINER_KOICHI] =
    {
#line 2670
        .trainerName = _("KOICHI"),
#line 2671
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2672
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 2674
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2675
        .doubleBattle = TRUE,
#line 2676
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2678
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2680
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2679
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2682
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2684
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2683
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2686
            .species = SPECIES_GRAPPLOCT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2688
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2687
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2690
    [TRAINER_NOB_1] =
    {
#line 2691
        .trainerName = _("NOB"),
#line 2692
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2693
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 2695
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2696
        .doubleBattle = TRUE,
#line 2697
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2699
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2701
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 2700
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2703
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2705
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 2704
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2707
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2709
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 2708
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2711
    [TRAINER_YUJI] =
    {
#line 2712
        .trainerName = _("YUJI"),
#line 2713
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2714
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 2716
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2717
        .doubleBattle = TRUE,
#line 2718
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2720
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2722
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2721
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2724
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2726
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2725
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2728
    [TRAINER_DAISUKE] =
    {
#line 2729
        .trainerName = _("DAISUKE"),
#line 2730
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2731
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 2733
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2734
        .doubleBattle = TRUE,
#line 2735
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2737
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2739
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2738
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2741
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2743
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2742
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2745
    [TRAINER_ATSUSHI] =
    {
#line 2746
        .trainerName = _("ATSUSHI"),
#line 2747
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2748
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 2750
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2751
        .doubleBattle = TRUE,
#line 2752
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2754
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2756
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2755
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2758
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2760
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2759
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2762
    [TRAINER_KIRK] =
    {
#line 2763
        .trainerName = _("KIRK"),
#line 2764
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2765
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 2767
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2768
        .doubleBattle = TRUE,
#line 2769
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2771
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2773
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2772
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2775
            .species = SPECIES_GEODUDE_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2777
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2776
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2779
    [TRAINER_GRUNT_AQUA_HIDEOUT_7] =
    {
#line 2780
        .trainerName = _("GRUNT"),
#line 2781
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 2782
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 2783
F_TRAINER_FEMALE | 
#line 2784
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 2785
        .doubleBattle = TRUE,
#line 2786
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2788
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2790
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2789
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2792
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2794
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2793
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2796
    [TRAINER_GRUNT_AQUA_HIDEOUT_8] =
    {
#line 2797
        .trainerName = _("GRUNT"),
#line 2798
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 2799
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 2801
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 2802
        .doubleBattle = TRUE,
#line 2803
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2805
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2807
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2806
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2809
    [TRAINER_SHAWN] =
    {
#line 2810
        .trainerName = _("SHAWN"),
#line 2811
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2812
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 2814
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2815
        .doubleBattle = TRUE,
#line 2816
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2818
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2820
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2819
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2822
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2824
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2823
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2826
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2828
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2827
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2830
    [TRAINER_FERNANDO_1] =
    {
#line 2831
        .trainerName = _("FERNANDO"),
#line 2832
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2833
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 2835
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2836
        .doubleBattle = TRUE,
#line 2837
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2839
            .species = SPECIES_REVAVROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2841
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2840
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2843
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2845
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2844
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2847
    [TRAINER_DALTON_1] =
    {
#line 2848
        .trainerName = _("DALTON"),
#line 2849
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2850
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 2852
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2853
        .doubleBattle = TRUE,
#line 2854
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2856
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2858
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2857
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2860
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2862
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2861
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2864
    [TRAINER_COLE] =
    {
#line 2865
        .trainerName = _("COLE"),
#line 2866
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2867
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 2869
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2870
        .doubleBattle = TRUE,
#line 2871
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2873
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2875
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2874
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2877
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2879
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2878
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2881
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2883
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2882
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2885
    [TRAINER_JEFF] =
    {
#line 2886
        .trainerName = _("JEFF"),
#line 2887
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2888
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 2890
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2891
        .doubleBattle = TRUE,
#line 2892
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2894
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2896
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2895
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2898
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2900
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2899
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2902
    [TRAINER_AXLE] =
    {
#line 2903
        .trainerName = _("AXLE"),
#line 2904
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2905
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 2907
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2908
        .doubleBattle = TRUE,
#line 2909
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2911
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2913
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2912
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2915
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2917
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2916
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2919
    [TRAINER_JACE] =
    {
#line 2920
        .trainerName = _("JACE"),
#line 2921
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2922
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 2924
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2925
        .doubleBattle = TRUE,
#line 2926
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2928
            .species = SPECIES_SUNKERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2930
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2929
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2932
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2934
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2933
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2936
    [TRAINER_KEEGAN] =
    {
#line 2937
        .trainerName = _("KEEGAN"),
#line 2938
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2939
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 2941
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2942
        .doubleBattle = TRUE,
#line 2943
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2945
            .species = SPECIES_SUNKERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2947
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 2946
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2949
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2951
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 2950
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2953
    [TRAINER_BERNIE_1] =
    {
#line 2954
        .trainerName = _("BERNIE"),
#line 2955
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2956
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 2958
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2959
        .doubleBattle = TRUE,
#line 2960
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2962
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2964
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2963
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2966
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2968
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2967
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2970
    [TRAINER_DREW] =
    {
#line 2971
        .trainerName = _("DREW"),
#line 2972
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2973
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 2975
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2976
        .doubleBattle = TRUE,
#line 2977
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2979
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2981
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2980
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2982
                MOVE_DIG,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
                MOVE_SLASH,
            },
            },
            {
#line 2987
            .species = SPECIES_CACNEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2989
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2988
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2990
                MOVE_PIN_MISSILE,
                MOVE_LEER,
                MOVE_INGRAIN,
                MOVE_BULLET_SEED,
            },
            },
            {
#line 2995
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2997
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2996
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2998
                MOVE_DIG,
                MOVE_POWDER_SNOW,
                MOVE_ICE_SHARD,
                MOVE_MUD_SLAP,
            },
            },
        },
    },
#line 3003
    [TRAINER_BEAU] =
    {
#line 3004
        .trainerName = _("BEAU"),
#line 3005
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3006
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 3008
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3009
        .doubleBattle = TRUE,
#line 3010
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3012
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3014
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3013
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3016
            .species = SPECIES_CUFANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3018
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3017
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3020
    [TRAINER_LARRY] =
    {
#line 3021
        .trainerName = _("LARRY"),
#line 3022
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3023
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 3025
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3026
        .doubleBattle = TRUE,
#line 3027
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3029
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3031
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3030
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3033
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3035
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3034
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3037
    [TRAINER_SHANE] =
    {
#line 3038
        .trainerName = _("SHANE"),
#line 3039
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3040
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 3042
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3043
        .doubleBattle = TRUE,
#line 3044
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3046
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3048
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3047
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3050
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3052
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3051
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3054
    [TRAINER_JUSTIN] =
    {
#line 3055
        .trainerName = _("JUSTIN"),
#line 3056
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3057
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 3059
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3060
        .doubleBattle = TRUE,
#line 3061
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3063
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3065
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3064
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3067
    [TRAINER_ETHAN_1] =
    {
#line 3068
        .trainerName = _("ETHAN"),
#line 3069
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3070
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 3072
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3073
        .doubleBattle = TRUE,
#line 3074
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3076
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3078
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3077
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3080
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3082
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3081
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3084
            .species = SPECIES_CUFANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3086
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3085
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3088
    [TRAINER_AUTUMN] =
    {
#line 3089
        .trainerName = _("AUTUMN"),
#line 3090
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 3091
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 3092
F_TRAINER_FEMALE | 
#line 3093
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3094
        .doubleBattle = TRUE,
#line 3095
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3097
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3099
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3098
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3101
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3103
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3102
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3105
    [TRAINER_TRAVIS] =
    {
#line 3106
        .trainerName = _("TRAVIS"),
#line 3107
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3108
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 3110
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3111
        .doubleBattle = TRUE,
#line 3112
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3114
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3116
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3115
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3118
            .species = SPECIES_SKIDDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3120
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3119
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3122
    [TRAINER_BRENT] =
    {
#line 3123
        .trainerName = _("BRENT"),
#line 3124
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3125
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 3127
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3128
        .doubleBattle = TRUE,
#line 3129
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3131
            .species = SPECIES_LARVESTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3133
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3132
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3135
            .species = SPECIES_SNOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3137
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3136
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3139
    [TRAINER_DONALD] =
    {
#line 3140
        .trainerName = _("DONALD"),
#line 3141
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3142
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 3144
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3145
        .doubleBattle = TRUE,
#line 3146
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3148
            .species = SPECIES_GOLISOPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3150
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3149
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3152
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3154
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3153
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3156
    [TRAINER_TAYLOR] =
    {
#line 3157
        .trainerName = _("TAYLOR"),
#line 3158
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3159
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 3161
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3162
        .doubleBattle = TRUE,
#line 3163
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3165
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3167
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3166
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3169
            .species = SPECIES_GALVANTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3171
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3170
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3173
    [TRAINER_JEFFREY_1] =
    {
#line 3174
        .trainerName = _("JEFFREY"),
#line 3175
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3176
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 3178
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3179
        .doubleBattle = TRUE,
#line 3180
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3182
            .species = SPECIES_SCYTHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3184
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3183
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3186
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3188
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3187
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3190
    [TRAINER_DEREK] =
    {
#line 3191
        .trainerName = _("DEREK"),
#line 3192
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3193
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 3195
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3196
        .doubleBattle = TRUE,
#line 3197
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3199
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3201
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 3200
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3203
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3205
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 3204
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3207
    [TRAINER_EDWARD] =
    {
#line 3208
        .trainerName = _("EDWARD"),
#line 3209
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3210
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 3212
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3213
        .doubleBattle = TRUE,
#line 3214
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3216
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3218
            .iv = TRAINER_PARTY_IVS(3, 18, 4, 2, 2, 4),
#line 3217
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3219
                MOVE_HIDDEN_POWER,
            },
            },
            {
#line 3221
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3223
            .iv = TRAINER_PARTY_IVS(3, 17, 4, 2, 2, 4),
#line 3222
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3224
                MOVE_HIDDEN_POWER,
            },
            },
        },
    },
#line 3226
    [TRAINER_PRESTON] =
    {
#line 3227
        .trainerName = _("PRESTON"),
#line 3228
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3229
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 3231
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3232
        .doubleBattle = TRUE,
#line 3233
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3235
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3237
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3236
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3239
    [TRAINER_VIRGIL] =
    {
#line 3240
        .trainerName = _("VIRGIL"),
#line 3241
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3242
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 3244
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3245
        .doubleBattle = TRUE,
#line 3246
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3248
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3250
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3249
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3252
    [TRAINER_BLAKE] =
    {
#line 3253
        .trainerName = _("BLAKE"),
#line 3254
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3255
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 3257
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3258
        .doubleBattle = TRUE,
#line 3259
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3261
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3263
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3262
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3265
    [TRAINER_WILLIAM] =
    {
#line 3266
        .trainerName = _("WILLIAM"),
#line 3267
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3268
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 3270
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3271
        .doubleBattle = TRUE,
#line 3272
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3274
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3276
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3275
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3278
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3280
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3279
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3282
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3284
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3283
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3286
    [TRAINER_JOSHUA] =
    {
#line 3287
        .trainerName = _("JOSHUA"),
#line 3288
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3289
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 3291
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3292
        .doubleBattle = TRUE,
#line 3293
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3295
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3297
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3296
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3299
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3301
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3300
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3303
    [TRAINER_CAMERON_1] =
    {
#line 3304
        .trainerName = _("CAMERON"),
#line 3305
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3306
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 3308
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3309
        .doubleBattle = TRUE,
#line 3310
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3312
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3314
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3313
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3316
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3318
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3317
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3320
    [TRAINER_JACLYN] =
    {
#line 3321
        .trainerName = _("JACLYN"),
#line 3322
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3323
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 3324
F_TRAINER_FEMALE | 
#line 3325
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3326
        .doubleBattle = TRUE,
#line 3327
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3329
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3331
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3330
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3333
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3335
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3334
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3337
    [TRAINER_HANNAH] =
    {
#line 3338
        .trainerName = _("HANNAH"),
#line 3339
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3340
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 3341
F_TRAINER_FEMALE | 
#line 3342
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3343
        .doubleBattle = TRUE,
#line 3344
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3346
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3348
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3347
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3350
    [TRAINER_SAMANTHA] =
    {
#line 3351
        .trainerName = _("SAMANTHA"),
#line 3352
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3353
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 3354
F_TRAINER_FEMALE | 
#line 3355
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3356
        .doubleBattle = TRUE,
#line 3357
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3359
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3361
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3360
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3363
    [TRAINER_MAURA] =
    {
#line 3364
        .trainerName = _("MAURA"),
#line 3365
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3366
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 3367
F_TRAINER_FEMALE | 
#line 3368
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3369
        .doubleBattle = TRUE,
#line 3370
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3372
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3374
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3373
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3376
    [TRAINER_KAYLA] =
    {
#line 3377
        .trainerName = _("KAYLA"),
#line 3378
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3379
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 3380
F_TRAINER_FEMALE | 
#line 3381
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3382
        .doubleBattle = TRUE,
#line 3383
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3385
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3387
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3386
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3389
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3391
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3390
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3393
    [TRAINER_ALEXIS] =
    {
#line 3394
        .trainerName = _("ALEXIS"),
#line 3395
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3396
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 3397
F_TRAINER_FEMALE | 
#line 3398
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3399
        .doubleBattle = TRUE,
#line 3400
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3402
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3404
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3403
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3406
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3408
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3407
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3410
    [TRAINER_JACKI_1] =
    {
#line 3411
        .trainerName = _("JACKI"),
#line 3412
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3413
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 3414
F_TRAINER_FEMALE | 
#line 3415
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3416
        .doubleBattle = TRUE,
#line 3417
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3419
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3421
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3420
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3423
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3425
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3424
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3427
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3429
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3428
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3431
    [TRAINER_WALTER_1] =
    {
#line 3432
        .trainerName = _("WALTER"),
#line 3433
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3434
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 3436
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3437
        .doubleBattle = TRUE,
#line 3438
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3440
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3442
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3441
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3444
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3446
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3445
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3448
    [TRAINER_MICAH] =
    {
#line 3449
        .trainerName = _("MICAH"),
#line 3450
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3451
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 3453
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3454
        .doubleBattle = TRUE,
#line 3455
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3457
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3459
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3458
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3461
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3463
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3462
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3465
    [TRAINER_THOMAS] =
    {
#line 3466
        .trainerName = _("THOMAS"),
#line 3467
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3468
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 3470
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3471
        .doubleBattle = TRUE,
#line 3472
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3474
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3476
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3475
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3478
    [TRAINER_SIDNEY] =
    {
#line 3479
        .trainerName = _("SIDNEY"),
#line 3480
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3481
        .trainerPic = TRAINER_PIC_ELITE_FOUR_SIDNEY,
        .encounterMusic_gender = 
#line 3483
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3484
        .doubleBattle = TRUE,
#line 3485
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SETUP_FIRST_TURN,
#line 3486
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3488
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3490
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3489
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3491
                MOVE_ROAR,
                MOVE_DOUBLE_EDGE,
                MOVE_SAND_ATTACK,
                MOVE_CRUNCH,
            },
            },
            {
#line 3496
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3498
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3497
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3499
                MOVE_TORMENT,
                MOVE_DOUBLE_TEAM,
                MOVE_SWAGGER,
                MOVE_EXTRASENSORY,
            },
            },
            {
#line 3504
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3506
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3505
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3507
                MOVE_LEECH_SEED,
                MOVE_FEINT_ATTACK,
                MOVE_NEEDLE_ARM,
                MOVE_COTTON_SPORE,
            },
            },
            {
#line 3512
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3514
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3513
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3515
                MOVE_SURF,
                MOVE_SWORDS_DANCE,
                MOVE_STRENGTH,
                MOVE_FACADE,
            },
            },
            {
#line 3520
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3520
            .heldItem = ITEM_SITRUS_BERRY,
#line 3522
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3521
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3523
                MOVE_AERIAL_ACE,
                MOVE_ROCK_SLIDE,
                MOVE_SWORDS_DANCE,
                MOVE_SLASH,
            },
            },
        },
    },
#line 3528
    [TRAINER_PHOEBE] =
    {
#line 3529
        .trainerName = _("PHOEBE"),
#line 3530
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3531
        .trainerPic = TRAINER_PIC_ELITE_FOUR_PHOEBE,
        .encounterMusic_gender = 
#line 3532
F_TRAINER_FEMALE | 
#line 3533
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3534
        .doubleBattle = TRUE,
#line 3535
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 3536
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_GREEN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3538
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3540
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3539
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3541
                MOVE_SHADOW_PUNCH,
                MOVE_CONFUSE_RAY,
                MOVE_CURSE,
                MOVE_PROTECT,
            },
            },
            {
#line 3546
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3548
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3547
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3549
                MOVE_SHADOW_BALL,
                MOVE_GRUDGE,
                MOVE_WILL_O_WISP,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 3554
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3556
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3555
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3557
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_TEAM,
                MOVE_NIGHT_SHADE,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 3562
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3564
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3563
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3565
                MOVE_SHADOW_BALL,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_FACADE,
            },
            },
            {
#line 3570
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3570
            .heldItem = ITEM_SITRUS_BERRY,
#line 3572
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3571
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3573
                MOVE_SHADOW_BALL,
                MOVE_ICE_BEAM,
                MOVE_ROCK_SLIDE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 3578
    [TRAINER_GLACIA] =
    {
#line 3579
        .trainerName = _("GLACIA"),
#line 3580
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3581
        .trainerPic = TRAINER_PIC_ELITE_FOUR_GLACIA,
        .encounterMusic_gender = 
#line 3582
F_TRAINER_FEMALE | 
#line 3583
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3584
        .doubleBattle = TRUE,
#line 3585
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 3586
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PINK,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3588
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3590
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3589
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3591
                MOVE_ENCORE,
                MOVE_BODY_SLAM,
                MOVE_HAIL,
                MOVE_ICE_BALL,
            },
            },
            {
#line 3596
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3598
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3597
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3599
                MOVE_LIGHT_SCREEN,
                MOVE_CRUNCH,
                MOVE_ICY_WIND,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 3604
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3606
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3605
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3607
                MOVE_ATTRACT,
                MOVE_DOUBLE_EDGE,
                MOVE_HAIL,
                MOVE_BLIZZARD,
            },
            },
            {
#line 3612
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3614
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3613
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3615
                MOVE_SHADOW_BALL,
                MOVE_EXPLOSION,
                MOVE_HAIL,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 3620
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3620
            .heldItem = ITEM_SITRUS_BERRY,
#line 3622
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3621
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3623
                MOVE_SURF,
                MOVE_BODY_SLAM,
                MOVE_ICE_BEAM,
                MOVE_SHEER_COLD,
            },
            },
        },
    },
#line 3628
    [TRAINER_DRAKE] =
    {
#line 3629
        .trainerName = _("DRAKE"),
#line 3630
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3631
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .encounterMusic_gender = 
#line 3633
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3634
        .doubleBattle = TRUE,
#line 3635
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 3636
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3638
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3640
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3639
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3641
                MOVE_ROCK_TOMB,
                MOVE_DRAGON_CLAW,
                MOVE_PROTECT,
                MOVE_DOUBLE_EDGE,
            },
            },
            {
#line 3646
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3648
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3647
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3649
                MOVE_DOUBLE_EDGE,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 3654
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3656
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3655
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3657
                MOVE_SMOKESCREEN,
                MOVE_DRAGON_DANCE,
                MOVE_SURF,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 3662
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3664
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3663
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3665
                MOVE_FLAMETHROWER,
                MOVE_CRUNCH,
                MOVE_DRAGON_BREATH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 3670
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3670
            .heldItem = ITEM_SITRUS_BERRY,
#line 3672
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3671
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3673
                MOVE_FLAMETHROWER,
                MOVE_DRAGON_CLAW,
                MOVE_ROCK_SLIDE,
                MOVE_CRUNCH,
            },
            },
        },
    },
#line 3678
    [TRAINER_ROXANNE] =
    {
#line 3679
        .trainerName = _("ROXANNE"),
#line 3680
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3681
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender = 
#line 3682
F_TRAINER_FEMALE | 
#line 3683
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3684
        .doubleBattle = TRUE,
#line 3685
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3687
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3691
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3689
            .ability = ABILITY_STORM_DRAIN,
#line 3688
            .lvl = 12,
#line 3690
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3692
                MOVE_STEALTH_ROCK,
                MOVE_LEECH_SEED,
                MOVE_ACID,
                MOVE_ABSORB,
            },
            },
            {
#line 3697
            .species = SPECIES_ANORITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3701
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3699
            .ability = ABILITY_BATTLE_ARMOR,
#line 3698
            .lvl = 12,
#line 3700
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3702
                MOVE_HONE_CLAWS,
                MOVE_FURY_CUTTER,
                MOVE_CUT,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 3707
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3707
            .heldItem = ITEM_CLEAR_AMULET,
#line 3711
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3709
            .ability = ABILITY_STURDY,
#line 3708
            .lvl = 12,
#line 3710
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3712
                MOVE_ROCK_TOMB,
                MOVE_SANDSTORM,
                MOVE_THUNDER_WAVE,
                MOVE_TORMENT,
            },
            },
            {
#line 3717
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3717
            .heldItem = ITEM_METRONOME,
#line 3720
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3718
            .lvl = 13,
#line 3719
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3721
                MOVE_DEFENSE_CURL,
                MOVE_ROLLOUT,
                MOVE_TRAILBLAZE,
                MOVE_FLAIL,
            },
            },
        },
    },
#line 3726
    [TRAINER_BRAWLY] =
    {
#line 3727
        .trainerName = _("BRAWLY"),
#line 3728
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3729
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender = 
#line 3731
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3732
        .doubleBattle = TRUE,
#line 3733
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3735
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3735
            .heldItem = ITEM_ROOM_SERVICE,
#line 3739
            .iv = TRAINER_PARTY_IVS(30, 15, 30, 15, 15, 30),
#line 3737
            .ability = ABILITY_DRY_SKIN,
#line 3736
            .lvl = 16,
#line 3738
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3740
                MOVE_FAKE_OUT,
                MOVE_VENOSHOCK,
                MOVE_KARATE_CHOP,
                MOVE_BULK_UP,
            },
            },
            {
#line 3745
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3749
            .iv = TRAINER_PARTY_IVS(30, 15, 30, 0, 15, 30),
#line 3747
            .ability = ABILITY_PURE_POWER,
#line 3746
            .lvl = 16,
#line 3748
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3750
                MOVE_TRICK_ROOM,
                MOVE_COACHING,
                MOVE_VACUUM_WAVE,
                MOVE_CONFUSION,
            },
            },
            {
#line 3755
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3755
            .heldItem = ITEM_MYSTIC_WATER,
#line 3759
            .iv = TRAINER_PARTY_IVS(30, 15, 30, 0, 15, 30),
#line 3757
            .ability = ABILITY_HYPER_CUTTER,
#line 3756
            .lvl = 17,
#line 3758
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3760
                MOVE_PROTECT,
                MOVE_AQUA_JET,
                MOVE_KNOCK_OFF,
                MOVE_BRICK_BREAK,
            },
            },
            {
#line 3765
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3765
            .heldItem = ITEM_FLAME_ORB,
#line 3769
            .iv = TRAINER_PARTY_IVS(30, 15, 30, 0, 15, 30),
#line 3767
            .ability = ABILITY_GUTS,
#line 3766
            .lvl = 17,
#line 3768
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3770
                MOVE_BULLET_PUNCH,
                MOVE_FAKE_OUT,
                MOVE_PROTECT,
                MOVE_FORCE_PALM,
            },
            },
        },
    },
#line 3775
    [TRAINER_WATTSON] =
    {
#line 3776
        .trainerName = _("WATTSON"),
#line 3777
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3778
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender = 
#line 3780
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3781
        .doubleBattle = TRUE,
#line 3782
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3784
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3788
            .iv = TRAINER_PARTY_IVS(30, 15, 15, 25, 25, 15),
#line 3786
            .ability = ABILITY_PLUS,
#line 3785
            .lvl = 21,
#line 3787
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3789
                MOVE_DISARMING_VOICE,
                MOVE_ENCORE,
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 3794
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3798
            .iv = TRAINER_PARTY_IVS(20, 15, 25, 25, 15, 25),
#line 3796
            .ability = ABILITY_MINUS,
#line 3795
            .lvl = 21,
#line 3797
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3799
                MOVE_NUZZLE,
                MOVE_HELPING_HAND,
                MOVE_TEARFUL_LOOK,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 3804
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3804
            .heldItem = ITEM_EVIOLITE,
#line 3808
            .iv = TRAINER_PARTY_IVS(30, 15, 30, 30, 20, 30),
#line 3806
            .ability = ABILITY_COMPOUND_EYES,
#line 3805
            .lvl = 22,
#line 3807
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3809
                MOVE_ELECTROWEB,
                MOVE_STRUGGLE_BUG,
                MOVE_DOUBLE_TEAM,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 3814
            .species = SPECIES_BELLIBOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3814
            .heldItem = ITEM_RED_CARD,
#line 3818
            .iv = TRAINER_PARTY_IVS(0, 0, 10, 0, 15, 10),
#line 3816
            .ability = ABILITY_ELECTROMORPHOSIS,
#line 3815
            .lvl = 22,
#line 3817
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3819
                MOVE_SHOCK_WAVE,
                MOVE_SLACK_OFF,
                MOVE_WATER_PULSE,
                MOVE_SOAK,
            },
            },
            {
#line 3824
            .species = SPECIES_ROTOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3824
            .heldItem = ITEM_LEFTOVERS,
#line 3828
            .iv = TRAINER_PARTY_IVS(30, 15, 15, 30, 15, 15),
#line 3826
            .ability = ABILITY_LEVITATE,
#line 3825
            .lvl = 23,
#line 3827
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3829
                MOVE_SHOCK_WAVE,
                MOVE_OMINOUS_WIND,
                MOVE_PROTECT,
                MOVE_SUBSTITUTE,
            },
            },
        },
    },
#line 3834
    [TRAINER_FLANNERY] =
    {
#line 3835
        .trainerName = _("FLANNERY"),
#line 3836
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3837
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender = 
#line 3838
F_TRAINER_FEMALE | 
#line 3839
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3840
        .doubleBattle = TRUE,
#line 3841
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3843
            .species = SPECIES_SUNFLORA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3846
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3845
            .ability = ABILITY_DROUGHT,
#line 3844
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3847
                MOVE_PETAL_DANCE,
                MOVE_WEATHER_BALL,
                MOVE_SYNTHESIS,
                MOVE_GROWTH,
            },
            },
            {
#line 3852
            .species = SPECIES_ORICORIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3854
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3853
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3855
                MOVE_REHEARSAL,
                MOVE_AIR_CUTTER,
                MOVE_ICY_WIND,
                MOVE_FEATHER_DANCE,
            },
            },
            {
#line 3860
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3862
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3861
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3863
                MOVE_FLAME_CHARGE,
                MOVE_TAKE_DOWN,
                MOVE_MORNING_SUN,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 3868
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3868
            .heldItem = ITEM_WHITE_HERB,
#line 3871
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 3870
            .ability = ABILITY_WHITE_SMOKE,
#line 3869
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3872
                MOVE_OVERHEAT,
                MOVE_FIRE_SPIN,
                MOVE_BODY_SLAM,
                MOVE_ATTRACT,
            },
            },
            {
#line 3877
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3877
            .heldItem = ITEM_AIR_BALLOON,
#line 3880
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 3879
            .ability = ABILITY_EVAPORATE,
#line 3878
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3881
                MOVE_LAVA_PLUME,
                MOVE_YAWN,
                MOVE_ANCIENT_POWER,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 3886
            .species = SPECIES_DEWGONG_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3886
            .heldItem = ITEM_SITRUS_BERRY,
#line 3889
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3888
            .ability = ABILITY_STEAM_SHOWER,
#line 3887
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3890
                MOVE_SCALD,
                MOVE_FLAMETHROWER,
                MOVE_LIFE_DEW,
                MOVE_ENCORE,
            },
            },
        },
    },
#line 3895
    [TRAINER_NORMAN] =
    {
#line 3896
        .trainerName = _("NORMAN"),
#line 3897
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3898
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender = 
#line 3900
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3901
        .doubleBattle = TRUE,
#line 3902
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3904
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3907
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 3906
            .ability = ABILITY_TRUANT,
#line 3905
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3908
                MOVE_FACADE,
                MOVE_SLACK_OFF,
                MOVE_FEINT,
                MOVE_SHADOW_CLAW,
            },
            },
            {
#line 3913
            .species = SPECIES_GRAFAIAI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3916
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 3915
            .ability = ABILITY_PRANKSTER,
#line 3914
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3917
                MOVE_DOODLE,
                MOVE_KNOCK_OFF,
                MOVE_GUNK_SHOT,
                MOVE_PARTING_SHOT,
            },
            },
            {
#line 3922
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3925
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3924
            .ability = ABILITY_FRIEND_GUARD,
#line 3923
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3926
                MOVE_DAZZLING_GLEAM,
                MOVE_SNARL,
                MOVE_ICY_WIND,
                MOVE_CHARM,
            },
            },
            {
#line 3931
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3934
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3933
            .ability = ABILITY_SCRAPPY,
#line 3932
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3935
                MOVE_HYPER_VOICE,
                MOVE_FLAMETHROWER,
                MOVE_ICE_BEAM,
                MOVE_STOMP,
            },
            },
            {
#line 3940
            .species = SPECIES_DRAMPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3940
            .heldItem = ITEM_CHESTO_BERRY,
#line 3942
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 3941
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3943
                MOVE_DRAGON_BREATH,
                MOVE_HEAT_WAVE,
                MOVE_REST,
                MOVE_SNORE,
            },
            },
            {
#line 3948
            .species = SPECIES_OBSTAGOON_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3948
            .heldItem = ITEM_FLAME_ORB,
#line 3951
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3950
            .ability = ABILITY_GUTS,
#line 3949
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3952
                MOVE_DOUBLE_EDGE,
                MOVE_SUBMISSION,
                MOVE_MAT_BLOCK,
                MOVE_HIGH_HORSEPOWER,
            },
            },
        },
    },
#line 3957
    [TRAINER_WINONA] =
    {
#line 3958
        .trainerName = _("WINONA"),
#line 3959
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3960
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender = 
#line 3961
F_TRAINER_FEMALE | 
#line 3962
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3963
        .doubleBattle = TRUE,
#line 3964
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3966
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3966
            .heldItem = ITEM_FOCUS_SASH,
#line 3969
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 3968
            .ability = ABILITY_SCRAPPY,
#line 3967
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3970
                MOVE_ENDEAVOR,
                MOVE_FEATHER_DANCE,
                MOVE_AERIAL_ACE,
                MOVE_BOOMBURST,
            },
            },
            {
#line 3975
            .species = SPECIES_NOIVERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3978
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 3977
            .ability = ABILITY_TELEPATHY,
#line 3976
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3979
                MOVE_DRAGON_PULSE,
                MOVE_HEAT_WAVE,
                MOVE_WATER_PULSE,
                MOVE_TAILWIND,
            },
            },
            {
#line 3984
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3984
            .heldItem = ITEM_WIDE_LENS,
#line 3986
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 3985
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3987
                MOVE_BRAVE_BIRD,
                MOVE_JUMP_KICK,
                MOVE_DOUBLE_EDGE,
                MOVE_MIRROR_MOVE,
            },
            },
            {
#line 3992
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3992
            .heldItem = ITEM_ASSAULT_VEST,
#line 3995
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 3994
            .ability = ABILITY_THICK_FAT,
#line 3993
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3996
                MOVE_GIGA_DRAIN,
                MOVE_AIR_CUTTER,
                MOVE_BULLDOZE,
                MOVE_BREAKING_SWIPE,
            },
            },
            {
#line 4001
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4001
            .heldItem = ITEM_ORAN_BERRY,
#line 4004
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 4003
            .ability = ABILITY_SKY_SONATA,
#line 4002
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4005
                MOVE_COTTON_GUARD,
                MOVE_AIR_SLASH,
                MOVE_DAZZLING_GLEAM,
                MOVE_ROOST,
            },
            },
            {
#line 4010
            .species = SPECIES_PHIONE_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4010
            .heldItem = ITEM_LEFTOVERS,
#line 4013
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4012
            .ability = ABILITY_FREE_SPIRIT,
#line 4011
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4014
                MOVE_TAIL_GLOW,
                MOVE_HURRICANE,
                MOVE_MOONBLAST,
                MOVE_MOONLIGHT,
            },
            },
        },
    },
#line 4019
    [TRAINER_TATE_AND_LIZA] =
    {
#line 4020
        .trainerName = _("TATE&LIZA"),
#line 4021
        .trainerClass = TRAINER_CLASS_LEADER,
#line 4022
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender = 
#line 4024
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4025
        .doubleBattle = TRUE,
#line 4026
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4028
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4030
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4029
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4031
                MOVE_EARTHQUAKE,
                MOVE_ANCIENT_POWER,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 4036
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4038
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4037
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4039
                MOVE_PSYCHIC,
                MOVE_SUNNY_DAY,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 4044
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4044
            .heldItem = ITEM_SITRUS_BERRY,
#line 4046
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4045
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4047
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_HYPNOSIS,
                MOVE_CALM_MIND,
            },
            },
            {
#line 4052
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4052
            .heldItem = ITEM_SITRUS_BERRY,
#line 4054
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4053
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4055
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 4060
    [TRAINER_JUAN] =
    {
#line 4061
        .trainerName = _("JUAN"),
#line 4062
        .trainerClass = TRAINER_CLASS_LEADER,
#line 4063
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender = 
#line 4065
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4066
        .doubleBattle = TRUE,
#line 4067
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4069
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4071
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4070
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4072
                MOVE_WATER_PULSE,
                MOVE_ATTRACT,
                MOVE_SWEET_KISS,
                MOVE_FLAIL,
            },
            },
            {
#line 4077
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4079
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4078
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4080
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_AMNESIA,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 4085
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4087
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4086
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4088
                MOVE_ENCORE,
                MOVE_BODY_SLAM,
                MOVE_AURORA_BEAM,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 4093
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4095
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4094
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4096
                MOVE_WATER_PULSE,
                MOVE_CRABHAMMER,
                MOVE_TAUNT,
                MOVE_LEER,
            },
            },
            {
#line 4101
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4101
            .heldItem = ITEM_CHESTO_BERRY,
#line 4103
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4102
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4104
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 4109
    [TRAINER_JERRY_1] =
    {
#line 4110
        .trainerName = _("JERRY"),
#line 4111
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4112
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender = 
#line 4114
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4115
        .doubleBattle = TRUE,
#line 4116
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4118
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4120
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4119
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4122
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4124
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4123
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4126
    [TRAINER_TED] =
    {
#line 4127
        .trainerName = _("TED"),
#line 4128
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4129
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender = 
#line 4131
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4132
        .doubleBattle = TRUE,
#line 4133
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4135
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4137
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4136
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4139
    [TRAINER_PAUL] =
    {
#line 4140
        .trainerName = _("PAUL"),
#line 4141
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4142
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender = 
#line 4144
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4145
        .doubleBattle = TRUE,
#line 4146
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4148
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4150
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4149
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4152
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4154
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4153
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4156
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4158
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4157
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4160
    [TRAINER_KAREN_1] =
    {
#line 4161
        .trainerName = _("KAREN"),
#line 4162
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4163
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender = 
#line 4164
F_TRAINER_FEMALE | 
#line 4165
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4166
        .doubleBattle = TRUE,
#line 4167
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4169
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4171
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4170
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4173
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4175
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4174
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4177
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4179
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4178
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4181
    [TRAINER_GEORGIA] =
    {
#line 4182
        .trainerName = _("GEORGIA"),
#line 4183
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4184
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender = 
#line 4185
F_TRAINER_FEMALE | 
#line 4186
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4187
        .doubleBattle = TRUE,
#line 4188
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4190
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4192
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4191
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4194
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4196
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4195
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4198
    [TRAINER_KATE_AND_JOY] =
    {
#line 4199
        .trainerName = _("KATE & JOY"),
#line 4200
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 4201
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender = 
#line 4203
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4204
        .doubleBattle = TRUE,
#line 4205
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4207
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4207
            .heldItem = ITEM_COVERT_CLOAK,
#line 4210
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4209
            .ability = ABILITY_PURE_POWER,
#line 4208
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4211
                MOVE_HYPNOSIS,
                MOVE_SKILL_SWAP,
                MOVE_FEINT,
                MOVE_HIGH_JUMP_KICK,
            },
            },
            {
#line 4216
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4219
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4218
            .ability = ABILITY_TRUANT,
#line 4217
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4220
                MOVE_HAMMER_ARM,
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_FEINT_ATTACK,
            },
            },
        },
    },
#line 4225
    [TRAINER_ANNA_AND_MEG_1] =
    {
#line 4226
        .trainerName = _("ANNA & MEG"),
#line 4227
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 4228
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender = 
#line 4229
F_TRAINER_FEMALE | 
#line 4230
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4231
        .doubleBattle = TRUE,
#line 4232
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4234
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4236
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4235
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4237
                MOVE_GROWL,
                MOVE_TAIL_WHIP,
                MOVE_HEADBUTT,
                MOVE_ODOR_SLEUTH,
            },
            },
            {
#line 4242
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4244
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4243
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4245
                MOVE_TACKLE,
                MOVE_FOCUS_ENERGY,
                MOVE_ARM_THRUST,
            },
            },
        },
    },
#line 4249
    [TRAINER_VICTOR] =
    {
#line 4250
        .trainerName = _("VICTOR"),
#line 4251
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 4252
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender = 
#line 4254
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4255
        .doubleBattle = TRUE,
#line 4256
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4258
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4258
            .heldItem = ITEM_ORAN_BERRY,
#line 4260
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 4259
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4262
            .species = SPECIES_RUFFLET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4262
            .heldItem = ITEM_ORAN_BERRY,
#line 4264
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 4263
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4266
    [TRAINER_MIGUEL_1] =
    {
#line 4267
        .trainerName = _("MIGUEL"),
#line 4268
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4269
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender = 
#line 4271
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4272
        .doubleBattle = TRUE,
#line 4273
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4275
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4275
            .heldItem = ITEM_ORAN_BERRY,
#line 4277
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4276
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4279
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4279
            .heldItem = ITEM_ORAN_BERRY,
#line 4281
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4280
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4283
    [TRAINER_COLTON] =
    {
#line 4284
        .trainerName = _("COLTON"),
#line 4285
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4286
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender = 
#line 4288
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4289
        .doubleBattle = TRUE,
#line 4290
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4292
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4292
            .heldItem = ITEM_ORAN_BERRY,
#line 4294
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4293
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4295
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4300
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4300
            .heldItem = ITEM_ORAN_BERRY,
#line 4302
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4301
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4303
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4308
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4308
            .heldItem = ITEM_ORAN_BERRY,
#line 4310
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4309
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4311
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4316
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4316
            .heldItem = ITEM_ORAN_BERRY,
#line 4318
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4317
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4319
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4324
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4324
            .heldItem = ITEM_ORAN_BERRY,
#line 4326
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4325
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4327
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4332
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4332
            .heldItem = ITEM_ORAN_BERRY,
#line 4334
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4333
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4335
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
        },
    },
#line 4340
    [TRAINER_VICTORIA] =
    {
#line 4341
        .trainerName = _("VICTORIA"),
#line 4342
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 4343
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender = 
#line 4344
F_TRAINER_FEMALE | 
#line 4345
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4346
        .doubleBattle = TRUE,
#line 4347
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4349
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4351
            .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
#line 4350
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4353
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4355
            .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
#line 4354
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4357
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4357
            .heldItem = ITEM_ORAN_BERRY,
#line 4359
            .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
#line 4358
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4361
    [TRAINER_VANESSA] =
    {
#line 4362
        .trainerName = _("VANESSA"),
#line 4363
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4364
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender = 
#line 4365
F_TRAINER_FEMALE | 
#line 4366
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4367
        .doubleBattle = TRUE,
#line 4368
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4370
            .species = SPECIES_VULPIX_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4372
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4371
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4374
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4376
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4375
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4378
    [TRAINER_BETHANY] =
    {
#line 4379
        .trainerName = _("BETHANY"),
#line 4380
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4381
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender = 
#line 4382
F_TRAINER_FEMALE | 
#line 4383
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4384
        .doubleBattle = TRUE,
#line 4385
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4387
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4387
            .heldItem = ITEM_ORAN_BERRY,
#line 4389
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4388
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4391
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4391
            .heldItem = ITEM_ORAN_BERRY,
#line 4393
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4392
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4395
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4395
            .heldItem = ITEM_ORAN_BERRY,
#line 4397
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4396
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4399
    [TRAINER_ISABEL_1] =
    {
#line 4400
        .trainerName = _("ISABEL"),
#line 4401
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4402
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender = 
#line 4403
F_TRAINER_FEMALE | 
#line 4404
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4405
        .doubleBattle = TRUE,
#line 4406
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4408
            .species = SPECIES_TOGEPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4408
            .heldItem = ITEM_ORAN_BERRY,
#line 4410
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4409
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4412
            .species = SPECIES_IGGLYBUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4412
            .heldItem = ITEM_ORAN_BERRY,
#line 4414
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4413
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4416
    [TRAINER_TIMOTHY_1] =
    {
#line 4417
        .trainerName = _("TIMOTHY"),
#line 4418
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4419
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender = 
#line 4421
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4422
        .doubleBattle = TRUE,
#line 4423
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4425
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4427
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4426
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4429
            .species = SPECIES_SCRAFTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4431
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4430
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4433
    [TRAINER_VICKY] =
    {
#line 4434
        .trainerName = _("VICKY"),
#line 4435
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 4436
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 4437
F_TRAINER_FEMALE | 
#line 4438
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4439
        .doubleBattle = TRUE,
#line 4440
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4442
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4444
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4443
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4445
                MOVE_HIGH_JUMP_KICK,
                MOVE_MEDITATE,
                MOVE_CONFUSION,
                MOVE_DETECT,
            },
            },
            {
#line 4450
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4452
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4451
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4453
                MOVE_CALM_MIND,
                MOVE_YAWN,
                MOVE_CONFUSION,
                MOVE_ICY_WIND,
            },
            },
        },
    },
#line 4458
    [TRAINER_SHELBY_1] =
    {
#line 4459
        .trainerName = _("SHELBY"),
#line 4460
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4461
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 4462
F_TRAINER_FEMALE | 
#line 4463
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4464
        .doubleBattle = TRUE,
#line 4465
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4467
            .species = SPECIES_NOIBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4469
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4468
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4471
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4473
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4472
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4475
    [TRAINER_CALVIN_1] =
    {
#line 4476
        .trainerName = _("CALVIN"),
#line 4477
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4478
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4480
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4481
        .doubleBattle = TRUE,
#line 4482
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4484
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4486
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4485
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4488
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4490
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4489
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4492
    [TRAINER_BILLY] =
    {
#line 4493
        .trainerName = _("BILLY"),
#line 4494
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4495
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4497
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4498
        .doubleBattle = TRUE,
#line 4499
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4501
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4503
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4502
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4505
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4507
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4506
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4509
    [TRAINER_JOSH] =
    {
#line 4510
        .trainerName = _("JOSH"),
#line 4511
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4512
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4514
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4515
        .doubleBattle = TRUE,
#line 4516
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4518
            .species = SPECIES_GEODUDE_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4520
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4519
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4521
                MOVE_TACKLE,
                MOVE_CHARGE,
                MOVE_ROLLOUT,
            },
            },
            {
#line 4525
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4527
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4526
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4528
                MOVE_DEFENSE_CURL,
                MOVE_SCRATCH,
                MOVE_ROLLOUT,
            },
            },
        },
    },
#line 4532
    [TRAINER_TOMMY] =
    {
#line 4533
        .trainerName = _("TOMMY"),
#line 4534
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4535
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4537
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4538
        .doubleBattle = TRUE,
#line 4539
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4541
            .species = SPECIES_GEODUDE_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4543
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 4542
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4545
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4547
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4546
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4549
    [TRAINER_JOEY] =
    {
#line 4550
        .trainerName = _("JOEY"),
#line 4551
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4552
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4554
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4555
        .doubleBattle = TRUE,
#line 4556
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4558
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4560
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4559
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4562
            .species = SPECIES_SHROODLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4564
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4563
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4566
    [TRAINER_BEN] =
    {
#line 4567
        .trainerName = _("BEN"),
#line 4568
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4569
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4571
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4572
        .doubleBattle = TRUE,
#line 4573
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4575
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4577
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4576
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4578
                MOVE_HEADBUTT,
                MOVE_SAND_ATTACK,
                MOVE_GROWL,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 4583
            .species = SPECIES_TADBULB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4585
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4584
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4587
    [TRAINER_QUINCY] =
    {
#line 4588
        .trainerName = _("QUINCY"),
#line 4589
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4590
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 4592
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4593
        .doubleBattle = TRUE,
#line 4594
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4596
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4598
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4597
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4599
                MOVE_ATTRACT,
                MOVE_ICE_BEAM,
                MOVE_THUNDERBOLT,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 4604
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4606
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4605
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4607
                MOVE_SKILL_SWAP,
                MOVE_PROTECT,
                MOVE_WILL_O_WISP,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 4612
    [TRAINER_KATELYNN] =
    {
#line 4613
        .trainerName = _("KATELYNN"),
#line 4614
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4615
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 4616
F_TRAINER_FEMALE | 
#line 4617
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4618
        .doubleBattle = TRUE,
#line 4619
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4621
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4623
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4622
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4624
                MOVE_SKILL_SWAP,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_CALM_MIND,
            },
            },
            {
#line 4629
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4631
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4630
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4632
                MOVE_EARTHQUAKE,
                MOVE_SHADOW_BALL,
                MOVE_AERIAL_ACE,
                MOVE_BRICK_BREAK,
            },
            },
        },
    },
#line 4637
    [TRAINER_JAYLEN] =
    {
#line 4638
        .trainerName = _("JAYLEN"),
#line 4639
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4640
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4642
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4643
        .doubleBattle = TRUE,
#line 4644
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4646
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4648
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4647
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4650
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4652
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4651
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4654
    [TRAINER_DILLON] =
    {
#line 4655
        .trainerName = _("DILLON"),
#line 4656
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4657
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4659
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4660
        .doubleBattle = TRUE,
#line 4661
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4663
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4665
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4664
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4667
            .species = SPECIES_GASTLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4669
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4668
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4671
    [TRAINER_EDDIE] =
    {
#line 4672
        .trainerName = _("EDDIE"),
#line 4673
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4674
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4676
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4677
        .doubleBattle = TRUE,
#line 4678
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4680
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4682
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4681
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4684
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4686
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4685
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4688
    [TRAINER_ALLEN] =
    {
#line 4689
        .trainerName = _("ALLEN"),
#line 4690
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4691
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4693
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4694
        .doubleBattle = TRUE,
#line 4695
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4697
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4699
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4698
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4701
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4703
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4702
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4705
    [TRAINER_TIMMY] =
    {
#line 4706
        .trainerName = _("TIMMY"),
#line 4707
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4708
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4710
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4711
        .doubleBattle = TRUE,
#line 4712
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4714
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4716
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4715
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4718
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4720
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4719
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4722
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4724
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4723
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4726
    [TRAINER_WALLACE] =
    {
#line 4727
        .trainerName = _("WALLACE"),
#line 4728
        .trainerClass = TRAINER_CLASS_CHAMPION,
#line 4729
        .trainerPic = TRAINER_PIC_CHAMPION_WALLACE,
        .encounterMusic_gender = 
#line 4731
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4732
        .doubleBattle = TRUE,
#line 4733
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 4734
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4736
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4738
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4737
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4739
                MOVE_RAIN_DANCE,
                MOVE_WATER_SPOUT,
                MOVE_DOUBLE_EDGE,
                MOVE_BLIZZARD,
            },
            },
            {
#line 4744
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4746
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4745
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4747
                MOVE_TOXIC,
                MOVE_HYDRO_PUMP,
                MOVE_SLUDGE_BOMB,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 4752
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4754
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4753
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4755
                MOVE_GIGA_DRAIN,
                MOVE_SURF,
                MOVE_LEECH_SEED,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 4760
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4762
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4761
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4763
                MOVE_EARTHQUAKE,
                MOVE_SURF,
                MOVE_AMNESIA,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 4768
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4770
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4769
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4771
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
                MOVE_HYPER_BEAM,
                MOVE_SURF,
            },
            },
            {
#line 4776
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4776
            .heldItem = ITEM_SITRUS_BERRY,
#line 4778
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4777
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4779
                MOVE_RECOVER,
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 4784
    [TRAINER_ANDREW] =
    {
#line 4785
        .trainerName = _("ANDREW"),
#line 4786
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4787
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 4789
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4790
        .doubleBattle = TRUE,
#line 4791
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4793
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4795
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4794
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4797
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4799
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4798
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4801
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4803
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4802
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4805
    [TRAINER_IVAN] =
    {
#line 4806
        .trainerName = _("IVAN"),
#line 4807
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4808
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 4810
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4811
        .doubleBattle = TRUE,
#line 4812
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4814
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4816
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4815
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4818
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4820
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4819
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4822
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4824
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4823
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4826
    [TRAINER_CLAUDE] =
    {
#line 4827
        .trainerName = _("CLAUDE"),
#line 4828
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4829
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 4831
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4832
        .doubleBattle = TRUE,
#line 4833
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4835
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4837
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4836
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4839
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4841
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4840
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4843
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4845
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4844
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4847
    [TRAINER_ELLIOT_1] =
    {
#line 4848
        .trainerName = _("ELLIOT"),
#line 4849
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4850
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 4852
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4853
        .doubleBattle = TRUE,
#line 4854
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4856
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4858
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4857
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4860
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4862
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4861
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4864
    [TRAINER_NED] =
    {
#line 4865
        .trainerName = _("NED"),
#line 4866
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4867
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 4869
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4870
        .doubleBattle = TRUE,
#line 4871
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4873
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4875
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4874
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4877
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4879
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4878
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4881
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4883
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4882
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4885
    [TRAINER_DALE] =
    {
#line 4886
        .trainerName = _("DALE"),
#line 4887
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4888
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 4890
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4891
        .doubleBattle = TRUE,
#line 4892
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4894
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4896
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4895
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4898
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4900
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4899
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4902
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4904
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4903
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4906
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4908
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4907
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4910
    [TRAINER_NOLAN] =
    {
#line 4911
        .trainerName = _("NOLAN"),
#line 4912
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4913
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 4915
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4916
        .doubleBattle = TRUE,
#line 4917
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4919
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4921
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4920
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4923
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4925
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4924
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4927
    [TRAINER_BARNY] =
    {
#line 4928
        .trainerName = _("BARNY"),
#line 4929
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4930
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 4932
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4933
        .doubleBattle = TRUE,
#line 4934
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4936
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4938
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4937
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4940
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4942
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4941
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4944
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4946
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4945
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4948
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4950
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4949
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4952
    [TRAINER_WADE] =
    {
#line 4953
        .trainerName = _("WADE"),
#line 4954
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4955
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 4957
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4958
        .doubleBattle = TRUE,
#line 4959
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4961
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4963
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4962
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4965
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4967
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4966
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4969
    [TRAINER_CARTER] =
    {
#line 4970
        .trainerName = _("CARTER"),
#line 4971
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4972
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 4974
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4975
        .doubleBattle = TRUE,
#line 4976
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4978
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4980
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4979
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4982
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4984
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4983
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4986
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4988
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4987
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4990
    [TRAINER_RONALD] =
    {
#line 4991
        .trainerName = _("RONALD"),
#line 4992
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4993
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 4995
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4996
        .doubleBattle = TRUE,
#line 4997
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4999
            .species = SPECIES_MAGIKARP,
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
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5005
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5004
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5007
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5009
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5008
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5011
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5013
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5012
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5015
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5017
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5016
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5019
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5021
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5020
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5023
    [TRAINER_JACOB] =
    {
#line 5024
        .trainerName = _("JACOB"),
#line 5025
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5026
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5028
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5029
        .doubleBattle = TRUE,
#line 5030
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5032
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5034
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 5033
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5036
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5038
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 5037
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5040
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5042
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 5041
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5044
    [TRAINER_ANTHONY] =
    {
#line 5045
        .trainerName = _("ANTHONY"),
#line 5046
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5047
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5049
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5050
        .doubleBattle = TRUE,
#line 5051
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5053
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5055
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5054
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5057
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5059
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5058
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5061
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5063
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5062
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5065
    [TRAINER_BENJAMIN_1] =
    {
#line 5066
        .trainerName = _("BENJAMIN"),
#line 5067
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5068
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5070
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5071
        .doubleBattle = TRUE,
#line 5072
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5074
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5076
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5075
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5078
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5080
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5079
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5082
    [TRAINER_ABIGAIL_1] =
    {
#line 5083
        .trainerName = _("ABIGAIL"),
#line 5084
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5085
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5086
F_TRAINER_FEMALE | 
#line 5087
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5088
        .doubleBattle = TRUE,
#line 5089
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5091
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5093
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5092
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5095
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5097
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5096
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5099
    [TRAINER_JASMINE] =
    {
#line 5100
        .trainerName = _("JASMINE"),
#line 5101
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5102
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5103
F_TRAINER_FEMALE | 
#line 5104
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5105
        .doubleBattle = TRUE,
#line 5106
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5108
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5110
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 5109
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5112
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5114
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 5113
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5116
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5118
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5117
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5120
    [TRAINER_DYLAN_1] =
    {
#line 5121
        .trainerName = _("DYLAN"),
#line 5122
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5123
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5125
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5126
        .doubleBattle = TRUE,
#line 5127
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5129
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5131
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5130
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5133
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5135
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5134
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5137
    [TRAINER_MARIA_1] =
    {
#line 5138
        .trainerName = _("MARIA"),
#line 5139
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5140
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5141
F_TRAINER_FEMALE | 
#line 5142
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5143
        .doubleBattle = TRUE,
#line 5144
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5146
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5148
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5147
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5150
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5152
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5151
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5154
    [TRAINER_CAMDEN] =
    {
#line 5155
        .trainerName = _("CAMDEN"),
#line 5156
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5157
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5159
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5160
        .doubleBattle = TRUE,
#line 5161
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5163
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5165
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5164
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5167
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5169
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5168
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5171
    [TRAINER_DEMETRIUS] =
    {
#line 5172
        .trainerName = _("DEMETRIUS"),
#line 5173
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5174
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 5176
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5177
        .doubleBattle = TRUE,
#line 5178
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5180
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5182
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5181
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5184
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5186
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5185
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5188
    [TRAINER_ISAIAH_1] =
    {
#line 5189
        .trainerName = _("ISAIAH"),
#line 5190
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5191
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5193
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5194
        .doubleBattle = TRUE,
#line 5195
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5197
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5199
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5198
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5201
    [TRAINER_PABLO_1] =
    {
#line 5202
        .trainerName = _("PABLO"),
#line 5203
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5204
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5206
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5207
        .doubleBattle = TRUE,
#line 5208
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5210
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5212
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5211
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5214
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5216
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5215
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5218
    [TRAINER_CHASE] =
    {
#line 5219
        .trainerName = _("CHASE"),
#line 5220
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5221
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5223
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5224
        .doubleBattle = TRUE,
#line 5225
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5227
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5229
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5228
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5231
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5233
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 5232
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5235
    [TRAINER_ISOBEL] =
    {
#line 5236
        .trainerName = _("ISOBEL"),
#line 5237
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5238
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5239
F_TRAINER_FEMALE | 
#line 5240
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5241
        .doubleBattle = TRUE,
#line 5242
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5244
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5246
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5245
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5248
    [TRAINER_DONNY] =
    {
#line 5249
        .trainerName = _("DONNY"),
#line 5250
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5251
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5252
F_TRAINER_FEMALE | 
#line 5253
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5254
        .doubleBattle = TRUE,
#line 5255
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5257
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5259
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5258
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5261
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5263
            .iv = TRAINER_PARTY_IVS(19, 19, 19, 19, 19, 19),
#line 5262
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5265
    [TRAINER_TALIA] =
    {
#line 5266
        .trainerName = _("TALIA"),
#line 5267
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5268
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5269
F_TRAINER_FEMALE | 
#line 5270
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5271
        .doubleBattle = TRUE,
#line 5272
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5274
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5276
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5275
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5278
    [TRAINER_KATELYN_1] =
    {
#line 5279
        .trainerName = _("KATELYN"),
#line 5280
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5281
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5282
F_TRAINER_FEMALE | 
#line 5283
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5284
        .doubleBattle = TRUE,
#line 5285
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5287
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5289
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5288
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5291
    [TRAINER_ALLISON] =
    {
#line 5292
        .trainerName = _("ALLISON"),
#line 5293
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5294
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5295
F_TRAINER_FEMALE | 
#line 5296
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5297
        .doubleBattle = TRUE,
#line 5298
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5300
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5302
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5301
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5304
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5306
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 5305
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5308
    [TRAINER_NICOLAS_1] =
    {
#line 5309
        .trainerName = _("NICOLAS"),
#line 5310
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 5311
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender = 
#line 5313
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5314
        .doubleBattle = TRUE,
#line 5315
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5317
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5319
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5318
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5321
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5323
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5322
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5325
    [TRAINER_AARON] =
    {
#line 5326
        .trainerName = _("AARON"),
#line 5327
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 5328
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender = 
#line 5330
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5331
        .doubleBattle = TRUE,
#line 5332
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5334
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5336
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5335
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5337
                MOVE_DRAGON_BREATH,
                MOVE_HEADBUTT,
                MOVE_FOCUS_ENERGY,
                MOVE_EMBER,
            },
            },
        },
    },
#line 5342
    [TRAINER_PERRY] =
    {
#line 5343
        .trainerName = _("PERRY"),
#line 5344
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5345
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5347
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5348
        .doubleBattle = TRUE,
#line 5349
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5351
            .species = SPECIES_ORICORIO_PAU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5353
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5352
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5355
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5357
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5356
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5359
    [TRAINER_HUGH] =
    {
#line 5360
        .trainerName = _("HUGH"),
#line 5361
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5362
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5364
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5365
        .doubleBattle = TRUE,
#line 5366
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5368
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5370
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5369
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5372
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5374
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5373
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5376
    [TRAINER_PHIL] =
    {
#line 5377
        .trainerName = _("PHIL"),
#line 5378
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5379
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5381
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5382
        .doubleBattle = TRUE,
#line 5383
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5385
            .species = SPECIES_RUFFLET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5387
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5386
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5389
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5391
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5390
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5393
    [TRAINER_JARED] =
    {
#line 5394
        .trainerName = _("JARED"),
#line 5395
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5396
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5398
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5399
        .doubleBattle = TRUE,
#line 5400
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5402
            .species = SPECIES_SQUAWKABILLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5404
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5403
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5406
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5408
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5407
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5410
    [TRAINER_HUMBERTO] =
    {
#line 5411
        .trainerName = _("HUMBERTO"),
#line 5412
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5413
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5415
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5416
        .doubleBattle = TRUE,
#line 5417
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5419
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5421
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 5420
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5423
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5425
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 5424
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5427
    [TRAINER_PRESLEY] =
    {
#line 5428
        .trainerName = _("PRESLEY"),
#line 5429
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5430
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5432
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5433
        .doubleBattle = TRUE,
#line 5434
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5436
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5438
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5437
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5440
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5442
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5441
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5444
    [TRAINER_EDWARDO] =
    {
#line 5445
        .trainerName = _("EDWARDO"),
#line 5446
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5447
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5449
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5450
        .doubleBattle = TRUE,
#line 5451
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5453
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5455
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5454
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5457
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5459
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5458
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5461
    [TRAINER_COLIN] =
    {
#line 5462
        .trainerName = _("COLIN"),
#line 5463
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5464
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5466
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5467
        .doubleBattle = TRUE,
#line 5468
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5470
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5472
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5471
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5474
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5476
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5475
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5478
    [TRAINER_ROBERT_1] =
    {
#line 5479
        .trainerName = _("ROBERT"),
#line 5480
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5481
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5483
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5484
        .doubleBattle = TRUE,
#line 5485
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5487
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5489
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5488
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5491
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5493
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5492
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5495
    [TRAINER_BENNY] =
    {
#line 5496
        .trainerName = _("BENNY"),
#line 5497
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5498
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5500
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5501
        .doubleBattle = TRUE,
#line 5502
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5504
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5506
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5505
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5508
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5510
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5509
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5512
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5514
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5513
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5516
    [TRAINER_CHESTER] =
    {
#line 5517
        .trainerName = _("CHESTER"),
#line 5518
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5519
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5521
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5522
        .doubleBattle = TRUE,
#line 5523
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5525
            .species = SPECIES_ORICORIO_BAILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5527
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5526
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5529
            .species = SPECIES_CHATOT_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5531
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5530
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5533
    [TRAINER_ALEX] =
    {
#line 5534
        .trainerName = _("ALEX"),
#line 5535
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5536
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5538
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5539
        .doubleBattle = TRUE,
#line 5540
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5542
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5544
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5543
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5546
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5548
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5547
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5550
    [TRAINER_BECK] =
    {
#line 5551
        .trainerName = _("BECK"),
#line 5552
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5553
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 5555
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5556
        .doubleBattle = TRUE,
#line 5557
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5559
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5561
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5560
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5563
    [TRAINER_YASU] =
    {
#line 5564
        .trainerName = _("YASU"),
#line 5565
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5566
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 5568
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5569
        .doubleBattle = TRUE,
#line 5570
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5572
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5574
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5573
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5576
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5578
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5577
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5580
    [TRAINER_TAKASHI] =
    {
#line 5581
        .trainerName = _("TAKASHI"),
#line 5582
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5583
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 5585
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5586
        .doubleBattle = TRUE,
#line 5587
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5589
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5591
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5590
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5593
            .species = SPECIES_PAWNIARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5595
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5594
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5597
    [TRAINER_DIANNE] =
    {
#line 5598
        .trainerName = _("DIANNE"),
#line 5599
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 5600
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 5601
F_TRAINER_FEMALE | 
#line 5602
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5603
        .doubleBattle = TRUE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5605
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5607
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5606
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5608
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 5611
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5613
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5612
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5614
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 5617
    [TRAINER_JANI] =
    {
#line 5618
        .trainerName = _("JANI"),
#line 5619
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 5620
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender = 
#line 5621
F_TRAINER_FEMALE | 
#line 5622
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5623
        .doubleBattle = TRUE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5625
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5627
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5626
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5629
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5631
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5630
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5633
    [TRAINER_LAO_1] =
    {
#line 5634
        .trainerName = _("LAO"),
#line 5635
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5636
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 5638
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5639
        .doubleBattle = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5641
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5643
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5642
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5644
                MOVE_POISON_GAS,
                MOVE_POUND,
                MOVE_YAWN,
                MOVE_PROTECT,
            },
            },
            {
#line 5649
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5651
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5650
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5652
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SMOG,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 5657
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5659
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5658
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5660
                MOVE_DISABLE,
                MOVE_POUND,
                MOVE_SLUDGE,
                MOVE_PROTECT,
            },
            },
            {
#line 5665
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5667
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5666
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5668
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
        },
    },
#line 5673
    [TRAINER_LUNG] =
    {
#line 5674
        .trainerName = _("LUNG"),
#line 5675
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5676
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 5678
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5679
        .doubleBattle = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5681
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5683
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5682
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5685
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5687
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5686
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5689
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5691
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5690
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5693
    [TRAINER_JOCELYN] =
    {
#line 5694
        .trainerName = _("JOCELYN"),
#line 5695
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5696
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 5697
F_TRAINER_FEMALE | 
#line 5698
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5699
        .doubleBattle = TRUE,
#line 5700
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5702
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5704
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 5703
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5706
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5708
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 5707
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5710
    [TRAINER_LAURA] =
    {
#line 5711
        .trainerName = _("LAURA"),
#line 5712
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5713
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 5714
F_TRAINER_FEMALE | 
#line 5715
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5716
        .doubleBattle = TRUE,
#line 5717
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5719
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5721
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5720
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5723
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5725
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5724
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5727
    [TRAINER_CYNDY_1] =
    {
#line 5728
        .trainerName = _("CYNDY"),
#line 5729
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5730
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 5731
F_TRAINER_FEMALE | 
#line 5732
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5733
        .doubleBattle = TRUE,
#line 5734
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5736
            .species = SPECIES_MIENFOO_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5738
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 5737
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5740
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5742
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 5741
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5744
    [TRAINER_CORA] =
    {
#line 5745
        .trainerName = _("CORA"),
#line 5746
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5747
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 5748
F_TRAINER_FEMALE | 
#line 5749
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5750
        .doubleBattle = TRUE,
#line 5751
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5753
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5755
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5754
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5757
    [TRAINER_PAULA] =
    {
#line 5758
        .trainerName = _("PAULA"),
#line 5759
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5760
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 5761
F_TRAINER_FEMALE | 
#line 5762
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5763
        .doubleBattle = TRUE,
#line 5764
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5766
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5768
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5767
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5770
    [TRAINER_MADELINE_1] =
    {
#line 5771
        .trainerName = _("MADELINE"),
#line 5772
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5773
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 5774
F_TRAINER_FEMALE | 
#line 5775
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5776
        .doubleBattle = TRUE,
#line 5777
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5779
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5781
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5780
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5782
                MOVE_EMBER,
                MOVE_TACKLE,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 5787
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5789
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5788
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5790
                MOVE_FIRE_SPIN,
                MOVE_TACKLE,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 5795
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5797
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5796
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5798
                MOVE_FLAME_BURST,
                MOVE_TACKLE,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 5803
    [TRAINER_CLARISSA] =
    {
#line 5804
        .trainerName = _("CLARISSA"),
#line 5805
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5806
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 5807
F_TRAINER_FEMALE | 
#line 5808
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5809
        .doubleBattle = TRUE,
#line 5810
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5812
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5814
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5813
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5816
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5818
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5817
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5820
    [TRAINER_ANGELICA] =
    {
#line 5821
        .trainerName = _("ANGELICA"),
#line 5822
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5823
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 5824
F_TRAINER_FEMALE | 
#line 5825
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5826
        .doubleBattle = TRUE,
#line 5827
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5829
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5831
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 5830
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5832
                MOVE_SUNNY_DAY,
                MOVE_WEATHER_BALL,
                MOVE_SOLAR_BEAM,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 5837
            .species = SPECIES_SUNFLORA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5840
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 5839
            .ability = ABILITY_SOLAR_POWER,
#line 5838
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5841
                MOVE_SLEEP_POWDER,
                MOVE_WEATHER_BALL,
                MOVE_GIGA_DRAIN,
                MOVE_SYNTHESIS,
            },
            },
        },
    },
#line 5846
    [TRAINER_BEVERLY] =
    {
#line 5847
        .trainerName = _("BEVERLY"),
#line 5848
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5849
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 5850
F_TRAINER_FEMALE | 
#line 5851
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5852
        .doubleBattle = TRUE,
#line 5853
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5855
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5857
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5856
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5859
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5861
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5860
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5863
    [TRAINER_IMANI] =
    {
#line 5864
        .trainerName = _("IMANI"),
#line 5865
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5866
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 5867
F_TRAINER_FEMALE | 
#line 5868
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5869
        .doubleBattle = TRUE,
#line 5870
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5872
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5874
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5873
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5876
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5878
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5877
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5880
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5882
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5881
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5884
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5886
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5885
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5888
    [TRAINER_KYLA] =
    {
#line 5889
        .trainerName = _("KYLA"),
#line 5890
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5891
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 5892
F_TRAINER_FEMALE | 
#line 5893
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5894
        .doubleBattle = TRUE,
#line 5895
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5897
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5899
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5898
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5901
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5903
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5902
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5905
    [TRAINER_DENISE] =
    {
#line 5906
        .trainerName = _("DENISE"),
#line 5907
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5908
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 5909
F_TRAINER_FEMALE | 
#line 5910
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5911
        .doubleBattle = TRUE,
#line 5912
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5914
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5916
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5915
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5918
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5920
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5919
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5922
    [TRAINER_BETH] =
    {
#line 5923
        .trainerName = _("BETH"),
#line 5924
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5925
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 5926
F_TRAINER_FEMALE | 
#line 5927
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5928
        .doubleBattle = TRUE,
#line 5929
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5931
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5933
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5932
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5935
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5937
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5936
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5939
            .species = SPECIES_EISCUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5941
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5940
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5943
    [TRAINER_TARA] =
    {
#line 5944
        .trainerName = _("TARA"),
#line 5945
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5946
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 5947
F_TRAINER_FEMALE | 
#line 5948
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5949
        .doubleBattle = TRUE,
#line 5950
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5952
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5954
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5953
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5956
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5958
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5957
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5960
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5962
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5961
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5964
    [TRAINER_MISSY] =
    {
#line 5965
        .trainerName = _("MISSY"),
#line 5966
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5967
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 5968
F_TRAINER_FEMALE | 
#line 5969
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5970
        .doubleBattle = TRUE,
#line 5971
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5973
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5975
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5974
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5977
            .species = SPECIES_CETODDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5979
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5978
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5981
    [TRAINER_ALICE] =
    {
#line 5982
        .trainerName = _("ALICE"),
#line 5983
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5984
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 5985
F_TRAINER_FEMALE | 
#line 5986
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5987
        .doubleBattle = TRUE,
#line 5988
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5990
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5992
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5991
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5994
            .species = SPECIES_CETODDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5996
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5995
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5998
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6000
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5999
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6002
    [TRAINER_JENNY_1] =
    {
#line 6003
        .trainerName = _("JENNY"),
#line 6004
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6005
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6006
F_TRAINER_FEMALE | 
#line 6007
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6008
        .doubleBattle = TRUE,
#line 6009
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6011
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6013
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6012
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6015
    [TRAINER_GRACE] =
    {
#line 6016
        .trainerName = _("GRACE"),
#line 6017
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6018
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6019
F_TRAINER_FEMALE | 
#line 6020
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6021
        .doubleBattle = TRUE,
#line 6022
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6024
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6026
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6025
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6028
    [TRAINER_TANYA] =
    {
#line 6029
        .trainerName = _("TANYA"),
#line 6030
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6031
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6032
F_TRAINER_FEMALE | 
#line 6033
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6034
        .doubleBattle = TRUE,
#line 6035
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6037
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6039
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6038
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6041
    [TRAINER_SHARON] =
    {
#line 6042
        .trainerName = _("SHARON"),
#line 6043
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6044
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6045
F_TRAINER_FEMALE | 
#line 6046
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6047
        .doubleBattle = TRUE,
#line 6048
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6050
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6052
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6051
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6054
    [TRAINER_NIKKI] =
    {
#line 6055
        .trainerName = _("NIKKI"),
#line 6056
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6057
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6058
F_TRAINER_FEMALE | 
#line 6059
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6060
        .doubleBattle = TRUE,
#line 6061
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6063
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6065
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6064
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6067
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6069
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6068
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6071
    [TRAINER_BRENDA] =
    {
#line 6072
        .trainerName = _("BRENDA"),
#line 6073
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6074
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6075
F_TRAINER_FEMALE | 
#line 6076
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6077
        .doubleBattle = TRUE,
#line 6078
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6080
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6082
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6081
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6084
    [TRAINER_KATIE] =
    {
#line 6085
        .trainerName = _("KATIE"),
#line 6086
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6087
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6088
F_TRAINER_FEMALE | 
#line 6089
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6090
        .doubleBattle = TRUE,
#line 6091
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6093
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6095
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6094
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6097
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6099
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6098
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6101
    [TRAINER_SUSIE] =
    {
#line 6102
        .trainerName = _("SUSIE"),
#line 6103
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6104
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6105
F_TRAINER_FEMALE | 
#line 6106
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6107
        .doubleBattle = TRUE,
#line 6108
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6110
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6112
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6111
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6114
    [TRAINER_KARA] =
    {
#line 6115
        .trainerName = _("KARA"),
#line 6116
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6117
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6118
F_TRAINER_FEMALE | 
#line 6119
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6120
        .doubleBattle = TRUE,
#line 6121
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6123
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6125
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6124
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6127
    [TRAINER_DANA] =
    {
#line 6128
        .trainerName = _("DANA"),
#line 6129
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6130
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6131
F_TRAINER_FEMALE | 
#line 6132
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6133
        .doubleBattle = TRUE,
#line 6134
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6136
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6138
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6137
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6140
    [TRAINER_SIENNA] =
    {
#line 6141
        .trainerName = _("SIENNA"),
#line 6142
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6143
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6144
F_TRAINER_FEMALE | 
#line 6145
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6146
        .doubleBattle = TRUE,
#line 6147
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6149
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6151
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6150
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6153
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6155
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6154
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6157
    [TRAINER_DEBRA] =
    {
#line 6158
        .trainerName = _("DEBRA"),
#line 6159
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6160
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6161
F_TRAINER_FEMALE | 
#line 6162
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6163
        .doubleBattle = TRUE,
#line 6164
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6166
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6168
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6167
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6170
    [TRAINER_LINDA] =
    {
#line 6171
        .trainerName = _("LINDA"),
#line 6172
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6173
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6174
F_TRAINER_FEMALE | 
#line 6175
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6176
        .doubleBattle = TRUE,
#line 6177
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6179
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6181
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6180
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6183
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6185
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6184
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6187
    [TRAINER_KAYLEE] =
    {
#line 6188
        .trainerName = _("KAYLEE"),
#line 6189
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6190
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6191
F_TRAINER_FEMALE | 
#line 6192
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6193
        .doubleBattle = TRUE,
#line 6194
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6196
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6198
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6197
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6200
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6202
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6201
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6204
    [TRAINER_LAUREL] =
    {
#line 6205
        .trainerName = _("LAUREL"),
#line 6206
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6207
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6208
F_TRAINER_FEMALE | 
#line 6209
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6210
        .doubleBattle = TRUE,
#line 6211
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6213
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6215
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6214
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6217
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6219
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6218
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6221
    [TRAINER_CARLEE] =
    {
#line 6222
        .trainerName = _("CARLEE"),
#line 6223
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6224
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 6225
F_TRAINER_FEMALE | 
#line 6226
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6227
        .doubleBattle = TRUE,
#line 6228
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6230
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6232
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6231
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6234
    [TRAINER_HEIDI] =
    {
#line 6235
        .trainerName = _("HEIDI"),
#line 6236
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6237
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 6238
F_TRAINER_FEMALE | 
#line 6239
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6240
        .doubleBattle = TRUE,
#line 6241
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6243
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6245
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6244
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6246
                MOVE_DIG,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
                MOVE_SLASH,
            },
            },
            {
#line 6251
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6253
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6252
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6254
                MOVE_RAPID_SPIN,
                MOVE_MUD_SLAP,
                MOVE_PSYBEAM,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 6259
    [TRAINER_BECKY] =
    {
#line 6260
        .trainerName = _("BECKY"),
#line 6261
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6262
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 6263
F_TRAINER_FEMALE | 
#line 6264
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6265
        .doubleBattle = TRUE,
#line 6266
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6268
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6270
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6269
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6271
                MOVE_ROLLOUT,
                MOVE_BUBBLE_BEAM,
                MOVE_TAIL_WHIP,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 6276
            .species = SPECIES_CACNEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6278
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6277
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6279
                MOVE_SAND_ATTACK,
                MOVE_NEEDLE_ARM,
                MOVE_LEER,
                MOVE_LEECH_SEED,
            },
            },
        },
    },
#line 6284
    [TRAINER_CAROL] =
    {
#line 6285
        .trainerName = _("CAROL"),
#line 6286
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6287
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 6288
F_TRAINER_FEMALE | 
#line 6289
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6290
        .doubleBattle = TRUE,
#line 6291
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6293
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6295
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6294
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6297
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6299
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6298
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6301
    [TRAINER_NANCY] =
    {
#line 6302
        .trainerName = _("NANCY"),
#line 6303
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6304
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 6305
F_TRAINER_FEMALE | 
#line 6306
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6307
        .doubleBattle = TRUE,
#line 6308
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6310
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6312
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6311
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6314
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6316
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6315
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6318
    [TRAINER_MARTHA] =
    {
#line 6319
        .trainerName = _("MARTHA"),
#line 6320
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6321
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 6322
F_TRAINER_FEMALE | 
#line 6323
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6324
        .doubleBattle = TRUE,
#line 6325
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6327
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6329
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6328
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6331
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6333
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6332
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6335
    [TRAINER_DIANA_1] =
    {
#line 6336
        .trainerName = _("DIANA"),
#line 6337
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6338
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 6339
F_TRAINER_FEMALE | 
#line 6340
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6341
        .doubleBattle = TRUE,
#line 6342
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6344
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6346
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6345
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6348
            .species = SPECIES_TOGEPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6350
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6349
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6352
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6354
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6353
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6356
    [TRAINER_CEDRIC] =
    {
#line 6357
        .trainerName = _("CEDRIC"),
#line 6358
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 6359
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 6361
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6362
        .doubleBattle = TRUE,
#line 6363
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6365
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6367
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6366
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6368
                MOVE_DESTINY_BOND,
                MOVE_SAFEGUARD,
                MOVE_COUNTER,
                MOVE_MIRROR_COAT,
            },
            },
            {
#line 6373
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6375
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6374
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6376
                MOVE_DESTINY_BOND,
                MOVE_SAFEGUARD,
                MOVE_COUNTER,
                MOVE_MIRROR_COAT,
            },
            },
        },
    },
#line 6381
    [TRAINER_IRENE] =
    {
#line 6382
        .trainerName = _("IRENE"),
#line 6383
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6384
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 6385
F_TRAINER_FEMALE | 
#line 6386
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6387
        .doubleBattle = TRUE,
#line 6388
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6390
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6392
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6391
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6394
            .species = SPECIES_TINKATINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6396
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6395
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6398
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6400
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6399
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6402
    [TRAINER_AMY_AND_LIV_1] =
    {
#line 6403
        .trainerName = _("AMY & LIV"),
#line 6404
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6405
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 6406
F_TRAINER_FEMALE | 
#line 6407
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6408
        .doubleBattle = TRUE,
#line 6409
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6411
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6413
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6412
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6415
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6417
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6416
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6419
    [TRAINER_GINA_AND_MIA_1] =
    {
#line 6420
        .trainerName = _("GINA & MIA"),
#line 6421
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6422
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 6424
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6425
        .doubleBattle = TRUE,
#line 6426
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6428
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6430
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6429
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6432
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6434
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6433
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6436
    [TRAINER_MIU_AND_YUKI] =
    {
#line 6437
        .trainerName = _("MIU & YUKI"),
#line 6438
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6439
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 6441
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6442
        .doubleBattle = TRUE,
#line 6443
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6445
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6447
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6446
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6449
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6451
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6450
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6453
    [TRAINER_HUEY] =
    {
#line 6454
        .trainerName = _("HUEY"),
#line 6455
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6456
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 6458
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6459
        .doubleBattle = TRUE,
#line 6460
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6462
            .species = SPECIES_WIMPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6464
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6463
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6466
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6468
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6467
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6470
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6472
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6471
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6474
    [TRAINER_EDMOND] =
    {
#line 6475
        .trainerName = _("EDMOND"),
#line 6476
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6477
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 6479
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6480
        .doubleBattle = TRUE,
#line 6481
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6483
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6485
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6484
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6487
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6489
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6488
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6491
    [TRAINER_ERNEST_1] =
    {
#line 6492
        .trainerName = _("ERNEST"),
#line 6493
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6494
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 6496
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6497
        .doubleBattle = TRUE,
#line 6498
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6500
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6502
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6501
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6504
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6506
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6505
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6508
    [TRAINER_DWAYNE] =
    {
#line 6509
        .trainerName = _("DWAYNE"),
#line 6510
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6511
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 6513
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6514
        .doubleBattle = TRUE,
#line 6515
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6517
            .species = SPECIES_WIMPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6519
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6518
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6521
            .species = SPECIES_CRABRAWLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6523
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6522
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6525
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6527
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6526
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6529
    [TRAINER_PHILLIP] =
    {
#line 6530
        .trainerName = _("PHILLIP"),
#line 6531
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6532
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 6534
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6535
        .doubleBattle = TRUE,
#line 6536
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6538
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6540
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6539
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6542
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6544
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6543
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6546
    [TRAINER_LEONARD] =
    {
#line 6547
        .trainerName = _("LEONARD"),
#line 6548
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6549
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 6551
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6552
        .doubleBattle = TRUE,
#line 6553
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6555
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6557
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6556
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6559
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6561
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6560
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6563
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6565
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6564
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6567
    [TRAINER_DUNCAN] =
    {
#line 6568
        .trainerName = _("DUNCAN"),
#line 6569
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6570
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 6572
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6573
        .doubleBattle = TRUE,
#line 6574
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6576
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6578
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6577
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6580
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6582
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6581
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6584
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6586
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6585
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6588
    [TRAINER_ELI] =
    {
#line 6589
        .trainerName = _("ELI"),
#line 6590
        .trainerClass = TRAINER_CLASS_HIKER,
#line 6591
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 6593
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6594
        .doubleBattle = TRUE,
#line 6595
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6597
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6599
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6598
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6601
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6603
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6602
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6605
    [TRAINER_ANNIKA] =
    {
#line 6606
        .trainerName = _("ANNIKA"),
#line 6607
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 6608
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender = 
#line 6609
F_TRAINER_FEMALE | 
#line 6610
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6611
        .doubleBattle = TRUE,
#line 6612
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6614
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6614
            .heldItem = ITEM_ORAN_BERRY,
#line 6616
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6615
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6617
                MOVE_FLAIL,
                MOVE_WATER_PULSE,
                MOVE_RETURN,
                MOVE_ATTRACT,
            },
            },
            {
#line 6622
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6622
            .heldItem = ITEM_ORAN_BERRY,
#line 6624
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6623
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6625
                MOVE_FLAIL,
                MOVE_WATER_PULSE,
                MOVE_RETURN,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 6630
    [TRAINER_JAZMYN] =
    {
#line 6631
        .trainerName = _("JAZMYN"),
#line 6632
        .trainerClass = TRAINER_CLASS_COOLTRAINER_2,
#line 6633
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 6634
F_TRAINER_FEMALE | 
#line 6635
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6636
        .doubleBattle = TRUE,
#line 6637
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6639
            .species = SPECIES_PAWNIARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6641
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6640
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6643
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6645
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6644
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6647
    [TRAINER_JONAS] =
    {
#line 6648
        .trainerName = _("JONAS"),
#line 6649
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6650
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 6652
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6653
        .doubleBattle = TRUE,
#line 6654
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6656
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6658
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6657
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6660
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6662
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6661
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6664
            .species = SPECIES_PAWNIARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6666
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6665
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6668
    [TRAINER_KAYLEY] =
    {
#line 6669
        .trainerName = _("KAYLEY"),
#line 6670
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 6671
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 6672
F_TRAINER_FEMALE | 
#line 6673
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6674
        .doubleBattle = TRUE,
#line 6675
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6677
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6679
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6678
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6680
                MOVE_SNOWSCAPE,
                MOVE_WEATHER_BALL,
                MOVE_BLIZZARD,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 6685
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6687
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6686
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6688
                MOVE_SNOWSCAPE,
                MOVE_WEATHER_BALL,
                MOVE_BLIZZARD,
                MOVE_ENERGY_BALL,
            },
            },
        },
    },
#line 6693
    [TRAINER_AURON] =
    {
#line 6694
        .trainerName = _("AURON"),
#line 6695
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6696
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender = 
#line 6698
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6699
        .doubleBattle = TRUE,
#line 6700
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6702
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6704
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6703
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6706
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6708
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6707
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6710
    [TRAINER_KELVIN] =
    {
#line 6711
        .trainerName = _("KELVIN"),
#line 6712
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6713
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 6715
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6716
        .doubleBattle = TRUE,
#line 6717
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6719
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6721
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6720
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6723
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6725
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6724
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6727
    [TRAINER_MARLEY] =
    {
#line 6728
        .trainerName = _("MARLEY"),
#line 6729
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6730
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 6731
F_TRAINER_FEMALE | 
#line 6732
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6733
        .doubleBattle = TRUE,
#line 6734
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6736
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6738
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6737
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6739
                MOVE_BITE,
                MOVE_ROAR,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
            },
            },
        },
    },
#line 6744
    [TRAINER_REYNA] =
    {
#line 6745
        .trainerName = _("REYNA"),
#line 6746
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6747
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 6748
F_TRAINER_FEMALE | 
#line 6749
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6750
        .doubleBattle = TRUE,
#line 6751
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6753
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6755
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6754
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6757
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6759
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6758
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6761
    [TRAINER_HUDSON] =
    {
#line 6762
        .trainerName = _("HUDSON"),
#line 6763
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6764
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 6766
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6767
        .doubleBattle = TRUE,
#line 6768
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6770
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6772
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6771
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6774
    [TRAINER_CONOR] =
    {
#line 6775
        .trainerName = _("CONOR"),
#line 6776
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6777
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender = 
#line 6779
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6780
        .doubleBattle = TRUE,
#line 6781
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6783
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6785
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6784
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6787
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6789
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6788
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6791
    [TRAINER_EDWIN_1] =
    {
#line 6792
        .trainerName = _("EDWIN"),
#line 6793
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6794
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender = 
#line 6796
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6797
        .doubleBattle = TRUE,
#line 6798
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6800
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6802
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6801
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6804
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6806
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6805
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6808
    [TRAINER_HECTOR] =
    {
#line 6809
        .trainerName = _("HECTOR"),
#line 6810
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6811
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender = 
#line 6813
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6814
        .doubleBattle = TRUE,
#line 6815
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6817
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6819
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6818
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6821
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6823
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6822
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6825
    [TRAINER_TABITHA_MOSSDEEP] =
    {
#line 6826
        .trainerName = _("TABITHA"),
#line 6827
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 6828
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN_M,
        .encounterMusic_gender = 
#line 6830
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6831
        .doubleBattle = TRUE,
#line 6832
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6834
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6836
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6835
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6838
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6840
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6839
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6842
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6844
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6843
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6846
    [TRAINER_WALLY_VR_1] =
    {
#line 6847
        .trainerName = _("WALLY"),
#line 6848
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6849
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 6851
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6852
        .doubleBattle = TRUE,
#line 6853
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 6855
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6857
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6856
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6858
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 6863
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6865
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6864
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6866
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 6871
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6873
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6872
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6874
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 6879
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6881
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6880
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6882
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 6887
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6889
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 6888
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6890
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 6895
    [TRAINER_BRENDAN_ROUTE_103_MUDKIP] =
    {
#line 6896
        .trainerName = _("BRENDAN"),
#line 6897
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6898
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 6900
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6901
        .doubleBattle = TRUE,
#line 6902
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6904
            .species = SPECIES_TREECKO,
#line 6904
            .gender = TRAINER_MON_MALE,
#line 6906
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6905
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6907
                MOVE_POUND,
                MOVE_LEER,
            },
            },
            {
#line 6910
            .species = SPECIES_EEVEE,
#line 6910
            .gender = TRAINER_MON_MALE,
#line 6912
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6911
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6913
                MOVE_GROWL,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 6916
    [TRAINER_BRENDAN_ROUTE_110_MUDKIP] =
    {
#line 6917
        .trainerName = _("BRENDAN"),
#line 6918
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6919
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 6921
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6922
        .doubleBattle = TRUE,
#line 6923
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 6925
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6927
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6926
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6929
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6931
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6930
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6933
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6935
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6934
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6937
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6939
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6938
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6941
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6943
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6942
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6945
    [TRAINER_BRENDAN_ROUTE_119_MUDKIP] =
    {
#line 6946
        .trainerName = _("BRENDAN"),
#line 6947
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6948
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 6950
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6951
        .doubleBattle = TRUE,
#line 6952
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 6954
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6957
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6956
            .ability = ABILITY_INNER_FOCUS,
#line 6955
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6958
                MOVE_SNARL,
                MOVE_FOUL_PLAY,
                MOVE_THUNDER_WAVE,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 6963
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6963
            .heldItem = ITEM_SCOPE_LENS,
#line 6966
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 6965
            .ability = ABILITY_SAND_VEIL,
#line 6964
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6967
                MOVE_GYRO_BALL,
                MOVE_SLASH,
                MOVE_SWORDS_DANCE,
                MOVE_DRILL_RUN,
            },
            },
            {
#line 6972
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6975
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 6974
            .ability = ABILITY_WATER_BUBBLE,
#line 6973
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6976
                MOVE_HYDRO_PUMP,
                MOVE_ICE_BEAM,
                MOVE_AQUA_RING,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 6981
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6984
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 6983
            .ability = ABILITY_FLASH_FIRE,
#line 6982
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6985
                MOVE_SHADOW_BALL,
                MOVE_FLAMETHROWER,
                MOVE_WILL_O_WISP,
                MOVE_SPITE,
            },
            },
            {
#line 6990
            .species = SPECIES_SCEPTILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6990
            .heldItem = ITEM_OCCA_BERRY,
#line 6993
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 6992
            .ability = ABILITY_OVERGROW,
#line 6991
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6994
                MOVE_LEAF_BLADE,
                MOVE_NIGHT_SLASH,
                MOVE_DETECT,
                MOVE_PURSUIT,
            },
            },
        },
    },
#line 6999
    [TRAINER_BRENDAN_ROUTE_103_TREECKO] =
    {
#line 7000
        .trainerName = _("BRENDAN"),
#line 7001
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7002
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 7004
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7005
        .doubleBattle = TRUE,
#line 7006
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7008
            .species = SPECIES_TORCHIC,
#line 7008
            .gender = TRAINER_MON_MALE,
#line 7010
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7009
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7011
                MOVE_SCRATCH,
                MOVE_GROWL,
            },
            },
            {
#line 7014
            .species = SPECIES_EEVEE,
#line 7014
            .gender = TRAINER_MON_MALE,
#line 7016
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7015
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7017
                MOVE_GROWL,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 7020
    [TRAINER_BRENDAN_ROUTE_110_TREECKO] =
    {
#line 7021
        .trainerName = _("BRENDAN"),
#line 7022
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7023
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 7025
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7026
        .doubleBattle = TRUE,
#line 7027
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7029
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7031
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7030
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7033
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7035
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7034
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7037
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7039
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7038
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7041
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7043
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7042
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7045
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7047
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7046
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7049
    [TRAINER_BRENDAN_ROUTE_119_TREECKO] =
    {
#line 7050
        .trainerName = _("BRENDAN"),
#line 7051
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7052
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 7054
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7055
        .doubleBattle = TRUE,
#line 7056
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7058
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7061
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7060
            .ability = ABILITY_INNER_FOCUS,
#line 7059
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7062
                MOVE_SNARL,
                MOVE_FOUL_PLAY,
                MOVE_THUNDER_WAVE,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 7067
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7067
            .heldItem = ITEM_SCOPE_LENS,
#line 7070
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7069
            .ability = ABILITY_SAND_VEIL,
#line 7068
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7071
                MOVE_GYRO_BALL,
                MOVE_SLASH,
                MOVE_SWORDS_DANCE,
                MOVE_DRILL_RUN,
            },
            },
            {
#line 7076
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7079
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7078
            .ability = ABILITY_TECHNICIAN,
#line 7077
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7080
                MOVE_MACH_PUNCH,
                MOVE_BULLET_SEED,
                MOVE_SPORE,
                MOVE_COUNTER,
            },
            },
            {
#line 7085
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7088
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7087
            .ability = ABILITY_ANALYTIC,
#line 7086
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7089
                MOVE_BRINE,
                MOVE_ICY_WIND,
                MOVE_MINIMIZE,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 7094
            .species = SPECIES_BLAZIKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7094
            .heldItem = ITEM_PASSHO_BERRY,
#line 7097
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 7096
            .ability = ABILITY_BLAZE,
#line 7095
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7098
                MOVE_BLAZE_KICK,
                MOVE_JUMP_KICK,
                MOVE_DETECT,
                MOVE_SLASH,
            },
            },
        },
    },
#line 7103
    [TRAINER_BRENDAN_ROUTE_103_TORCHIC] =
    {
#line 7104
        .trainerName = _("BRENDAN"),
#line 7105
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7106
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 7108
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7109
        .doubleBattle = TRUE,
#line 7110
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7112
            .species = SPECIES_MUDKIP,
#line 7112
            .gender = TRAINER_MON_MALE,
#line 7114
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7113
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7115
                MOVE_TACKLE,
                MOVE_GROWL,
            },
            },
            {
#line 7118
            .species = SPECIES_EEVEE,
#line 7118
            .gender = TRAINER_MON_MALE,
#line 7120
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7119
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7121
                MOVE_GROWL,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 7124
    [TRAINER_BRENDAN_ROUTE_110_TORCHIC] =
    {
#line 7125
        .trainerName = _("BRENDAN"),
#line 7126
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7127
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 7129
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7130
        .doubleBattle = TRUE,
#line 7131
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7133
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7135
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7134
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7137
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7139
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7138
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7141
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7143
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7142
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7145
            .species = SPECIES_SKIDDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7147
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7146
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7149
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7151
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7150
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7153
    [TRAINER_BRENDAN_ROUTE_119_TORCHIC] =
    {
#line 7154
        .trainerName = _("BRENDAN"),
#line 7155
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7156
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 7158
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7159
        .doubleBattle = TRUE,
#line 7160
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7162
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7165
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7164
            .ability = ABILITY_INNER_FOCUS,
#line 7163
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7166
                MOVE_SNARL,
                MOVE_FOUL_PLAY,
                MOVE_THUNDER_WAVE,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 7171
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7171
            .heldItem = ITEM_SCOPE_LENS,
#line 7174
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7173
            .ability = ABILITY_SAND_VEIL,
#line 7172
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7175
                MOVE_GYRO_BALL,
                MOVE_SLASH,
                MOVE_SWORDS_DANCE,
                MOVE_DRILL_RUN,
            },
            },
            {
#line 7180
            .species = SPECIES_CARBINK_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7183
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7182
            .ability = ABILITY_LEVITATE,
#line 7181
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7184
                MOVE_TAR_SHOT,
                MOVE_FLAME_WHEEL,
                MOVE_SCORCHING_SANDS,
                MOVE_SMACK_DOWN,
            },
            },
            {
#line 7189
            .species = SPECIES_GOGOAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7192
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7191
            .ability = ABILITY_GRASS_PELT,
#line 7190
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7193
                MOVE_HORN_LEECH,
                MOVE_HIGH_HORSEPOWER,
                MOVE_BULK_UP,
                MOVE_GRASSY_TERRAIN,
            },
            },
            {
#line 7198
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7198
            .heldItem = ITEM_RINDO_BERRY,
#line 7201
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 7200
            .ability = ABILITY_TORRENT,
#line 7199
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7202
                MOVE_MUDDY_WATER,
                MOVE_ROCK_SLIDE,
                MOVE_PROTECT,
                MOVE_MUD_BOMB,
            },
            },
        },
    },
#line 7207
    [TRAINER_MAY_ROUTE_103_MUDKIP] =
    {
#line 7208
        .trainerName = _("MAY"),
#line 7209
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7210
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 7211
F_TRAINER_FEMALE | 
#line 7212
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7213
        .doubleBattle = TRUE,
#line 7214
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7216
            .species = SPECIES_TREECKO,
#line 7216
            .gender = TRAINER_MON_FEMALE,
#line 7218
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7217
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7219
                MOVE_POUND,
                MOVE_LEER,
            },
            },
            {
#line 7222
            .species = SPECIES_EEVEE,
#line 7222
            .gender = TRAINER_MON_FEMALE,
#line 7224
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7223
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7225
                MOVE_GROWL,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 7228
    [TRAINER_MAY_ROUTE_110_MUDKIP] =
    {
#line 7229
        .trainerName = _("MAY"),
#line 7230
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7231
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 7232
F_TRAINER_FEMALE | 
#line 7233
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7234
        .doubleBattle = TRUE,
#line 7235
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7237
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7239
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7238
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7241
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7243
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7242
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7245
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7247
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7246
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7249
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7251
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7250
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7253
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7255
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7254
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7257
    [TRAINER_MAY_ROUTE_119_MUDKIP] =
    {
#line 7258
        .trainerName = _("MAY"),
#line 7259
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7260
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 7261
F_TRAINER_FEMALE | 
#line 7262
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7263
        .doubleBattle = TRUE,
#line 7264
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7266
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7269
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7268
            .ability = ABILITY_MAGIC_BOUNCE,
#line 7267
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7270
                MOVE_PSYSHOCK,
                MOVE_FUTURE_SIGHT,
                MOVE_REFLECT,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 7275
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7275
            .heldItem = ITEM_SOFT_SAND,
#line 7278
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7277
            .ability = ABILITY_SAP_SIPPER,
#line 7276
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7279
                MOVE_ICE_SHARD,
                MOVE_BODY_SLAM,
                MOVE_MIST,
                MOVE_STOMPING_TANTRUM,
            },
            },
            {
#line 7284
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7287
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7286
            .ability = ABILITY_WATER_BUBBLE,
#line 7285
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7288
                MOVE_HYDRO_PUMP,
                MOVE_ICE_BEAM,
                MOVE_AQUA_RING,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 7293
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7296
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7295
            .ability = ABILITY_FLASH_FIRE,
#line 7294
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7297
                MOVE_SHADOW_BALL,
                MOVE_FLAMETHROWER,
                MOVE_WILL_O_WISP,
                MOVE_SPITE,
            },
            },
            {
#line 7302
            .species = SPECIES_SCEPTILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7302
            .heldItem = ITEM_OCCA_BERRY,
#line 7305
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 7304
            .ability = ABILITY_OVERGROW,
#line 7303
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7306
                MOVE_LEAF_BLADE,
                MOVE_NIGHT_SLASH,
                MOVE_DETECT,
                MOVE_PURSUIT,
            },
            },
        },
    },
#line 7311
    [TRAINER_MAY_ROUTE_103_TREECKO] =
    {
#line 7312
        .trainerName = _("MAY"),
#line 7313
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7314
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 7315
F_TRAINER_FEMALE | 
#line 7316
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7317
        .doubleBattle = TRUE,
#line 7318
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7320
            .species = SPECIES_TORCHIC,
#line 7320
            .gender = TRAINER_MON_FEMALE,
#line 7322
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7321
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7323
                MOVE_SCRATCH,
                MOVE_GROWL,
            },
            },
            {
#line 7326
            .species = SPECIES_EEVEE,
#line 7326
            .gender = TRAINER_MON_FEMALE,
#line 7328
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7327
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7329
                MOVE_GROWL,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 7332
    [TRAINER_MAY_ROUTE_110_TREECKO] =
    {
#line 7333
        .trainerName = _("MAY"),
#line 7334
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7335
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 7336
F_TRAINER_FEMALE | 
#line 7337
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7338
        .doubleBattle = TRUE,
#line 7339
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7341
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7343
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7342
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7345
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7347
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7346
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7349
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7351
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7350
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7353
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7355
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7354
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7357
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7359
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7358
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7361
    [TRAINER_MAY_ROUTE_119_TREECKO] =
    {
#line 7362
        .trainerName = _("MAY"),
#line 7363
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7364
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 7365
F_TRAINER_FEMALE | 
#line 7366
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7367
        .doubleBattle = TRUE,
#line 7368
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7370
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7373
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7372
            .ability = ABILITY_MAGIC_BOUNCE,
#line 7371
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7374
                MOVE_PSYSHOCK,
                MOVE_FUTURE_SIGHT,
                MOVE_REFLECT,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 7379
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7379
            .heldItem = ITEM_SOFT_SAND,
#line 7382
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7381
            .ability = ABILITY_SAP_SIPPER,
#line 7380
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7383
                MOVE_ICE_SHARD,
                MOVE_BODY_SLAM,
                MOVE_MIST,
                MOVE_STOMPING_TANTRUM,
            },
            },
            {
#line 7388
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7391
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7390
            .ability = ABILITY_TECHNICIAN,
#line 7389
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7392
                MOVE_MACH_PUNCH,
                MOVE_BULLET_SEED,
                MOVE_SPORE,
                MOVE_COUNTER,
            },
            },
            {
#line 7397
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7400
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7399
            .ability = ABILITY_ANALYTIC,
#line 7398
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7401
                MOVE_BRINE,
                MOVE_ICY_WIND,
                MOVE_MINIMIZE,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 7406
            .species = SPECIES_BLAZIKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7406
            .heldItem = ITEM_PASSHO_BERRY,
#line 7409
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 7408
            .ability = ABILITY_BLAZE,
#line 7407
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7410
                MOVE_BLAZE_KICK,
                MOVE_JUMP_KICK,
                MOVE_DETECT,
                MOVE_SLASH,
            },
            },
        },
    },
#line 7415
    [TRAINER_MAY_ROUTE_103_TORCHIC] =
    {
#line 7416
        .trainerName = _("MAY"),
#line 7417
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7418
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 7419
F_TRAINER_FEMALE | 
#line 7420
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7421
        .doubleBattle = TRUE,
#line 7422
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7424
            .species = SPECIES_MUDKIP,
#line 7424
            .gender = TRAINER_MON_FEMALE,
#line 7426
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7425
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7427
                MOVE_TACKLE,
                MOVE_GROWL,
            },
            },
            {
#line 7430
            .species = SPECIES_EEVEE,
#line 7430
            .gender = TRAINER_MON_FEMALE,
#line 7432
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7431
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7433
                MOVE_GROWL,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 7436
    [TRAINER_MAY_ROUTE_110_TORCHIC] =
    {
#line 7437
        .trainerName = _("MAY"),
#line 7438
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7439
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 7440
F_TRAINER_FEMALE | 
#line 7441
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7442
        .doubleBattle = TRUE,
#line 7443
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7445
            .species = SPECIES_SKITTY,
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
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7451
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7450
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7453
            .species = SPECIES_EEVEE,
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
            .species = SPECIES_SKIDDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7459
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7458
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7461
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7463
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7462
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7465
    [TRAINER_MAY_ROUTE_119_TORCHIC] =
    {
#line 7466
        .trainerName = _("MAY"),
#line 7467
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7468
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 7469
F_TRAINER_FEMALE | 
#line 7470
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7471
        .doubleBattle = TRUE,
#line 7472
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7474
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7477
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7476
            .ability = ABILITY_MAGIC_BOUNCE,
#line 7475
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7478
                MOVE_PSYSHOCK,
                MOVE_FUTURE_SIGHT,
                MOVE_REFLECT,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 7483
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7483
            .heldItem = ITEM_SOFT_SAND,
#line 7486
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7485
            .ability = ABILITY_SAP_SIPPER,
#line 7484
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7487
                MOVE_ICE_SHARD,
                MOVE_BODY_SLAM,
                MOVE_MIST,
                MOVE_STOMPING_TANTRUM,
            },
            },
            {
#line 7492
            .species = SPECIES_CARBINK_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7495
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7494
            .ability = ABILITY_LEVITATE,
#line 7493
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7496
                MOVE_TAR_SHOT,
                MOVE_FLAME_WHEEL,
                MOVE_SCORCHING_SANDS,
                MOVE_SMACK_DOWN,
            },
            },
            {
#line 7501
            .species = SPECIES_GOGOAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7504
            .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
#line 7503
            .ability = ABILITY_GRASS_PELT,
#line 7502
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7505
                MOVE_HORN_LEECH,
                MOVE_HIGH_HORSEPOWER,
                MOVE_BULK_UP,
                MOVE_GRASSY_TERRAIN,
            },
            },
            {
#line 7510
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7510
            .heldItem = ITEM_RINDO_BERRY,
#line 7513
            .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
#line 7512
            .ability = ABILITY_TORRENT,
#line 7511
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7514
                MOVE_MUDDY_WATER,
                MOVE_ROCK_SLIDE,
                MOVE_PROTECT,
                MOVE_MUD_BOMB,
            },
            },
        },
    },
#line 7519
    [TRAINER_ISAAC_1] =
    {
#line 7520
        .trainerName = _("ISAAC"),
#line 7521
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 7522
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender = 
#line 7524
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7525
        .doubleBattle = TRUE,
#line 7526
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7528
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7530
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7529
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7532
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7534
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7533
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7536
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7538
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7537
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7540
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7542
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7541
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7544
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7546
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7545
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7548
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7550
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7549
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7552
    [TRAINER_DAVIS] =
    {
#line 7553
        .trainerName = _("DAVIS"),
#line 7554
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7555
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 7557
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7558
        .doubleBattle = TRUE,
#line 7559
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7561
            .species = SPECIES_WIMPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7563
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7562
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7565
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7567
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7566
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7569
    [TRAINER_MITCHELL] =
    {
#line 7570
        .trainerName = _("MITCHELL"),
#line 7571
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7572
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 7574
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7575
        .doubleBattle = TRUE,
#line 7576
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7578
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7580
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7579
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7581
                MOVE_EXPLOSION,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
            },
            },
            {
#line 7586
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7588
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7587
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7589
                MOVE_EXPLOSION,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 7594
    [TRAINER_LYDIA_1] =
    {
#line 7595
        .trainerName = _("LYDIA"),
#line 7596
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 7597
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 7598
F_TRAINER_FEMALE | 
#line 7599
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7600
        .doubleBattle = TRUE,
#line 7601
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7603
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7605
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7604
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7607
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7609
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7608
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7611
            .species = SPECIES_TOGEPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7613
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7612
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7615
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7617
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7616
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7619
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7621
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7620
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7623
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7625
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7624
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7627
    [TRAINER_HALLE] =
    {
#line 7628
        .trainerName = _("HALLE"),
#line 7629
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7630
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 7631
F_TRAINER_FEMALE | 
#line 7632
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7633
        .doubleBattle = TRUE,
#line 7634
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7636
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7638
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7637
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7640
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7642
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7641
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7644
    [TRAINER_GARRISON] =
    {
#line 7645
        .trainerName = _("GARRISON"),
#line 7646
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 7647
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 7649
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7650
        .doubleBattle = TRUE,
#line 7651
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7653
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7655
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7654
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7657
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7659
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7658
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7661
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7663
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7662
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7665
    [TRAINER_JACKSON_1] =
    {
#line 7666
        .trainerName = _("JACKSON"),
#line 7667
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7668
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 7670
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7671
        .doubleBattle = TRUE,
#line 7672
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7674
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7676
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7675
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7678
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7680
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7679
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7682
    [TRAINER_LORENZO] =
    {
#line 7683
        .trainerName = _("LORENZO"),
#line 7684
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7685
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 7687
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7688
        .doubleBattle = TRUE,
#line 7689
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7691
            .species = SPECIES_GOLISOPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7693
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7692
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7695
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7697
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7696
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7699
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7701
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7700
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7703
    [TRAINER_SEBASTIAN] =
    {
#line 7704
        .trainerName = _("SEBASTIAN"),
#line 7705
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7706
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 7708
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7709
        .doubleBattle = TRUE,
#line 7710
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7712
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7714
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7713
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7716
    [TRAINER_CATHERINE_1] =
    {
#line 7717
        .trainerName = _("CATHERINE"),
#line 7718
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7719
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 7720
F_TRAINER_FEMALE | 
#line 7721
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7722
        .doubleBattle = TRUE,
#line 7723
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7725
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7727
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7726
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7729
            .species = SPECIES_ROSERADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7731
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7730
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7733
    [TRAINER_JENNA] =
    {
#line 7734
        .trainerName = _("JENNA"),
#line 7735
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7736
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 7737
F_TRAINER_FEMALE | 
#line 7738
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7739
        .doubleBattle = TRUE,
#line 7740
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7742
            .species = SPECIES_GALVANTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7744
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7743
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7746
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7748
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7747
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7750
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7752
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7751
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7754
    [TRAINER_SOPHIA] =
    {
#line 7755
        .trainerName = _("SOPHIA"),
#line 7756
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7757
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 7758
F_TRAINER_FEMALE | 
#line 7759
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7760
        .doubleBattle = TRUE,
#line 7761
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7763
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7765
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7764
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7767
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7769
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7768
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7771
    [TRAINER_JULIO] =
    {
#line 7772
        .trainerName = _("JULIO"),
#line 7773
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 7774
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 7776
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7777
        .doubleBattle = TRUE,
#line 7778
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7780
            .species = SPECIES_VAROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7782
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7781
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7784
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7786
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7785
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7788
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7790
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7789
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7792
    [TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
#line 7793
        .trainerName = _("GRUNT"),
#line 7794
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 7795
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 7797
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 7798
        .doubleBattle = TRUE,
#line 7799
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7801
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7803
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7802
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7805
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7807
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7806
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7809
    [TRAINER_GRUNT_MT_PYRE_4] =
    {
#line 7810
        .trainerName = _("GRUNT"),
#line 7811
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 7812
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 7813
F_TRAINER_FEMALE | 
#line 7814
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 7815
        .doubleBattle = TRUE,
#line 7816
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7818
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7820
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7819
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7822
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7824
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7823
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7826
            .species = SPECIES_KILOWATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7828
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7827
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7830
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7832
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7831
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7834
    [TRAINER_GRUNT_JAGGED_PASS] =
    {
#line 7835
        .trainerName = _("GRUNT"),
#line 7836
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7837
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 7839
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7840
        .doubleBattle = TRUE,
#line 7841
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7843
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7845
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7844
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7847
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7849
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7848
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7851
    [TRAINER_MARC] =
    {
#line 7852
        .trainerName = _("MARC"),
#line 7853
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7854
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 7856
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7857
        .doubleBattle = TRUE,
#line 7858
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7860
            .species = SPECIES_GEODUDE_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7862
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 7861
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7864
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7866
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 7865
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7868
    [TRAINER_BRENDEN] =
    {
#line 7869
        .trainerName = _("BRENDEN"),
#line 7870
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7871
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 7873
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7874
        .doubleBattle = TRUE,
#line 7875
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7877
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7879
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7878
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7881
            .species = SPECIES_CRABRAWLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7883
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7882
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7885
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7887
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7886
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7889
    [TRAINER_LILITH] =
    {
#line 7890
        .trainerName = _("LILITH"),
#line 7891
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 7892
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 7893
F_TRAINER_FEMALE | 
#line 7894
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7895
        .doubleBattle = TRUE,
#line 7896
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7898
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7900
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7899
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7902
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7904
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7903
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7906
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7908
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7907
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7910
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7912
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7911
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7914
    [TRAINER_CRISTIAN] =
    {
#line 7915
        .trainerName = _("CRISTIAN"),
#line 7916
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 7917
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 7919
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7920
        .doubleBattle = TRUE,
#line 7921
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7923
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7925
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7924
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7927
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7929
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7928
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7931
    [TRAINER_SYLVIA] =
    {
#line 7932
        .trainerName = _("SYLVIA"),
#line 7933
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 7934
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 7935
F_TRAINER_FEMALE | 
#line 7936
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7937
        .doubleBattle = TRUE,
#line 7938
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7940
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7942
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7941
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7944
    [TRAINER_LEONARDO] =
    {
#line 7945
        .trainerName = _("LEONARDO"),
#line 7946
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7947
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 7949
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7950
        .doubleBattle = TRUE,
#line 7951
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7953
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7955
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7954
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7957
    [TRAINER_ATHENA] =
    {
#line 7958
        .trainerName = _("ATHENA"),
#line 7959
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7960
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 7961
F_TRAINER_FEMALE | 
#line 7962
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7963
        .doubleBattle = TRUE,
#line 7964
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7966
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7968
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7967
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7969
                MOVE_THUNDER,
                MOVE_THUNDER_WAVE,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 7973
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7975
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7974
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7976
                MOVE_SURF,
                MOVE_THIEF,
            },
            },
        },
    },
#line 7979
    [TRAINER_HARRISON] =
    {
#line 7980
        .trainerName = _("HARRISON"),
#line 7981
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7982
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 7984
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7985
        .doubleBattle = TRUE,
#line 7986
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7988
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7990
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7989
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7992
    [TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
#line 7993
        .trainerName = _("GRUNT"),
#line 7994
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7995
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 7997
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7998
        .doubleBattle = TRUE,
#line 7999
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8001
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8003
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8002
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8005
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8007
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8006
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8009
    [TRAINER_CLARENCE] =
    {
#line 8010
        .trainerName = _("CLARENCE"),
#line 8011
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 8012
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 8014
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8015
        .doubleBattle = TRUE,
#line 8016
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8018
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8020
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8019
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8022
    [TRAINER_TERRY] =
    {
#line 8023
        .trainerName = _("TERRY"),
#line 8024
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 8025
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 8026
F_TRAINER_FEMALE | 
#line 8027
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8028
        .doubleBattle = TRUE,
#line 8029
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8031
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8033
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8032
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8035
    [TRAINER_NATE] =
    {
#line 8036
        .trainerName = _("NATE"),
#line 8037
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 8038
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 8040
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 8041
        .doubleBattle = TRUE,
#line 8042
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8044
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8046
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8045
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8048
    [TRAINER_KATHLEEN] =
    {
#line 8049
        .trainerName = _("KATHLEEN"),
#line 8050
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 8051
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 8052
F_TRAINER_FEMALE | 
#line 8053
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8054
        .doubleBattle = TRUE,
#line 8055
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8057
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8059
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8058
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8061
    [TRAINER_CLIFFORD] =
    {
#line 8062
        .trainerName = _("CLIFFORD"),
#line 8063
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 8064
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 8066
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 8067
        .doubleBattle = TRUE,
#line 8068
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8070
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8072
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8071
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8074
    [TRAINER_NICHOLAS] =
    {
#line 8075
        .trainerName = _("NICHOLAS"),
#line 8076
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 8077
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 8079
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8080
        .doubleBattle = TRUE,
#line 8081
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8083
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8085
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8084
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8087
    [TRAINER_GRUNT_SPACE_CENTER_3] =
    {
#line 8088
        .trainerName = _("GRUNT"),
#line 8089
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8090
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender = 
#line 8091
F_TRAINER_FEMALE | 
#line 8092
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8093
        .doubleBattle = TRUE,
#line 8094
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8096
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8098
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8097
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8100
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8102
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8101
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8104
    [TRAINER_GRUNT_SPACE_CENTER_4] =
    {
#line 8105
        .trainerName = _("GRUNT"),
#line 8106
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8107
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8109
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8110
        .doubleBattle = TRUE,
#line 8111
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8113
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8115
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8114
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8117
    [TRAINER_GRUNT_SPACE_CENTER_5] =
    {
#line 8118
        .trainerName = _("GRUNT"),
#line 8119
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8120
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8122
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8123
        .doubleBattle = TRUE,
#line 8124
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8126
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8128
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8127
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8130
    [TRAINER_GRUNT_SPACE_CENTER_6] =
    {
#line 8131
        .trainerName = _("GRUNT"),
#line 8132
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8133
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8135
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8136
        .doubleBattle = TRUE,
#line 8137
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8139
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8141
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8140
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8143
    [TRAINER_GRUNT_SPACE_CENTER_7] =
    {
#line 8144
        .trainerName = _("GRUNT"),
#line 8145
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8146
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8148
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8149
        .doubleBattle = TRUE,
#line 8150
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8152
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8154
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8153
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8156
    [TRAINER_MACEY] =
    {
#line 8157
        .trainerName = _("MACEY"),
#line 8158
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 8159
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 8160
F_TRAINER_FEMALE | 
#line 8161
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8162
        .doubleBattle = TRUE,
#line 8163
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8165
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8167
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8166
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8169
    [TRAINER_BRENDAN_RUSTBORO_TREECKO] =
    {
#line 8170
        .trainerName = _("BRENDAN"),
#line 8171
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8172
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8174
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8175
        .doubleBattle = TRUE,
#line 8176
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8178
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8180
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8179
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8182
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8184
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8183
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8186
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8188
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8187
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8190
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8192
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8191
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8194
    [TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
    {
#line 8195
        .trainerName = _("BRENDAN"),
#line 8196
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8197
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8199
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8200
        .doubleBattle = TRUE,
#line 8201
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8203
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8205
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8204
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8207
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8209
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8208
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8211
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8213
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8212
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8215
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8217
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8216
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8219
    [TRAINER_PAXTON] =
    {
#line 8220
        .trainerName = _("PAXTON"),
#line 8221
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 8222
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender = 
#line 8224
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8225
        .doubleBattle = TRUE,
#line 8226
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8228
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8230
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8229
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8232
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8234
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8233
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8236
    [TRAINER_ISABELLA] =
    {
#line 8237
        .trainerName = _("ISABELLA"),
#line 8238
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 8239
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 8240
F_TRAINER_FEMALE | 
#line 8241
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8242
        .doubleBattle = TRUE,
#line 8243
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8245
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8247
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8246
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8249
    [TRAINER_GRUNT_WEATHER_INST_5] =
    {
#line 8250
        .trainerName = _("GRUNT"),
#line 8251
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 8252
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 8253
F_TRAINER_FEMALE | 
#line 8254
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 8255
        .doubleBattle = TRUE,
#line 8256
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8258
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8260
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8259
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8262
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8264
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8263
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8266
    [TRAINER_TABITHA_MT_CHIMNEY] =
    {
#line 8267
        .trainerName = _("TABITHA"),
#line 8268
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 8269
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN_M,
        .encounterMusic_gender = 
#line 8271
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8272
        .doubleBattle = TRUE,
#line 8273
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8275
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8278
            .iv = TRAINER_PARTY_IVS(16, 16, 16, 16, 16, 16),
#line 8277
            .ability = ABILITY_INTIMIDATE,
#line 8276
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8279
                MOVE_FLAME_WHEEL,
                MOVE_FLAME_CHARGE,
                MOVE_BITE,
                MOVE_HOWL,
            },
            },
            {
#line 8284
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8287
            .iv = TRAINER_PARTY_IVS(16, 16, 16, 16, 16, 16),
#line 8286
            .ability = ABILITY_PRANKSTER,
#line 8285
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8288
                MOVE_FAKE_OUT,
                MOVE_ENCORE,
                MOVE_NIGHT_SHADE,
                MOVE_DISABLE,
            },
            },
            {
#line 8293
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8296
            .iv = TRAINER_PARTY_IVS(16, 16, 16, 16, 16, 16),
#line 8295
            .ability = ABILITY_INNER_FOCUS,
#line 8294
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8297
                MOVE_POISON_FANG,
                MOVE_AIR_CUTTER,
                MOVE_BITE,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 8302
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8302
            .heldItem = ITEM_FOCUS_SASH,
#line 8305
            .iv = TRAINER_PARTY_IVS(20, 16, 16, 20, 16, 16),
#line 8304
            .ability = ABILITY_LIGHTNING_ROD,
#line 8303
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8306
                MOVE_ROCK_BLAST,
                MOVE_BULLDOZE,
                MOVE_STOMP,
                MOVE_SMACK_DOWN,
            },
            },
        },
    },
#line 8311
    [TRAINER_JONATHAN] =
    {
#line 8312
        .trainerName = _("JONATHAN"),
#line 8313
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8314
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 8316
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8317
        .doubleBattle = TRUE,
#line 8318
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8320
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8322
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8321
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8324
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8326
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8325
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8328
    [TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
    {
#line 8329
        .trainerName = _("BRENDAN"),
#line 8330
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8331
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8333
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8334
        .doubleBattle = TRUE,
#line 8335
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8337
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8339
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8338
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8341
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8343
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8342
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8345
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8347
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8346
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8349
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8351
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8350
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8353
    [TRAINER_MAY_RUSTBORO_MUDKIP] =
    {
#line 8354
        .trainerName = _("MAY"),
#line 8355
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8356
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8357
F_TRAINER_FEMALE | 
#line 8358
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8359
        .doubleBattle = TRUE,
#line 8360
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8362
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8364
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8363
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8366
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8368
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8367
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8370
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8372
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8371
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8374
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8376
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8375
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8378
    [TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
#line 8379
        .trainerName = _("MAXIE"),
#line 8380
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 8381
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender = 
#line 8383
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8384
        .doubleBattle = TRUE,
#line 8385
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8387
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8389
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8388
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8391
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8393
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8392
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8395
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8397
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8396
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8399
    [TRAINER_MAXIE_MT_CHIMNEY] =
    {
#line 8400
        .trainerName = _("MAXIE"),
#line 8401
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 8402
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender = 
#line 8404
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8405
        .doubleBattle = TRUE,
#line 8406
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8408
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8411
            .iv = TRAINER_PARTY_IVS(20, 25, 20, 31, 15, 25),
#line 8410
            .ability = ABILITY_MOXIE,
#line 8409
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8412
                MOVE_SNARL,
                MOVE_CRUNCH,
                MOVE_FIRE_FANG,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 8417
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8417
            .heldItem = ITEM_HEAT_ROCK,
#line 8420
            .iv = TRAINER_PARTY_IVS(31, 25, 20, 15, 15, 20),
#line 8419
            .ability = ABILITY_DROUGHT,
#line 8418
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8421
                MOVE_YAWN,
                MOVE_HELPING_HAND,
                MOVE_FLAME_WHEEL,
                MOVE_PROTECT,
            },
            },
            {
#line 8426
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8426
            .heldItem = ITEM_EVIOLITE,
#line 8429
            .iv = TRAINER_PARTY_IVS(20, 20, 15, 31, 15, 25),
#line 8428
            .ability = ABILITY_MOLD_BREAKER,
#line 8427
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8430
                MOVE_ROCK_POLISH,
                MOVE_ROCK_SLIDE,
                MOVE_TAKE_DOWN,
                MOVE_DRAGON_TAIL,
            },
            },
            {
#line 8435
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8438
            .iv = TRAINER_PARTY_IVS(20, 31, 15, 20, 25, 15),
#line 8437
            .ability = ABILITY_HYPER_CUTTER,
#line 8436
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8439
                MOVE_AERIAL_ACE,
                MOVE_TAILWIND,
                MOVE_SWORDS_DANCE,
                MOVE_DRILL_RUN,
            },
            },
            {
#line 8444
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8444
            .heldItem = ITEM_ASSAULT_VEST,
#line 8447
            .iv = TRAINER_PARTY_IVS(31, 15, 20, 25, 20, 15),
#line 8446
            .ability = ABILITY_SOLID_ROCK,
#line 8445
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8448
                MOVE_LAVA_PLUME,
                MOVE_ROCK_SLIDE,
                MOVE_MAGNITUDE,
                MOVE_TAKE_DOWN,
            },
            },
        },
    },
#line 8453
    [TRAINER_TIANA] =
    {
#line 8454
        .trainerName = _("TIANA"),
#line 8455
        .trainerClass = TRAINER_CLASS_LASS,
#line 8456
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 8457
F_TRAINER_FEMALE | 
#line 8458
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8459
        .doubleBattle = TRUE,
#line 8460
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8462
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8464
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8463
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8466
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8468
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8467
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8470
    [TRAINER_HALEY_1] =
    {
#line 8471
        .trainerName = _("HALEY"),
#line 8472
        .trainerClass = TRAINER_CLASS_LASS,
#line 8473
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 8474
F_TRAINER_FEMALE | 
#line 8475
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8476
        .doubleBattle = TRUE,
#line 8477
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8479
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8481
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8480
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8483
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8485
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8484
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8487
    [TRAINER_JANICE] =
    {
#line 8488
        .trainerName = _("JANICE"),
#line 8489
        .trainerClass = TRAINER_CLASS_LASS,
#line 8490
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 8491
F_TRAINER_FEMALE | 
#line 8492
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8493
        .doubleBattle = TRUE,
#line 8494
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8496
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8498
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8497
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8500
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8502
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8501
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8504
    [TRAINER_VIVI] =
    {
#line 8505
        .trainerName = _("VIVI"),
#line 8506
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 8507
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 8508
F_TRAINER_FEMALE | 
#line 8509
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8510
        .doubleBattle = TRUE,
#line 8511
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8513
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8515
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8514
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8517
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8519
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8518
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8521
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8523
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8522
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8525
    [TRAINER_SALLY] =
    {
#line 8526
        .trainerName = _("SALLY"),
#line 8527
        .trainerClass = TRAINER_CLASS_LASS,
#line 8528
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 8529
F_TRAINER_FEMALE | 
#line 8530
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8531
        .doubleBattle = TRUE,
#line 8532
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8534
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8536
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8535
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8538
    [TRAINER_ROBIN] =
    {
#line 8539
        .trainerName = _("ROBIN"),
#line 8540
        .trainerClass = TRAINER_CLASS_LASS,
#line 8541
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 8542
F_TRAINER_FEMALE | 
#line 8543
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8544
        .doubleBattle = TRUE,
#line 8545
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8547
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8549
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8548
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8551
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8553
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8552
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8555
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8557
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8556
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8559
    [TRAINER_ANDREA] =
    {
#line 8560
        .trainerName = _("ANDREA"),
#line 8561
        .trainerClass = TRAINER_CLASS_LASS,
#line 8562
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 8563
F_TRAINER_FEMALE | 
#line 8564
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8565
        .doubleBattle = TRUE,
#line 8566
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8568
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8570
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8569
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8572
    [TRAINER_CRISSY] =
    {
#line 8573
        .trainerName = _("CRISSY"),
#line 8574
        .trainerClass = TRAINER_CLASS_LASS,
#line 8575
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 8576
F_TRAINER_FEMALE | 
#line 8577
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8578
        .doubleBattle = TRUE,
#line 8579
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8581
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8583
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8582
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8585
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8587
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8586
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8589
    [TRAINER_RICK] =
    {
#line 8590
        .trainerName = _("RICK"),
#line 8591
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8592
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 8594
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8595
        .doubleBattle = TRUE,
#line 8596
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8598
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8600
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8599
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8602
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8604
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8603
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8606
    [TRAINER_LYLE] =
    {
#line 8607
        .trainerName = _("LYLE"),
#line 8608
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8609
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 8611
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8612
        .doubleBattle = TRUE,
#line 8613
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8615
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8617
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8616
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8619
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8621
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8620
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8623
            .species = SPECIES_CASCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8625
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8624
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8627
    [TRAINER_JOSE] =
    {
#line 8628
        .trainerName = _("JOSE"),
#line 8629
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8630
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 8632
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8633
        .doubleBattle = TRUE,
#line 8634
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8636
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8638
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8637
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8640
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8642
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8641
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8644
    [TRAINER_DOUG] =
    {
#line 8645
        .trainerName = _("DOUG"),
#line 8646
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8647
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 8649
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8650
        .doubleBattle = TRUE,
#line 8651
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8653
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8655
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8654
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8657
            .species = SPECIES_CASCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8659
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8658
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8661
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8663
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8662
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8665
    [TRAINER_GREG] =
    {
#line 8666
        .trainerName = _("GREG"),
#line 8667
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8668
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 8670
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8671
        .doubleBattle = TRUE,
#line 8672
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8674
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8676
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8675
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8678
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8680
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8679
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8682
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8684
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8683
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8686
    [TRAINER_KENT] =
    {
#line 8687
        .trainerName = _("KENT"),
#line 8688
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8689
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 8691
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8692
        .doubleBattle = TRUE,
#line 8693
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8695
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8697
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8696
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8699
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8701
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8700
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8703
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8705
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8704
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8707
    [TRAINER_JAMES_1] =
    {
#line 8708
        .trainerName = _("JAMES"),
#line 8709
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8710
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 8712
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8713
        .doubleBattle = TRUE,
#line 8714
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8716
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8718
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8717
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8720
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8722
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8721
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8724
    [TRAINER_BRICE] =
    {
#line 8725
        .trainerName = _("BRICE"),
#line 8726
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8727
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 8729
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8730
        .doubleBattle = TRUE,
#line 8731
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8733
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8735
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8734
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8737
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8739
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8738
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8741
    [TRAINER_TRENT_1] =
    {
#line 8742
        .trainerName = _("TRENT"),
#line 8743
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8744
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 8746
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8747
        .doubleBattle = TRUE,
#line 8748
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8750
            .species = SPECIES_GEODUDE_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8752
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8751
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8754
            .species = SPECIES_GEODUDE_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8756
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8755
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8758
            .species = SPECIES_GEODUDE_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8760
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8759
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8762
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8764
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8763
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8766
    [TRAINER_LENNY] =
    {
#line 8767
        .trainerName = _("LENNY"),
#line 8768
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8769
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 8771
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8772
        .doubleBattle = TRUE,
#line 8773
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8775
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8777
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8776
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8779
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8781
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8780
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8783
    [TRAINER_LUCAS_1] =
    {
#line 8784
        .trainerName = _("LUCAS"),
#line 8785
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8786
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 8788
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8789
        .doubleBattle = TRUE,
#line 8790
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8792
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8794
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8793
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8796
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8798
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8797
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8800
            .species = SPECIES_GRAVELER_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8802
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8801
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8804
    [TRAINER_ALAN] =
    {
#line 8805
        .trainerName = _("ALAN"),
#line 8806
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8807
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 8809
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8810
        .doubleBattle = TRUE,
#line 8811
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8813
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8815
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8814
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8817
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8819
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8818
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8821
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8823
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8822
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8825
    [TRAINER_CLARK] =
    {
#line 8826
        .trainerName = _("CLARK"),
#line 8827
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8828
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 8830
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8831
        .doubleBattle = TRUE,
#line 8832
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8834
            .species = SPECIES_GEODUDE_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8836
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8835
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8838
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8840
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8839
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8842
            .species = SPECIES_GEODUDE_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8844
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8843
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8846
    [TRAINER_ERIC] =
    {
#line 8847
        .trainerName = _("ERIC"),
#line 8848
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8849
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 8851
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8852
        .doubleBattle = TRUE,
#line 8853
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8855
            .species = SPECIES_GEODUDE_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8857
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8856
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8859
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8861
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8860
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8863
    [TRAINER_MIKE_1] =
    {
#line 8864
        .trainerName = _("MIKE"),
#line 8865
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8866
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 8868
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8869
        .doubleBattle = TRUE,
#line 8870
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8872
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8874
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8873
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8875
                MOVE_GUST,
                MOVE_GROWL,
            },
            },
            {
#line 8878
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8880
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8879
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8881
                MOVE_BITE,
                MOVE_SCARY_FACE,
            },
            },
        },
    },
#line 8884
    [TRAINER_DEZ_AND_LUKE] =
    {
#line 8885
        .trainerName = _("DEZ & LUKE"),
#line 8886
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8887
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 8889
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8890
        .doubleBattle = TRUE,
#line 8891
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8893
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8895
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8894
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8897
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8899
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8898
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8901
    [TRAINER_LEA_AND_JED] =
    {
#line 8902
        .trainerName = _("LEA & JED"),
#line 8903
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8904
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 8906
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8907
        .doubleBattle = TRUE,
#line 8908
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8910
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8912
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8911
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8914
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8916
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8915
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8918
    [TRAINER_KIRA_AND_DAN_1] =
    {
#line 8919
        .trainerName = _("KIRA & DAN"),
#line 8920
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8921
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 8923
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8924
        .doubleBattle = TRUE,
#line 8925
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8927
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8929
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8928
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8931
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8933
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8932
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8935
    [TRAINER_JOHANNA] =
    {
#line 8936
        .trainerName = _("JOHANNA"),
#line 8937
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 8938
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 8939
F_TRAINER_FEMALE | 
#line 8940
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8941
        .doubleBattle = TRUE,
#line 8942
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8944
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8946
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8945
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8948
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8950
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8949
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8952
    [TRAINER_GERALD] =
    {
#line 8953
        .trainerName = _("GERALD"),
#line 8954
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8955
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 8957
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8958
        .doubleBattle = TRUE,
#line 8959
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8961
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8963
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8962
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8964
                MOVE_FLAMETHROWER,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
                MOVE_BIND,
            },
            },
            {
#line 8969
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8971
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8970
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8972
                MOVE_FLAMETHROWER,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
                MOVE_BIND,
            },
            },
        },
    },
#line 8977
    [TRAINER_VIVIAN] =
    {
#line 8978
        .trainerName = _("VIVIAN"),
#line 8979
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8980
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 8981
F_TRAINER_FEMALE | 
#line 8982
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8983
        .doubleBattle = TRUE,
#line 8984
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8986
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8988
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8987
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8989
                MOVE_BIDE,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 8994
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8996
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8995
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8997
                MOVE_THUNDER_PUNCH,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_MEDITATE,
            },
            },
        },
    },
#line 9002
    [TRAINER_DANIELLE] =
    {
#line 9003
        .trainerName = _("DANIELLE"),
#line 9004
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9005
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 9006
F_TRAINER_FEMALE | 
#line 9007
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9008
        .doubleBattle = TRUE,
#line 9009
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9011
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9013
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9012
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9014
                MOVE_BIDE,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_FIRE_PUNCH,
            },
            },
            {
#line 9019
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9021
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9020
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9022
                MOVE_BIDE,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 9027
    [TRAINER_HIDEO] =
    {
#line 9028
        .trainerName = _("HIDEO"),
#line 9029
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9030
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 9032
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9033
        .doubleBattle = TRUE,
#line 9034
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9036
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9038
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9037
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9039
                MOVE_TACKLE,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 9044
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9046
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9045
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9047
                MOVE_SHADOW_SNEAK,
                MOVE_SCREECH,
                MOVE_HEX,
                MOVE_CURSE,
            },
            },
        },
    },
#line 9052
    [TRAINER_KEIGO] =
    {
#line 9053
        .trainerName = _("KEIGO"),
#line 9054
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9055
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 9057
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9058
        .doubleBattle = TRUE,
#line 9059
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9061
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9063
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9062
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9065
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9067
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9066
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9069
    [TRAINER_RILEY] =
    {
#line 9070
        .trainerName = _("RILEY"),
#line 9071
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9072
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 9074
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9075
        .doubleBattle = TRUE,
#line 9076
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9078
            .species = SPECIES_GASTLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9080
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9079
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9082
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9084
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9083
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9086
    [TRAINER_FLINT] =
    {
#line 9087
        .trainerName = _("FLINT"),
#line 9088
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9089
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 9091
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9092
        .doubleBattle = TRUE,
#line 9093
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9095
            .species = SPECIES_NOIBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9097
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9096
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9099
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9101
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9100
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9103
    [TRAINER_ASHLEY] =
    {
#line 9104
        .trainerName = _("ASHLEY"),
#line 9105
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9106
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 9107
F_TRAINER_FEMALE | 
#line 9108
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9109
        .doubleBattle = TRUE,
#line 9110
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9112
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9114
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9113
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9116
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9118
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9117
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9120
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9122
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9121
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9124
    [TRAINER_WALLY_MAUVILLE] =
    {
#line 9125
        .trainerName = _("WALLY"),
#line 9126
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9127
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 9129
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9130
        .doubleBattle = TRUE,
#line 9131
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9133
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9135
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9134
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9137
            .species = SPECIES_TINKATINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9139
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9138
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9141
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9143
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9142
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9145
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9147
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 9146
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9149
    [TRAINER_WALLY_VR_2] =
    {
#line 9150
        .trainerName = _("WALLY"),
#line 9151
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9152
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 9154
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9155
        .doubleBattle = TRUE,
#line 9156
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9158
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9160
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9159
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9161
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 9166
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9168
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9167
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9169
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 9174
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9176
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9175
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9177
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 9182
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9184
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9183
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9185
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 9190
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9192
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 9191
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9193
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 9198
    [TRAINER_WALLY_VR_3] =
    {
#line 9199
        .trainerName = _("WALLY"),
#line 9200
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9201
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 9203
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9204
        .doubleBattle = TRUE,
#line 9205
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9207
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9209
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9208
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9210
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 9215
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9217
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9216
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9218
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 9223
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9225
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9224
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9226
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 9231
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9233
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9232
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9234
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 9239
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9241
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 9240
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9242
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 9247
    [TRAINER_WALLY_VR_4] =
    {
#line 9248
        .trainerName = _("WALLY"),
#line 9249
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9250
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 9252
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9253
        .doubleBattle = TRUE,
#line 9254
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9256
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9258
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9257
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9259
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 9264
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9266
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9265
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9267
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 9272
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9274
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9273
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9275
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 9280
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9282
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9281
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9283
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 9288
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9290
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 9289
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9291
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 9296
    [TRAINER_WALLY_VR_5] =
    {
#line 9297
        .trainerName = _("WALLY"),
#line 9298
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9299
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 9301
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9302
        .doubleBattle = TRUE,
#line 9303
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9305
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9307
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9306
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9308
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 9313
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9315
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9314
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9316
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 9321
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9323
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9322
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9324
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 9329
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9331
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9330
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9332
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 9337
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9339
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 9338
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9340
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 9345
    [TRAINER_BRENDAN_LILYCOVE_MUDKIP] =
    {
#line 9346
        .trainerName = _("BRENDAN"),
#line 9347
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9348
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 9350
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9351
        .doubleBattle = TRUE,
#line 9352
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9354
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9356
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9355
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9358
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9360
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9359
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9362
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9364
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9363
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9366
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9368
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9367
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9370
    [TRAINER_BRENDAN_LILYCOVE_TREECKO] =
    {
#line 9371
        .trainerName = _("BRENDAN"),
#line 9372
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9373
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 9375
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9376
        .doubleBattle = TRUE,
#line 9377
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9379
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9381
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9380
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9383
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9385
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9384
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9387
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9389
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9388
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9391
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9393
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9392
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9395
    [TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
    {
#line 9396
        .trainerName = _("BRENDAN"),
#line 9397
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9398
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 9400
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9401
        .doubleBattle = TRUE,
#line 9402
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9404
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9406
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9405
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9408
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9410
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9409
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9412
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9414
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9413
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9416
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9418
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9417
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9420
    [TRAINER_MAY_LILYCOVE_MUDKIP] =
    {
#line 9421
        .trainerName = _("MAY"),
#line 9422
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9423
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 9424
F_TRAINER_FEMALE | 
#line 9425
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9426
        .doubleBattle = TRUE,
#line 9427
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9429
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9431
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9430
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9433
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9435
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9434
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9437
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9439
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9438
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9441
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9443
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9442
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9445
    [TRAINER_MAY_LILYCOVE_TREECKO] =
    {
#line 9446
        .trainerName = _("MAY"),
#line 9447
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9448
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 9449
F_TRAINER_FEMALE | 
#line 9450
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9451
        .doubleBattle = TRUE,
#line 9452
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9454
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9456
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9455
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9458
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9460
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9459
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9462
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9464
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9463
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9466
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9468
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9467
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9470
    [TRAINER_MAY_LILYCOVE_TORCHIC] =
    {
#line 9471
        .trainerName = _("MAY"),
#line 9472
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9473
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 9474
F_TRAINER_FEMALE | 
#line 9475
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9476
        .doubleBattle = TRUE,
#line 9477
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9479
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9481
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9480
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9483
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9485
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9484
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9487
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9489
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9488
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9491
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9493
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9492
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9495
    [TRAINER_JONAH] =
    {
#line 9496
        .trainerName = _("JONAH"),
#line 9497
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9498
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 9500
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9501
        .doubleBattle = TRUE,
#line 9502
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9504
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9506
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9505
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9508
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9510
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9509
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9512
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9514
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9513
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9516
    [TRAINER_HENRY] =
    {
#line 9517
        .trainerName = _("HENRY"),
#line 9518
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9519
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 9521
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9522
        .doubleBattle = TRUE,
#line 9523
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9525
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9527
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9526
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9529
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9531
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9530
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9533
    [TRAINER_ROGER] =
    {
#line 9534
        .trainerName = _("ROGER"),
#line 9535
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9536
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 9538
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9539
        .doubleBattle = TRUE,
#line 9540
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9542
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9544
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9543
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9546
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9548
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9547
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9550
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9552
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9551
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9554
    [TRAINER_ALEXA] =
    {
#line 9555
        .trainerName = _("ALEXA"),
#line 9556
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9557
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 9558
F_TRAINER_FEMALE | 
#line 9559
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9560
        .doubleBattle = TRUE,
#line 9561
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9563
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9565
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9564
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9567
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9569
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9568
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9571
    [TRAINER_RUBEN] =
    {
#line 9572
        .trainerName = _("RUBEN"),
#line 9573
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9574
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 9576
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9577
        .doubleBattle = TRUE,
#line 9578
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9580
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9582
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9581
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9584
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9586
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9585
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9588
    [TRAINER_KOJI_1] =
    {
#line 9589
        .trainerName = _("KOJI"),
#line 9590
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 9591
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 9593
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9594
        .doubleBattle = TRUE,
#line 9595
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9597
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9599
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9598
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9601
    [TRAINER_WAYNE] =
    {
#line 9602
        .trainerName = _("WAYNE"),
#line 9603
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9604
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 9606
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9607
        .doubleBattle = TRUE,
#line 9608
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9610
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9612
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9611
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9614
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9616
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9615
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9618
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9620
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9619
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9622
    [TRAINER_AIDAN] =
    {
#line 9623
        .trainerName = _("AIDAN"),
#line 9624
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9625
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 9627
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9628
        .doubleBattle = TRUE,
#line 9629
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9631
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9633
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9632
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9635
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9637
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9636
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9639
    [TRAINER_REED] =
    {
#line 9640
        .trainerName = _("REED"),
#line 9641
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 9642
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 9644
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9645
        .doubleBattle = TRUE,
#line 9646
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9648
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9650
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9649
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9652
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9654
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9653
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9656
    [TRAINER_TISHA] =
    {
#line 9657
        .trainerName = _("TISHA"),
#line 9658
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 9659
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 9660
F_TRAINER_FEMALE | 
#line 9661
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9662
        .doubleBattle = TRUE,
#line 9663
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9665
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9667
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9666
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9669
    [TRAINER_TORI_AND_TIA] =
    {
#line 9670
        .trainerName = _("TORI & TIA"),
#line 9671
        .trainerClass = TRAINER_CLASS_TWINS,
#line 9672
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 9674
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 9675
        .doubleBattle = TRUE,
#line 9676
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9678
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9681
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9680
            .ability = ABILITY_PSYCH_OUT,
#line 9679
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9682
                MOVE_HYPNOSIS,
                MOVE_COPYCAT,
                MOVE_SKILL_SWAP,
                MOVE_DIZZY_PUNCH,
            },
            },
            {
#line 9687
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9690
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9689
            .ability = ABILITY_CONTRARY,
#line 9688
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9691
                MOVE_FAKE_TEARS,
                MOVE_DREAM_EATER,
                MOVE_HYPNOSIS,
                MOVE_UPROAR,
            },
            },
        },
    },
#line 9696
    [TRAINER_KIM_AND_IRIS] =
    {
#line 9697
        .trainerName = _("KIM & IRIS"),
#line 9698
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 9699
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender = 
#line 9701
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 9702
        .doubleBattle = TRUE,
#line 9703
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9705
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9707
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9706
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9708
                MOVE_SING,
                MOVE_FURY_ATTACK,
                MOVE_SAFEGUARD,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 9713
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9715
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9714
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9716
                MOVE_FLAMETHROWER,
                MOVE_TAKE_DOWN,
                MOVE_REST,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 9721
    [TRAINER_TYRA_AND_IVY] =
    {
#line 9722
        .trainerName = _("TYRA & IVY"),
#line 9723
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 9724
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender = 
#line 9726
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 9727
        .doubleBattle = TRUE,
#line 9728
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9730
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9732
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9731
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9733
                MOVE_GROWTH,
                MOVE_STUN_SPORE,
                MOVE_MEGA_DRAIN,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 9738
            .species = SPECIES_GRAVELER_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9740
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9739
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9741
                MOVE_DEFENSE_CURL,
                MOVE_ROLLOUT,
                MOVE_SPARK,
                MOVE_ROCK_THROW,
            },
            },
        },
    },
#line 9746
    [TRAINER_MEL_AND_PAUL] =
    {
#line 9747
        .trainerName = _("MEL & PAUL"),
#line 9748
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 9749
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 9751
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9752
        .doubleBattle = TRUE,
#line 9753
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9755
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9757
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9756
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9758
                MOVE_LIGHT_SCREEN,
                MOVE_PSYBEAM,
                MOVE_TOXIC,
                MOVE_PROTECT,
            },
            },
            {
#line 9763
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9765
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9764
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9766
                MOVE_SILVER_WIND,
                MOVE_GIGA_DRAIN,
                MOVE_ATTRACT,
                MOVE_STUN_SPORE,
            },
            },
        },
    },
#line 9771
    [TRAINER_JOHN_AND_JAY_1] =
    {
#line 9772
        .trainerName = _("JOHN & JAY"),
#line 9773
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 9774
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender = 
#line 9776
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9777
        .doubleBattle = TRUE,
#line 9778
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9780
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9782
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9781
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9783
                MOVE_PSYCHIC,
                MOVE_FIRE_PUNCH,
                MOVE_PSYCH_UP,
                MOVE_PROTECT,
            },
            },
            {
#line 9788
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9790
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9789
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9791
                MOVE_FOCUS_PUNCH,
                MOVE_ROCK_TOMB,
                MOVE_REST,
                MOVE_BELLY_DRUM,
            },
            },
        },
    },
#line 9796
    [TRAINER_RELI_AND_IAN] =
    {
#line 9797
        .trainerName = _("RELI & IAN"),
#line 9798
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 9799
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 9801
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9802
        .doubleBattle = TRUE,
#line 9803
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9805
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9807
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9806
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9809
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9811
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9810
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9813
    [TRAINER_LILA_AND_ROY_1] =
    {
#line 9814
        .trainerName = _("LILA & ROY"),
#line 9815
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 9816
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 9818
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9819
        .doubleBattle = TRUE,
#line 9820
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9822
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9824
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9823
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9826
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9828
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9827
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9830
    [TRAINER_LISA_AND_RAY] =
    {
#line 9831
        .trainerName = _("LISA & RAY"),
#line 9832
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 9833
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 9835
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9836
        .doubleBattle = TRUE,
#line 9837
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9839
            .species = SPECIES_CRABRAWLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9841
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9840
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9843
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9845
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9844
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9847
    [TRAINER_CHRIS] =
    {
#line 9848
        .trainerName = _("CHRIS"),
#line 9849
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9850
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 9852
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9853
        .doubleBattle = TRUE,
#line 9854
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9856
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9858
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9857
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9860
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9862
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9861
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9864
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9866
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9865
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9868
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9870
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9869
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9872
    [TRAINER_DAWSON] =
    {
#line 9873
        .trainerName = _("DAWSON"),
#line 9874
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 9875
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender = 
#line 9877
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9878
        .doubleBattle = TRUE,
#line 9879
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9881
            .species = SPECIES_CHINGLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9881
            .heldItem = ITEM_NUGGET,
#line 9883
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9882
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9885
            .species = SPECIES_SKIDDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9887
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9886
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9889
    [TRAINER_SARAH] =
    {
#line 9890
        .trainerName = _("SARAH"),
#line 9891
        .trainerClass = TRAINER_CLASS_LADY,
#line 9892
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 9893
F_TRAINER_FEMALE | 
#line 9894
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9895
        .doubleBattle = TRUE,
#line 9896
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9898
            .species = SPECIES_BUDEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9898
            .heldItem = ITEM_NUGGET,
#line 9900
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9899
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9902
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9904
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9903
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9906
    [TRAINER_DARIAN] =
    {
#line 9907
        .trainerName = _("DARIAN"),
#line 9908
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9909
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 9911
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9912
        .doubleBattle = TRUE,
#line 9913
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9915
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9917
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9916
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9919
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9921
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9920
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9923
    [TRAINER_HAILEY] =
    {
#line 9924
        .trainerName = _("HAILEY"),
#line 9925
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 9926
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender = 
#line 9927
F_TRAINER_FEMALE | 
#line 9928
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9929
        .doubleBattle = TRUE,
#line 9930
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9932
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9934
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9933
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9936
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9938
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9937
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9940
    [TRAINER_CHANDLER] =
    {
#line 9941
        .trainerName = _("CHANDLER"),
#line 9942
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 9943
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender = 
#line 9945
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9946
        .doubleBattle = TRUE,
#line 9947
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9949
            .species = SPECIES_SANDYGAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9951
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9950
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9953
            .species = SPECIES_SANDYGAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9955
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9954
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9957
    [TRAINER_KALEB] =
    {
#line 9958
        .trainerName = _("KALEB"),
#line 9959
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 9960
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender = 
#line 9962
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 9963
        .doubleBattle = TRUE,
#line 9964
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9966
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9966
            .heldItem = ITEM_ORAN_BERRY,
#line 9968
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9967
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9970
            .species = SPECIES_PICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9970
            .heldItem = ITEM_ORAN_BERRY,
#line 9972
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9971
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9974
    [TRAINER_JOSEPH] =
    {
#line 9975
        .trainerName = _("JOSEPH"),
#line 9976
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 9977
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 9979
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9980
        .doubleBattle = TRUE,
#line 9981
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9983
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9985
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9984
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9987
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9989
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9988
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9991
    [TRAINER_ALYSSA] =
    {
#line 9992
        .trainerName = _("ALYSSA"),
#line 9993
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9994
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 9995
F_TRAINER_FEMALE | 
#line 9996
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9997
        .doubleBattle = TRUE,
#line 9998
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10000
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10002
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10001
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10004
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10006
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10005
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10008
    [TRAINER_MARCOS] =
    {
#line 10009
        .trainerName = _("MARCOS"),
#line 10010
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 10011
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 10013
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10014
        .doubleBattle = TRUE,
#line 10015
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10017
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10019
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10018
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10021
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10023
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10022
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10025
    [TRAINER_RHETT] =
    {
#line 10026
        .trainerName = _("RHETT"),
#line 10027
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 10028
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 10030
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10031
        .doubleBattle = TRUE,
#line 10032
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10034
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10036
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10035
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10038
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10040
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10039
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10042
    [TRAINER_TYRON] =
    {
#line 10043
        .trainerName = _("TYRON"),
#line 10044
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 10045
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 10047
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10048
        .doubleBattle = TRUE,
#line 10049
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10051
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10053
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10052
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10055
            .species = SPECIES_CUFANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10057
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10056
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10059
    [TRAINER_CELINA] =
    {
#line 10060
        .trainerName = _("CELINA"),
#line 10061
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 10062
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender = 
#line 10063
F_TRAINER_FEMALE | 
#line 10064
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10065
        .doubleBattle = TRUE,
#line 10066
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10068
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10070
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10069
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10072
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10074
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10073
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10076
    [TRAINER_BIANCA] =
    {
#line 10077
        .trainerName = _("BIANCA"),
#line 10078
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 10079
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 10080
F_TRAINER_FEMALE | 
#line 10081
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10082
        .doubleBattle = TRUE,
#line 10083
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10085
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10087
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10086
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10089
            .species = SPECIES_TINKATINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10091
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10090
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10093
            .species = SPECIES_SUNKERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10095
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10094
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10097
    [TRAINER_HAYDEN] =
    {
#line 10098
        .trainerName = _("HAYDEN"),
#line 10099
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 10100
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 10102
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10103
        .doubleBattle = TRUE,
#line 10104
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10106
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10108
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10107
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10110
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10112
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10111
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10114
    [TRAINER_SOPHIE] =
    {
#line 10115
        .trainerName = _("SOPHIE"),
#line 10116
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 10117
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 10118
F_TRAINER_FEMALE | 
#line 10119
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10120
        .doubleBattle = TRUE,
#line 10121
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10123
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10125
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10124
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10127
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10129
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10128
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10131
    [TRAINER_COBY] =
    {
#line 10132
        .trainerName = _("COBY"),
#line 10133
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 10134
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 10136
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10137
        .doubleBattle = TRUE,
#line 10138
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10140
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10142
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10141
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10144
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10146
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10145
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10148
    [TRAINER_LAWRENCE] =
    {
#line 10149
        .trainerName = _("LAWRENCE"),
#line 10150
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 10151
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 10153
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10154
        .doubleBattle = TRUE,
#line 10155
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10157
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10159
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10158
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10161
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10163
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10162
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10165
    [TRAINER_WYATT] =
    {
#line 10166
        .trainerName = _("WYATT"),
#line 10167
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 10168
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender = 
#line 10170
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10171
        .doubleBattle = TRUE,
#line 10172
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10174
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10176
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10175
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10178
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10180
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10179
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10182
    [TRAINER_ANGELINA] =
    {
#line 10183
        .trainerName = _("ANGELINA"),
#line 10184
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 10185
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 10186
F_TRAINER_FEMALE | 
#line 10187
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10188
        .doubleBattle = TRUE,
#line 10189
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10191
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10194
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10193
            .ability = ABILITY_CHEERLEADER,
#line 10192
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10196
            .species = SPECIES_TINKATUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10199
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10198
            .ability = ABILITY_PICKPOCKET,
#line 10197
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10201
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10204
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10203
            .ability = ABILITY_MINUS,
#line 10202
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10206
    [TRAINER_KAI] =
    {
#line 10207
        .trainerName = _("KAI"),
#line 10208
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 10209
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 10211
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10212
        .doubleBattle = TRUE,
#line 10213
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10215
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10217
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10216
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10219
            .species = SPECIES_SKRELP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10221
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10220
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10223
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10225
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10224
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10227
    [TRAINER_CHARLOTTE] =
    {
#line 10228
        .trainerName = _("CHARLOTTE"),
#line 10229
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 10230
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 10231
F_TRAINER_FEMALE | 
#line 10232
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10233
        .doubleBattle = TRUE,
#line 10234
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10236
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10238
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10237
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10240
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10242
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10241
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10244
    [TRAINER_DEANDRE] =
    {
#line 10245
        .trainerName = _("DEANDRE"),
#line 10246
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 10247
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 10249
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10250
        .doubleBattle = TRUE,
#line 10251
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10253
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10255
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10254
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10257
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10259
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10258
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10261
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10263
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10262
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10265
    [TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
#line 10266
        .trainerName = _("GRUNT"),
#line 10267
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10268
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 10270
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10271
        .doubleBattle = TRUE,
#line 10272
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10274
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10276
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10275
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10278
    [TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
#line 10279
        .trainerName = _("GRUNT"),
#line 10280
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10281
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 10283
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10284
        .doubleBattle = TRUE,
#line 10285
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10287
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10289
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10288
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10291
    [TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
#line 10292
        .trainerName = _("GRUNT"),
#line 10293
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10294
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 10296
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10297
        .doubleBattle = TRUE,
#line 10298
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10300
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10302
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10301
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10304
    [TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
#line 10305
        .trainerName = _("GRUNT"),
#line 10306
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10307
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 10309
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10310
        .doubleBattle = TRUE,
#line 10311
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10313
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10315
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10314
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10317
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10319
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10318
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10321
    [TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
    {
#line 10322
        .trainerName = _("GRUNT"),
#line 10323
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10324
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 10326
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10327
        .doubleBattle = TRUE,
#line 10328
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10330
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10332
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10331
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10334
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10336
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10335
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10338
    [TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
#line 10339
        .trainerName = _("GRUNT"),
#line 10340
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10341
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 10343
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10344
        .doubleBattle = TRUE,
#line 10345
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10347
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10349
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10348
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10351
    [TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
#line 10352
        .trainerName = _("GRUNT"),
#line 10353
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10354
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 10356
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10357
        .doubleBattle = TRUE,
#line 10358
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10360
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10362
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10361
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10364
    [TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
#line 10365
        .trainerName = _("GRUNT"),
#line 10366
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10367
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 10369
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10370
        .doubleBattle = TRUE,
#line 10371
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10373
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10375
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10374
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10377
    [TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
#line 10378
        .trainerName = _("GRUNT"),
#line 10379
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10380
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 10382
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10383
        .doubleBattle = TRUE,
#line 10384
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10386
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10388
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10387
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10390
    [TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
#line 10391
        .trainerName = _("GRUNT"),
#line 10392
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10393
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 10395
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10396
        .doubleBattle = TRUE,
#line 10397
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10399
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10401
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10400
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10403
    [TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
#line 10404
        .trainerName = _("GRUNT"),
#line 10405
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10406
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 10408
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10409
        .doubleBattle = TRUE,
#line 10410
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10412
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10414
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10413
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10416
    [TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
#line 10417
        .trainerName = _("GRUNT"),
#line 10418
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10419
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 10421
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10422
        .doubleBattle = TRUE,
#line 10423
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10425
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10427
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10426
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10429
    [TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
#line 10430
        .trainerName = _("GRUNT"),
#line 10431
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10432
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 10434
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10435
        .doubleBattle = TRUE,
#line 10436
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10438
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10440
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10439
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10442
    [TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
#line 10443
        .trainerName = _("GRUNT"),
#line 10444
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10445
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender = 
#line 10446
F_TRAINER_FEMALE | 
#line 10447
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10448
        .doubleBattle = TRUE,
#line 10449
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10451
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10453
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10452
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10455
    [TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
#line 10456
        .trainerName = _("GRUNT"),
#line 10457
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10458
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender = 
#line 10459
F_TRAINER_FEMALE | 
#line 10460
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10461
        .doubleBattle = TRUE,
#line 10462
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10464
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10466
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10465
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10468
    [TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
#line 10469
        .trainerName = _("GRUNT"),
#line 10470
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10471
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender = 
#line 10472
F_TRAINER_FEMALE | 
#line 10473
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10474
        .doubleBattle = TRUE,
#line 10475
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10477
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10479
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10478
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10481
    [TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
#line 10482
        .trainerName = _("TABITHA"),
#line 10483
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 10484
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN_M,
        .encounterMusic_gender = 
#line 10486
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10487
        .doubleBattle = TRUE,
#line 10488
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10490
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10492
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 10491
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10494
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10496
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 10495
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10498
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10500
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 10499
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10502
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10504
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 10503
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10506
    [TRAINER_DARCY] =
    {
#line 10507
        .trainerName = _("DARCY"),
#line 10508
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 10509
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 10510
F_TRAINER_FEMALE | 
#line 10511
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10512
        .doubleBattle = TRUE,
#line 10513
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10515
            .species = SPECIES_PELIPPER,
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
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10521
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10520
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10523
    [TRAINER_MAXIE_MOSSDEEP] =
    {
#line 10524
        .trainerName = _("MAXIE"),
#line 10525
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 10526
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender = 
#line 10528
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10529
        .doubleBattle = TRUE,
#line 10530
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10532
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10534
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10533
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10536
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10538
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10537
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10540
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10542
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10541
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10544
    [TRAINER_PETE] =
    {
#line 10545
        .trainerName = _("PETE"),
#line 10546
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 10547
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 10549
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 10550
        .doubleBattle = TRUE,
#line 10551
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10553
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10555
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10554
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10557
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10559
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10558
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10561
    [TRAINER_ISABELLE] =
    {
#line 10562
        .trainerName = _("ISABELLE"),
#line 10563
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 10564
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 10565
F_TRAINER_FEMALE | 
#line 10566
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 10567
        .doubleBattle = TRUE,
#line 10568
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10570
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10572
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10571
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10574
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10576
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10575
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10578
    [TRAINER_ANDRES_1] =
    {
#line 10579
        .trainerName = _("ANDRES"),
#line 10580
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 10581
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 10583
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10584
        .doubleBattle = TRUE,
#line 10585
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10587
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10589
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10588
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10591
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10593
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10592
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10595
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10597
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10596
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10599
    [TRAINER_JOSUE] =
    {
#line 10600
        .trainerName = _("JOSUE"),
#line 10601
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 10602
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 10604
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10605
        .doubleBattle = TRUE,
#line 10606
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10608
            .species = SPECIES_SQUAWKABILLY_BLUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10610
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10609
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10612
            .species = SPECIES_SQUAWKABILLY_YELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10614
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10613
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10616
    [TRAINER_CAMRON] =
    {
#line 10617
        .trainerName = _("CAMRON"),
#line 10618
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 10619
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 10621
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 10622
        .doubleBattle = TRUE,
#line 10623
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10625
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10627
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10626
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10629
            .species = SPECIES_MIENFOO_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10631
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10630
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10633
    [TRAINER_CORY_1] =
    {
#line 10634
        .trainerName = _("CORY"),
#line 10635
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 10636
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 10638
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10639
        .doubleBattle = TRUE,
#line 10640
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10642
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10644
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10643
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10646
            .species = SPECIES_SQUAWKABILLY_WHITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10648
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10647
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10650
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10652
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10651
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10654
            .species = SPECIES_CRABRAWLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10656
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10655
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10658
    [TRAINER_CAROLINA] =
    {
#line 10659
        .trainerName = _("CAROLINA"),
#line 10660
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 10661
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 10662
F_TRAINER_FEMALE | 
#line 10663
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10664
        .doubleBattle = TRUE,
#line 10665
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10667
            .species = SPECIES_MINIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10669
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10668
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10671
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10673
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10672
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10675
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10677
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10676
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10679
    [TRAINER_ELIJAH] =
    {
#line 10680
        .trainerName = _("ELIJAH"),
#line 10681
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 10682
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 10684
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10685
        .doubleBattle = TRUE,
#line 10686
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10688
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10690
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10689
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10692
            .species = SPECIES_RUFFLET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10694
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10693
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10696
    [TRAINER_CELIA] =
    {
#line 10697
        .trainerName = _("CELIA"),
#line 10698
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 10699
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 10700
F_TRAINER_FEMALE | 
#line 10701
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10702
        .doubleBattle = TRUE,
#line 10703
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10705
            .species = SPECIES_TINKATUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10707
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10706
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10709
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10712
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10711
            .ability = ABILITY_OVERCOAT,
#line 10710
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10714
    [TRAINER_BRYAN] =
    {
#line 10715
        .trainerName = _("BRYAN"),
#line 10716
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 10717
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 10719
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10720
        .doubleBattle = TRUE,
#line 10721
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10723
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10725
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10724
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10727
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10729
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10728
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10731
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10733
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10732
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10735
    [TRAINER_BRANDEN] =
    {
#line 10736
        .trainerName = _("BRANDEN"),
#line 10737
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 10738
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 10740
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10741
        .doubleBattle = TRUE,
#line 10742
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10744
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10746
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10745
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10748
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10750
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10749
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10752
    [TRAINER_BRYANT] =
    {
#line 10753
        .trainerName = _("BRYANT"),
#line 10754
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 10755
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 10757
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10758
        .doubleBattle = TRUE,
#line 10759
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10761
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10763
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10762
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10765
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10767
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10766
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10769
    [TRAINER_SHAYLA] =
    {
#line 10770
        .trainerName = _("SHAYLA"),
#line 10771
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 10772
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender = 
#line 10773
F_TRAINER_FEMALE | 
#line 10774
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10775
        .doubleBattle = TRUE,
#line 10776
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10778
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10780
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10779
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10782
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10784
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10783
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10786
    [TRAINER_KYRA] =
    {
#line 10787
        .trainerName = _("KYRA"),
#line 10788
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 10789
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 10790
F_TRAINER_FEMALE | 
#line 10791
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10792
        .doubleBattle = TRUE,
#line 10793
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10795
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10797
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10796
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10799
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10801
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10800
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10803
    [TRAINER_JAIDEN] =
    {
#line 10804
        .trainerName = _("JAIDEN"),
#line 10805
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 10806
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 10808
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10809
        .doubleBattle = TRUE,
#line 10810
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10812
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10814
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10813
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10816
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10818
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10817
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10820
    [TRAINER_ALIX] =
    {
#line 10821
        .trainerName = _("ALIX"),
#line 10822
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10823
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 10824
F_TRAINER_FEMALE | 
#line 10825
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10826
        .doubleBattle = TRUE,
#line 10827
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10829
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10831
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10830
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10833
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10835
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10834
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10837
    [TRAINER_HELENE] =
    {
#line 10838
        .trainerName = _("HELENE"),
#line 10839
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 10840
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 10841
F_TRAINER_FEMALE | 
#line 10842
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10843
        .doubleBattle = TRUE,
#line 10844
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10846
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10848
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10847
            .lvl = 230,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10850
            .species = SPECIES_MIENFOO_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10852
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10851
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10854
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10856
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10855
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10858
    [TRAINER_MARLENE] =
    {
#line 10859
        .trainerName = _("MARLENE"),
#line 10860
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10861
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 10862
F_TRAINER_FEMALE | 
#line 10863
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10864
        .doubleBattle = TRUE,
#line 10865
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10867
            .species = SPECIES_ORICORIO_PAU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10869
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10868
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10871
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10873
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10872
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10875
    [TRAINER_DEVAN] =
    {
#line 10876
        .trainerName = _("DEVAN"),
#line 10877
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10878
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 10880
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10881
        .doubleBattle = TRUE,
#line 10882
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10884
            .species = SPECIES_GEODUDE_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10886
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10885
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10888
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10890
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10889
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10892
            .species = SPECIES_GEODUDE_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10894
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10893
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10896
    [TRAINER_JOHNSON] =
    {
#line 10897
        .trainerName = _("JOHNSON"),
#line 10898
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 10899
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 10901
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10902
        .doubleBattle = TRUE,
#line 10903
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10905
            .species = SPECIES_CHINGLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10907
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10906
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10909
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10911
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10910
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10913
    [TRAINER_MELINA] =
    {
#line 10914
        .trainerName = _("MELINA"),
#line 10915
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 10916
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 10917
F_TRAINER_FEMALE | 
#line 10918
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10919
        .doubleBattle = TRUE,
#line 10920
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10922
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10924
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10923
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10926
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10928
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10927
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10930
    [TRAINER_BRANDI] =
    {
#line 10931
        .trainerName = _("BRANDI"),
#line 10932
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10933
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 10934
F_TRAINER_FEMALE | 
#line 10935
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10936
        .doubleBattle = TRUE,
#line 10937
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10939
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10941
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10940
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10943
            .species = SPECIES_CHINGLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10945
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10944
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10947
    [TRAINER_AISHA] =
    {
#line 10948
        .trainerName = _("AISHA"),
#line 10949
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 10950
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 10951
F_TRAINER_FEMALE | 
#line 10952
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10953
        .doubleBattle = TRUE,
#line 10954
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10956
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10958
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10957
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10960
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10962
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10961
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10964
    [TRAINER_MAKAYLA] =
    {
#line 10965
        .trainerName = _("MAKAYLA"),
#line 10966
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 10967
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 10968
F_TRAINER_FEMALE | 
#line 10969
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10970
        .doubleBattle = TRUE,
#line 10971
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10973
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10975
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10974
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10977
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10979
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10978
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10981
    [TRAINER_FABIAN] =
    {
#line 10982
        .trainerName = _("FABIAN"),
#line 10983
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 10984
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 10986
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10987
        .doubleBattle = TRUE,
#line 10988
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10990
            .species = SPECIES_VAROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10992
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10991
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10994
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10996
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10995
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10998
    [TRAINER_DAYTON] =
    {
#line 10999
        .trainerName = _("DAYTON"),
#line 11000
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 11001
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 11003
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11004
        .doubleBattle = TRUE,
#line 11005
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11007
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11009
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11008
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11011
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11013
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11012
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11015
    [TRAINER_RACHEL] =
    {
#line 11016
        .trainerName = _("RACHEL"),
#line 11017
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 11018
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 11019
F_TRAINER_FEMALE | 
#line 11020
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11021
        .doubleBattle = TRUE,
#line 11022
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11024
            .species = SPECIES_GOOMY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11026
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11025
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11028
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11030
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11029
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11032
    [TRAINER_LEONEL] =
    {
#line 11033
        .trainerName = _("LEONEL"),
#line 11034
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 11035
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 11037
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11038
        .doubleBattle = TRUE,
#line 11039
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11041
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11043
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11042
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11045
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11047
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11046
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11049
            .species = SPECIES_SCRAFTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11051
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11050
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11053
    [TRAINER_CALLIE] =
    {
#line 11054
        .trainerName = _("CALLIE"),
#line 11055
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 11056
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 11057
F_TRAINER_FEMALE | 
#line 11058
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11059
        .doubleBattle = TRUE,
#line 11060
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11062
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11064
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11063
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11066
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11068
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11067
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11070
    [TRAINER_CALE] =
    {
#line 11071
        .trainerName = _("CALE"),
#line 11072
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 11073
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 11075
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 11076
        .doubleBattle = TRUE,
#line 11077
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11079
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11081
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11080
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11083
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11085
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11084
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11087
    [TRAINER_MYLES] =
    {
#line 11088
        .trainerName = _("MYLES"),
#line 11089
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 11090
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender = 
#line 11092
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11093
        .doubleBattle = TRUE,
#line 11094
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_ACE_POKEMON,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11096
            .species = SPECIES_BERGMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11098
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11097
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11100
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11102
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11101
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11104
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11106
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11105
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11108
            .species = SPECIES_SKIDDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11110
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11109
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11112
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11114
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11113
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11116
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11118
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11117
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11120
    [TRAINER_PAT] =
    {
#line 11121
        .trainerName = _("PAT"),
#line 11122
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 11123
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 11124
F_TRAINER_FEMALE | 
#line 11125
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11126
        .doubleBattle = TRUE,
#line 11127
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_ACE_POKEMON,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 11129
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11131
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11130
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11133
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11135
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11134
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11137
            .species = SPECIES_TINKATUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11139
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11138
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11141
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11143
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11142
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11145
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11147
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11146
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11149
    [TRAINER_CRISTIN_1] =
    {
#line 11150
        .trainerName = _("CRISTIN"),
#line 11151
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 11152
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 11153
F_TRAINER_FEMALE | 
#line 11154
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11155
        .doubleBattle = TRUE,
#line 11156
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11158
            .species = SPECIES_BELLIBOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11160
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11159
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11162
            .species = SPECIES_DRAGALGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11164
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11163
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11166
            .species = SPECIES_ROTOM_FAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11168
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11167
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11170
    [TRAINER_MAY_RUSTBORO_TREECKO] =
    {
#line 11171
        .trainerName = _("MAY"),
#line 11172
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11173
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 11174
F_TRAINER_FEMALE | 
#line 11175
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11176
        .doubleBattle = TRUE,
#line 11177
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 11179
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11181
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 11180
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11183
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11185
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 11184
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11187
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11189
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 11188
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11191
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11193
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11192
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11195
    [TRAINER_MAY_RUSTBORO_TORCHIC] =
    {
#line 11196
        .trainerName = _("MAY"),
#line 11197
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11198
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 11199
F_TRAINER_FEMALE | 
#line 11200
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11201
        .doubleBattle = TRUE,
#line 11202
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 11204
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11206
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 11205
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11208
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11210
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 11209
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11212
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11214
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 11213
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11216
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11218
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11217
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11220
    [TRAINER_ANGELO] =
    {
#line 11221
        .trainerName = _("ANGELO"),
#line 11222
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 11223
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 11225
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 11226
        .doubleBattle = TRUE,
#line 11227
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11229
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11231
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11230
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11232
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
                MOVE_CHARM,
            },
            },
            {
#line 11236
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11238
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11237
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11239
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
                MOVE_CONFUSE_RAY,
            },
            },
        },
    },
#line 11243
    [TRAINER_DARIUS] =
    {
#line 11244
        .trainerName = _("DARIUS"),
#line 11245
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 11246
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 11248
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11249
        .doubleBattle = TRUE,
#line 11250
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11252
            .species = SPECIES_KILOWATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11254
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 11253
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11256
            .species = SPECIES_ORICORIO_POM_POM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11258
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 11257
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11260
    [TRAINER_STEVEN] =
    {
#line 11261
        .trainerName = _("STEVEN"),
#line 11262
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11263
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 11265
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11266
        .doubleBattle = TRUE,
#line 11267
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11269
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11271
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11270
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11272
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
            },
            },
            {
#line 11277
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11279
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11278
            .lvl = 75,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11280
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_ANCIENT_POWER,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 11285
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11287
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11286
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11288
                MOVE_THUNDER,
                MOVE_EARTHQUAKE,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 11293
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11295
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11294
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11296
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_INGRAIN,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 11301
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11303
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11302
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11304
                MOVE_WATER_PULSE,
                MOVE_ANCIENT_POWER,
                MOVE_AERIAL_ACE,
                MOVE_SLASH,
            },
            },
            {
#line 11309
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11309
            .heldItem = ITEM_SITRUS_BERRY,
#line 11311
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11310
            .lvl = 78,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11312
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_METEOR_MASH,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 11317
    [TRAINER_ANABEL] =
    {
#line 11318
        .trainerName = _("ANABEL"),
#line 11319
        .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
#line 11320
        .trainerPic = TRAINER_PIC_SALON_MAIDEN_ANABEL,
        .encounterMusic_gender = 
#line 11321
F_TRAINER_FEMALE | 
#line 11322
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11323
        .doubleBattle = TRUE,
#line 11324
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11326
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11328
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11327
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11330
    [TRAINER_TUCKER] =
    {
#line 11331
        .trainerName = _("TUCKER"),
#line 11332
        .trainerClass = TRAINER_CLASS_DOME_ACE,
#line 11333
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender = 
#line 11335
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11336
        .doubleBattle = TRUE,
#line 11337
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11339
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11341
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11340
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11343
    [TRAINER_SPENSER] =
    {
#line 11344
        .trainerName = _("SPENSER"),
#line 11345
        .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
#line 11346
        .trainerPic = TRAINER_PIC_PALACE_MAVEN_SPENSER,
        .encounterMusic_gender = 
#line 11348
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11349
        .doubleBattle = TRUE,
#line 11350
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11352
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11354
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11353
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11356
    [TRAINER_GRETA] =
    {
#line 11357
        .trainerName = _("GRETA"),
#line 11358
        .trainerClass = TRAINER_CLASS_ARENA_TYCOON,
#line 11359
        .trainerPic = TRAINER_PIC_ARENA_TYCOON_GRETA,
        .encounterMusic_gender = 
#line 11360
F_TRAINER_FEMALE | 
#line 11361
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11362
        .doubleBattle = TRUE,
#line 11363
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11365
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11367
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11366
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11369
    [TRAINER_NOLAND] =
    {
#line 11370
        .trainerName = _("NOLAND"),
#line 11371
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 11372
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender = 
#line 11374
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11375
        .doubleBattle = TRUE,
#line 11376
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11378
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11380
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11379
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11382
    [TRAINER_LUCY] =
    {
#line 11383
        .trainerName = _("LUCY"),
#line 11384
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 11385
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender = 
#line 11386
F_TRAINER_FEMALE | 
#line 11387
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11388
        .doubleBattle = TRUE,
#line 11389
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11391
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11393
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11392
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11395
    [TRAINER_BRANDON] =
    {
#line 11396
        .trainerName = _("BRANDON"),
#line 11397
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 11398
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender = 
#line 11400
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11401
        .doubleBattle = TRUE,
#line 11402
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11404
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11406
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11405
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11408
    [TRAINER_MARIELA] =
    {
#line 11409
        .trainerName = _("MARIELA"),
#line 11410
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 11411
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 11412
F_TRAINER_FEMALE | 
#line 11413
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11414
        .doubleBattle = TRUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11416
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11418
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11417
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11420
    [TRAINER_ALVARO] =
    {
#line 11421
        .trainerName = _("ALVARO"),
#line 11422
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 11423
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 11425
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11426
        .doubleBattle = TRUE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11428
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11430
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11429
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11432
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11434
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11433
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11436
    [TRAINER_EVERETT] =
    {
#line 11437
        .trainerName = _("EVERETT"),
#line 11438
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 11439
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 11441
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 11442
        .doubleBattle = TRUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11444
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11446
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11445
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11448
    [TRAINER_RED] =
    {
#line 11449
        .trainerName = _("RED"),
#line 11450
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11451
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender = 
#line 11453
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11454
        .doubleBattle = TRUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11456
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11458
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11457
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11460
    [TRAINER_LEAF] =
    {
#line 11461
        .trainerName = _("LEAF"),
#line 11462
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11463
        .trainerPic = TRAINER_PIC_LEAF,
        .encounterMusic_gender = 
#line 11464
F_TRAINER_FEMALE | 
#line 11465
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11466
        .doubleBattle = TRUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11468
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11470
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11469
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11472
    [TRAINER_BRENDAN_PLACEHOLDER] =
    {
#line 11473
        .trainerName = _("BRENDAN"),
#line 11474
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 11475
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .encounterMusic_gender = 
#line 11477
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11478
        .doubleBattle = TRUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11480
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11482
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11481
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11484
    [TRAINER_MAY_PLACEHOLDER] =
    {
#line 11485
        .trainerName = _("MAY"),
#line 11486
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 11487
        .trainerPic = TRAINER_PIC_RS_MAY,
        .encounterMusic_gender = 
#line 11488
F_TRAINER_FEMALE | 
#line 11489
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11490
        .doubleBattle = TRUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11492
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11494
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11493
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11496
    [TRAINER_LUCA] =
    {
#line 11497
        .trainerName = _("LUCA"),
#line 11498
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 11499
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender = 
#line 11501
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 11502
        .doubleBattle = TRUE,
#line 11503
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11505
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11507
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11506
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11509
            .species = SPECIES_VIBRAVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11511
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11510
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11513
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11515
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11514
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11517
    [TRAINER_ADRIAN] =
    {
#line 11518
        .trainerName = _("ADRIAN"),
#line 11519
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 11520
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 11522
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11523
        .doubleBattle = TRUE,
#line 11524
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11526
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11528
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11527
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11530
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11532
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11531
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11534
    [TRAINER_KRISTI] =
    {
#line 11535
        .trainerName = _("KRISTI"),
#line 11536
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 11537
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 11538
F_TRAINER_FEMALE | 
#line 11539
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 11540
        .doubleBattle = TRUE,
#line 11541
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11543
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11545
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11544
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11547
            .species = SPECIES_SEEL_HOENNIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11549
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11548
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11551
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11553
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11552
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11555
    [TRAINER_SMITH] =
    {
#line 11556
        .trainerName = _("SMITH"),
#line 11557
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 11558
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 11560
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11561
        .doubleBattle = TRUE,
#line 11562
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11564
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11566
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11565
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11568
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11570
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11569
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11572
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11574
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11573
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11576
    [TRAINER_IZZY] =
    {
#line 11577
        .trainerName = _("IZZY"),
#line 11578
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 11579
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 11580
F_TRAINER_FEMALE | 
#line 11581
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 11582
        .doubleBattle = TRUE,
#line 11583
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11585
            .species = SPECIES_CHERRIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11587
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11586
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11589
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11591
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11590
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11593
    [TRAINER_JEREMIAH] =
    {
#line 11594
        .trainerName = _("JEREMIAH"),
#line 11595
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 11596
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 11598
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11599
        .doubleBattle = TRUE,
#line 11600
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11602
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11604
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11603
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11606
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11608
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11607
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11610
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11612
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11611
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11614
    [TRAINER_WALLY_LILYCOVE] =
    {
#line 11615
        .trainerName = _("WALLY"),
#line 11616
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11617
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 11619
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11620
        .doubleBattle = TRUE,
#line 11621
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 11623
            .species = SPECIES_SYLVEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11626
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 11625
            .ability = ABILITY_CUTE_CHARM,
#line 11624
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11627
                MOVE_DRAINING_KISS,
                MOVE_COPYCAT,
                MOVE_SWIFT,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 11632
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11632
            .heldItem = ITEM_LIGHT_BALL,
#line 11635
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 11634
            .ability = ABILITY_STATIC,
#line 11633
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11636
                MOVE_SPARK,
                MOVE_IRON_TAIL,
                MOVE_NUZZLE,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 11641
            .species = SPECIES_TINKATUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11644
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 11643
            .ability = ABILITY_MOLD_BREAKER,
#line 11642
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11645
                MOVE_FAKE_OUT,
                MOVE_FLASH_CANNON,
                MOVE_PLAY_ROUGH,
                MOVE_COVET,
            },
            },
            {
#line 11650
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11653
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 11652
            .ability = ABILITY_POISON_POINT,
#line 11651
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11654
                MOVE_GIGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_VENOSHOCK,
                MOVE_POISON_POWDER,
            },
            },
            {
#line 11659
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11659
            .heldItem = ITEM_TWISTED_SPOON,
#line 11661
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11660
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11662
                MOVE_PSYSHOCK,
                MOVE_DRAINING_KISS,
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
            },
            },
        },
    },
