//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface QQLyricParse : NSObject
{
    int mOffset;
    NSMutableArray *mLineLyricList;
    NSMutableArray *mLineUnused;
    int _lyricType;
}

@property(nonatomic) int lyricType; // @synthesize lyricType=_lyricType;
@property(retain, nonatomic) NSMutableArray *mLineUnused; // @synthesize mLineUnused;
//each line is QQLineLyricQRC
@property(retain, nonatomic) NSMutableArray *mLineLyricList; // @synthesize mLineLyricList;
@property int mOffset; // @synthesize mOffset;
- (BOOL)saveToFile:(id)arg1;
- (id)formatLyricTime:(unsigned long)arg1;
- (void)parseLine:(id)arg1;
- (BOOL)parseLineInternal:(id)arg1;
- (long)parseTime:(id)arg1;
- (long)parseTimeWithException:(id)arg1;
- (BOOL)_isDigitString:(id)arg1;
- (BOOL)parse:(id)arg1;/*
                        arg1 为无xml信息的qrc本体,可通过LyricManager的+ (id)getQrcTextFromXml:(id)arg1获得
                        [ar:Coldplay]
                        [al:Ghost Stories]
                        [by:]
                        [offset:0]
                        [750,1330]A (750,180)Sky (930,180)Full (1110,150)of (1260,180)Stars (1440,140)- (1580,160)Coldplay(1740,340)
                        [17598,1070]Cause (17598,230)you're (17828,210)a (18038,250)sky,(18288,380)
                        [19488,2660]cause (19488,210)you're (19698,260)a (19958,200)sky (20158,1130)full (21288,220)of (21508,260)stars(21768,380)
                        [25128,2850]I'm (25128,270)gonna (25398,350)give (25748,550)you (27028,220)my (27248,350)heart(27598,380)
                        [33028,1180]Cause (33028,180)you're (33208,210)a (33418,230)sky,(33648,560)
                        然后mLineUnused为歌曲头部信息"[ti:A Sky Full of Stars]",
                        "[ar:Coldplay]",
                        "[al:Ghost Stories]",
                        "[by:]",
                        "[offset:0]"
                        
                        mLineLyricList为decode歌词信息
                        
                        */



- (void)_removeInvalidedTimeIfExistValidedTime;
- (id)init;
- (int)judgeLyricType:(id)arg1;
- (long)parseTimeWithExceptionQRC:(id)arg1;
- (long)parseTimeQRC:(id)arg1;/*arg1:[229794,3499],*mLineLyricList=(
"[ti:A Sky Full of Stars]",
"[ar:Coldplay]",
"[al:Ghost Stories]",
"[by:]",
"[offset:0]"
)
                               mLineUnused=(
                               "\U65f6\U95f4:750,\U6b4c\U8bcd:A Sky Full of Stars - Coldplay",
                               "\U65f6\U95f4:17598,\U6b4c\U8bcd:Cause you're a sky,",
                               "\U65f6\U95f4:19488,\U6b4c\U8bcd:cause you're a sky full of stars",
                               "\U65f6\U95f4:25128,\U6b4c\U8bcd:I'm gonna give you my heart",
                               "\U65f6\U95f4:33028,\U6b4c\U8bcd:Cause you're a sky,",
                               "\U65f6\U95f4:34808,\U6b4c\U8bcd:cause you're a sky full of stars",
                               "\U65f6\U95f4:40858,\U6b4c\U8bcd:Cause you light up the path",
                               "\U65f6\U95f4:48257,\U6b4c\U8bcd:I don't care, go on and tear me apart",
                               "\U65f6\U95f4:55896,\U6b4c\U8bcd:I don't care if you do",
                               "\U65f6\U95f4:63625,\U6b4c\U8bcd:Cause in a sky,",
                               "\U65f6\U95f4:65585,\U6b4c\U8bcd:cause in a sky full of stars",
                               "\U65f6\U95f4:69215,\U6b4c\U8bcd:I think I saw you",
                               "\U65f6\U95f4:102247,\U6b4c\U8bcd:Cause you're a sky,",
                               "\U65f6\U95f4:103967,\U6b4c\U8bcd:cause you're a sky full of stars",
                               "\U65f6\U95f4:109717,\U6b4c\U8bcd:I want to die in your arms, arms",
                               "\U65f6\U95f4:117507,\U6b4c\U8bcd:Cause you get lighter the more it gets dark",
                               "\U65f6\U95f4:125096,\U6b4c\U8bcd:I'm going to give you my heart",
                               "\U65f6\U95f4:131126,\U6b4c\U8bcd:And I don't care,",
                               }
                               */
                               

@end
