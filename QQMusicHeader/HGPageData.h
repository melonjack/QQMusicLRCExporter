//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface HGPageData : NSObject
{
    NSString *title;
    NSString *subtitle;
    NSDate *datetime;
    NSString *imageurl;
    NSString *musicid;
    NSString *offset;
    NSString *type;
    NSString *codeid;
    NSString *fromuin;
    NSString *fromnick;
    NSString *link;
    NSString *extitle;
    NSString *openlink;
}

@property(retain, nonatomic) NSString *openlink; // @synthesize openlink;
@property(retain, nonatomic) NSString *extitle; // @synthesize extitle;
@property(retain, nonatomic) NSString *link; // @synthesize link;
@property(retain, nonatomic) NSString *fromnick; // @synthesize fromnick;
@property(retain, nonatomic) NSString *fromuin; // @synthesize fromuin;
@property(retain, nonatomic) NSString *codeid; // @synthesize codeid;
@property(retain, nonatomic) NSString *type; // @synthesize type;
@property(retain, nonatomic) NSString *offset; // @synthesize offset;
@property(retain, nonatomic) NSString *musicid; // @synthesize musicid;
@property(retain, nonatomic) NSString *imageurl; // @synthesize imageurl;
@property(retain, nonatomic) NSDate *datetime; // @synthesize datetime;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;

@end
