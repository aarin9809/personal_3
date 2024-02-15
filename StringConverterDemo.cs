//초간단 인코딩 디코딩
namespace StringConverterDemo
{
    //문자열 변환기 
    public class StringConverter
    {
        //문자열 인코딩
        public static string ConvetToSimpleEncoding(string original)
        {
            byte[] byt = System.Text.Encoding.UTF8.GetBytes(original);
            return System.Convert.ToBase64String(byte);     //암호화
        }

        //문자열 디코딩
        public static string ConvetToSimpleDecoding(string modified)
        {
            byte[] byt = System.Convert.FromBase64String(modified);
            return System.Text.Encoding.UTF8.GetString(byt);   //복호화
        }      
    }
    class StringConverterDemo
    {
        static void Main(string[] args)
        {
            string s = "Hello.";
            System.Console.WriteLine("[1] 원본 : {0}", s); 

            s = StringConverter.ConvertToSimpleEncoding(s);  //인코딩
            System.Console.WriteLine("[2] 인코딩 : {0}", s);

            s = StringConverter.ConvetToSimpleDecoding(s);  //디코딩
            System.Console.WriteLine("[3] 디코딩 : {0}", s);
        }
    }
}
