#ifndef __RESOURCE_H__
#define __RESOURCE_H__

#ifndef IDC_STATIC
#define IDC_STATIC (-1)
#endif

// Acceleration
#define IDA_MAIN 1

// Menu Id
#define IDM_MAIN 100
#define IDM_TRAY 101

// Dialogs
#define IDD_MAIN 100
#define IDD_NOTIFICATION 101
#define IDD_EDITOR 102
#define IDD_EDITOR_GENERAL 103
#define IDD_EDITOR_RULE 104
#define IDD_EDITOR_APPS 105
#define IDD_EDITOR_ADDRULE 106
#define IDD_EDITOR_APPINFO 107
#define IDD_EDITOR_APPRULES 108
#define IDD_SETTINGS_GENERAL 109
#define IDD_SETTINGS_INTERFACE 110
#define IDD_SETTINGS_HIGHLIGHTING 111
#define IDD_SETTINGS_RULES 112
#define IDD_SETTINGS_BLOCKLIST 113
#define IDD_SETTINGS_NOTIFICATIONS 114
#define IDD_SETTINGS_LOGGING 115
#define IDD_SETTINGS_EXCLUDE 116

// Main Dlg
#define IDC_REBAR 102
#define IDC_TOOLBAR 103
#define IDC_SEARCH 104
#define IDC_TAB 105
#define IDC_APPS_PROFILE 106
#define IDC_APPS_SERVICE 107
#define IDC_APPS_UWP 108
#define IDC_RULES_BLOCKLIST 109
#define IDC_RULES_SYSTEM 110
#define IDC_RULES_CUSTOM 111
#define IDC_NETWORK 112
#define IDC_LOG 113
#define IDC_STATUSBAR 114

// Settings Dlg
#define IDC_NAV 115
#define IDC_SAVE 116
#define IDC_RESET 117
#define IDC_CLOSE 118

#define IDC_TITLE_GENERAL 119
#define IDC_TITLE_LANGUAGE 120
#define IDC_TITLE_CONNECTIONS 121
#define IDC_TITLE_SECURITY 122
#define IDC_TITLE_BLOCKLIST_SPY 123
#define IDC_TITLE_BLOCKLIST_UPDATE 124
#define IDC_TITLE_BLOCKLIST_EXTRA 125
#define IDC_TITLE_CONFIRMATIONS 126
#define IDC_TITLE_TRAY 127
#define IDC_TITLE_HIGHLIGHTING 128
#define IDC_TITLE_NOTIFICATIONS 129
#define IDC_TITLE_LOGGING 130
#define IDC_TITLE_LOGVIEWER 131
#define IDC_TITLE_INTERFACE 132
#define IDC_TITLE_ADVANCED 133

#define IDC_ALWAYSONTOP_CHK 134
#define IDC_LOADONSTARTUP_CHK 135
#define IDC_STARTMINIMIZED_CHK 136
#define IDC_SKIPUACWARNING_CHK 137
#define IDC_CHECKUPDATES_CHK 138

#define IDC_LANGUAGE_HINT 139
#define IDC_LANGUAGE 140

#define IDC_RULE_BLOCKOUTBOUND 141
#define IDC_RULE_BLOCKINBOUND 142
#define IDC_RULE_ALLOWLOOPBACK 143
#define IDC_RULE_ALLOW6TO4 144

#define IDC_USESTEALTHMODE_CHK 145
#define IDC_INSTALLBOOTTIMEFILTERS_CHK 146

#define IDC_USECERTIFICATES_CHK 147
#define IDC_USEHASHES_CHK 148

#define IDC_USENETWORKRESOLUTION_CHK 149

#define IDC_BLOCKLIST_SPY_DISABLE 150
#define IDC_BLOCKLIST_SPY_ALLOW 151
#define IDC_BLOCKLIST_SPY_BLOCK 152

#define IDC_BLOCKLIST_UPDATE_DISABLE 153
#define IDC_BLOCKLIST_UPDATE_ALLOW 154
#define IDC_BLOCKLIST_UPDATE_BLOCK 155

