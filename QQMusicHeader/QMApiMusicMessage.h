//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QMApiMessageBase.h"

#import "NSCoding.h"

@class QMApiMusic;

@interface QMApiMusicMessage : QMApiMessageBase <NSCoding>
{
    QMApiMusic *music;
}

@property(retain, nonatomic) QMApiMusic *music; // @synthesize music;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
