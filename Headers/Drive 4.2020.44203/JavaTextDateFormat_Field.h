//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaTextFormat_Field.h"

@interface JavaTextDateFormat_Field : JavaTextFormat_Field
{
    int calendarField_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)ofCalendarFieldWithInt:(int)arg1;
- (id)readResolve;
- (int)getCalendarField;
- (id)initWithNSString:(id)arg1 withInt:(int)arg2;

@end

