//
//  ToDoItem.h
//  ToDoList
//
//  Created by WangZhong on 15-1-26.
//  Copyright (c) 2015年 Zhong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject
@property NSString *itemName;
@property BOOL completed;
@property (readonly)NSDate *creationDate;

@end
