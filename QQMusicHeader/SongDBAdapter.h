//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface SongDBAdapter : NSObject
{
}

+ (id)k:(id)arg1 T:(id)arg2 defaultTEXT:(id)arg3;
+ (id)k:(id)arg1 T:(id)arg2 defaultTEXT:(id)arg3 withSep:(BOOL)arg4;
+ (id)k:(id)arg1 T:(id)arg2 defaultInt:(int)arg3;
+ (id)k:(id)arg1 T:(id)arg2;
+ (id)translateData:(id)arg1;
+ (id)translateSong:(id)arg1;
+ (id)allOldFolderSongAndSongKey;
+ (id)allFolderSongAndSongKey;
+ (id)allNewFolderSongKey;
+ (id)allFolderSongKey;
+ (id)allFolderKey;
+ (id)allNewFolderKey;
+ (id)allSongKey;
+ (id)allOldSongKey;
+ (id)k:(id)arg1 LongLong:(long long)arg2;
+ (id)rk:(id)arg1 String:(id)arg2;
+ (id)k:(id)arg1 String:(id)arg2;
+ (id)k:(id)arg1 Column:(id)arg2;
+ (id)rk:(id)arg1 Int:(int)arg2;
+ (id)k:(id)arg1 UnsignedLong:(unsigned long)arg2;
+ (id)k:(id)arg1 Int:(int)arg2;
- (id)_downloadedSongs;
- (void)_findAutoSavedSongByUin:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)_lastUsedUin;
- (id)getAllNormalSongID;
- (id)getAllNormalSongFilePath;
- (void)arrangeDb;
- (void)cleanDb;
- (id)getAllOldFolder;
- (id)getAllCacheSong1;
- (BOOL)isTableExistByTableName:(id)arg1 DBAdataper:(id)arg2;
- (void)AlterTable_20_21:(CDUnknownBlockType)arg1;
- (void)AlterTable_19_20:(CDUnknownBlockType)arg1;
- (void)AlterTable_18_19:(CDUnknownBlockType)arg1;
- (void)AlterTable_17_18:(CDUnknownBlockType)arg1;
- (void)AlterTable_16_17:(CDUnknownBlockType)arg1;
- (void)AlterTable_15_16:(CDUnknownBlockType)arg1;
- (void)AlterTable_14_15:(CDUnknownBlockType)arg1;
- (void)AlterTable_13_14:(CDUnknownBlockType)arg1;
- (void)AlterTable_12_13:(CDUnknownBlockType)arg1;
- (void)AlterTable_11_12:(CDUnknownBlockType)arg1;
- (void)AlterTable_10_11:(CDUnknownBlockType)arg1;
- (void)AlterTable_9_10:(CDUnknownBlockType)arg1;
- (void)AlterTable_8_9:(CDUnknownBlockType)arg1;
- (void)AlterTable_7_8:(CDUnknownBlockType)arg1;
- (void)AlterTable_6_7:(CDUnknownBlockType)arg1;
- (void)AlterTable_5_6:(CDUnknownBlockType)arg1;
- (void)AlterTable_4_5:(CDUnknownBlockType)arg1;
- (void)AlterTable_3_4:(CDUnknownBlockType)arg1;
- (void)AlterTable_2_3:(CDUnknownBlockType)arg1;
- (void)AlterTable_1_2:(CDUnknownBlockType)arg1;
- (void)deleteSongs:(id)arg1;
- (void)insertSongs:(id)arg1;
- (void)updateWithSongs:(id)arg1;
- (BOOL)updateWithSong:(id)arg1;
- (BOOL)updateWithSong:(id)arg1 data:(id)arg2;
- (BOOL)updateWithDB:(id)arg1 Song:(id)arg2;
- (BOOL)deleteWithDB:(id)arg1 Id:(long long)arg2 Type:(int)arg3;
- (BOOL)insertWithDB:(id)arg1 Song:(id)arg2;
- (BOOL)deleteSongTable;
- (BOOL)createSongTable:(id)arg1;

@end

