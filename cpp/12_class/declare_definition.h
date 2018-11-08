/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：declare_definition.h
*	Author：julian.chen
*	Date：2018-11-07
*	Discription:
*	
*	release notes：
*
================================================================*/
#ifndef _DECLARE_DEFINITION_H
#define _DECLARE_DEFINITION_H
   
   class x;
   class y;
   class x
   {
   	
   public:
   	y* p_y;
   	x();
   	~x();
   	
   };

   class y
   {
  
   public:
	x* p_x;
   	y();
   	~y();
   	
   };
#endif //DECLARE_DEFINITION_H
