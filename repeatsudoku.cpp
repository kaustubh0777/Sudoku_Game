/* Function Repeat to check if the the numbers present in the sudoku are not repeating */

void sudoku:: repeat()
{
	int l,k,s;
	
	int count=0;
	
	
	for(l=0;l<9;l++)
	{
		for(k=0;k<9;k++)
		{
			/*loop to add numbers from 0-9 to the each row and column for comparing the elements are repeating or not */
			
			for(s=0;s<9;s++)
			{
			   if(board[l][k]== board[l+s][k] || board[l][k]== board[l][k+s])
			   {
				   if(l==(l+s) || k== (k+s))
			            count++;
			   }   
			   
			   else if(count>1)
			   cout<<"Number is Repeating"<endl;
			   break;
			   
			   else if(cout==1)
			   continue;
			
		}
	}
	
	 
}
