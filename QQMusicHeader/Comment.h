//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ChannelCreator, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface Comment : NSObject
{
    unsigned long _commentId;
    ChannelCreator *_creator;
    NSString *_text;
    NSDate *_dateAndTime;
}

@property(retain, nonatomic) NSDate *dateAndTime; // @synthesize dateAndTime=_dateAndTime;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) ChannelCreator *creator; // @synthesize creator=_creator;
@property(nonatomic) unsigned long commentId; // @synthesize commentId=_commentId;
- (void).cxx_destruct;
- (BOOL)isEqualContent:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;

@end