#define IDC_BLOCKLIST_EXTRA_DISABLE 156
#define IDC_BLOCKLIST_EXTRA_ALLOW 157
#define IDC_BLOCKLIST_EXTRA_BLOCK 158

#define IDC_BLOCKLIST_INFO 159

#define IDC_CONFIRMEXIT_CHK 160
#define IDC_CONFIRMEXITTIMER_CHK 161
#define IDC_CONFIRMLOGCLEAR_CHK 162
#define IDC_CONFIRMALLOW_CHK 163

#define IDC_TRAYICONSINGLECLICK_CHK 164

#define IDC_COLORS 165
#define IDC_COLORS_HINT 166

#define IDC_ENABLENOTIFICATIONS_CHK 167
#define IDC_NOTIFICATIONSOUND_CHK 168
#define IDC_NOTIFICATIONFULLSCREENSILENTMODE_CHK 169
#define IDC_NOTIFICATIONONTRAY_CHK 170
#define IDC_NOTIFICATIONTIMEOUT_HINT 171
#define IDC_NOTIFICATIONTIMEOUT_CTRL 172
#define IDC_NOTIFICATIONTIMEOUT 173
#define IDC_EXCLUDESTEALTH_CHK 174
#define IDC_EXCLUDECLASSIFYALLOW_CHK 175
#define IDC_EXCLUDEBLOCKLIST_CHK 176
#define IDC_EXCLUDECUSTOM_CHK 177

#define IDC_ENABLELOG_CHK 178
#define IDC_LOGPATH 179
#define IDC_LOGPATH_BTN 180

#define IDC_ENABLEUILOG_CHK 181

#define IDC_LOGVIEWER 182
#define IDC_LOGVIEWER_BTN 183

#define IDC_LOGSIZELIMIT_HINT 184
#define IDC_LOGSIZELIMIT_CTRL 185
#define IDC_LOGSIZELIMIT 186

// Notification Dlg
#define IDC_HEADER_ID 187
#define IDC_FILE_TEXT 188
#define IDC_SIGNATURE_TEXT 189
#define IDC_ADDRESS_TEXT 190
#define IDC_HOST_TEXT 191
#define IDC_PORT_TEXT 192
#define IDC_DIRECTION_TEXT 193
#define IDC_FILTER_TEXT 194
#define IDC_DATE_TEXT 195
#define IDC_FILE_ID 196
#define IDC_SIGNATURE_ID 197
#define IDC_ADDRESS_ID 198
#define IDC_HOST_ID 199
#define IDC_PORT_ID 200
#define IDC_DIRECTION_ID 201
#define IDC_FILTER_ID 202
#define IDC_DATE_ID 203

#define IDC_RULES_BTN 204
#define IDC_KILLPROCESS_BTN 205
#define IDC_ALLOW_BTN 206
#define IDC_BLOCK_BTN 207
#define IDC_NEXT_BTN 208

// Editor Dlg
#define IDC_RULE_NAME 209
#define IDC_RULE_NAME_ID 210
#define IDC_RULE_COMMENT 211
#define IDC_RULE_COMMENT_ID 212
#define IDC_RULE_PROTOCOL 213
#define IDC_RULE_PROTOCOL_ID 214
#define IDC_RULE_VERSION 215
#define IDC_RULE_VERSION_ID 216
#define IDC_RULE_DIRECTION 217
#define IDC_RULE_DIRECTION_ID 218
#define IDC_RULE_ACTION 219
#define IDC_RULE_ACTION_ID 220
#define IDC_RULE_REMOTE 221
#define IDC_RULE_REMOTE_ID 222
#define IDC_RULE_REMOTE_ADD 223
#define IDC_RULE_REMOTE_EDIT 224
#define IDC_RULE_REMOTE_DELETE 225
#define IDC_RULE_LOCAL 226
#define IDC_RULE_LOCAL_ID 227
#define IDC_RULE_LOCAL_ADD 228
#define IDC_RULE_LOCAL_EDIT 229
#define IDC_RULE_LOCAL_DELETE 230
#define IDC_RULE_APPS_ID 231
#define IDC_RULE_APPS_HINT 232
#define IDC_RULE 233
#define IDC_RULE_ID 234
#define IDC_RULE_HINT 235
#define IDC_APP_NAME 236
#define IDC_APP_ICON_ID 237
#define IDC_APP_NAME_ID 238
#define IDC_APP_SIGNATURE_ID 239
#define IDC_APP_PATH 240
#define IDC_APP_PATH_ID 241
#define IDC_APP_EXPLORE_ID 242
#define IDC_APP_COMMENT 243
#define IDC_APP_COMMENT_ID 244
#define IDC_APP_HASH 245
#define IDC_APP_HASH_ID 246
#define IDC_APP_HASH_RECHECK_ID 247
#define IDC_APP_RULES_ID 248
#define IDC_APP_HINT 249
#define IDC_ENABLE_CHK 250

