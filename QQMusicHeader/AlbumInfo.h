//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ClusterInfo.h"

@class NSArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AlbumInfo : ClusterInfo
{
    unsigned long albumId;
    NSString *singer_name;
    NSString *bigImageUrl;
    NSString *smallImageUrl;
    NSString *publishDate;
    NSString *albumMid;
    NSString *_albumURL;
    NSArray *_folderSongs;
    unsigned int _songNum;
    NSMutableDictionary *_song2FolderSong;
}

+ (id)translateData:(id)arg1;
+ (id)getKey:(unsigned long)arg1;
+ (id)translateAlbumFromJson:(id)arg1 AndSingerName:(id)arg2;
+ (id)translateAlbumFromJson:(id)arg1;
+ (id)translateAlbumFromNode:(struct _xmlNode *)arg1 containHilightInfo:(BOOL)arg2 expInfo:(id *)arg3;
@property(retain) NSMutableDictionary *song2FolderSong; // @synthesize song2FolderSong=_song2FolderSong;
@property unsigned int songNum; // @synthesize songNum=_songNum;
@property(retain) NSArray *folderSongs; // @synthesize folderSongs=_folderSongs;
@property(retain) NSString *albumURL; // @synthesize albumURL=_albumURL;
@property(retain) NSString *albumMid; // @synthesize albumMid;
@property(retain) NSString *publishDate; // @synthesize publishDate;
@property(retain) NSString *smallImageUrl; // @synthesize smallImageUrl;
@property(retain) NSString *bigImageUrl; // @synthesize bigImageUrl;
@property(retain) NSString *singer_name; // @synthesize singer_name;
- (void).cxx_destruct;
- (void)finishCollectFolderSong;
- (void)collectFolderSong:(id)arg1;
- (void)startCollectFolderSong;
- (id)cloneFolderSongs;
- (id)getAlbumURL;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getImageUrlByImageOption:(int)arg1 forceJPEGFormat:(BOOL)arg2;
- (id)getImageByImageOption:(int)arg1;
- (id)description;
@property(nonatomic) unsigned long albumId; // @synthesize albumId;
- (id)initWithID:(unsigned long)arg1;

@end
