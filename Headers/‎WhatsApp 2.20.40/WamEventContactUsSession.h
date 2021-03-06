//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WamEvent.h>

@class NSNumber, NSString;

@interface WamEventContactUsSession : WamEvent
{
    NSNumber *_contact_us_exit_state_number;
    double _contact_us_menu_faq_t;
    double _contact_us_t;
    double _search_faq_results_best_read_t;
    double _search_faq_results_best_read_t_2;
    double _search_faq_results_best_read_t_3;
    double _search_faq_results_read_t;
    double _contact_us_automatic_email;
    double _contact_us_faq;
    double _contact_us_logs;
    double _contact_us_outage;
    double _contact_us_outage_email;
    NSString *_contact_us_problem_description;
    double _contact_us_screenshot_c;
    NSString *_language_code;
    double _search_faq_results_best_id;
    double _search_faq_results_best_id_2;
    double _search_faq_results_best_id_3;
    double _search_faq_results_generated_c;
    double _search_faq_results_read_c;
}

@property(nonatomic) double search_faq_results_read_c; // @synthesize search_faq_results_read_c=_search_faq_results_read_c;
@property(nonatomic) double search_faq_results_generated_c; // @synthesize search_faq_results_generated_c=_search_faq_results_generated_c;
@property(nonatomic) double search_faq_results_best_id_3; // @synthesize search_faq_results_best_id_3=_search_faq_results_best_id_3;
@property(nonatomic) double search_faq_results_best_id_2; // @synthesize search_faq_results_best_id_2=_search_faq_results_best_id_2;
@property(nonatomic) double search_faq_results_best_id; // @synthesize search_faq_results_best_id=_search_faq_results_best_id;
@property(copy, nonatomic) NSString *language_code; // @synthesize language_code=_language_code;
@property(nonatomic) double contact_us_screenshot_c; // @synthesize contact_us_screenshot_c=_contact_us_screenshot_c;
@property(copy, nonatomic) NSString *contact_us_problem_description; // @synthesize contact_us_problem_description=_contact_us_problem_description;
@property(nonatomic) double contact_us_outage_email; // @synthesize contact_us_outage_email=_contact_us_outage_email;
@property(nonatomic) double contact_us_outage; // @synthesize contact_us_outage=_contact_us_outage;
@property(nonatomic) double contact_us_logs; // @synthesize contact_us_logs=_contact_us_logs;
@property(nonatomic) double contact_us_faq; // @synthesize contact_us_faq=_contact_us_faq;
@property(nonatomic) double contact_us_automatic_email; // @synthesize contact_us_automatic_email=_contact_us_automatic_email;
@property(nonatomic) double search_faq_results_read_t_milliseconds; // @synthesize search_faq_results_read_t_milliseconds=_search_faq_results_read_t;
@property(nonatomic) double search_faq_results_best_read_t_3_milliseconds; // @synthesize search_faq_results_best_read_t_3_milliseconds=_search_faq_results_best_read_t_3;
@property(nonatomic) double search_faq_results_best_read_t_2_milliseconds; // @synthesize search_faq_results_best_read_t_2_milliseconds=_search_faq_results_best_read_t_2;
@property(nonatomic) double search_faq_results_best_read_t_milliseconds; // @synthesize search_faq_results_best_read_t_milliseconds=_search_faq_results_best_read_t;
@property(nonatomic) double contact_us_t_milliseconds; // @synthesize contact_us_t_milliseconds=_contact_us_t;
@property(nonatomic) double contact_us_menu_faq_t_milliseconds; // @synthesize contact_us_menu_faq_t_milliseconds=_contact_us_menu_faq_t;
- (void).cxx_destruct;
@property(nonatomic) double search_faq_results_read_t_seconds;
@property(nonatomic) double search_faq_results_best_read_t_3_seconds;
@property(nonatomic) double search_faq_results_best_read_t_2_seconds;
@property(nonatomic) double search_faq_results_best_read_t_seconds;
@property(nonatomic) double contact_us_t_seconds;
@property(nonatomic) double contact_us_menu_faq_t_seconds;
@property(nonatomic) long long contact_us_exit_state;
- (_Bool)is_contact_us_exit_state_set;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (int)getChannel;
- (id)init;

@end