// Main Menu
#define IDM_SETTINGS 251
#define IDM_ADD_FILE 252
#define IDM_IMPORT 253
#define IDM_EXPORT 254
#define IDM_EXIT 255
#define IDM_PURGE_UNUSED 256
#define IDM_PURGE_TIMERS 257
#define IDM_LOGCLEAR 258
#define IDM_FIND 259
#define IDM_REFRESH 260
#define IDM_ALWAYSONTOP_CHK 261
#define IDM_SHOWFILENAMESONLY_CHK 262
#define IDM_SHOWSEARCHBAR_CHK 263
#define IDM_AUTOSIZECOLUMNS_CHK 264
#define IDM_VIEW_DETAILS 265
#define IDM_VIEW_ICON 266
#define IDM_VIEW_TILE 267
#define IDM_SIZE_SMALL 268
#define IDM_SIZE_LARGE 269
#define IDM_SIZE_EXTRALARGE 270
#define IDM_ICONSISHIDDEN 271
#define IDM_USEDARKTHEME_CHK 272
#define IDM_FONT 273
#define IDM_LOADONSTARTUP_CHK 274
#define IDM_STARTMINIMIZED_CHK 275
#define IDM_SKIPUACWARNING_CHK 276
#define IDM_CHECKUPDATES_CHK 277
#define IDM_RULE_BLOCKOUTBOUND 278
#define IDM_RULE_BLOCKINBOUND 279
#define IDM_RULE_ALLOWLOOPBACK 280
#define IDM_RULE_ALLOW6TO4 281
#define IDM_RULE_ALLOWWINDOWSUPDATE 282
#define IDM_PROFILETYPE_PLAIN 283
#define IDM_PROFILETYPE_COMPRESSED 284
#define IDM_PROFILETYPE_ENCRYPTED 285
#define IDM_USENETWORKRESOLUTION_CHK 286
#define IDM_USECERTIFICATES_CHK 287
#define IDM_USEHASHES_CHK 288
#define IDM_USEAPPMONITOR_CHK 289
#define IDM_BLOCKLIST_SPY_DISABLE 290
#define IDM_BLOCKLIST_SPY_ALLOW 291
#define IDM_BLOCKLIST_SPY_BLOCK 292
#define IDM_BLOCKLIST_UPDATE_DISABLE 293
#define IDM_BLOCKLIST_UPDATE_ALLOW 294
#define IDM_BLOCKLIST_UPDATE_BLOCK 295
#define IDM_BLOCKLIST_EXTRA_DISABLE 296
#define IDM_BLOCKLIST_EXTRA_ALLOW 297
#define IDM_BLOCKLIST_EXTRA_BLOCK 298
#define IDM_WEBSITE 299
#define IDM_CHECKUPDATES 300
#define IDM_DONATE 301
#define IDM_ABOUT 302

