//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ListBase;

__attribute__((visibility("hidden")))
@interface RadioListItem : NSObject
{
    ListBase *_songList;
    int _nextIndex;
}

+ (id)translateToRadioListItem:(id)arg1 radioSongList:(id)arg2;
@property(nonatomic) int nextIndex; // @synthesize nextIndex=_nextIndex;
@property(retain, nonatomic) ListBase *songList; // @synthesize songList=_songList;
- (void).cxx_destruct;
- (id)getList;
- (id)init;

@end