// Tray Menu
#define IDM_TRAY_SHOW 303
#define IDM_TRAY_START 304
#define IDM_TRAY_ENABLENOTIFICATIONS_CHK 305
#define IDM_TRAY_ENABLENOTIFICATIONSSOUND_CHK 306
#define IDM_TRAY_NOTIFICATIONFULLSCREENSILENTMODE_CHK 307
#define IDM_TRAY_NOTIFICATIONONTRAY_CHK 308
#define IDM_TRAY_ENABLELOG_CHK 309
#define IDM_TRAY_ENABLEUILOG_CHK 310
#define IDM_TRAY_LOGSHOW 311
#define IDM_TRAY_LOGCLEAR 312
#define IDM_TRAY_LOGSHOW_ERR 313
#define IDM_TRAY_LOGCLEAR_ERR 314
#define IDM_TRAY_SETTINGS 315
#define IDM_TRAY_WEBSITE 316
#define IDM_TRAY_ABOUT 317
#define IDM_TRAY_EXIT 318

// Listview Menu
#define IDM_EXPLORE 319
#define IDM_DISABLENOTIFICATIONS 320
#define IDM_DISABLEREMOVAL 321
#define IDM_OPENRULESEDITOR 322
#define IDM_COPY 323
#define IDM_COPY_VALUE 324
#define IDM_CHECK 325
#define IDM_UNCHECK 326
#define IDM_DELETE 327
#define IDM_DISABLETIMER 328
#define IDM_PROPERTIES 329

#define IDM_NOTIMER 330

#define IDM_SELECT_ALL 331
#define IDM_ZOOM 332
#define IDM_TAB_NEXT 333
#define IDM_TAB_PREV 334

#define IDX_LANGUAGE 1000
#define IDX_TIMER 1200
#define IDX_NOTIFICATIONS 1300
#define IDX_RULES_SPECIAL 1400
#define IDX_COLUMN 1500

// Strings
#define IDS_TITLE_EXCLUDE 1
#define IDS_FILE 2
#define IDS_SETTINGS 3
#define IDS_EXIT 4
#define IDS_EDIT 5
#define IDS_PURGE_ERRORS 6
#define IDS_PURGE_UNUSED 7
#define IDS_PURGE_TIMERS 8
#define IDS_FIND 9
#define IDS_FINDNEXT 10
#define IDS_REFRESH 11
#define IDS_VIEW 12
#define IDS_ICONS 13
#define IDS_ICONSSMALL 14
#define IDS_ICONSLARGE 15
#define IDS_ICONSISHIDDEN 16
#define IDS_LANGUAGE 17
#define IDS_FONT 18
#define IDS_HELP 19
#define IDS_WEBSITE 20
#define IDS_CHECKUPDATES 21
#define IDS_DONATE 22
#define IDS_ABOUT 23
#define IDS_TRAY_SHOW 24
#define IDS_TRAY_START 25
#define IDS_TRAY_STOP 26
#define IDS_TRAY_MODE 27
#define IDS_TRAY_RULES 28
#define IDS_TRAY_BLOCKLIST_RULES 29
#define IDS_TRAY_SYSTEM_RULES 30
#define IDS_TRAY_USER_RULES 31
#define IDS_TRAY_LOG 32
#define IDS_TRAY_LOGERR 33
#define IDS_ADD_FILE 34
#define IDS_ADD_PROCESS 35
#define IDS_ADD_PACKAGE 36
#define IDS_ADD_SERVICE 37
#define IDS_ANY 38
#define IDS_DISABLENOTIFICATIONS 39
#define IDS_OPENRULESEDITOR 40
#define IDS_TIMER 41
#define IDS_NOTIMER 42
#define IDS_DISABLETIMER 43
#define IDS_EXPLORE 44
#define IDS_COPY 45
#define IDS_SELECT_ALL 46
#define IDS_CHECK 47
#define IDS_UNCHECK 48
#define IDS_ADD 49
#define IDS_EDIT2 50
#define IDS_DELETE 51
#define IDS_EXPORT 52
#define IDS_IMPORT 53
#define IDS_MODE_WHITELIST 54
#define IDS_MODE_BLACKLIST 55
#define IDS_RULE_ALLOWINBOUND 56
#define IDS_RULE_ALLOWLISTEN 57
#define IDS_RULE_ALLOWLOOPBACK 58
#define IDS_HIGHLIGHT_INVALID 59
#define IDS_HIGHLIGHT_NETWORK 60
#define IDS_HIGHLIGHT_PACKAGE 61
#define IDS_HIGHLIGHT_PICO 62
#define IDS_HIGHLIGHT_SERVICE 63
#define IDS_HIGHLIGHT_SIGNED 64
#define IDS_HIGHLIGHT_SILENT 65
#define IDS_HIGHLIGHT_SPECIAL 66
#define IDS_HIGHLIGHT_SYSTEM 67
#define IDS_GROUP_TIMER 68
#define IDS_EDITOR 69
#define IDS_NAME 70
#define IDS_RULE 71
#define IDS_PORTVERSION 72
#define IDS_PROTOCOL 73
#define IDS_DIRECTION 74
#define IDS_ACTION 75
#define IDS_DATE 76
#define IDS_FILEPATH 77
#define IDS_SIGNATURE 78
#define IDS_ADDRESS 79
#define IDS_FILTER 80
#define IDS_NOTES 81
#define IDS_ADDED 82
#define IDS_REGION 83
#define IDS_TIMELEFT 84
#define IDS_SIGN_SIGNED 85
#define IDS_SIGN_UNSIGNED 86
#define IDS_GROUP_ALLOWED 87
#define IDS_GROUP_BLOCKED 88
#define IDS_GROUP_ENABLED 89
#define IDS_GROUP_SPECIAL 90
#define IDS_GROUP_DISABLED 91
#define IDS_DIRECTION_1 92
#define IDS_DIRECTION_2 93
#define IDS_DIRECTION_3 94
#define IDS_ACTION_ALLOW 95
#define IDS_ACTION_BLOCK 96
#define IDS_ACTION_LATER 97
#define IDS_RULE_APPLY 98
#define IDS_DISABLE_CHK 99
#define IDS_ENABLE_CHK 100
#define IDS_ENABLEFORAPPS_CHK 101
#define IDS_WIKI 102
#define IDS_SAVE 103
#define IDS_CLOSE 104
#define IDS_SETTINGS_GENERAL 105
#define IDS_TITLE_GENERAL 106
#define IDS_TITLE_LANGUAGE 107
#define IDS_TITLE_CONFIRMATIONS 108
#define IDS_TITLE_INTERFACE 109
#define IDS_TITLE_HIGHLIGHTING 110
#define IDS_TITLE_EXPERTS 111
#define IDS_TITLE_LOGGING 112
#define IDS_TITLE_NOTIFICATIONS 113
#define IDS_TITLE_ADVANCED 114
#define IDS_ALWAYSONTOP_CHK 115
#define IDS_LOADONSTARTUP_CHK 116
#define IDS_STARTMINIMIZED_CHK 117
#define IDS_SHOWFILENAMESONLY_CHK 118
#define IDS_AUTOSIZECOLUMNS_CHK 119
#define IDS_SKIPUACWARNING_CHK 120
#define IDS_CHECKUPDATES_CHK 121
#define IDS_LANGUAGE_HINT 122
#define IDS_USEFULLBLOCKLIST_CHK 123
#define IDS_USEFULLBLOCKLIST_HINT 124
#define IDS_USESTEALTHMODE_CHK 125
#define IDS_USESTEALTHMODE_HINT 126
#define IDS_INSTALLBOOTTIMEFILTERS_CHK 127
#define IDS_INSTALLBOOTTIMEFILTERS_HINT 128
#define IDS_PROXYSUPPORT_CHK 129
#define IDS_PROXYSUPPORT_HINT 130
#define IDS_USEHOSTS_CHK 131
#define IDS_USECERTIFICATES_CHK 132
#define IDS_USENETWORKRESOLUTION_CHK 133
#define IDS_DISABLEWINDOWSFIREWALL_CHK 134
#define IDS_ENABLEWINDOWSFIREWALL_CHK 135
#define IDS_CONFIRMEXIT_CHK 136
#define IDS_CONFIRMEXITTIMER_CHK 137
#define IDS_CONFIRMDELETE_CHK 138
#define IDS_CONFIRMLOGCLEAR_CHK 139
#define IDS_COLORS_HINT 140
#define IDS_ENABLELOG_CHK 141
#define IDS_LOGSHOW 142
#define IDS_LOGCLEAR 143
#define IDS_LOGSIZELIMIT_HINT 144
#define IDS_ENABLENOTIFICATIONS_CHK 145
#define IDS_NOTIFICATIONSOUND_CHK 146
#define IDS_NOTIFICATIONNOBLOCKLIST_CHK 147
#define IDS_NOTIFICATIONDISPLAYTIMEOUT_HINT 148
#define IDS_NOTIFICATIONTIMEOUT_HINT 149
#define IDS_RULES_BLOCKLIST_HINT 150
#define IDS_RULES_SYSTEM_HINT 151
#define IDS_RULES_USER_HINT 152
#define IDS_NOTIFY_CREATERULE_ADDRESS 153
#define IDS_NOTIFY_CREATERULE_PORT 154
#define IDS_NOTIFY_DISABLENOTIFICATIONS 155
#define IDS_NOTIFY_TOOLTIP 156
#define IDS_QUESTION 157
#define IDS_QUESTION_DELETE 158
#define IDS_QUESTION_START 159
#define IDS_QUESTION_STOP 160
#define IDS_QUESTION_MODE 161
#define IDS_QUESTION_EXIT 162
#define IDS_QUESTION_LISTEN 163
#define IDS_QUESTION_EXPERT 164
#define IDS_QUESTION_TIMER 165
#define IDS_QUESTION_TIMERS 166
#define IDS_QUESTION_FLAG_CHK 167
#define IDS_STATUS_TOTAL 168
#define IDS_STATUS_SELECTED 169
#define IDS_STATUS_EMPTY 170
#define IDS_STATUS_ERROR 171
#define IDS_STATUS_SYNTAX_ERROR 172
#define IDS_ADDRESS_LOCAL 173
#define IDS_ADDRESS_REMOTE 174
#define IDS_UPDATE_ERROR 175
#define IDS_CHECKUPDATESBETA_CHK 176
#define IDS_CHECKUPDATES_LANGUAGE 177
#define IDS_CHECKUPDATES_BLOCKLIST 178
#define IDS_UPDATE_DOWNLOAD 179
#define IDS_UPDATE_DONE 180
#define IDS_GROUP_SPECIAL_APPS 181
#define IDS_RULE_ALLOWINBOUND_HINT 182
#define IDS_RULE_ALLOWLISTEN_HINT 183
#define IDS_RULE_ALLOWLOOPBACK_HINT 184
#define IDS_PROPERTIES 185
#define IDS_RESET 186
#define IDS_QUESTION_RESET 187
#define IDS_TITLE_EXCLUSION 188
#define IDS_EXCLUDESTEALTH_CHK 189
#define IDS_EXCLUDEBLOCKLIST_CHK 190
#define IDS_UPDATE_INIT 191
#define IDS_UPDATE_INSTALL 192
#define IDS_EXCLUDECUSTOM_CHK 193
#define IDS_ENABLESPECIALGROUP_CHK 194
#define IDS_EXCLUDECLASSIFYALLOW_CHK 195
#define IDS_STATUS_TIMER_DONE 196
#define IDS_ICONSEXTRALARGE 197
#define IDS_STATUS_UNUSED_APPS 198
#define IDS_STATUS_INVALID_APPS 199
#define IDS_STATUS_TIMER_APPS 200
#define IDS_SECUREFILTERS_CHK 201
#define IDS_SECUREFILTERS_HINT 202
#define IDS_USEREFRESHDEVICES_CHK 203
#define IDS_RULE_ALLOW6TO4 204
#define IDS_RECOMMENDED 205
#define IDS_ICONSISTABLEVIEW 206
#define IDS_ACTION_IGNORE 207
#define IDS_ACTION_ALLOW_HINT 208
#define IDS_ACTION_BLOCK_HINT 209
#define IDS_ACTION_LATER_HINT 210
#define IDS_RULE_APPLY_2 211
#define IDS_EDITRULES 212
#define IDS_TAB_APPS 213
#define IDS_TAB_SERVICES 214
#define IDS_TAB_PACKAGES 215
#define IDS_TAB_NETWORK 216
#define IDS_STATE 217
#define IDS_STATUS_FILTERS_ACTIVE 218
#define IDS_STATUS_FILTERS_INACTIVE 219
#define IDS_STATUS_FILTERS_PROCESSING 220
#define IDS_HIGHLIGHT_CONNECTION 221
#define IDS_SHOWINLIST 222
#define IDS_BLOCKLIST_SPY 223
#define IDS_BLOCKLIST_UPDATE 224
#define IDS_BLOCKLIST_EXTRA 225
#define IDS_PORT 226
#define IDS_NOTIFY_TITLE 227
#define IDS_NOTIFY_HEADER 228
#define IDS_DISABLE 229
#define IDS_TITLE_SECURITY 230
#define IDS_LOGVIEWER_HINT 231
#define IDS_NOTIFICATIONONTRAY_CHK 232
#define IDS_NETWORK_CLOSE 233
#define IDS_RULE_BLOCKOUTBOUND 234
#define IDS_RULE_BLOCKINBOUND 235
#define IDS_VIEW_ICON 236
#define IDS_VIEW_DETAILS 237
#define IDS_VIEW_TILE 238
#define IDS_RULE_HINT 239
#define IDS_RULE_APPS_HINT 240
#define IDS_STATUS_FILTERS_ACTIVE_TEMP 241
#define IDS_INSTALL_PERMANENT 242
#define IDS_INSTALL_TEMPORARY 243
#define IDS_ENABLEUILOG_CHK 244
#define IDS_NOTIFICATIONFULLSCREENSILENTMODE_CHK 245
#define IDS_TITLE_TRAY 246
#define IDS_TRAYICONSINGLECLICK_CHK 247
#define IDS_ENABLE_APP_CHK 248
#define IDS_APP_HINT 249
#define IDS_HOST 250
#define IDS_CONFIRMALLOW_CHK 251
#define IDS_QUESTION_ALLOW 252
#define IDS_SHOWSEARCHBAR_CHK 253
#define IDS_LAYER 254
#define IDS_RULE_ALLOWWINDOWSUPDATE 255
#define IDS_ACTION_TERMINATE_HINT 256
#define IDS_PROFILE_TYPE 257
#define IDS_USEAPPMONITOR_CHK 258
#define IDS_DISABLEREMOVAL 259
#define IDS_USEHASHES_CHK 260
#define IDS_COMMENT 261
#define IDS_USEDARKTHEME 262

// RC data
#define IDR_PROFILE_INTERNAL 1

// PNG
#define IDP_ADD 100
#define IDP_ALLOW 101
#define IDP_BLOCK 102
#define IDP_CROSS 103
#define IDP_NEXT 104
#define IDP_SHIELD_ENABLE 105
#define IDP_SHIELD_DISABLE 106
#define IDP_REFRESH 107
#define IDP_SETTINGS 108
#define IDP_NOTIFICATIONS 109
#define IDP_LOG 110
#define IDP_LOGOPEN 111
#define IDP_LOGCLEAR 112
#define IDP_DONATE 113
#define IDP_LOGUI 114
#define IDP_SEARCH_LIGHT 115
#define IDP_SEARCH_DARK 116

// Icons
#define IDI_MAIN 100
#define IDI_ACTIVE IDI_MAIN
#define IDI_INACTIVE 101

#endif // __RESOURCE_H__
